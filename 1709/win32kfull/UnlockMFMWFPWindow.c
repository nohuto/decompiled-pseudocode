/*
 * XREFs of UnlockMFMWFPWindow @ 0x1C0205C3C
 * Callers:
 *     NtUserMNDragLeave @ 0x1C01E8D30 (NtUserMNDragLeave.c)
 *     xxxMNEndMenuStateInternal @ 0x1C01F7150 (xxxMNEndMenuStateInternal.c)
 *     xxxHandleMenuMessages @ 0x1C0203214 (xxxHandleMenuMessages.c)
 *     LockMFMWFPWindow @ 0x1C02057B0 (LockMFMWFPWindow.c)
 *     MNCheckButtonDownState @ 0x1C02058B0 (MNCheckButtonDownState.c)
 * Callees:
 *     IsMFMWFPWindow @ 0x1C0205788 (IsMFMWFPWindow.c)
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
