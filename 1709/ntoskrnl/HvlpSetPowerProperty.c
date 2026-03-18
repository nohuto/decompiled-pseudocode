/*
 * XREFs of HvlpSetPowerProperty @ 0x1401EECC4
 * Callers:
 *     PpmScaleIdleStateValues @ 0x14014DA20 (PpmScaleIdleStateValues.c)
 *     HvlConfigureIdleStates @ 0x1401EE198 (HvlConfigureIdleStates.c)
 *     HvlRegisterPerfFeedbackCounters @ 0x1401EE8A4 (HvlRegisterPerfFeedbackCounters.c)
 *     HvlSetPlatformIdleState @ 0x1401EE924 (HvlSetPlatformIdleState.c)
 *     HvlpPowerPolicySettingCallback @ 0x1401EEBE0 (HvlpPowerPolicySettingCallback.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140132F60 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140140F8C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140140FC4 (HvlpAcquireHypercallPage.c)
 */

__int64 __fastcall HvlpSetPowerProperty(_OWORD *a1)
{
  _OWORD *v2; // rcx
  __int64 v3; // rax
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 v11; // rax
  unsigned int v12; // ebx
  PHYSICAL_ADDRESS v14[3]; // [rsp+20h] [rbp-28h] BYREF

  v2 = (_OWORD *)HvlpAcquireHypercallPage(v14, 1, 0LL, 408LL);
  v3 = 3LL;
  do
  {
    v4 = a1[1];
    *v2 = *a1;
    v5 = a1[2];
    v2[1] = v4;
    v6 = a1[3];
    v2[2] = v5;
    v7 = a1[4];
    v2[3] = v6;
    v8 = a1[5];
    v2[4] = v7;
    v9 = a1[6];
    v2[5] = v8;
    v10 = a1[7];
    a1 += 8;
    v2[6] = v9;
    v2 += 8;
    *(v2 - 1) = v10;
    --v3;
  }
  while ( v3 );
  v11 = *((_QWORD *)a1 + 2);
  *v2 = *a1;
  *((_QWORD *)v2 + 2) = v11;
  v12 = (unsigned __int16)HvcallCodeVa() != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage((__int64)v14);
  return v12;
}
