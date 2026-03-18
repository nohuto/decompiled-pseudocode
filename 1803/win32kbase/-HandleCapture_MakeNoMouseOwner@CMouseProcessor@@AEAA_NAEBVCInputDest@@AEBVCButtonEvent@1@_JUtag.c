/*
 * XREFs of ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C00383C8
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0038520 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0036194 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ?GetDpiAwarenessContext@CInputDest@@QEBAKXZ @ 0x1C0036ED4 (-GetDpiAwarenessContext@CInputDest@@QEBAKXZ.c)
 *     ?IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z @ 0x1C0037000 (-IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00370AC (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0037360 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     PhysicalToLogicalDPIPoint @ 0x1C0057AE0 (PhysicalToLogicalDPIPoint.c)
 *     IsWindowDesktopComposed @ 0x1C005AF30 (IsWindowDesktopComposed.c)
 *     HMValidateSharedHandleNoRip @ 0x1C005C4B4 (HMValidateSharedHandleNoRip.c)
 *     ?GetInputDestFromForegroundCapture@QHelper@@YA?AUtagINPUTDEST@@XZ @ 0x1C0061B2C (-GetInputDestFromForegroundCapture@QHelper@@YA-AUtagINPUTDEST@@XZ.c)
 *     ApiSetEditionPostInputMessage @ 0x1C00651F8 (ApiSetEditionPostInputMessage.c)
 *     ?GetHardwareButton@CButtonEvent@CMouseProcessor@@QEBA?AW4ButtonNumber@@XZ @ 0x1C0065570 (-GetHardwareButton@CButtonEvent@CMouseProcessor@@QEBA-AW4ButtonNumber@@XZ.c)
 *     ?Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z @ 0x1C0065830 (-Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C006AB90 (_anonymous_namespace_--ValidateUIPI.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall CMouseProcessor::HandleCapture_MakeNoMouseOwner(
        CMouseProcessor *this,
        const struct CInputDest *a2,
        const struct CMouseProcessor::CButtonEvent *a3,
        __int64 a4,
        struct tagPOINT a5,
        unsigned int a6)
{
  _OWORD *InputDestFromForegroundCapture; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  char v20; // di
  int HardwareButton; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  bool v24; // zf
  int v26; // esi
  __int64 v27; // rcx
  __int64 v28; // rbx
  unsigned int DpiAwarenessContext; // eax
  unsigned __int16 v30; // dx
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned int v33; // eax
  int v34; // edx
  unsigned int v35; // ebx
  int v36; // edx
  __int64 PtiFromInputDest; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  _WORD v40[4]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v41; // [rsp+68h] [rbp-98h] BYREF
  _OWORD v42[11]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v43[176]; // [rsp+120h] [rbp+20h] BYREF
  _DWORD v44[18]; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v45; // [rsp+218h] [rbp+118h]
  int v46; // [rsp+224h] [rbp+124h]

  if ( (*(&InputDelegation::CInputDelegationInfo::gInstance + 4) & 2) == 0 )
  {
    InputDestFromForegroundCapture = (_OWORD *)QHelper::GetInputDestFromForegroundCapture(v43);
    v11 = InputDestFromForegroundCapture[1];
    v42[0] = *InputDestFromForegroundCapture;
    v12 = InputDestFromForegroundCapture[2];
    v42[1] = v11;
    v13 = InputDestFromForegroundCapture[3];
    v42[2] = v12;
    v14 = InputDestFromForegroundCapture[4];
    v42[3] = v13;
    v15 = InputDestFromForegroundCapture[5];
    v42[4] = v14;
    v16 = InputDestFromForegroundCapture[6];
    v42[5] = v15;
    v17 = InputDestFromForegroundCapture[8];
    v42[6] = v16;
    v42[7] = InputDestFromForegroundCapture[7];
    v18 = InputDestFromForegroundCapture[9];
    v42[8] = v17;
    v19 = InputDestFromForegroundCapture[10];
    v42[9] = v18;
    v42[10] = v19;
    CInputDest::CInputDest((CInputDest *)v44, (const struct tagINPUTDEST *)v42);
    v20 = 0;
    if ( !v44[0] || CInputDest::IsEqualByQ(a2, (const struct CInputDest *)v44) )
      goto LABEL_4;
    v26 = v46;
    v27 = 0LL;
    v28 = v45;
    if ( v46 == 2 )
      v27 = v45;
    if ( !v27 || (unsigned int)IsWindowDesktopComposed(v27) )
    {
      CInputDest::GetDpiAwarenessContext(a2);
      DpiAwarenessContext = CInputDest::GetDpiAwarenessContext((CInputDest *)v44);
      if ( (((unsigned __int16)(DpiAwarenessContext >> 8) ^ v30) & 0x1FF) != 0 )
      {
        v31 = 0LL;
        if ( v26 == 2 )
          v31 = v28;
        if ( v31 )
          v32 = HMValidateSharedHandleNoRip(*(_QWORD *)(*(_QWORD *)(v31 + 40) + 256LL));
        else
          v32 = 0LL;
        v41 = v32;
        v33 = CInputDest::GetDpiAwarenessContext((CInputDest *)v44);
        PhysicalToLogicalDPIPoint(v40, &a5, v33, &v41);
        v26 = v46;
        LODWORD(v28) = v45;
        a4 = v40[0] | (v40[2] << 16);
      }
    }
    if ( *(_DWORD *)(*(_QWORD *)a3 + 84LL) != 1 )
    {
      if ( !(unsigned __int8)anonymous_namespace_::ValidateUIPI(
                               *(_QWORD *)(*(_QWORD *)a3 + 108LL),
                               v44,
                               (char *)this + 8) )
        goto LABEL_28;
      v26 = v46;
      LODWORD(v28) = v45;
    }
    v34 = 0;
    if ( v26 == 2 )
      v34 = v28;
    v35 = a6;
    ApiSetEditionPostInputMessage((unsigned int)v44, v34, a6, 0, a4, 0, 0LL, 0LL, 0, *(_QWORD *)a3 + 80LL, 0LL, 0LL);
    v36 = 0;
    if ( v46 == 2 )
      v36 = v45;
    ApiSetEditionPostInputMessage(
      (unsigned int)v44,
      v36,
      v35 + 1,
      0,
      a4,
      0,
      0LL,
      0LL,
      0,
      *(_QWORD *)a3 + 80LL,
      0LL,
      0LL);
LABEL_28:
    PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest((__int64)v44, 2LL);
    if ( PtiFromInputDest )
    {
      if ( *(_QWORD *)(PtiFromInputDest + 664) )
      {
        v38 = anonymous_namespace_::GetPtiFromInputDest((__int64)v44, 2LL);
        if ( !v38 || (v39 = *(_QWORD *)(v38 + 600)) == 0 || (*(_DWORD *)(v39 + 8) & 1) == 0 )
        {
LABEL_7:
          CInputDest::SetEmpty((CInputDest *)v44);
          return v20;
        }
      }
    }
LABEL_4:
    HardwareButton = CMouseProcessor::CButtonEvent::GetHardwareButton(a3);
    v24 = (HardwareButton | *((_DWORD *)this + 636)) == 0;
    *((_DWORD *)this + 636) |= HardwareButton;
    if ( v24 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22);
    CMouseProcessor::MouseOwner::Set((CMouseProcessor *)((char *)this + 2552), a2);
    v20 = 1;
    goto LABEL_7;
  }
  return 1;
}
