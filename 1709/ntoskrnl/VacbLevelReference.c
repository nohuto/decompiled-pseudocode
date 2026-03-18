/*
 * XREFs of VacbLevelReference @ 0x1400F7A78
 * Callers:
 *     CcAdjustVacbLevelLockCount @ 0x1400F767C (CcAdjustVacbLevelLockCount.c)
 *     CcSetVacbLargeOffset @ 0x1400F7750 (CcSetVacbLargeOffset.c)
 *     CcExtendVacbArray @ 0x1400F814C (CcExtendVacbArray.c)
 *     CcCalculateVacbLevelLockCount @ 0x140150E28 (CcCalculateVacbLevelLockCount.c)
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
