/*
 * XREFs of ?GetCwm@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@UIClassicWindowPresentation@@@WRL@Microsoft@@XZ @ 0x18007A750
 * Callers:
 *     ?RefreshCollection@CApplicationViewManager@@UEAAJXZ @ 0x180072DC0 (-RefreshCollection@CApplicationViewManager@@UEAAJXZ.c)
 *     ?v_SetCloak@CWin32ApplicationView@@EEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z @ 0x18007BB90 (-v_SetCloak@CWin32ApplicationView@@EEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z.c)
 *     ?GetRootSwitchableOwner@CWin32ApplicationView@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x18007CFA0 (-GetRootSwitchableOwner@CWin32ApplicationView@@UEAAJPEAPEAUIApplicationView@@@Z.c)
 *     ?EnumerateOwnershipTree@CWin32ApplicationView@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x18007D0E0 (-EnumerateOwnershipTree@CWin32ApplicationView@@UEAAJPEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E470 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Mi.c)
 *     ?GetCwm@CApplicationViewManager@@QEBA?AV?$ComPtr@UIClassicWindowPresentation@@@WRL@Microsoft@@XZ @ 0x180074570 (-GetCwm@CApplicationViewManager@@QEBA-AV-$ComPtr@UIClassicWindowPresentation@@@WRL@Microsoft@@XZ.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x1800759F0 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall ApplicationViewManagement::CGlobals::GetCwm(__int64 *a1)
{
  volatile signed __int32 *v2; // rbx
  char *Cwm; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  char v9; // [rsp+38h] [rbp+10h] BYREF

  *a1 = 0LL;
  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v8);
  v2 = (volatile signed __int32 *)v8;
  if ( v8 )
  {
    Cwm = (char *)CApplicationViewManager::GetCwm(*(_QWORD *)(v8 + 40), &v8);
    v4 = 0LL;
    if ( &v9 != Cwm )
    {
      v4 = *(_QWORD *)Cwm;
      *(_QWORD *)Cwm = 0LL;
    }
    v5 = *a1;
    *a1 = v4;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    v6 = v8;
    if ( v8 )
    {
      v8 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v2);
  }
  return a1;
}
