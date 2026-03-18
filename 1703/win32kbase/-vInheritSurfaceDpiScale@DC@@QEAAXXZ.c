/*
 * XREFs of ?vInheritSurfaceDpiScale@DC@@QEAAXXZ @ 0x1C0039270
 * Callers:
 *     GreCreateDisplayDC @ 0x1C002C340 (GreCreateDisplayDC.c)
 * Callees:
 *     ?bDpiScaledSurface@DC@@QEAAHXZ @ 0x1C0039248 (-bDpiScaledSurface@DC@@QEAAHXZ.c)
 *     UserIsGDIScalingApplicable @ 0x1C0071560 (UserIsGDIScalingApplicable.c)
 *     UserGetHwndDpi @ 0x1C0097D60 (UserGetHwndDpi.c)
 *     GreGetScaledLogPixels @ 0x1C0098070 (GreGetScaledLogPixels.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C00E8B34 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 */

void __fastcall DC::vInheritSurfaceDpiScale(DC *this)
{
  __int64 v2; // rdx
  void *v3; // rcx
  int v4; // eax
  unsigned __int64 v5; // rdx
  __m128 v6; // xmm0
  __int16 v7; // [rsp+30h] [rbp+8h]

  if ( *((_QWORD *)this + 64) && (unsigned int)DC::bDpiScaledSurface(this) )
  {
    v5 = *(_QWORD *)(v2 + 596);
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
    *((_DWORD *)this + 137) = 0;
    *((_DWORD *)this + 138) = 0;
    *((_DWORD *)this + 9) |= 0x10u;
    *((_DWORD *)this + 134) = v4 & 0xFFFFFFF8 | 4;
    *(_QWORD *)((char *)this + 540) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  }
}
