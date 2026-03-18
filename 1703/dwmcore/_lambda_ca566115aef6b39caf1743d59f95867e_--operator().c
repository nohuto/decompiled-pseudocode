/*
 * XREFs of _lambda_ca566115aef6b39caf1743d59f95867e_::operator() @ 0x1800B51E4
 * Callers:
 *     ?LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z @ 0x1800B4F90 (-LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z.c)
 * Callees:
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18007E584 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?IsPrimary@CDisplay@@QEBA_NXZ @ 0x1800B80F0 (-IsPrimary@CDisplay@@QEBA_NXZ.c)
 */

unsigned __int64 __fastcall lambda_ca566115aef6b39caf1743d59f95867e_::operator()(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        __int64 a4)
{
  unsigned __int64 result; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rdi
  CDisplay *v9; // rcx
  int *v10; // r8
  __int64 v11; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  if ( a3 )
  {
    v6 = (_QWORD *)(a4 + 16);
    v7 = a3;
    v8 = 0LL;
    do
    {
      v9 = *(CDisplay **)(v8 + *(_QWORD *)(a2 + 48));
      *(v6 - 2) = (unsigned int)*((_QWORD *)v9 + 28) | (unsigned __int64)((__int64)(int)HIDWORD(*((_QWORD *)v9 + 28)) << 32);
      *(v6 - 1) = CDisplay::IsPrimary(v9);
      *v6 = v10[72];
      v6[1] = v10[24];
      v6[2] = v10[25];
      v6[3] = v10[26] - v10[24];
      v6[4] = v10[27] - v10[25];
      v6[5] = GetPixelFormatSize(v10[68]);
      v6[6] = *(unsigned int *)(a2 + 4);
      v6[7] = GdiEntry13();
      v11 = *(unsigned int *)(*(_QWORD *)(a2 + 16) + 56LL);
      v6[8] = v11;
      result = (unsigned int)DrvQueryAdapterPopulationUniqueness(v11);
      v8 += 8LL;
      v6[9] = (unsigned int)result;
      v6 += 12;
      --v7;
    }
    while ( v7 );
  }
  return result;
}
