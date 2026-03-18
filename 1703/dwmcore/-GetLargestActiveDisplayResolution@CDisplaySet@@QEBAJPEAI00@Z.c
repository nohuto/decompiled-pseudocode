/*
 * XREFs of ?GetLargestActiveDisplayResolution@CDisplaySet@@QEBAJPEAI00@Z @ 0x18013320C
 * Callers:
 *     ?ClearD2DCaches@CD3DDeviceManager@@QEAA_NK@Z @ 0x180135A84 (-ClearD2DCaches@CD3DDeviceManager@@QEAA_NK@Z.c)
 * Callees:
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18007E584 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall CDisplaySet::GetLargestActiveDisplayResolution(
        CDisplaySet *this,
        unsigned int *a2,
        unsigned int *a3,
        unsigned int *a4)
{
  __m128i **v4; // r10
  __m128i v5; // xmm3
  unsigned __int64 v6; // rbx
  _DWORD *v7; // rdx
  int v8; // edi
  _DWORD *v9; // r8
  __int64 v10; // r9
  __int64 v11; // r10
  int *v12; // r11

  *a2 = 0;
  *a3 = 0;
  *a4 = 0;
  if ( *((_DWORD *)this + 18) )
  {
    v4 = (__m128i **)*((_QWORD *)this + 6);
    do
    {
      v5 = (*v4)[16];
      v6 = HIDWORD((*v4)[16].m128i_i64[0]);
      v8 = GetPixelFormatSize((*v4)[17].m128i_i32[0]) >> 3;
      if ( (int)v6 * v8 * _mm_cvtsi128_si32(v5) > (unsigned int)(*v12 * *v9 * *v7) )
      {
        *v7 = _mm_cvtsi128_si32(v5);
        *v9 = v6;
        *v12 = v8;
      }
      v4 = (__m128i **)(v11 + 8);
    }
    while ( v10 != 1 );
  }
  return 0LL;
}
