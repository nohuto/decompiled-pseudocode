/*
 * XREFs of SpatialInteractionDevices::ReadLocalOrientation @ 0x18009DB64
 * Callers:
 *     ?ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEAUInputReport@1@@Z @ 0x18009DC54 (-ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEAUInputRepor.c)
 * Callees:
 *     SpatialInteractionDevices::ReadKnownFloats_DirectX::XMFLOAT4_4_ @ 0x18009F6C4 (SpatialInteractionDevices--ReadKnownFloats_DirectX--XMFLOAT4_4_.c)
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
    if ( *(_WORD *)(a1 + 46) != 0xFF00 || *(_WORD *)(a1 + 44) != 255 || *(_WORD *)(a1 + 48) != 2 )
      v7 = 0;
    if ( !*(_BYTE *)(a1 + 232) && !v7 )
    {
      if ( *(_BYTE *)(a1 + 237) )
      {
        v8 = _mm_shuffle_ps(*v4, *v4, 27);
        v9 = _mm_mul_ps(_mm_shuffle_ps((__m128)xmmword_1801357F0, (__m128)xmmword_1801357F0, 0), v8);
        v10 = _mm_shuffle_ps(v8, v8, 177);
        *v4 = _mm_add_ps(
                _mm_add_ps(
                  _mm_mul_ps(
                    _mm_mul_ps(
                      _mm_shuffle_ps(v10, v10, 27),
                      _mm_shuffle_ps((__m128)xmmword_1801357F0, (__m128)xmmword_1801357F0, 170)),
                    (__m128)`DirectX::XMQuaternionMultiply'::`2'::ControlYXWZ),
                  _mm_mul_ps(
                    _mm_mul_ps(_mm_shuffle_ps((__m128)xmmword_1801357F0, (__m128)xmmword_1801357F0, 85), v10),
                    (__m128)`DirectX::XMQuaternionMultiply'::`2'::ControlZWXY)),
                _mm_add_ps(
                  _mm_mul_ps(_mm_shuffle_ps((__m128)xmmword_1801357F0, (__m128)xmmword_1801357F0, 255), *v4),
                  _mm_mul_ps((__m128)`DirectX::XMQuaternionMultiply'::`2'::ControlWZYX, v9)));
      }
    }
  }
}
