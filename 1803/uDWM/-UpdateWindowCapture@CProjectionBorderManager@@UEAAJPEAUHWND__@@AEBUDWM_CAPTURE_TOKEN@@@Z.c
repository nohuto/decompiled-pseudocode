/*
 * XREFs of ?UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x18007DC70
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000F590 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180010A78 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049FC4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18007ADF4 (--0-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??1UpdateWindowCapture@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x18007B01C (--1UpdateWindowCapture@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ?FindElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@@@QEAAPEAUCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@T_LARGE_INTEGER@@@Z @ 0x18007B43C (-FindElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderM.c)
 *     ?StartActivity@UpdateWindowCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHWND__@@II@Z @ 0x18007C278 (-StartActivity@UpdateWindowCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHWND__@@II@Z.c)
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18007C7A4 (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAIPEAPEAVCapturedWindowSWRVisual@@@Z @ 0x18007E764 (-_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAIPEAPEAVCapturedWindow.c)
 *     ?_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@I@Z @ 0x18007ECE0 (-_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@I@Z.c)
 *     ?_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x18007EF80 (-_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 *     ?_UpdateTabGroupMap@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowSWRVisual@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x18007F490 (-_UpdateTabGroupMap@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowSWRVisual@@AEBU.c)
 */

__int64 __fastcall CProjectionBorderManager::UpdateWindowCapture(
        CProjectionBorderManager *this,
        HWND a2,
        const struct DWM_CAPTURE_TOKEN *a3)
{
  int v6; // ebx
  int v7; // edi
  CProjectionBorderManager *v8; // rcx
  int CapturedItemRootVisual; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  struct CapturedWindowSWRVisual *v12; // r8
  unsigned int *Element; // rdi
  CProjectionBorderManager *v14; // rcx
  unsigned int v16; // [rsp+20h] [rbp-E0h] BYREF
  struct CapturedWindowSWRVisual *v17; // [rsp+28h] [rbp-D8h] BYREF
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v19[40]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  v18 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v16 = 0;
  v17 = 0LL;
  v6 = *(_DWORD *)a3;
  v7 = *((_DWORD *)a3 + 1);
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowFrameLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v19,
    (__int64)"UpdateWindowCapture");
  v19[0] = &WindowFrameLoggingTelemetry::UpdateWindowCapture::`vftable';
  WindowFrameLoggingTelemetry::UpdateWindowCapture::StartActivity(
    (WindowFrameLoggingTelemetry::UpdateWindowCapture *)v19,
    a2,
    v7,
    v6);
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v17);
  CapturedItemRootVisual = CProjectionBorderManager::_GetCapturedItemRootVisual(v8, a2, &v16, &v17);
  v10 = CapturedItemRootVisual;
  if ( CapturedItemRootVisual >= 0 )
  {
    v12 = v17;
    v17 = 0LL;
    CapturedItemRootVisual = CProjectionBorderManager::_UpdateTabGroupMap(this, a2, v12, a3);
    v10 = CapturedItemRootVisual;
    if ( CapturedItemRootVisual >= 0 )
    {
      Element = (unsigned int *)CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_TAB_GROUP_MAP_ENTRY>::FindElement(
                                  (struct _RTL_GENERIC_TABLE *)((char *)this + 440),
                                  *(_QWORD *)a3);
      CapturedItemRootVisual = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 54) + 1240LL))(
                                 *((_QWORD *)this + 54),
                                 Element[2],
                                 v16);
      v10 = CapturedItemRootVisual;
      if ( CapturedItemRootVisual >= 0 )
      {
        CapturedItemRootVisual = CProjectionBorderManager::_SendBoundsToCaptureControllerFromWindow(
                                   this,
                                   a2,
                                   Element[2]);
        v10 = CapturedItemRootVisual;
        if ( CapturedItemRootVisual >= 0 )
        {
          CapturedItemRootVisual = CProjectionBorderManager::_SetProjectionBorderForWindow(v14, a2, 1);
          v10 = CapturedItemRootVisual;
          if ( CapturedItemRootVisual >= 0 )
          {
            wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
              (__int64)v19,
              0);
            v10 = 0;
            goto LABEL_13;
          }
          v11 = 383LL;
        }
        else
        {
          v11 = 380LL;
        }
      }
      else
      {
        v11 = 378LL;
      }
    }
    else
    {
      v11 = 372LL;
    }
  }
  else
  {
    v11 = 371LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"windows\\dwm\\udwm\\projectionbordermanager.cpp",
    (const char *)(unsigned int)CapturedItemRootVisual);
LABEL_13:
  WindowFrameLoggingTelemetry::UpdateWindowCapture::~UpdateWindowCapture((WindowFrameLoggingTelemetry::UpdateWindowCapture *)v19);
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v17);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v18);
  return v10;
}
