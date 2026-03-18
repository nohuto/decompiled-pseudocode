/*
 * XREFs of xxxCloseClipboard @ 0x1C00C60A0
 * Callers:
 *     FreeWindowStation @ 0x1C00C49E0 (FreeWindowStation.c)
 *     NtUserCloseClipboard @ 0x1C00C6060 (NtUserCloseClipboard.c)
 *     xxxSnapWindow @ 0x1C013F298 (xxxSnapWindow.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     ?CloseClipboardToken@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00C5978 (-CloseClipboardToken@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00C6290 (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     CheckClipboardAccess @ 0x1C00C6624 (CheckClipboardAccess.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00C6904 (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CE7E0 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall xxxCloseClipboard(struct tagWINDOWSTATION *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct tagWINDOWSTATION *v4; // rbx
  PACCESS_TOKEN v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _KPROCESS *CurrentProcess; // rax
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int8 EffectiveOnly; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int8 CopyOnOpen; // [rsp+58h] [rbp+10h] BYREF
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+60h] [rbp+18h] BYREF

  v4 = a1;
  if ( !a1 )
  {
    v4 = (struct tagWINDOWSTATION *)CheckClipboardAccess();
    if ( !v4 )
      return 0LL;
  }
  if ( *((_QWORD *)v4 + 6) != gptiCurrent )
  {
    UserSetLastError(1418LL, a2);
    return 0LL;
  }
  PushW32ThreadLock((__int64)v4, v10, UserDereferenceObject, a4);
  ObfReferenceObject(v4);
  if ( (*((_DWORD *)v4 + 8) & 0x40) != 0 )
  {
    MungeClipData(v4);
    CloseClipboardToken(v4);
    if ( *((_DWORD *)v4 + 26) )
    {
      v6 = PsReferenceImpersonationToken(KeGetCurrentThread(), &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
      if ( v6 )
      {
        *((_DWORD *)v4 + 8) |= 0x400u;
      }
      else
      {
        CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v8, v7);
        v6 = PsReferencePrimaryToken(CurrentProcess);
      }
      *((_QWORD *)v4 + 16) = v6;
    }
  }
  HMAssignmentUnlock((char *)v4 + 64);
  *((_QWORD *)v4 + 6) = 0LL;
  if ( (*((_DWORD *)v4 + 8) & 0x40) != 0 )
    xxxDrawClipboard(v4);
  PopAndFreeW32ThreadLock(v10);
  return 1LL;
}
