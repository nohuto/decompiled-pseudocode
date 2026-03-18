/*
 * XREFs of DisassociateShellFrameAppThreads2 @ 0x1C0006F28
 * Callers:
 *     xxxDestroyWindow @ 0x1C005C5A0 (xxxDestroyWindow.c)
 *     NtUserAttachThreadInput @ 0x1C00B33F0 (NtUserAttachThreadInput.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DisassociateShellFrameAppThreads2(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  struct _LIST_ENTRY *i; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rax

  result = a1;
  for ( i = gShellFrameAppThreadsAssociationList.Flink; i != &gShellFrameAppThreadsAssociationList; i = i->Flink )
  {
    if ( i[1].Flink == (struct _LIST_ENTRY *)result && i[1].Blink == (struct _LIST_ENTRY *)a2 )
      goto LABEL_4;
  }
  i = 0LL;
LABEL_4:
  *(_DWORD *)(a2 + 1096) &= ~0x80000u;
  if ( i )
  {
    Flink = i->Flink;
    Blink = i->Blink;
    if ( i->Flink->Blink != i || Blink->Flink != i )
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    return Win32FreePool(i);
  }
  return result;
}
