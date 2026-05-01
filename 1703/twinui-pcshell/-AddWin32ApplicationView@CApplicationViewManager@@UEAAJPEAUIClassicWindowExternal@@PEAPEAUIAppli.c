/*
 * XREFs of ?AddWin32ApplicationView@CApplicationViewManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUIApplicationView@@@Z @ 0x180072FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_AddApplicationView@CApplicationViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1800733BC (-_AddApplicationView@CApplicationViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ??$Make@VCWin32ApplicationView@@AEAPEAUIClassicWindowExternal@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCWin32ApplicationView@@@12@AEAPEAUIClassicWindowExternal@@@Z @ 0x180074EF8 (--$Make@VCWin32ApplicationView@@AEAPEAUIClassicWindowExternal@@@Details@WRL@Microsoft@@YA-AV-$Co.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VCApplicationViewBase@@U?$InterfaceList@UIWin32ApplicationView@@U?$InterfaceList@UIAppSizeConstraintsCallback@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800776D0 (-Release@-$RuntimeClass@U-$InterfaceList@VCApplicationViewBase@@U-$InterfaceList@UIWin32Applicat.c)
 *     ?RuntimeClassInitialize@CWin32ApplicationView@@QEAAJXZ @ 0x18007B464 (-RuntimeClassInitialize@CWin32ApplicationView@@QEAAJXZ.c)
 *     ?QueryInterface@CWin32ApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007B7F0 (-QueryInterface@CWin32ApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationViewManager::AddWin32ApplicationView(
        RTL_SRWLOCK *this,
        struct IClassicWindowExternal *a2,
        struct IApplicationView **a3)
{
  CWin32ApplicationView *v5; // rdi
  unsigned int v6; // esi
  int v7; // eax
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IClassicWindowExternal *v11; // [rsp+58h] [rbp+10h] BYREF
  CWin32ApplicationView *v12; // [rsp+68h] [rbp+20h] BYREF

  v11 = a2;
  Microsoft::WRL::Details::Make<CWin32ApplicationView,IClassicWindowExternal * &>(&v12, &v11);
  v5 = v12;
  if ( v12 )
  {
    v7 = CWin32ApplicationView::RuntimeClassInitialize(v12);
    v6 = v7;
    if ( v7 >= 0 )
    {
      AcquireSRWLockExclusive(this + 45);
      v8 = CApplicationViewManager::_AddApplicationView((CApplicationViewManager *)&this[-13], v5);
      v6 = v8;
      if ( v8 >= 0 )
      {
        if ( this != (RTL_SRWLOCK *)-360LL )
          ReleaseSRWLockExclusive(this + 45);
        CWin32ApplicationView::QueryInterface(v5, &GUID_9ac0b5c8_1484_4c5b_9533_4134a0f97cea, (void **)a3);
        v6 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x1D0,
          (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v8);
        if ( this != (RTL_SRWLOCK *)-360LL )
          ReleaseSRWLockExclusive(this + 45);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x1CC,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v7);
    }
  }
  else
  {
    v6 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1CB,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)0x8007000ELL);
  }
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CApplicationViewBase,Microsoft::WRL::Details::InterfaceList<IWin32ApplicationView,Microsoft::WRL::Details::InterfaceList<IAppSizeConstraintsCallback,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v5);
  return v6;
}
