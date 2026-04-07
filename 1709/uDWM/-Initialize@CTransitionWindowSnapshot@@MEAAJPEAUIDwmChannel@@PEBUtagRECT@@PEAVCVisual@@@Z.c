/*
 * XREFs of ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAUIDwmChannel@@PEBUtagRECT@@PEAVCVisual@@@Z @ 0x1800394A0
 * Callers:
 *     ?Create@CTransitionWindowSnapshot@@SAJPEAUIDwmChannel@@PEBUtagRECT@@PEAVCVisual@@PEAPEAV1@@Z @ 0x1800393EC (-Create@CTransitionWindowSnapshot@@SAJPEAUIDwmChannel@@PEBUtagRECT@@PEAVCVisual@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z @ 0x18000C3D0 (-_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z.c)
 *     ?GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z @ 0x180017094 (-GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180018160 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x1800184C0 (-Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::Initialize(
        CVisual **this,
        struct IDwmChannel *a2,
        const struct tagRECT *a3,
        struct CVisual *a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  CDesktopManager *v9; // rcx
  int v10; // eax
  int v11; // eax

  v7 = CVisual::Initialize((CVisual *)this, a2);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x86u);
  }
  else
  {
    this[35] = 0LL;
    v9 = CDesktopManager::s_pDesktopManagerInstance;
    *((struct tagRECT *)this + 21) = *a3;
    *((struct tagRECT *)this + 20) = *a3;
    *((float *)this + 88) = CDesktopManager::GetScalingFactorForCVI(v9, a3);
    this[39] = a4;
    if ( a4 )
      _InterlockedIncrement((volatile signed __int32 *)a4 + 2);
    v10 = CVisual::RenderRecursive(this[39]);
    v8 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x8Eu);
    }
    else
    {
      v11 = CTransitionWindowSnapshot::_EnsureCVIResource((CTransitionWindowSnapshot *)this, a3);
      v8 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x91u);
      else
        CVisual::SetDirtyFlags((CVisual *)this, 4096);
    }
  }
  return v8;
}
