/*
 * XREFs of CmpIsHiveEligibleForLazyReconcile @ 0x1404D8AE0
 * Callers:
 *     CmpDoReconcileNextHive @ 0x1404D89C0 (CmpDoReconcileNextHive.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x14008AB1C (KiQueryUnbiasedInterruptTime.c)
 *     HvGetEffectiveLogSizeCapForHive @ 0x1404D3B9C (HvGetEffectiveLogSizeCapForHive.c)
 */

bool __fastcall CmpIsHiveEligibleForLazyReconcile(unsigned int *a1)
{
  unsigned int EffectiveLogSizeCapForHive; // eax
  unsigned int v2; // r10d
  __int64 v3; // r11
  int v4; // r8d
  unsigned int v5; // ecx
  unsigned int v6; // eax
  __int64 v7; // rdx
  unsigned __int64 UnbiasedInterruptTime; // rax
  __int64 v9; // r11

  if ( (a1[36] & 0x8001) != 0 || !a1[28] || CmpHoldLazyFlush )
    return 0;
  if ( !CmpUserPresent )
    return 1;
  EffectiveLogSizeCapForHive = HvGetEffectiveLogSizeCapForHive(a1);
  if ( *(_DWORD *)(v3 + 160) >= EffectiveLogSizeCapForHive )
    return 1;
  v4 = *(_DWORD *)(v3 + 148);
  v5 = v2;
  if ( v4 == 1 )
    return 1;
  v6 = v2;
  v7 = v2;
  do
  {
    if ( v6 != v4 && *(_BYTE *)(v7 + v3 + 172) == (_BYTE)v2 )
      ++v5;
    ++v6;
    ++v7;
  }
  while ( v6 < 2 );
  if ( !v5 )
    return 1;
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  return UnbiasedInterruptTime >= *(_QWORD *)(v9 + 5392) + 10000000 * (unsigned __int64)(unsigned int)dword_14033B900;
}
