/*
 * XREFs of ?Release@?$RuntimeClass@U?$InterfaceList@UIUserActivityMonitor@UserActivities@Internal@ApplicationModel@Windows@@U?$InterfaceList@UITaskDataBroker@DataEngine@TaskFlow@Shell@Internal@Windows@@U?$InterfaceList@VCImmersiveShellComponentWithGITSite@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800D49F0
 * Callers:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUserActivityMonitor@UserActivities@Internal@ApplicationModel@Windows@@U?$InterfaceList@UITaskDataBroker@DataEngine@TaskFlow@Shell@Internal@Windows@@U?$InterfaceList@VCImmersiveShellComponentWithGITSite@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1800D5520 (-Release@-$RuntimeClass@U-$InterfaceList@UIUserActivityMonitor@UserActivities@Inter_ea_1800D5520.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUserActivityMonitor@UserActivities@Internal@ApplicationModel@Windows@@U?$InterfaceList@UITaskDataBroker@DataEngine@TaskFlow@Shell@Internal@Windows@@U?$InterfaceList@VCImmersiveShellComponentWithGITSite@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WGI@EAAKXZ @ 0x1800D5530 (-Release@-$RuntimeClass@U-$InterfaceList@UIUserActivityMonitor@UserActivities@Inter_ea_1800D5530.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUserActivityMonitor@UserActivities@Internal@ApplicationModel@Windows@@U?$InterfaceList@UITaskDataBroker@DataEngine@TaskFlow@Shell@Internal@Windows@@U?$InterfaceList@VCImmersiveShellComponentWithGITSite@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x1800D5570 (-Release@-$RuntimeClass@U-$InterfaceList@UIUserActivityMonitor@UserActivities@Inter_ea_1800D5570.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUserActivityMonitor@UserActivities@Internal@ApplicationModel@Windows@@U?$InterfaceList@UITaskDataBroker@DataEngine@TaskFlow@Shell@Internal@Windows@@U?$InterfaceList@VCImmersiveShellComponentWithGITSite@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x1800D55C0 (-Release@-$RuntimeClass@U-$InterfaceList@UIUserActivityMonitor@UserActivities@Inter_ea_1800D55C0.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUserActivityMonitor@UserActivities@Internal@ApplicationModel@Windows@@U?$InterfaceList@UITaskDataBroker@DataEngine@TaskFlow@Shell@Internal@Windows@@U?$InterfaceList@VCImmersiveShellComponentWithGITSite@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WDI@EAAKXZ @ 0x1800D55D0 (-Release@-$RuntimeClass@U-$InterfaceList@UIUserActivityMonitor@UserActivities@Inter_ea_1800D55D0.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUserActivityMonitor@UserActivities@Internal@ApplicationModel@Windows@@U?$InterfaceList@UITaskDataBroker@DataEngine@TaskFlow@Shell@Internal@Windows@@U?$InterfaceList@VCImmersiveShellComponentWithGITSite@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WEA@EAAKXZ @ 0x1800D5620 (-Release@-$RuntimeClass@U-$InterfaceList@UIUserActivityMonitor@UserActivities@Inter_ea_1800D5620.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::ApplicationModel::Internal::UserActivities::IUserActivityMonitor,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataBroker,Microsoft::WRL::Details::InterfaceList<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(
        __int64 a1)
{
  signed __int64 v1; // rdx
  unsigned __int32 v2; // ebx
  bool v3; // zf
  __int64 v4; // rax
  signed __int32 v5; // r8d

  v1 = *(_QWORD *)(a1 + 136);
  if ( v1 < 0 )
  {
    do
LABEL_8:
      v5 = *(_DWORD *)(2 * v1 + 0x10);
    while ( v5 != 0x7FFFFFFF && v5 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v1 + 16), v5 - 1, v5) );
    v2 = v5 - 1;
LABEL_10:
    if ( !v2 )
    {
      if ( a1 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 56) + 64LL))(a1 + 56, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  else
  {
    while ( (_DWORD)v1 != 0x7FFFFFFF )
    {
      v2 = v1 - 1;
      v4 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 136), v1 - 1, v1);
      v3 = v1 == v4;
      v1 = v4;
      if ( v3 )
        goto LABEL_10;
      if ( v4 < 0 )
        goto LABEL_8;
    }
    return 2147483646;
  }
  return v2;
}
