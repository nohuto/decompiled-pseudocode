/*
 * XREFs of ?StopWindowCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x18007D670
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000F590 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180010A78 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049FC4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?RemoveElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@@@QEAAHPEAUCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@@Z @ 0x1800756D0 (-RemoveElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorde.c)
 *     ??0?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18007ADF4 (--0-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??1StopWindowCapture@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x18007AFF4 (--1StopWindowCapture@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ?FindElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@@@QEAAPEAUCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@T_LARGE_INTEGER@@@Z @ 0x18007B43C (-FindElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderM.c)
 *     ?StartActivity@StopWindowCapture@WindowFrameLoggingTelemetry@@QEAAXII@Z @ 0x18007C180 (-StartActivity@StopWindowCapture@WindowFrameLoggingTelemetry@@QEAAXII@Z.c)
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18007C7A4 (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?_EnsureCursorStateForCapture@CProjectionBorderManager@@AEAAXXZ @ 0x18007E408 (-_EnsureCursorStateForCapture@CProjectionBorderManager@@AEAAXXZ.c)
 *     ?_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x18007EF80 (-_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::StopWindowCapture(
        CProjectionBorderManager *this,
        const struct DWM_CAPTURE_TOKEN *a2)
{
  int v4; // ebx
  int v5; // edi
  HWND *Element; // rax
  CProjectionBorderManager *v7; // rcx
  unsigned int v8; // edi
  HWND *v9; // rsi
  int v10; // eax
  int v11; // ebx
  __int64 v12; // rdx
  int v14[2]; // [rsp+20h] [rbp-178h] BYREF
  _QWORD v15[40]; // [rsp+30h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+0h]

  *(_QWORD *)v14 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = *(_DWORD *)a2;
  v5 = *((_DWORD *)a2 + 1);
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowFrameLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v15,
    (__int64)"StopWindowCapture");
  v15[0] = &WindowFrameLoggingTelemetry::StopWindowCapture::`vftable';
  WindowFrameLoggingTelemetry::StopWindowCapture::StartActivity(
    (WindowFrameLoggingTelemetry::StopWindowCapture *)v15,
    v5,
    v4);
  Element = (HWND *)CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_TAB_GROUP_MAP_ENTRY>::FindElement(
                      (struct _RTL_GENERIC_TABLE *)((char *)this + 440),
                      *(_QWORD *)a2);
  v8 = 0;
  v9 = Element;
  if ( !Element )
  {
    v11 = -2147418113;
    goto LABEL_9;
  }
  v10 = CProjectionBorderManager::_SetProjectionBorderForWindow(v7, Element[2], 0);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = 401LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"windows\\dwm\\udwm\\projectionbordermanager.cpp",
      (const char *)(unsigned int)v10);
LABEL_9:
    v8 = v11;
    goto LABEL_10;
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 54) + 1240LL))(
          *((_QWORD *)this + 54),
          *((unsigned int *)v9 + 2),
          0LL);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = 406LL;
    goto LABEL_6;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 54) + 128LL))(
    *((_QWORD *)this + 54),
    *((unsigned int *)v9 + 2));
  *((_DWORD *)v9 + 2) = 0;
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease((CBaseObject **)v9 + 3);
  CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_TAB_GROUP_MAP_ENTRY>::RemoveElement(
    (PRTL_GENERIC_TABLE)((char *)this + 440),
    (CBaseObject **)v9);
  CProjectionBorderManager::_EnsureCursorStateForCapture(this);
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v15, 0);
LABEL_10:
  WindowFrameLoggingTelemetry::StopWindowCapture::~StopWindowCapture((WindowFrameLoggingTelemetry::StopWindowCapture *)v15);
  CGuard<CDwmCS>::~CGuard<CDwmCS>((struct _RTL_CRITICAL_SECTION **)v14);
  return v8;
}
