/*
 * XREFs of HvlpGetLogicalProcessorProperty @ 0x1401EA6B8
 * Callers:
 *     HvlPhase2Initialize @ 0x14015CA00 (HvlPhase2Initialize.c)
 *     HvlLpGetMachineCheckContext @ 0x1401EC2C0 (HvlLpGetMachineCheckContext.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140132F60 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140140F8C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140140FC4 (HvlpAcquireHypercallPage.c)
 */

__int64 __fastcall HvlpGetLogicalProcessorProperty(int a1, int a2, _OWORD *a3)
{
  _DWORD *v6; // rbx
  _OWORD *v7; // r14
  __int16 v8; // cx
  __int64 v9; // rax
  __int128 v10; // xmm1
  unsigned int v11; // ebx
  PHYSICAL_ADDRESS v13[3]; // [rsp+20h] [rbp-48h] BYREF
  PHYSICAL_ADDRESS v14[3]; // [rsp+40h] [rbp-28h] BYREF

  v6 = (_DWORD *)HvlpAcquireHypercallPage(v13, 1, 0LL, 8LL);
  v7 = (_OWORD *)HvlpAcquireHypercallPage(v14, 2, 0LL, 3256LL);
  *v6 = a1;
  v6[1] = a2;
  v8 = HvcallCodeVa();
  if ( !v8 )
  {
    v9 = 25LL;
    do
    {
      *a3 = *v7;
      a3[1] = v7[1];
      a3[2] = v7[2];
      a3[3] = v7[3];
      a3[4] = v7[4];
      a3[5] = v7[5];
      a3[6] = v7[6];
      a3 += 8;
      v10 = v7[7];
      v7 += 8;
      *(a3 - 1) = v10;
      --v9;
    }
    while ( v9 );
    *a3 = *v7;
    a3[1] = v7[1];
    a3[2] = v7[2];
    *((_QWORD *)a3 + 6) = *((_QWORD *)v7 + 6);
  }
  v11 = v8 != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage((__int64)v13);
  HvlpReleaseHypercallPage((__int64)v14);
  return v11;
}
