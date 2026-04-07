/*
 * XREFs of ?StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@PEBUtagRECT@@_K_N@Z @ 0x1800704C4
 * Callers:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18004B998 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x180089C38 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x18004141C (-RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x18004146C (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$CreateTouchVisual@VCContactStationaryVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCContactStationaryVisual@@@Z @ 0x1800883F8 (--$CreateTouchVisual@VCContactStationaryVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCContactStationar.c)
 *     ?AddMultipleAndSet@?$DynArray@UCFlickTextFeedback@@$0A@@@QEAAJPEFBUCFlickTextFeedback@@I@Z @ 0x180088F34 (-AddMultipleAndSet@-$DynArray@UCFlickTextFeedback@@$0A@@@QEAAJPEFBUCFlickTextFeedback@@I@Z.c)
 *     ?Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_N@Z @ 0x18008B72C (-Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_.c)
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
  int Touch; // eax
  CContactManager *v12; // rcx
  int v13; // ebx
  CContactManager *v14; // rcx
  struct CVisual *v15; // r8
  int v16; // eax
  int v19; // [rsp+30h] [rbp-20h] BYREF
  __int64 v20; // [rsp+34h] [rbp-1Ch]
  CBaseObject *v21; // [rsp+40h] [rbp-10h]

  v7 = *a4;
  v21 = 0LL;
  v20 = v7;
  v19 = a2;
  Touch = CreateTouchVisual<CContactStationaryVisual>(
            *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
            a6);
  v13 = Touch;
  if ( Touch >= 0 )
  {
    if ( (int)CContactManager::AddToTouchNode(v12, a6, v21) < 0 )
    {
      v15 = v21;
      goto LABEL_9;
    }
    v16 = CContactStationaryVisual::Start(v21, a3, a4, a5, a7);
    v13 = v16;
    if ( v16 >= 0 )
      DynArray<CFlickTextFeedback,0>::AddMultipleAndSet(a1 + 120, &v19);
    else
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v16, 0x824u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, Touch, 0x821u);
  }
  v15 = v21;
LABEL_9:
  if ( v13 < 0 )
  {
    if ( v15 )
    {
      CContactManager::RemoveFromTouchNode(v14, a6, v15);
      if ( v21 )
        CBaseObject::Release(v21);
    }
  }
  return (unsigned int)v13;
}
