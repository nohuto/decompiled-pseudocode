/*
 * XREFs of HvlpSetLogicalProcessorProperty @ 0x1401E6520
 * Callers:
 *     HvlpUpdateLpcbIndex @ 0x14017B5D8 (HvlpUpdateLpcbIndex.c)
 *     HvlConfigurePcc @ 0x1401E9024 (HvlConfigurePcc.c)
 *     HvlConfigurePerfStateCap @ 0x1401E9078 (HvlConfigurePerfStateCap.c)
 *     HvlConfigurePerfStates @ 0x1401E90B0 (HvlConfigurePerfStates.c)
 *     HvlConfigureThrottleStates @ 0x1401E914C (HvlConfigureThrottleStates.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140130000 (HvcallpNoHypervisorPresent.c)
 *     HvlpAcquireHypercallPage @ 0x1401E5364 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401E5D98 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlpSetLogicalProcessorProperty(int a1, int a2, _OWORD *a3)
{
  unsigned int v3; // ebp
  _DWORD *v7; // rax
  _OWORD *v8; // rcx
  __int64 v9; // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int64 v17; // rax
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  PHYSICAL_ADDRESS v21[3]; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0;
  v7 = (_DWORD *)HvlpAcquireHypercallPage(v21, 1, 0LL, 3264LL);
  *v7 = a1;
  v8 = v7 + 2;
  v7[1] = a2;
  v9 = 25LL;
  do
  {
    v10 = a3[1];
    *v8 = *a3;
    v11 = a3[2];
    v8[1] = v10;
    v12 = a3[3];
    v8[2] = v11;
    v13 = a3[4];
    v8[3] = v12;
    v14 = a3[5];
    v8[4] = v13;
    v15 = a3[6];
    v8[5] = v14;
    v16 = a3[7];
    a3 += 8;
    v8[6] = v15;
    v8 += 8;
    *(v8 - 1) = v16;
    --v9;
  }
  while ( v9 );
  v17 = *((_QWORD *)a3 + 6);
  v18 = a3[1];
  *v8 = *a3;
  v19 = a3[2];
  v8[1] = v18;
  v8[2] = v19;
  *((_QWORD *)v8 + 6) = v17;
  if ( (unsigned __int16)HvcallCodeVa() )
    v3 = -1073741823;
  HvlpReleaseHypercallPage((__int64)v21);
  return v3;
}
