/*
 * XREFs of ?BitmapReceived@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_K@Z @ 0x18007B5B4
 * Callers:
 *     ?SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x1800853B0 (-SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOT.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x18002EF9C (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CBitmapSource@@SAJIIIIPEBXPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180077888 (-Create@CBitmapSource@@SAJIIIIPEBXPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     Template_qp @ 0x180077E2C (Template_qp.c)
 *     ??0?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180079B04 (--0-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18007AFA0 (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ??1ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x18007B530 (--1ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAAXXZ @ 0x18007BCEC (-StartActivity@ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAAXXZ.c)
 *     ?_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x18007C0A8 (-_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 */

__int64 __fastcall CImmersiveIconicBitmapRegistry::BitmapReceived(
        CImmersiveIconicBitmapRegistry *this,
        struct CWindowData *a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6,
        unsigned __int64 a7)
{
  __int64 v9; // r14
  unsigned __int64 v11; // rcx
  bool v12; // bl
  HWND ShellWindowForDesktop; // rax
  unsigned __int64 v14; // rax
  int v15; // eax
  struct CBitmapSource *v16; // rsi
  unsigned int v17; // ebx
  DWORD v19; // [rsp+40h] [rbp-C0h] BYREF
  DWORD dwProcessId; // [rsp+44h] [rbp-BCh] BYREF
  CBaseObject *v21; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v22[40]; // [rsp+50h] [rbp-B0h] BYREF

  v21 = 0LL;
  v9 = a4;
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowFrameLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v22,
    (__int64)"ImmersiveIconicBitmapReceived");
  v22[0] = &WindowFrameLoggingTelemetry::ImmersiveIconicBitmapReceived::`vftable';
  WindowFrameLoggingTelemetry::ImmersiveIconicBitmapReceived::StartActivity((WindowFrameLoggingTelemetry::ImmersiveIconicBitmapReceived *)v22);
  if ( GetWindowThreadProcessId(*((HWND *)a2 + 5), &dwProcessId) && a3 == dwProcessId )
  {
    v12 = 1;
  }
  else
  {
    v12 = 0;
    ShellWindowForDesktop = CWindowList::GetShellWindowForDesktop(
                              *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 51),
                              *((_QWORD *)a2 + 15));
    if ( ShellWindowForDesktop )
    {
      v19 = 0;
      GetWindowThreadProcessId(ShellWindowForDesktop, &v19);
      v12 = v19 == a3;
    }
  }
  if ( (*((_BYTE *)a2 + 594) & 1) != 0
    && (v11 = a5 * v9, v11 <= 0xFFFFFFFF)
    && (v14 = 4LL * (unsigned int)v11, v14 <= 0xFFFFFFFF)
    && a7 >= (unsigned int)v14
    && v12 )
  {
    v15 = CBitmapSource::Create(
            v9,
            a5,
            v9,
            a5,
            a6,
            *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
            &v21);
    v16 = v21;
    v17 = v15;
    if ( v15 >= 0 )
    {
      *((_DWORD *)a2 + 42) = *a6 & 0xFF00 | ((unsigned __int8)*a6 << 16) | (unsigned __int8)BYTE2(*a6);
      CImmersiveIconicBitmapRegistry::_AcceptBitmap(this, a2, v16);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, (const int *const)"W", 1LL, v15, 0x16Du);
    }
    if ( v16 )
      CBaseObject::Release(v16);
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      Template_qp(v11, (__int64)&UdwmManageIconicThumbnail_Info, 1, *((_QWORD *)a2 + 5));
    v17 = -2147024809;
    MilInstrumentationCheckHR(0x14u, (const int *const)"W", 1LL, -2147024809, 0x169u);
  }
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
    (__int64)v22,
    v17);
  WindowFrameLoggingTelemetry::ImmersiveIconicBitmapReceived::~ImmersiveIconicBitmapReceived((WindowFrameLoggingTelemetry::ImmersiveIconicBitmapReceived *)v22);
  return v17;
}
