/*
 * XREFs of HvlMapDeviceInterrupt @ 0x1401EC5B0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140132F60 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140140F8C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140140FC4 (HvlpAcquireHypercallPage.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     HvlpDepositPages @ 0x1401EA4C8 (HvlpDepositPages.c)
 *     HvlpAffinityToHvProcessorSet @ 0x1401EF4D0 (HvlpAffinityToHvProcessorSet.c)
 *     HvlpHvToNtStatus @ 0x1401EF688 (HvlpHvToNtStatus.c)
 *     HvlpLogIommuEvent @ 0x1401F0530 (HvlpLogIommuEvent.c)
 */

__int64 __fastcall HvlMapDeviceInterrupt(__int64 a1, _OWORD *a2, __int64 *a3, _OWORD *a4)
{
  unsigned __int16 v7; // cx
  __int64 v8; // rdx
  char v9; // r15
  __int64 v10; // r14
  _QWORD *v11; // rbx
  __int64 v12; // rax
  unsigned __int16 v13; // ax
  unsigned __int16 v14; // bx
  int v15; // edi
  PHYSICAL_ADDRESS v18[3]; // [rsp+30h] [rbp-D0h] BYREF
  PHYSICAL_ADDRESS v19[3]; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v20[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v21; // [rsp+90h] [rbp-70h]
  _DWORD v22[44]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v23[112]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v24[256]; // [rsp+1C0h] [rbp+C0h] BYREF

  if ( a3 )
  {
    v22[0] = 1310721;
    memset(&v22[1], 0, 0xA4uLL);
    v7 = *((_WORD *)a3 + 4);
    v8 = *a3;
    if ( v7 )
      LOWORD(v22[0]) = v7 + 1;
    *(_QWORD *)&v22[2 * v7 + 2] |= v8;
  }
  v9 = 0;
  while ( 1 )
  {
    v10 = HvlpAcquireHypercallPage(v19, 2, (__int64)v23, 56LL);
    v11 = (_QWORD *)HvlpAcquireHypercallPage(v18, 1, (__int64)v24, 128LL);
    memset(v11, 0, 0x38uLL);
    *(_OWORD *)(v11 + 3) = *a2;
    *(_OWORD *)(v11 + 5) = a2[1];
    if ( a3 )
    {
      if ( (unsigned int)HvlpAffinityToHvProcessorSet(v22, v11 + 6, (v18[0].LowPart & 2) != 0 ? 64 : 4032) == -1 )
      {
        HvlpReleaseHypercallPage((__int64)v18);
        v11 = (_QWORD *)HvlpAcquireHypercallPage(v18, 1, 0LL, 0LL);
        memset(v11, 0, 0x38uLL);
        *(_OWORD *)(v11 + 3) = *a2;
        *(_OWORD *)(v11 + 5) = a2[1];
        HvlpAffinityToHvProcessorSet(v22, v11 + 6, 4032LL);
      }
      *((_DWORD *)v11 + 11) |= 2u;
    }
    else
    {
      v11[5] = 0LL;
      v11[6] = 0LL;
    }
    *v11 = -1LL;
    v11[1] = a1;
    v11[2] = 1LL;
    v12 = v11[2];
    if ( v9 )
      v12 = 3LL;
    v11[2] = v12;
    v13 = HvcallCodeVa();
    v14 = v13;
    if ( v13 )
    {
      v15 = HvlpHvToNtStatus(v13);
    }
    else
    {
      *a4 = *(_OWORD *)v10;
      v20[0] = *(_OWORD *)(v10 + 16);
      v20[1] = *(_OWORD *)(v10 + 32);
      v15 = 0;
      v21 = *(_QWORD *)(v10 + 48);
    }
    HvlpReleaseHypercallPage((__int64)v18);
    HvlpReleaseHypercallPage((__int64)v19);
    if ( v14 != 11 )
      break;
    if ( (int)HvlpDepositPages(0) < 0 )
      v9 = 1;
  }
  if ( v15 >= 0 )
    HvlpLogIommuEvent(v20);
  return (unsigned int)v15;
}
