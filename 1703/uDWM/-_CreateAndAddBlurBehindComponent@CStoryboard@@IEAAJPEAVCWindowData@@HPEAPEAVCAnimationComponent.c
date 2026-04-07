/*
 * XREFs of ?_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x180005900
 * Callers:
 *     ?_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180001210 (-_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800016D0 (-_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CFlyoutPopup@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180002720 (-_WindowEnumCallback@CFlyoutPopup@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x1800057BC (-_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?CreateBlurBehindAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800098CC (-CreateBlurBehindAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCSto.c)
 *     ?RecordWindowRect@CAnimationComponent@@QEAAXXZ @ 0x18000AA28 (-RecordWindowRect@CAnimationComponent@@QEAAXXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
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
  int v9; // eax
  CAnimationComponent *v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = 0LL;
  *a4 = 0LL;
  if ( !*((_QWORD *)a2 + 50) )
  {
    v7 = -2147467259;
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, -2147467259, 0x14BEu);
    return v7;
  }
  v6 = CTransitionVisualController::CreateBlurBehindAnimationComponent(
         *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 23),
         a2,
         a3,
         this,
         &v11);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v6, 0x14C1u);
    goto LABEL_6;
  }
  v8 = (volatile signed __int32 *)v11;
  if ( !v11 )
    return v7;
  v9 = CStoryboard::_AddAnimationComponent(this, v11);
  v7 = v9;
  if ( v9 >= 0 )
  {
    CAnimationComponent::RecordWindowRect((CAnimationComponent *)v8);
    *a4 = (struct CAnimationComponent *)v8;
    _InterlockedIncrement(v8 + 2);
LABEL_6:
    v8 = (volatile signed __int32 *)v11;
    goto LABEL_7;
  }
  MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v9, 0x14C5u);
LABEL_7:
  if ( v8 )
    CBaseObject::Release((CBaseObject *)v8);
  return v7;
}
