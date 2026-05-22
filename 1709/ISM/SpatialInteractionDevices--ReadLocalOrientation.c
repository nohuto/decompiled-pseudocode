/*
 * XREFs of SpatialInteractionDevices::ReadLocalOrientation @ 0x1800783D8
 * Callers:
 *     ?ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEAUInputReport@1@@Z @ 0x1800784C8 (-ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEAUInputRepor.c)
 * Callees:
 *     SpatialInteractionDevices::ReadKnownFloats_DirectX::XMFLOAT4_4_ @ 0x180079F94 (SpatialInteractionDevices--ReadKnownFloats_DirectX--XMFLOAT4_4_.c)
 */

void __fastcall SpatialInteractionDevices::ReadLocalOrientation(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __m128 *v4; // rsi
  char v7; // al
  __m128 v8; // xmm1
  __m128 v9; // xmm3
  __m128 v10; // xmm1

  v4 = (__m128 *)(a4 + 76);
  if ( *(_BYTE *)(a2 + 140)
    && (int)SpatialInteractionDevices::ReadKnownFloats_DirectX::XMFLOAT4_4_(a1, a3, a3, (int)a2 + 48, (__int64)v4) >= 0 )
  {
    v7 = 1;
    *(_BYTE *)(a4 + 92) = 1;
    if ( *(_WORD *)(a1 + 90) != 0xFF00 || *(_WORD *)(a1 + 88) != 255 || *(_WORD *)(a1 + 92) != 2 )
      v7 = 0;
    if ( !*(_BYTE *)(a1 + 272) && !v7 )
    {
      if ( *(_BYTE *)(a1 + 277) )
      {
        v8 = _mm_shuffle_ps(*v4, *v4, 27);
        v9 = _mm_mul_ps(_mm_shuffle_ps((__m128)xmmword_18010E528, (__m128)xmmword_18010E528, 0), v8);
        v10 = _mm_shuffle_ps(v8, v8, 177);
        *v4 = _mm_add_ps(
                _mm_add_ps(
                  _mm_mul_ps(
                    _mm_mul_ps(
                      _mm_shuffle_ps(v10, v10, 27),
                      _mm_shuffle_ps((__m128)xmmword_18010E528, (__m128)xmmword_18010E528, 170)),
                    (__m128)`DirectX::XMQuaternionMultiply'::`2'::ControlYXWZ),
                  _mm_mul_ps(
                    _mm_mul_ps(_mm_shuffle_ps((__m128)xmmword_18010E528, (__m128)xmmword_18010E528, 85), v10),
                    (__m128)`DirectX::XMQuaternionMultiply'::`2'::ControlZWXY)),
                _mm_add_ps(
                  _mm_mul_ps(_mm_shuffle_ps((__m128)xmmword_18010E528, (__m128)xmmword_18010E528, 255), *v4),
                  _mm_mul_ps((__m128)`DirectX::XMQuaternionMultiply'::`2'::ControlWZYX, v9)));
      }
    }
  }
}
