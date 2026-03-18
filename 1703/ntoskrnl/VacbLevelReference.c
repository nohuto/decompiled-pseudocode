/*
 * XREFs of VacbLevelReference @ 0x14011C30C
 * Callers:
 *     CcCalculateVacbLevelLockCount @ 0x140039F90 (CcCalculateVacbLevelLockCount.c)
 *     CcAdjustVacbLevelLockCount @ 0x14011BF6C (CcAdjustVacbLevelLockCount.c)
 *     CcSetVacbLargeOffset @ 0x14011C014 (CcSetVacbLargeOffset.c)
 *     CcExtendVacbArray @ 0x14011DD28 (CcExtendVacbArray.c)
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
