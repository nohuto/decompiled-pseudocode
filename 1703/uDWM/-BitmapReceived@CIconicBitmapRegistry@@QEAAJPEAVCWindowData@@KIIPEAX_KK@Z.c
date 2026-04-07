/*
 * XREFs of ?BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z @ 0x180079D88
 * Callers:
 *     ?SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x1800853B0 (-SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOT.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x18002EF9C (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z @ 0x18003E4F0 (-DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z.c)
 *     ?CanAcceptBitmap@CIconicBitmapRegistry@@AEAA_NPEAVCWindowData@@@Z @ 0x18003E790 (-CanAcceptBitmap@CIconicBitmapRegistry@@AEAA_NPEAVCWindowData@@@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CBitmapSource@@SAJIIIIPEBXPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180077888 (-Create@CBitmapSource@@SAJIIIIPEBXPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     Template_qp @ 0x180077E2C (Template_qp.c)
 *     ??0?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180079B04 (--0-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??1IconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x180079C78 (--1IconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ?AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x180079CA0 (-AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 *     ?StartActivity@IconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAAXXZ @ 0x18007AEC8 (-StartActivity@IconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18007AFA0 (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvide.c)
 */

__int64 __fastcall CIconicBitmapRegistry::BitmapReceived(
        CWindowIconic ****this,
        struct CWindowData *a2,
        int a3,
        unsigned int a4,
        int nNumber,
        void *a6,
        unsigned __int64 a7,
        char a8)
{
  __int64 v10; // r14
  unsigned int v11; // ebx
  unsigned __int64 v13; // rcx
  bool v14; // r15
  HWND ShellWindowForDesktop; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // r10d
  __int64 v19; // rcx
  DWORD v20; // ebx
  unsigned int v21; // r8d
  DWORD v22; // r15d
  unsigned int v23; // r9d
  int v24; // eax
  CBaseObject *v25; // rsi
  struct CBitmapSource *v26; // r8
  DWORD v28[2]; // [rsp+40h] [rbp-C0h] BYREF
  DWORD dwProcessId; // [rsp+48h] [rbp-B8h] BYREF
  CBaseObject *v30; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v31[40]; // [rsp+60h] [rbp-A0h] BYREF

  v10 = a4;
  v11 = 0;
  v30 = 0LL;
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowFrameLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v31,
    (__int64)"IconicBitmapReceived");
  v31[0] = &WindowFrameLoggingTelemetry::IconicBitmapReceived::`vftable';
  WindowFrameLoggingTelemetry::IconicBitmapReceived::StartActivity((WindowFrameLoggingTelemetry::IconicBitmapReceived *)v31);
  if ( GetWindowThreadProcessId(*((HWND *)a2 + 5), &dwProcessId) && a3 == dwProcessId )
  {
    v14 = 1;
  }
  else
  {
    v14 = 0;
    ShellWindowForDesktop = CWindowList::GetShellWindowForDesktop(
                              *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 51),
                              *((_QWORD *)a2 + 15));
    if ( ShellWindowForDesktop )
    {
      v28[0] = 0;
      GetWindowThreadProcessId(ShellWindowForDesktop, v28);
      v14 = v28[0] == a3;
    }
  }
  if ( (*((_BYTE *)a2 + 594) & 1) != 0
    && (v13 = (unsigned int)nNumber * v10, v13 <= 0xFFFFFFFF)
    && (v16 = 4LL * (unsigned int)v13, v16 <= 0xFFFFFFFF)
    && a7 >= (unsigned int)v16
    && v14 )
  {
    if ( CIconicBitmapRegistry::CanAcceptBitmap((CIconicBitmapRegistry *)this, a2) )
    {
      if ( (unsigned int)DwmGetIdealIconicThumbnailSize(v18, (struct tagSIZE *)v28) )
      {
        v20 = v28[0];
        v21 = v10;
        v22 = v28[1];
        v23 = nNumber;
        if ( (int)v10 <= (int)v28[0] || (signed int)(v28[1] * v10) > (signed int)(nNumber * v28[0]) )
        {
          if ( nNumber > (int)v28[1] && (signed int)(v28[1] * v10) > (signed int)(nNumber * v28[0]) )
          {
            v21 = MulDiv(v10, v28[1], nNumber);
            v23 = v22;
          }
        }
        else
        {
          v23 = MulDiv(nNumber, v28[0], v10);
          v21 = v20;
        }
        v24 = CBitmapSource::Create(
                v10,
                nNumber,
                v21,
                v23,
                a6,
                *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                &v30);
        v25 = v30;
        v11 = v24;
        if ( v24 >= 0 )
        {
          v26 = v30;
          *((_BYTE *)a2 + 594) &= ~2u;
          *((_BYTE *)a2 + 594) |= 2 * (a8 & 1);
          CIconicBitmapRegistry::AcceptBitmap(this, a2, v26);
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, (const int *const)"W", 1LL, v24, 0x251u);
        }
        if ( v25 )
          CBaseObject::Release(v25);
      }
      else
      {
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
          Template_qp(v19, (__int64)&UdwmManageIconicThumbnail_Info, 1, *((_QWORD *)a2 + 5));
        v11 = -2147467259;
        MilInstrumentationCheckHR(0x14u, (const int *const)"W", 1LL, -2147467259, 0x240u);
      }
    }
    else if ( ((unsigned __int8)v18 & (unsigned __int8)Microsoft_Windows_Dwm_UdwmEnableBits) != 0 )
    {
      Template_qp(v17, (__int64)&UdwmManageIconicThumbnail_Info, v18, *((_QWORD *)a2 + 5));
    }
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      Template_qp(v13, (__int64)&UdwmManageIconicThumbnail_Info, 1, *((_QWORD *)a2 + 5));
    v11 = -2147024809;
    MilInstrumentationCheckHR(0x14u, (const int *const)"W", 1LL, -2147024809, 0x230u);
  }
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v31, v11);
  WindowFrameLoggingTelemetry::IconicBitmapReceived::~IconicBitmapReceived((WindowFrameLoggingTelemetry::IconicBitmapReceived *)v31);
  return v11;
}
