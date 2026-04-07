/*
 * XREFs of ?StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@PEBUtagRECT@@_K_N@Z @ 0x180083FDC
 * Callers:
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x1800816A4 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x180083130 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180039C00 (-RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180039C50 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCContactStationaryVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCContactStationaryVisual@@@Z @ 0x18007F8A4 (--$CreateTouchVisual@VCContactStationaryVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCContactStationar.c)
 *     ?AddMultipleAndSet@?$DynArray@UCFlickTextFeedback@@$0A@@@QEAAJPEFBUCFlickTextFeedback@@I@Z @ 0x180080480 (-AddMultipleAndSet@-$DynArray@UCFlickTextFeedback@@$0A@@@QEAAJPEFBUCFlickTextFeedback@@I@Z.c)
 *     ?Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_N@Z @ 0x1800848C8 (-Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_.c)
 */

__int64 __fastcall CContactManager::StartStationaryAnimationWithDelay(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 *a4,
        __int64 a5,
        unsigned __int64 a6,
        char a7)
{
  __int64 v7; // rax
  int v11; // eax
  CContactManager *v12; // rcx
  int v13; // ebx
  CContactManager *v14; // rcx
  struct CVisual *v15; // r8
  int v16; // eax
  unsigned int v17; // r8d
  int v20; // [rsp+30h] [rbp-20h] BYREF
  __int64 v21; // [rsp+34h] [rbp-1Ch]
  CBaseObject *v22; // [rsp+40h] [rbp-10h] BYREF

  v7 = *a4;
  v22 = 0LL;
  v21 = v7;
  v20 = a2;
  v11 = CreateTouchVisual<CContactStationaryVisual>(
          *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
          a6,
          &v22);
  v13 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x821u);
LABEL_3:
    v15 = v22;
    goto LABEL_10;
  }
  if ( (int)CContactManager::AddToTouchNode(v12, a6, (struct CVisual **)v22) >= 0 )
  {
    v16 = CContactStationaryVisual::Start(v22, a3, a4, a5, a7);
    v13 = v16;
    if ( v16 >= 0 )
      DynArray<CFlickTextFeedback,0>::AddMultipleAndSet(a1 + 120, (__int64)&v20, v17);
    else
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x824u);
    goto LABEL_3;
  }
  v15 = v22;
  if ( v22 )
  {
    CBaseObject::Release(v22);
    v15 = 0LL;
    v22 = 0LL;
  }
LABEL_10:
  if ( v13 < 0 )
  {
    if ( v15 )
    {
      CContactManager::RemoveFromTouchNode(v14, a6, v15);
      if ( v22 )
        CBaseObject::Release(v22);
    }
  }
  return (unsigned int)v13;
}
