/*
 * XREFs of ?InvalidateAcrylicAccentDevices@CWindowList@@QEAAXXZ @ 0x1800852DC
 * Callers:
 *     ?CheckInteropDCompDevice@CDesktopManager@@AEAAJXZ @ 0x1800255C0 (-CheckInteropDCompDevice@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18001FCFC (-OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ.c)
 */

void __fastcall CWindowList::InvalidateAcrylicAccentDevices(CWindowList *this)
{
  struct _RTL_GENERIC_TABLE *v1; // rsi
  char *v2; // rdi
  char *i; // rbx
  CTopLevelWindow *v4; // rcx
  _QWORD *v5; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  RestartKey = 0LL;
  v1 = (struct _RTL_GENERIC_TABLE *)((char *)this + 8);
  while ( 1 )
  {
    v5 = RtlEnumerateGenericTableWithoutSplaying(v1, &RestartKey);
    if ( !v5 )
      break;
    v2 = (char *)(v5 + 8);
    for ( i = (char *)v5[8]; i != v2; i = *(char **)i )
    {
      if ( *((_DWORD *)i + 38) == 4 )
      {
        v4 = (CTopLevelWindow *)*((_QWORD *)i + 49);
        if ( v4 )
          CTopLevelWindow::OnAccentPolicyUpdated(v4);
      }
    }
  }
}
