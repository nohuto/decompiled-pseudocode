/*
 * XREFs of HvlpSetPowerProperty @ 0x1401E9BE4
 * Callers:
 *     PpmScaleIdleStateValues @ 0x1401470E8 (PpmScaleIdleStateValues.c)
 *     HvlConfigureIdleStates @ 0x1401E8F9C (HvlConfigureIdleStates.c)
 *     HvlRegisterPerfFeedbackCounters @ 0x1401E97AC (HvlRegisterPerfFeedbackCounters.c)
 *     HvlSetPlatformIdleState @ 0x1401E982C (HvlSetPlatformIdleState.c)
 *     HvlpPowerPolicySettingCallback @ 0x1401E9B00 (HvlpPowerPolicySettingCallback.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140130000 (HvcallpNoHypervisorPresent.c)
 *     HvlpAcquireHypercallPage @ 0x1401E5364 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401E5D98 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlpSetPowerProperty(_OWORD *a1)
{
  unsigned int v1; // edi
  _OWORD *v3; // rcx
  __int64 v4; // rax
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int64 v12; // rax
  PHYSICAL_ADDRESS v14[3]; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0;
  v3 = (_OWORD *)HvlpAcquireHypercallPage(v14, 1, 0LL, 408LL);
  v4 = 3LL;
  do
  {
    v5 = a1[1];
    *v3 = *a1;
    v6 = a1[2];
    v3[1] = v5;
    v7 = a1[3];
    v3[2] = v6;
    v8 = a1[4];
    v3[3] = v7;
    v9 = a1[5];
    v3[4] = v8;
    v10 = a1[6];
    v3[5] = v9;
    v11 = a1[7];
    a1 += 8;
    v3[6] = v10;
    v3 += 8;
    *(v3 - 1) = v11;
    --v4;
  }
  while ( v4 );
  v12 = *((_QWORD *)a1 + 2);
  *v3 = *a1;
  *((_QWORD *)v3 + 2) = v12;
  if ( (unsigned __int16)HvcallCodeVa() )
    v1 = -1073741823;
  HvlpReleaseHypercallPage((__int64)v14);
  return v1;
}
