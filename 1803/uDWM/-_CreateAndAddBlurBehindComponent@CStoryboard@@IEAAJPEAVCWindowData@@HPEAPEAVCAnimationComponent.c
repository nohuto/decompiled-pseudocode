/*
 * XREFs of ?_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x180001C1C
 * Callers:
 *     ?_WindowEnumCallback@CFlyoutPopup@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800015F0 (-_WindowEnumCallback@CFlyoutPopup@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800A1930 (-_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800A1F20 (-_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?CreateBlurBehindAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x180002438 (-CreateBlurBehindAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCSto.c)
 *     ?RecordWindowRect@CAnimationComponent@@QEAAXXZ @ 0x180006FDC (-RecordWindowRect@CAnimationComponent@@QEAAXXZ.c)
 *     ?_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x18000996C (-_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CStoryboard::_CreateAndAddBlurBehindComponent(
        CStoryboard *this,
        struct CWindowData *a2,
        int a3,
        struct CAnimationComponent **a4)
{
  int v6; // eax
  unsigned int v7; // edi
  volatile signed __int32 *v8; // rbx
  int v10; // eax
  CAnimationComponent *v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = 0LL;
  *a4 = 0LL;
  if ( !*((_QWORD *)a2 + 49) )
  {
    v7 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      0x14FBu);
    return v7;
  }
  v6 = CTransitionVisualController::CreateBlurBehindAnimationComponent(
         *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 29),
         a2,
         a3,
         this,
         &v11);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v6, 0x14FEu);
  }
  else
  {
    v8 = (volatile signed __int32 *)v11;
    if ( !v11 )
      return v7;
    v10 = CStoryboard::_AddAnimationComponent(this, v11);
    v7 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v10, 0x1502u);
      goto LABEL_11;
    }
    CAnimationComponent::RecordWindowRect((CAnimationComponent *)v8);
    *a4 = (struct CAnimationComponent *)v8;
    _InterlockedIncrement(v8 + 2);
  }
  v8 = (volatile signed __int32 *)v11;
LABEL_11:
  if ( v8 )
    CBaseObject::Release((CBaseObject *)v8);
  return v7;
}
