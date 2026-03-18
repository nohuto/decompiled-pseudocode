/*
 * XREFs of ?SetGdiGammaRamp@ADAPTER_DISPLAY@@QEAAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C00E1DB4
 * Callers:
 *     ?DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C00DDD20 (-DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004630 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_DISPLAY::SetGdiGammaRamp(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        const struct DXGK_GAMMA_RAMP *a3)
{
  __int64 v5; // rdi
  __int64 v6; // rax
  ReferenceCounted *v7; // rcx
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  v5 = 3760LL * a2;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (struct DXGFASTMUTEX *const)(v5 + *((_QWORD *)this + 14) + 864LL), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  if ( a3 )
    _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
  v6 = *((_QWORD *)this + 14);
  v7 = *(ReferenceCounted **)(v5 + v6 + 904);
  if ( v7 )
  {
    ReferenceCounted::Release(v7);
    v6 = *((_QWORD *)this + 14);
  }
  *(_QWORD *)(v5 + v6 + 904) = a3;
  if ( v8[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
}
