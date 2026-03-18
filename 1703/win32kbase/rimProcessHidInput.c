/*
 * XREFs of rimProcessHidInput @ 0x1C010CD40
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C009990C (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     rimProcessInput @ 0x1C0099D80 (rimProcessInput.c)
 */

__int64 __fastcall rimProcessHidInput(__int64 a1, __m128i *a2)
{
  rimProcessInput(a1, (__int64)a2, *(const void **)(a2[28].m128i_i64[1] + 24), a2 + 16, 0);
  return ApiSetProcessHidRawInput(a2);
}
