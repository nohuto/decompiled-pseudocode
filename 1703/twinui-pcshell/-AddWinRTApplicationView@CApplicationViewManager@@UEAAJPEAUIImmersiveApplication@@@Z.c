/*
 * XREFs of ?AddWinRTApplicationView@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x1800730E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E470 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Mi.c)
 *     ?_AddApplicationView@CApplicationViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1800733BC (-_AddApplicationView@CApplicationViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ??$Make@VCWinRTApplicationView@@AEAPEAUIImmersiveApplication@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCWinRTApplicationView@@@12@AEAPEAUIImmersiveApplication@@@Z @ 0x180074F50 (--$Make@VCWinRTApplicationView@@AEAPEAUIImmersiveApplication@@@Details@WRL@Microsoft@@YA-AV-$Com.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x1800759F0 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VCApplicationViewBase@@U?$InterfaceList@UIWinRTApplicationView@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180077740 (-Release@-$RuntimeClass@U-$InterfaceList@VCApplicationViewBase@@U-$InterfaceList@UIWinRTApplicat.c)
 *     ?GetViewId@CWinRTApplicationView@@UEAAJPEAPEAG@Z @ 0x18007F3A0 (-GetViewId@CWinRTApplicationView@@UEAAJPEAPEAG@Z.c)
 *     ?_ReadPersistedData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEAXK@Z @ 0x1800816B8 (-_ReadPersistedData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEAXK@Z.c)
 *     ?RuntimeClassInitialize@CApplicationViewBase@@QEAAJXZ @ 0x1800819B8 (-RuntimeClassInitialize@CApplicationViewBase@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationViewManager::AddWinRTApplicationView(
        RTL_SRWLOCK *this,
        struct IImmersiveApplication *a2)
{
  struct IApplicationView *v3; // rbx
  int v4; // esi
  int ViewId; // eax
  volatile signed __int32 *v6; // rdi
  __int64 v7; // rdx
  int v8; // eax
  int v9; // eax
  _DWORD v11[2]; // [rsp+38h] [rbp-28h] BYREF
  int v12; // [rsp+40h] [rbp-20h]
  LPVOID pv[3]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  struct IImmersiveApplication *v15; // [rsp+98h] [rbp+38h] BYREF
  struct IApplicationView *v16; // [rsp+A0h] [rbp+40h] BYREF
  volatile signed __int32 *v17; // [rsp+A8h] [rbp+48h] BYREF

  v15 = a2;
  Microsoft::WRL::Details::Make<CWinRTApplicationView,IImmersiveApplication * &>(&v16, &v15);
  v3 = v16;
  if ( !v16 )
  {
    v4 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1DA,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_24;
  }
  pv[0] = 0LL;
  pv[1] = (LPVOID)-1LL;
  pv[2] = (LPVOID)-1LL;
  ViewId = CWinRTApplicationView::GetViewId((struct IApplicationView *)((char *)v16 + 8), (unsigned __int16 **)pv);
  v4 = ViewId;
  if ( ViewId >= 0 )
  {
    GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v17);
    v6 = v17;
    if ( !v17 )
      goto LABEL_14;
    v12 = 0;
    if ( ApplicationViewManagement::CPersistence::_ReadPersistedData(
           (ApplicationViewManagement::CPersistence *)(v17 + 8),
           (const unsigned __int16 *)pv[0],
           L"ShowInSwitchers",
           v11,
           0xCu) >= 0 )
    {
      if ( v11[0] == 4 )
      {
        if ( v11[1] == 1397960752 )
        {
          *((_BYTE *)v3 + 168) = v12 != 0;
          goto LABEL_13;
        }
        v7 = 62LL;
      }
      else
      {
        v7 = 61LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\Persistence.h",
        (const char *)0x8007000DLL);
    }
LABEL_13:
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v6);
LABEL_14:
    v8 = CApplicationViewBase::RuntimeClassInitialize(v3);
    v4 = v8;
    if ( v8 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2E,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
        (const char *)(unsigned int)v8);
    goto LABEL_16;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x22,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
    (const char *)(unsigned int)ViewId);
LABEL_16:
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
  if ( v4 >= 0 )
  {
    v17 = (volatile signed __int32 *)&this[45];
    AcquireSRWLockExclusive(this + 45);
    v9 = CApplicationViewManager::_AddApplicationView((CApplicationViewManager *)&this[-13], v3);
    v4 = v9;
    if ( v9 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1DE,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v9);
    if ( this != (RTL_SRWLOCK *)-360LL )
      ReleaseSRWLockExclusive(this + 45);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1DB,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v4);
  }
LABEL_24:
  if ( v3 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CApplicationViewBase,Microsoft::WRL::Details::InterfaceList<IWinRTApplicationView,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v3);
  return (unsigned int)v4;
}
