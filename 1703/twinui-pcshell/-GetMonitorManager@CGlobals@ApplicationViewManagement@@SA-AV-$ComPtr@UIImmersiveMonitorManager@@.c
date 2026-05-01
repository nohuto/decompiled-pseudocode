/*
 * XREFs of ?GetMonitorManager@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@XZ @ 0x18007AAC8
 * Callers:
 *     ?GetMonitor@CWin32ApplicationView@@UEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x18007BA30 (-GetMonitor@CWin32ApplicationView@@UEAAJPEAPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E470 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Mi.c)
 *     ?GetMonitorManager@CApplicationViewManager@@QEBA?AV?$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@XZ @ 0x180074660 (-GetMonitorManager@CApplicationViewManager@@QEBA-AV-$ComPtr@UIImmersiveMonitorManager@@@WRL@Micr.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x1800759F0 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall ApplicationViewManagement::CGlobals::GetMonitorManager(__int64 *a1)
{
  volatile signed __int32 *v2; // rbx
  char *MonitorManager; // rax
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
    MonitorManager = (char *)CApplicationViewManager::GetMonitorManager(*(_QWORD *)(v8 + 40), &v8);
    v4 = 0LL;
    if ( &v9 != MonitorManager )
    {
      v4 = *(_QWORD *)MonitorManager;
      *(_QWORD *)MonitorManager = 0LL;
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
