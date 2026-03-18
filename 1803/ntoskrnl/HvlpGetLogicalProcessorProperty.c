/*
 * XREFs of HvlpGetLogicalProcessorProperty @ 0x140227768
 * Callers:
 *     HvlLpGetMachineCheckContext @ 0x140229960 (HvlLpGetMachineCheckContext.c)
 *     HvlpLogMicrocodeUpdateStatus @ 0x140717B14 (HvlpLogMicrocodeUpdateStatus.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140140870 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140159B9C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140159BD4 (HvlpAcquireHypercallPage.c)
 */

__int64 __fastcall HvlpGetLogicalProcessorProperty(int a1, int a2, _OWORD *a3)
{
  unsigned int v3; // r15d
  _DWORD *v7; // rbx
  _OWORD *v8; // r14
  __int64 v9; // rax
  __int128 v10; // xmm1
  PHYSICAL_ADDRESS v12[3]; // [rsp+20h] [rbp-58h] BYREF
  PHYSICAL_ADDRESS v13[3]; // [rsp+40h] [rbp-38h] BYREF

  v3 = 0;
  v7 = (_DWORD *)HvlpAcquireHypercallPage(v12, 1, 0LL, 8LL);
  v8 = (_OWORD *)HvlpAcquireHypercallPage(v13, 2, 0LL, 3256LL);
  *v7 = a1;
  v7[1] = a2;
  if ( (unsigned __int16)HvcallCodeVa() )
  {
    v3 = -1073741823;
  }
  else
  {
    v9 = 25LL;
    do
    {
      *a3 = *v8;
      a3[1] = v8[1];
      a3[2] = v8[2];
      a3[3] = v8[3];
      a3[4] = v8[4];
      a3[5] = v8[5];
      a3[6] = v8[6];
      a3 += 8;
      v10 = v8[7];
      v8 += 8;
      *(a3 - 1) = v10;
      --v9;
    }
    while ( v9 );
    *a3 = *v8;
    a3[1] = v8[1];
    a3[2] = v8[2];
    *((_QWORD *)a3 + 6) = *((_QWORD *)v8 + 6);
  }
  HvlpReleaseHypercallPage((__int64)v12);
  HvlpReleaseHypercallPage((__int64)v13);
  return v3;
}
