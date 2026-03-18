/*
 * XREFs of PopPepPromoteActivities @ 0x14001B49C
 * Callers:
 *     PopPepIdleTimeoutRoutine @ 0x14000C130 (PopPepIdleTimeoutRoutine.c)
 *     PopPepProcessEvent @ 0x14001B108 (PopPepProcessEvent.c)
 *     PopPepUpdateConstraints @ 0x1401235A0 (PopPepUpdateConstraints.c)
 *     PopPepTryPowerDownDevice @ 0x1401258AC (PopPepTryPowerDownDevice.c)
 *     PopPepComponentSetLatency @ 0x14014749C (PopPepComponentSetLatency.c)
 *     PopPepComponentSetResidency @ 0x14015C184 (PopPepComponentSetResidency.c)
 *     PopPepComponentSetWakeHint @ 0x140242574 (PopPepComponentSetWakeHint.c)
 *     PopPepSurprisePowerOn @ 0x1402433C0 (PopPepSurprisePowerOn.c)
 * Callees:
 *     PopPepAttemptAcitivityPromotion @ 0x14001BEAC (PopPepAttemptAcitivityPromotion.c)
 */

__int64 __fastcall PopPepPromoteActivities(__int64 a1, __int64 a2, int a3)
{
  int v3; // ebx
  __int64 v4; // rbp
  _DWORD *v6; // r8
  unsigned int v7; // esi
  unsigned int v8; // ebx
  int v9; // r14d
  __int64 v10; // r15
  _DWORD *v11; // r8
  int v12; // ebx
  _QWORD *v13; // rsi
  __int64 result; // rax

  if ( !a3 )
    return result;
  v3 = a3;
  v4 = a2;
  if ( !a2 && a3 == 2 )
    v3 = 1;
  v6 = *(_DWORD **)(a1 + 72);
  if ( (*v6 & 1) != 0 )
    PopPepAttemptAcitivityPromotion(a1, a2, (_DWORD)v6, 0, a1 + 120);
  if ( v3 == 2 )
  {
    v7 = *(_DWORD *)(v4 + 8);
    v8 = v7;
    goto LABEL_11;
  }
  if ( v3 == 3 )
  {
    v7 = *(_DWORD *)(a1 + 180) - 1;
    v8 = 0;
    do
    {
LABEL_11:
      v9 = 1;
      v10 = 64LL;
      v4 = 200LL * v8 + a1 + 184;
      do
      {
        v11 = *(_DWORD **)(v10 + v4);
        if ( (*v11 & 1) != 0 )
          PopPepAttemptAcitivityPromotion(a1, v4, (_DWORD)v11, v9, v4 + 104);
        ++v9;
        v10 += 8LL;
      }
      while ( v9 <= 3 );
      ++v8;
    }
    while ( v8 <= v7 );
    goto LABEL_16;
  }
  v8 = *(_DWORD *)(a1 + 180);
  v7 = 0;
  if ( !v8 )
    goto LABEL_11;
LABEL_16:
  v12 = 4;
  v13 = (_QWORD *)(a1 + 104);
  do
  {
    result = *(unsigned int *)*v13;
    if ( (result & 1) != 0 )
      result = PopPepAttemptAcitivityPromotion(a1, v4, *v13, v12, a1 + 120);
    ++v12;
    ++v13;
  }
  while ( v12 <= 5 );
  return result;
}
