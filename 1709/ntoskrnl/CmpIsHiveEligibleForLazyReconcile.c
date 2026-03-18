/*
 * XREFs of CmpIsHiveEligibleForLazyReconcile @ 0x1404E3E30
 * Callers:
 *     CmpDoReconcileNextHive @ 0x1404E3D10 (CmpDoReconcileNextHive.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140016D50 (KiQueryUnbiasedInterruptTime.c)
 *     HvGetEffectiveLogSizeCapForHive @ 0x1404E5F64 (HvGetEffectiveLogSizeCapForHive.c)
 */

bool __fastcall CmpIsHiveEligibleForLazyReconcile(__int64 a1)
{
  unsigned int EffectiveLogSizeCapForHive; // eax
  __int64 v3; // r10
  __int64 v4; // r11
  int v5; // r8d
  int v6; // ecx
  unsigned int v7; // eax
  __int64 v8; // rdx
  unsigned __int64 UnbiasedInterruptTime; // rax
  __int64 v10; // r11

  if ( (*(_DWORD *)(a1 + 144) & 0x8001) != 0 || !*(_DWORD *)(a1 + 112) || CmpHoldLazyFlush )
    return 0;
  if ( !CmpUserPresent )
    return 1;
  EffectiveLogSizeCapForHive = HvGetEffectiveLogSizeCapForHive(a1);
  if ( *(_DWORD *)(v4 + 160) >= EffectiveLogSizeCapForHive )
    return 1;
  v5 = *(_DWORD *)(v4 + 148);
  v6 = v3;
  if ( v5 == 1 )
    return 1;
  v7 = v3;
  v8 = v3;
  do
  {
    if ( v7 != v5 && *(_BYTE *)(v8 + v4 + 172) == (_BYTE)v3 )
      ++v6;
    ++v7;
    ++v8;
  }
  while ( v7 < 2 );
  if ( !v6 )
    return 1;
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  return UnbiasedInterruptTime >= *(_QWORD *)(v10 + 5392) + 10000000 * (unsigned __int64)(unsigned int)dword_140353930;
}
