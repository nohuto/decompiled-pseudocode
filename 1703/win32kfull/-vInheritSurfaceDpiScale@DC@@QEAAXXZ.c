/*
 * XREFs of ?vInheritSurfaceDpiScale@DC@@QEAAXXZ @ 0x1C007B4C4
 * Callers:
 *     NtGdiBitBltInternal @ 0x1C006FAB0 (NtGdiBitBltInternal.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C0071290 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x1C0071600 (DEVLOCKOBJ_bPrepareTrgDcoWrap.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0071D38 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C0071F50 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C007316C (-bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1C00731EC (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C0073288 (-bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C00732F0 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     NtGdiGetPixel @ 0x1C0073B60 (NtGdiGetPixel.c)
 *     DEVLOCKOBJ_bDisposeTrgDcoWrap @ 0x1C00742B0 (DEVLOCKOBJ_bDisposeTrgDcoWrap.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0074430 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bDisposeTrgDco@DEVLOCKOBJ@@QEAAHXZ @ 0x1C0074850 (-bDisposeTrgDco@DEVLOCKOBJ@@QEAAHXZ.c)
 *     ?UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C0075400 (-UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     UntrapAppContainerRenderingWrap @ 0x1C0075430 (UntrapAppContainerRenderingWrap.c)
 *     ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z @ 0x1C00FFCA8 (-GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z.c)
 *     GreResetDCInternal @ 0x1C01367DC (GreResetDCInternal.c)
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C013E78C (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
 * Callees:
 *     ?bDpiScaledSurface@DC@@QEAAHXZ @ 0x1C007B510 (-bDpiScaledSurface@DC@@QEAAHXZ.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C024A6F4 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 */

void __fastcall DC::vInheritSurfaceDpiScale(DC *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // eax
  unsigned __int64 v5; // rdx
  __m128 v6; // xmm0
  unsigned __int16 v7; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 64) && (unsigned int)DC::bDpiScaledSurface(this) )
  {
    v5 = *(_QWORD *)(v2 + 596);
LABEL_8:
    DC::vSetDpiScaling(this, v5);
    return;
  }
  v3 = *((_QWORD *)this + 60);
  if ( v3
    && (unsigned int)UserIsGDIScalingApplicable(v3)
    && (unsigned int)UserGetHwndDpi(*((_QWORD *)this + 60), &v7)
    && v7 != 96 )
  {
    v6 = (__m128)COERCE_UNSIGNED_INT((float)(unsigned __int16)GreGetScaledLogPixels(v7));
    v6.m128_f32[0] = v6.m128_f32[0] / 96.0;
    v5 = _mm_unpacklo_ps(v6, v6).m128_u64[0];
    goto LABEL_8;
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
