/*
 * XREFs of ?vInheritSurfaceDpiScale@DC@@QEAAXXZ @ 0x1C0051F48
 * Callers:
 *     GreCreateDisplayDC @ 0x1C0055870 (GreCreateDisplayDC.c)
 * Callees:
 *     UserIsGDIScalingApplicable @ 0x1C00735D0 (UserIsGDIScalingApplicable.c)
 *     UserGetHwndDpi @ 0x1C00A0480 (UserGetHwndDpi.c)
 *     GreGetScaledLogPixels @ 0x1C00A2100 (GreGetScaledLogPixels.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C00EDCC8 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 */

void __fastcall DC::vInheritSurfaceDpiScale(DC *this)
{
  _DWORD *v2; // rcx
  void *v3; // rcx
  int v4; // eax
  unsigned __int64 v5; // rdx
  __m128 v6; // xmm0
  __int16 v7; // [rsp+30h] [rbp+8h]

  v2 = (_DWORD *)*((_QWORD *)this + 64);
  if ( v2 && (v2[29] & 0x800) != 0 )
  {
    v5 = _mm_unpacklo_ps((__m128)(unsigned int)v2[149], (__m128)(unsigned int)v2[150]).m128_u64[0];
LABEL_10:
    DC::vSetDpiScaling(this, v5);
    return;
  }
  v3 = (void *)*((_QWORD *)this + 60);
  if ( v3
    && (unsigned int)UserIsGDIScalingApplicable(v3)
    && (unsigned int)UserGetHwndDpi(*((void **)this + 60))
    && v7 != 96 )
  {
    v6 = (__m128)COERCE_UNSIGNED_INT((float)(unsigned __int16)GreGetScaledLogPixels());
    v6.m128_f32[0] = v6.m128_f32[0] / 96.0;
    v5 = _mm_unpacklo_ps(v6, v6).m128_u64[0];
    goto LABEL_10;
  }
  v4 = *((_DWORD *)this + 134);
  if ( (v4 & 1) != 0 )
  {
    *((_DWORD *)this + 135) = 0;
    *((_DWORD *)this + 136) = 0;
    *((_DWORD *)this + 137) = 0;
    *((_DWORD *)this + 138) = 0;
    *((_DWORD *)this + 9) |= 0x10u;
    *((_DWORD *)this + 134) = v4 & 0xFFFFFFF8 | 4;
  }
}
