/*
 * XREFs of ?SetGdiGammaRamp@ADAPTER_DISPLAY@@QEAAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C00794E8
 * Callers:
 *     ?DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C00F65D0 (-DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002ED4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005008 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 */

void __fastcall ADAPTER_DISPLAY::SetGdiGammaRamp(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        const struct DXGK_GAMMA_RAMP *a3)
{
  __int64 v5; // rsi
  ReferenceCounted *v6; // rcx
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  v5 = 3760LL * a2;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v7, (struct DXGFASTMUTEX *const)(v5 + *((_QWORD *)this + 14) + 864LL));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
  if ( a3 )
    _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
  v6 = *(ReferenceCounted **)(*((_QWORD *)this + 14) + v5 + 904);
  if ( v6 )
    ReferenceCounted::Release(v6);
  *(_QWORD *)(*((_QWORD *)this + 14) + v5 + 904) = a3;
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v7);
}
