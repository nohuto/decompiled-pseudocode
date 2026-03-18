/*
 * XREFs of ?_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z @ 0x1C00144F0
 * Callers:
 *     NtUserRemoveClipboardFormatListener @ 0x1C00080F0 (NtUserRemoveClipboardFormatListener.c)
 *     xxxFreeWindow @ 0x1C005DD44 (xxxFreeWindow.c)
 * Callees:
 *     _GetProcessWindowStation @ 0x1C0010D60 (_GetProcessWindowStation.c)
 */

void __fastcall _RemoveClipboardFormatListener(struct tagWND *a1)
{
  struct tagWND **v1; // rcx
  struct tagWND *v2; // rax
  struct tagWND *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  v1 = (struct tagWND **)(GetProcessWindowStation(0LL) + 120);
  if ( *v1 )
  {
    while ( 1 )
    {
      v2 = *v1;
      if ( *v1 == v3 )
        break;
      v1 = (struct tagWND **)((char *)v2 + 296);
      if ( !*((_QWORD *)v2 + 37) )
        return;
    }
    *v1 = (struct tagWND *)*((_QWORD *)v3 + 37);
    *((_QWORD *)v3 + 37) = 0LL;
    *((_DWORD *)v3 + 76) &= ~1u;
    HMAssignmentUnlock(&v3);
  }
}
