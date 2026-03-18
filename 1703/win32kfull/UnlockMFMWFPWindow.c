/*
 * XREFs of UnlockMFMWFPWindow @ 0x1C02041F0
 * Callers:
 *     NtUserMNDragLeave @ 0x1C01DCB50 (NtUserMNDragLeave.c)
 *     xxxMNEndMenuStateInternal @ 0x1C01EB320 (xxxMNEndMenuStateInternal.c)
 *     xxxHandleMenuMessages @ 0x1C02018C8 (xxxHandleMenuMessages.c)
 *     LockMFMWFPWindow @ 0x1C0203D04 (LockMFMWFPWindow.c)
 *     MNCheckButtonDownState @ 0x1C0203DFC (MNCheckButtonDownState.c)
 * Callees:
 *     IsMFMWFPWindow @ 0x1C0203CDC (IsMFMWFPWindow.c)
 */

__int64 __fastcall UnlockMFMWFPWindow(__int64 *a1)
{
  __int64 result; // rax
  _QWORD *v2; // rdx

  result = IsMFMWFPWindow(*a1);
  if ( (_DWORD)result )
    return HMAssignmentUnlock(v2);
  *v2 = 0LL;
  return result;
}
