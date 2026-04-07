/*
 * XREFs of ?_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x18007E074
 * Callers:
 *     ?UpdateCaptureControllerPropertiesFromDisplays@CProjectionBorderManager@@UEAAJXZ @ 0x180032E00 (-UpdateCaptureControllerPropertiesFromDisplays@CProjectionBorderManager@@UEAAJXZ.c)
 *     ?_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@IAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x18007DE2C (-_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@IAEBUDWM_CAPTURE_TOKEN@@.c)
 *     ?_AddProjectionBorderForAllDisplays@CProjectionBorderManager@@AEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x18007DF88 (-_AddProjectionBorderForAllDisplays@CProjectionBorderManager@@AEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000F590 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18000FB30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020D50 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180025BF0 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z @ 0x180026F60 (-GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18002BAB0 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049FC4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?GetDisplayRect@CDesktopManager@@QEAAJPEAUHMONITOR__@@AEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x180075278 (-GetDisplayRect@CDesktopManager@@QEAAJPEAUHMONITOR__@@AEAV-$TMilRect_@HUtagRECT@@UMilPointAndSiz.c)
 *     ?Create@CProjectionBorderVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18007B158 (-Create@CProjectionBorderVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?FindElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@@@QEAAPEAUCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@T_LARGE_INTEGER@@@Z @ 0x18007B3F4 (-FindElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderMan.c)
 *     ?UpdateRect@CProjectionBorderVisual@@QEAAXAEBUtagRECT@@@Z @ 0x18007F65C (-UpdateRect@CProjectionBorderVisual@@QEAAXAEBUtagRECT@@@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::_AddProjectionBorderForDisplay(
        CProjectionBorderManager *this,
        __int64 a2,
        const struct DWM_CAPTURE_TOKEN *a3)
{
  unsigned int *Element; // r14
  int v7; // ebx
  int DisplayRect; // eax
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // eax
  struct CVisual *OverlayRootVisualForDesktop; // rax
  int inserted; // eax
  unsigned int v14; // eax
  unsigned int v15; // edx
  int v16; // eax
  CProjectionBorderVisual *v18; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v19; // [rsp+38h] [rbp-48h] BYREF
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+40h] [rbp-40h] BYREF
  struct tagRECT v21; // [rsp+50h] [rbp-30h] BYREF
  struct tagRECT v22; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v20 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  Element = (unsigned int *)CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY>::FindElement(
                              (struct _RTL_GENERIC_TABLE *)((char *)this + 512),
                              *(_QWORD *)a3);
  if ( Element )
  {
    DisplayRect = CDesktopManager::GetDisplayRect((__int64)CDesktopManager::s_pDesktopManagerInstance, a2, &v22);
    v7 = DisplayRect;
    if ( DisplayRect < 0 )
    {
      v9 = (unsigned int)DisplayRect;
      v10 = 942LL;
LABEL_23:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"windows\\dwm\\udwm\\projectionbordermanager.cpp",
        (const char *)v9);
      goto LABEL_25;
    }
    v21 = v22;
    if ( !(unsigned int)GetDesktopID(1LL, &v19) )
    {
      v7 = -2147467259;
      v10 = 951LL;
LABEL_22:
      v9 = (unsigned int)v7;
      goto LABEL_23;
    }
    v11 = CProjectionBorderVisual::Create(*((struct IDwmChannel **)this + 54), &v18);
    v7 = v11;
    if ( v11 < 0 )
    {
      v9 = (unsigned int)v11;
      v10 = 954LL;
      goto LABEL_23;
    }
    *((_DWORD *)v18 + 75) = 1;
    OverlayRootVisualForDesktop = CWindowList::GetOverlayRootVisualForDesktop(
                                    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 56),
                                    v19,
                                    1);
    if ( !OverlayRootVisualForDesktop )
    {
      OverlayRootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                                      *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 56),
                                      v19);
      if ( !OverlayRootVisualForDesktop )
      {
        v7 = -2147467261;
        v10 = 964LL;
        goto LABEL_22;
      }
    }
    inserted = VisualCollection::InsertRelative(
                 (struct CVisual *)((char *)OverlayRootVisualForDesktop + 32),
                 (struct CVisual **)v18,
                 0LL,
                 0,
                 1);
    v7 = inserted;
    if ( inserted < 0 )
    {
      v9 = (unsigned int)inserted;
      v10 = 965LL;
      goto LABEL_23;
    }
    CProjectionBorderVisual::UpdateRect(v18, &v21);
    (*(void (__fastcall **)(CProjectionBorderVisual *))(*(_QWORD *)v18 + 88LL))(v18);
    CVisual::RenderRecursive(*((CVisual **)v18 + 3));
    v14 = Element[12];
    v15 = v14 + 1;
    v7 = v14 + 1 < v14 ? 0x80070216 : 0;
    if ( v14 + 1 >= v14 )
    {
      if ( v15 > Element[11] )
      {
        v16 = DynArrayImpl<0>::AddMultipleAndSet((__int64)(Element + 6), 8, 1, &v18);
        v7 = v16;
        if ( v16 >= 0 )
          goto LABEL_24;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)Element + 3) + 8LL * Element[12]) = v18;
        Element[12] = v15;
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0xB5u);
    }
    if ( v7 < 0 )
    {
      v10 = 970LL;
      goto LABEL_22;
    }
LABEL_24:
    v7 = 0;
    goto LABEL_25;
  }
  v7 = -2147418113;
LABEL_25:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v20);
  return (unsigned int)v7;
}
