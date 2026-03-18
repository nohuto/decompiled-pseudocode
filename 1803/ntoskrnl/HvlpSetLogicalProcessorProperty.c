/*
 * XREFs of HvlpSetLogicalProcessorProperty @ 0x1402283A0
 * Callers:
 *     HvlpUpdateLpcbIndex @ 0x1401A56D0 (HvlpUpdateLpcbIndex.c)
 *     HvlConfigurePcc @ 0x14022BABC (HvlConfigurePcc.c)
 *     HvlConfigurePerfStateCap @ 0x14022BB10 (HvlConfigurePerfStateCap.c)
 *     HvlConfigurePerfStates @ 0x14022BB48 (HvlConfigurePerfStates.c)
 *     HvlConfigureThrottleStates @ 0x14022BBE4 (HvlConfigureThrottleStates.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140140870 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140159B9C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140159BD4 (HvlpAcquireHypercallPage.c)
 */

__int64 __fastcall HvlpSetLogicalProcessorProperty(int a1, int a2, _OWORD *a3)
{
  _DWORD *v6; // rax
  _OWORD *v7; // rcx
  __int64 v8; // rax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int64 v16; // rax
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  unsigned int v19; // ebx
  PHYSICAL_ADDRESS v21[3]; // [rsp+20h] [rbp-28h] BYREF

  v6 = (_DWORD *)HvlpAcquireHypercallPage(v21, 1, 0LL, 3264LL);
  *v6 = a1;
  v7 = v6 + 2;
  v6[1] = a2;
  v8 = 25LL;
  do
  {
    v9 = a3[1];
    *v7 = *a3;
    v10 = a3[2];
    v7[1] = v9;
    v11 = a3[3];
    v7[2] = v10;
    v12 = a3[4];
    v7[3] = v11;
    v13 = a3[5];
    v7[4] = v12;
    v14 = a3[6];
    v7[5] = v13;
    v15 = a3[7];
    a3 += 8;
    v7[6] = v14;
    v7 += 8;
    *(v7 - 1) = v15;
    --v8;
  }
  while ( v8 );
  v16 = *((_QWORD *)a3 + 6);
  v17 = a3[1];
  *v7 = *a3;
  v18 = a3[2];
  v7[1] = v17;
  v7[2] = v18;
  *((_QWORD *)v7 + 6) = v16;
  v19 = (unsigned __int16)HvcallCodeVa() != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage((__int64)v21);
  return v19;
}
