/*
 * XREFs of ?ShouldHandleActivation@FullScreenPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180020560
 * Callers:
 *     ?HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIUnknown@@@Z @ 0x180023A80 (-HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplication.c)
 * Callees:
 *     ?GetApplication@CWinRTApplicationView@@UEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x18001BA10 (-GetApplication@CWinRTApplicationView@@UEAAJPEAPEAUIImmersiveApplication@@@Z.c)
 *     ?GetAppUserModelId@CWinRTApplicationView@@UEAAJPEAPEAG@Z @ 0x18001C2C0 (-GetAppUserModelId@CWinRTApplicationView@@UEAAJPEAPEAG@Z.c)
 *     ?GetCurrentPositioner@PositionerPriority@@UEAA?AW4SHELL_POSITIONER_TYPE@@XZ @ 0x180024A60 (-GetCurrentPositioner@PositionerPriority@@UEAA-AW4SHELL_POSITIONER_TYPE@@XZ.c)
 *     ?GetPositionerPriority@CApplicationViewBase@@UEAAJPEAPEAUIShellPositionerPriority@@@Z @ 0x180024AB0 (-GetPositionerPriority@CApplicationViewBase@@UEAAJPEAPEAUIShellPositionerPriority@@@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002B360 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicati.c)
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x18007C640 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
_BOOL8 __fastcall FullScreenPositioner::ShouldHandleActivation(
        FullScreenPositioner *this,
        __int64 (__fastcall ***a2)(struct IApplicationView *, GUID *, CWinRTApplicationView **),
        struct IUnknown *a3)
{
  int DetailsForActivation; // eax
  __int64 (__fastcall *v6)(struct IApplicationView *, GUID *, CWinRTApplicationView **); // rax
  int Interface; // eax
  BOOL v8; // ebx
  __int64 (__fastcall *v9)(CWinRTApplicationView *, struct IImmersiveApplication **); // rax
  int v10; // eax
  int v11; // eax
  LSTATUS ValueW; // eax
  signed int v13; // ecx
  int lpVtbl; // eax
  struct IImmersiveApplication *v15; // rcx
  CWinRTApplicationView *v16; // rcx
  __int64 (__fastcall *v17)(CWinRTApplicationView *, unsigned __int16 **); // rax
  int AppUserModelId; // eax
  __int64 (__fastcall *v19)(CApplicationViewBase *__hidden, struct IShellPositionerPriority **); // rax
  int PositionerPriority; // eax
  __int64 (*v21)(void); // rax
  int CurrentPositioner; // eax
  struct IUnknownVtbl *v23; // rcx
  bool v25; // zf
  struct PositionerPropertySetHelpers::ViewSizePreferences *pdwType; // [rsp+20h] [rbp-60h]
  int pdwTypea; // [rsp+20h] [rbp-60h]
  DWORD v28; // [rsp+40h] [rbp-40h] BYREF
  DWORD pcbData; // [rsp+44h] [rbp-3Ch] BYREF
  struct IImmersiveApplication *v30; // [rsp+48h] [rbp-38h] BYREF
  CWinRTApplicationView *v31[3]; // [rsp+50h] [rbp-30h] BYREF
  LPVOID pv[3]; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  struct IUnknown pvData; // [rsp+B8h] [rbp+38h] BYREF

  v31[1] = (CWinRTApplicationView *)-2LL;
  DetailsForActivation = PositionerPropertySetHelpers::GetDetailsForActivation(
                           this,
                           (struct IApplicationView *)a3,
                           &pvData,
                           0LL,
                           pdwType);
  if ( DetailsForActivation < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x11A,
      (unsigned int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
      (const char *)(unsigned int)DetailsForActivation,
      pdwTypea);
  if ( ((__int64)pvData.lpVtbl & 0x10) != 0 )
    return 0LL;
  v31[2] = 0LL;
  v31[0] = 0LL;
  v30 = 0LL;
  v6 = **a2;
  if ( (char *)v6 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::QueryInterface )
    Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::QueryInterface(
                  a2,
                  &GUID_e99a73b1_cde0_477b_91b8_e995fa037387,
                  v31);
  else
    Interface = v6((struct IApplicationView *)a2, &GUID_e99a73b1_cde0_477b_91b8_e995fa037387, v31);
  v8 = 1;
  if ( Interface >= 0 )
  {
    v9 = *(__int64 (__fastcall **)(CWinRTApplicationView *, struct IImmersiveApplication **))(*(_QWORD *)v31[0] + 24LL);
    v10 = v9 == CWinRTApplicationView::GetApplication
        ? CWinRTApplicationView::GetApplication(v31[0], &v30)
        : v9(v31[0], &v30);
    if ( v10 >= 0
      && (*(unsigned int (__fastcall **)(struct IImmersiveApplication *, __int64))(*(_QWORD *)v30 + 328LL))(v30, 4LL) )
    {
      goto LABEL_22;
    }
  }
  v11 = dword_180438020;
  if ( dword_180438020 )
    goto LABEL_20;
  v28 = 0;
  pcbData = 4;
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\FullScreen",
             L"IsForcedCompatModeEnabled",
             0x10000012u,
             &v28,
             &pvData,
             &pcbData);
  LOWORD(v13) = 13;
  if ( ValueW )
  {
    if ( ValueW == 234 )
      ValueW = 13;
    v13 = ValueW;
    if ( ValueW <= 0 )
      goto LABEL_17;
    goto LABEL_16;
  }
  if ( v28 == 4 )
  {
    if ( LODWORD(pvData.lpVtbl) <= 1 )
    {
      v13 = 0;
      lpVtbl = 0;
      v25 = LODWORD(pvData.lpVtbl) == 1;
LABEL_47:
      LOBYTE(lpVtbl) = v25;
      goto LABEL_18;
    }
  }
  else if ( pcbData == 4 && (unsigned __int16)(LOWORD(pvData.lpVtbl) - 48) <= 1u )
  {
    v13 = 0;
    lpVtbl = 0;
    v25 = LOWORD(pvData.lpVtbl) == 49;
    goto LABEL_47;
  }
LABEL_16:
  v13 = (unsigned __int16)v13 | 0x80070000;
LABEL_17:
  lpVtbl = (int)pvData.lpVtbl;
LABEL_18:
  if ( v13 < 0 )
  {
    v11 = dword_180438020;
    goto LABEL_20;
  }
  if ( !lpVtbl )
  {
    v11 = 2;
    dword_180438020 = 2;
LABEL_20:
    if ( v11 != 1 )
      v8 = 0;
    goto LABEL_22;
  }
  dword_180438020 = 1;
LABEL_22:
  v15 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v16 = v31[0];
  if ( v31[0] )
  {
    v31[0] = 0LL;
    (*(void (__fastcall **)(CWinRTApplicationView *))(*(_QWORD *)v16 + 16LL))(v16);
  }
  if ( !v8 )
  {
    pv[0] = 0LL;
    pv[1] = (LPVOID)-1LL;
    pv[2] = (LPVOID)-1LL;
    v17 = (__int64 (__fastcall *)(CWinRTApplicationView *, unsigned __int16 **))(*a2)[17];
    if ( v17 == CWinRTApplicationView::GetAppUserModelId )
      AppUserModelId = CWinRTApplicationView::GetAppUserModelId((CWinRTApplicationView *)a2, (unsigned __int16 **)pv);
    else
      AppUserModelId = v17((CWinRTApplicationView *)a2, (unsigned __int16 **)pv);
    v8 = 0;
    if ( AppUserModelId >= 0
      && (*(int (__fastcall **)(_QWORD, LPVOID, struct IUnknown *))(**((_QWORD **)this + 13) + 24LL))(
           *((_QWORD *)this + 13),
           pv[0],
           &pvData) >= 0 )
    {
      LOBYTE(v8) = LODWORD(pvData.lpVtbl) == 2;
    }
    if ( pv[0] )
      CoTaskMemFree(pv[0]);
    if ( !v8 )
    {
      pvData.lpVtbl = 0LL;
      v19 = (__int64 (__fastcall *)(CApplicationViewBase *__hidden, struct IShellPositionerPriority **))(*a2)[33];
      if ( v19 == CApplicationViewBase::GetPositionerPriority )
        PositionerPriority = CApplicationViewBase::GetPositionerPriority(
                               (CApplicationViewBase *)a2,
                               (struct IShellPositionerPriority **)&pvData);
      else
        PositionerPriority = v19((CApplicationViewBase *)a2, (struct IShellPositionerPriority **)&pvData);
      if ( PositionerPriority >= 0 )
      {
        v21 = (__int64 (*)(void))*((_QWORD *)pvData.lpVtbl->QueryInterface + 3);
        if ( v21 == PositionerPriority::GetCurrentPositioner )
          CurrentPositioner = PositionerPriority::GetCurrentPositioner();
        else
          CurrentPositioner = v21();
        v8 = CurrentPositioner == 3;
      }
      v23 = pvData.lpVtbl;
      if ( pvData.lpVtbl )
      {
        pvData.lpVtbl = 0LL;
        (*((void (__fastcall **)(struct IUnknownVtbl *))v23->QueryInterface + 2))(v23);
      }
    }
  }
  return v8;
}
