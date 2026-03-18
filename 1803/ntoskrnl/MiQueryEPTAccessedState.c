/*
 * XREFs of MiQueryEPTAccessedState @ 0x140259E90
 * Callers:
 *     MiAgeWorkingSetTail @ 0x14000EAF0 (MiAgeWorkingSetTail.c)
 *     MiTrimWorkingSetTail @ 0x1400B5E10 (MiTrimWorkingSetTail.c)
 *     MiResetAccessBitsTail @ 0x140165B90 (MiResetAccessBitsTail.c)
 *     MiSimpleAgeWorkingSetTail @ 0x14025A2B0 (MiSimpleAgeWorkingSetTail.c)
 *     MiUpdateOldWorkingSetPagesTail @ 0x14025A900 (MiUpdateOldWorkingSetPagesTail.c)
 * Callees:
 *     MiReleaseWalkLocks @ 0x1400B5D98 (MiReleaseWalkLocks.c)
 *     MiReacquireWalkLocks @ 0x14025382C (MiReacquireWalkLocks.c)
 *     VmpQueryAccessedState @ 0x1402ACA5C (VmpQueryAccessedState.c)
 */

__int64 __fastcall MiQueryEPTAccessedState(__int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 48);
  MiReleaseWalkLocks(a1, (__int64)a2, a3);
  VmpQueryAccessedState((PEX_SPIN_LOCK)KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[16]);
  result = MiReacquireWalkLocks(a1, v3, 0);
  if ( !(_DWORD)result )
    *a2 = 0;
  return result;
}
