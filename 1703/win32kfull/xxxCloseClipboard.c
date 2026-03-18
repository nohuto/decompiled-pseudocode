/*
 * XREFs of xxxCloseClipboard @ 0x1C00AF380
 * Callers:
 *     FreeWindowStation @ 0x1C00ADD90 (FreeWindowStation.c)
 *     NtUserCloseClipboard @ 0x1C00AF340 (NtUserCloseClipboard.c)
 *     xxxSnapWindow @ 0x1C0138DA0 (xxxSnapWindow.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?CloseClipboardToken@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00AEA9C (-CloseClipboardToken@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00AF478 (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     CheckClipboardAccess @ 0x1C00AF8CC (CheckClipboardAccess.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00AFB1C (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CD890 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall xxxCloseClipboard(struct tagWINDOWSTATION *a1)
{
  struct tagWINDOWSTATION *v1; // rbx
  PACCESS_TOKEN v3; // rax
  __int64 v4; // rcx
  struct _KPROCESS *CurrentProcess; // rax
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int8 EffectiveOnly; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int8 CopyOnOpen; // [rsp+58h] [rbp+10h] BYREF
  enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+60h] [rbp+18h] BYREF

  v1 = a1;
  if ( !a1 )
  {
    v1 = (struct tagWINDOWSTATION *)CheckClipboardAccess();
    if ( !v1 )
      return 0LL;
  }
  if ( *((_QWORD *)v1 + 6) != gptiCurrent )
  {
    UserSetLastError(1418LL);
    return 0LL;
  }
  PushW32ThreadLock((__int64)v1, v6, UserDereferenceObject);
  ObfReferenceObject(v1);
  if ( (*((_DWORD *)v1 + 8) & 0x40) != 0 )
  {
    MungeClipData(v1);
    CloseClipboardToken(v1);
    if ( *((_DWORD *)v1 + 26) )
    {
      v3 = PsReferenceImpersonationToken(KeGetCurrentThread(), &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
      if ( v3 )
      {
        *((_DWORD *)v1 + 8) |= 0x400u;
      }
      else
      {
        CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v4);
        v3 = PsReferencePrimaryToken(CurrentProcess);
      }
      *((_QWORD *)v1 + 16) = v3;
    }
  }
  HMAssignmentUnlock((char *)v1 + 64);
  *((_QWORD *)v1 + 6) = 0LL;
  if ( (*((_DWORD *)v1 + 8) & 0x40) != 0 )
    xxxDrawClipboard(v1);
  PopAndFreeW32ThreadLock(v6);
  return 1LL;
}
