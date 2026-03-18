/*
 * XREFs of HvlRetargetDeviceInterrupt @ 0x14022A460
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140140870 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140159B9C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140159BD4 (HvlpAcquireHypercallPage.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     HvlpAffinityToHvProcessorSet @ 0x14022DD70 (HvlpAffinityToHvProcessorSet.c)
 *     HvlpHvToNtStatus @ 0x14022DF28 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlRetargetDeviceInterrupt(__int64 a1, _OWORD *a2, _OWORD *a3, __int64 *a4, _OWORD *a5)
{
  _OWORD *v9; // r14
  _QWORD *v10; // rdi
  unsigned __int16 v11; // cx
  __int64 v12; // rdx
  unsigned __int16 v13; // ax
  unsigned int v14; // ebx
  PHYSICAL_ADDRESS v16[3]; // [rsp+30h] [rbp-D8h] BYREF
  PHYSICAL_ADDRESS v17[3]; // [rsp+50h] [rbp-B8h] BYREF
  _DWORD v18[44]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v19[32]; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v20[256]; // [rsp+148h] [rbp+40h] BYREF

  v9 = 0LL;
  v10 = (_QWORD *)HvlpAcquireHypercallPage(v16, 1, (__int64)v20, 128LL);
  memset(v10, 0, 0x38uLL);
  *(_OWORD *)(v10 + 5) = *a3;
  v18[0] = 1310721;
  memset(&v18[1], 0, 0xA4uLL);
  v11 = *((_WORD *)a4 + 4);
  v12 = *a4;
  if ( v11 )
    LOWORD(v18[0]) = v11 + 1;
  *(_QWORD *)&v18[2 * v11 + 2] |= v12;
  if ( (unsigned int)HvlpAffinityToHvProcessorSet(v18, v10 + 6, (v16[0].LowPart & 2) != 0 ? 64 : 4032) == -1 )
  {
    HvlpReleaseHypercallPage((__int64)v16);
    v10 = (_QWORD *)HvlpAcquireHypercallPage(v16, 1, 0LL, 0LL);
    memset(v10, 0, 0x38uLL);
    *(_OWORD *)(v10 + 5) = *a3;
    HvlpAffinityToHvProcessorSet(v18, v10 + 6, 4032LL);
  }
  *((_DWORD *)v10 + 11) |= 2u;
  *v10 = -1LL;
  v10[1] = a1;
  *((_OWORD *)v10 + 1) = *a2;
  if ( a5 )
    v9 = (_OWORD *)HvlpAcquireHypercallPage(v17, 2, (__int64)v19, 16LL);
  v13 = HvcallCodeVa();
  if ( v13 )
  {
    v14 = HvlpHvToNtStatus(v13);
  }
  else
  {
    v14 = 0;
    if ( a5 )
      *a5 = *v9;
  }
  HvlpReleaseHypercallPage((__int64)v16);
  if ( a5 )
    HvlpReleaseHypercallPage((__int64)v17);
  return v14;
}
