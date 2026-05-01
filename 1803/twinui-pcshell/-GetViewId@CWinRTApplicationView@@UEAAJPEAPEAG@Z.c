/*
 * XREFs of ?GetViewId@CWinRTApplicationView@@UEAAJPEAPEAG@Z @ 0x18001CB50
 * Callers:
 *     ?RuntimeClassInitialize@CWinRTApplicationView@@QEAAJXZ @ 0x18001B87C (-RuntimeClassInitialize@CWinRTApplicationView@@QEAAJXZ.c)
 *     ?SetShowInSwitchers@CWinRTApplicationView@@UEAAJH@Z @ 0x18001BEA0 (-SetShowInSwitchers@CWinRTApplicationView@@UEAAJH@Z.c)
 *     ?SetVirtualDesktopId@CApplicationViewBase@@UEAAJAEBU_GUID@@@Z @ 0x180024B30 (-SetVirtualDesktopId@CApplicationViewBase@@UEAAJAEBU_GUID@@@Z.c)
 *     ?RuntimeClassInitialize@CApplicationViewBase@@QEAAJXZ @ 0x1800250F4 (-RuntimeClassInitialize@CApplicationViewBase@@QEAAJXZ.c)
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18002CE80 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 * Callees:
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18001D0C0 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWinRTApplicationView::GetViewId(CWinRTApplicationView *this, LPVOID *a2)
{
  CImmersiveApp *v3; // rcx
  __int64 (__fastcall *v4)(CImmersiveApp *__hidden, unsigned __int16 **); // rax
  int v5; // ebx
  int v6; // eax
  int v8; // [rsp+20h] [rbp-48h]
  LPVOID pv[3]; // [rsp+28h] [rbp-40h] BYREF
  LPVOID v10; // [rsp+40h] [rbp-28h] BYREF
  __int64 v11; // [rsp+48h] [rbp-20h]
  __int64 v12; // [rsp+50h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v8 = -2;
  *a2 = 0LL;
  pv[0] = 0LL;
  v3 = (CImmersiveApp *)*((_QWORD *)this + 23);
  pv[1] = (LPVOID)-1LL;
  pv[2] = (LPVOID)-1LL;
  v4 = *(__int64 (__fastcall **)(CImmersiveApp *__hidden, unsigned __int16 **))(*(_QWORD *)v3 + 40LL);
  if ( v4 == CImmersiveApp::GetUniqueId )
  {
    pv[0] = 0LL;
    v10 = 0LL;
    v11 = 0LL;
    v12 = 0LL;
    v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
           &v10,
           L"%s+%u",
           *((_QWORD *)v3 + 57),
           *((unsigned int *)v3 + 116),
           -2LL);
    if ( v5 < 0 )
    {
      if ( v10 )
        CoTaskMemFree(v10);
    }
    else
    {
      pv[0] = v10;
    }
  }
  else
  {
    v5 = v4(v3, (unsigned __int16 **)pv);
  }
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x36,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)v5,
      v8);
  }
  else
  {
    v10 = 0LL;
    v11 = 0LL;
    v12 = 0LL;
    v6 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
           &v10,
           L"WRT:%s",
           pv[0]);
    v5 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x39,
        (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
        (const char *)(unsigned int)v6,
        v8);
      if ( v10 )
        CoTaskMemFree(v10);
    }
    else
    {
      *a2 = v10;
      v5 = 0;
    }
  }
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
  return (unsigned int)v5;
}
