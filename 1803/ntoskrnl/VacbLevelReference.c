/*
 * XREFs of VacbLevelReference @ 0x1400DAC48
 * Callers:
 *     CcExtendVacbArray @ 0x1400C48A4 (CcExtendVacbArray.c)
 *     CcSetVacbLargeOffset @ 0x1400DA8B8 (CcSetVacbLargeOffset.c)
 *     CcAdjustVacbLevelLockCount @ 0x1400DABA0 (CcAdjustVacbLevelLockCount.c)
 *     CcCalculateVacbLevelLockCount @ 0x14014BC24 (CcCalculateVacbLevelLockCount.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VacbLevelReference(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax

  v3 = 0LL;
  if ( !a3 )
    v3 = 2LL * (*(_DWORD *)(a1 + 152) & 0x200);
  return a2 + v3 + 1024;
}
