/*
 * XREFs of ?ReportStopActivity@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x180058DA8
 * Callers:
 *     ?OnShellHookMessage@ViewEventDispatcher@@UEAAJ_K_J@Z @ 0x180034860 (-OnShellHookMessage@ViewEventDispatcher@@UEAAJ_K_J@Z.c)
 *     ?ViewCreated@ViewEventDispatcher@@QEAAXIPEAUIUnknown@@@Z @ 0x180035DF0 (-ViewCreated@ViewEventDispatcher@@QEAAXIPEAUIUnknown@@@Z.c)
 *     ?ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800368C0 (-ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIProp.c)
 *     ?RaiseViewPropertyChanged@ViewManagerBridge@@AEAAJPEAUIMessageMap@@PEAUMsgString@@@Z @ 0x180054F60 (-RaiseViewPropertyChanged@ViewManagerBridge@@AEAAJPEAUIMessageMap@@PEAUMsgString@@@Z.c)
 *     ?OnAdded@ViewManagerBridge@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z @ 0x180056710 (-OnAdded@ViewManagerBridge@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z.c)
 *     ?GetViewClientExtensionMapPropertyAsInt@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAUHSTRING__@@PEAH@Z @ 0x180057290 (-GetViewClientExtensionMapPropertyAsInt@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAUHSTRING__@@PEA.c)
 *     ?GetViewClientExtensionMapPropertyAsUInt@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAUHSTRING__@@PEAI@Z @ 0x180057850 (-GetViewClientExtensionMapPropertyAsUInt@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAUHSTRING__@@PE.c)
 *     ?OnRequestNavigateToView@ViewManagerBridge@@UEAAJIIW4ViewActivationFlags@Navigation@@_KPEAUMsgBlob@@@Z @ 0x180057FC0 (-OnRequestNavigateToView@ViewManagerBridge@@UEAAJIIW4ViewActivationFlags@Navigation@@_KPEAUMsgBl.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180058F40 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180059064 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
        ViewManagerInteropTraceLogging::RaiseViewPropertyChanged *a1)
{
  void (*v1)(void); // rax

  v1 = *(void (**)(void))(*(_QWORD *)a1 + 8LL);
  if ( (char *)v1 == (char *)ViewManagerInteropTraceLogging::RaiseViewPropertyChanged::StopActivity )
  {
    ViewManagerInteropTraceLogging::RaiseViewPropertyChanged::StopActivity(a1);
  }
  else if ( (char *)v1 == (char *)ViewManagerInteropTraceLogging::HandleWindowCreated::StopActivity )
  {
    ViewManagerInteropTraceLogging::HandleWindowCreated::StopActivity(a1);
  }
  else if ( (char *)v1 == (char *)ViewManagerInteropTraceLogging::OnRequestNavigateToView::StopActivity )
  {
    ViewManagerInteropTraceLogging::OnRequestNavigateToView::StopActivity(a1);
  }
  else if ( (char *)v1 == (char *)ViewManagerInteropTraceLogging::HandleViewCreated::StopActivity )
  {
    ViewManagerInteropTraceLogging::HandleViewCreated::StopActivity(a1);
  }
  else if ( (char *)v1 == (char *)ViewManagerInteropTraceLogging::OnAdded::StopActivity )
  {
    ViewManagerInteropTraceLogging::OnAdded::StopActivity(a1);
  }
  else
  {
    v1();
  }
}
