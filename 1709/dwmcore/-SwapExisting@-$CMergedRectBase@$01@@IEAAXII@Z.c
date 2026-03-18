/*
 * XREFs of ?SwapExisting@?$CMergedRectBase@$01@@IEAAXII@Z @ 0x180144878
 * Callers:
 *     ?Optimize@?$CMergedRectBase@$01@@IEAAX_N@Z @ 0x180143D60 (-Optimize@-$CMergedRectBase@$01@@IEAAX_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

__int64 __fastcall CMergedRectBase<2>::SwapExisting(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r10
  char v4; // r11
  __m128i v5; // xmm1
  __int64 result; // rax
  __m128i v7; // [rsp+0h] [rbp-28h]

  v3 = a2 + a1;
  v4 = *(_BYTE *)(v3 + 32);
  if ( v4 )
    v5 = _mm_loadu_si128((const __m128i *)(a1 + 16LL * a2));
  else
    v5 = v7;
  result = a3;
  *(_OWORD *)(a1 + 16LL * a2) = *(_OWORD *)(a1 + 16LL * a3);
  *(_BYTE *)(v3 + 32) = 1;
  if ( v4 )
  {
    *(__m128i *)(a1 + 16LL * a3) = v5;
    *(_BYTE *)(a3 + a1 + 32) = 1;
  }
  else
  {
    *(_BYTE *)(a3 + a1 + 32) = 0;
  }
  return result;
}
