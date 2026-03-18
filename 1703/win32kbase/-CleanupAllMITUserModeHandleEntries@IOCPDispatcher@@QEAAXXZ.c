/*
 * XREFs of ?CleanupAllMITUserModeHandleEntries@IOCPDispatcher@@QEAAXXZ @ 0x1C004C704
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00482A0 (xxxDestroyThreadInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall IOCPDispatcher::CleanupAllMITUserModeHandleEntries(IOCPDispatcher *this)
{
  BOOLEAN v1; // dl
  struct _RTL_AVL_TABLE *p_Blink; // rdi
  HANDLE *v3; // rax
  PVOID *v4; // rbx

  v1 = 1;
  p_Blink = (struct _RTL_AVL_TABLE *)&WPP_MAIN_CB.Queue.ListEntry.Blink[161].Blink;
  while ( 1 )
  {
    v3 = (HANDLE *)RtlEnumerateGenericTableAvl(p_Blink, v1);
    v4 = v3;
    if ( !v3 )
      break;
    ZwClose(*v3);
    ObfDereferenceObject(v4[2]);
    RtlDeleteElementGenericTableAvl(p_Blink, v4);
    v1 = 0;
  }
}
