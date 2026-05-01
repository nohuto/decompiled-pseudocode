/*
 * XREFs of ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIPresentationReadyChangedEventArgs@Holographic@Shell@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800A66C0
 * Callers:
 *     ?Release@CPeopleTestExperienceManager@@UEAAKXZ @ 0x1800A6170 (-Release@CPeopleTestExperienceManager@@UEAAKXZ.c)
 *     ??$MakeAndInitialize@VCPeopleTestExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1800A6890 (--$MakeAndInitialize@VCPeopleTestExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Det.c)
 *     ??1?$ComPtr@VCPeopleTestExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A6A20 (--1-$ComPtr@VCPeopleTestExperienceManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIPeopleTestExperienceManager@Experience@Shell@Internal@Windows@@U?$InterfaceList@UIClosable@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x1800A6BC0 (-Release@-$RuntimeClass@U-$InterfaceList@UIPeopleTestExperienceManager@Experience@Shell@Internal.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIPeopleTestExperienceManager@Experience@Shell@Internal@Windows@@U?$InterfaceList@UIClosable@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x1800A6BF0 (-Release@-$RuntimeClass@U-$InterfaceList@UIPeopleTestExperienceManager@Experience@S_ea_1800A6BF0.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIPresentationReadyChangedEventArgs@Holographic@Shell@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1800A6C60 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@U_ea_1800A6C60.c)
 *     ?put_Visibility@Win32BackedViewHostItem@@UEAAJE@Z @ 0x1800E28F0 (-put_Visibility@Win32BackedViewHostItem@@UEAAJE@Z.c)
 *     ?RaisePresentationNotReady@Win32BackedViewHostItem@@UEAAJXZ @ 0x1800E3030 (-RaisePresentationNotReady@Win32BackedViewHostItem@@UEAAJXZ.c)
 *     ??$MakeAndInitialize@VPresentationReadyChangedEventArgs@@V1@_N@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VPresentationReadyChangedEventArgs@@@WRL@Microsoft@@@012@$$QEA_N@Z @ 0x1800E3DB4 (--$MakeAndInitialize@VPresentationReadyChangedEventArgs@@V1@_N@Details@WRL@Microsoft@@YAJV-$ComP.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIPresentationReadyChangedEventArgs@Holographic@Shell@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@WCA@EAAKXZ @ 0x1800E53E0 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@U_ea_1800E53E0.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIPresentationReadyChangedEventArgs@Holographic@Shell@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@WCI@EAAKXZ @ 0x1800E5460 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@U_ea_1800E5460.c)
 *     ?put_Visibility@ApplicationViewBackedViewHostItem@@UEAAJE@Z @ 0x1800E5DD0 (-put_Visibility@ApplicationViewBackedViewHostItem@@UEAAJE@Z.c)
 *     ?RaisePresentationNotReady@ApplicationViewBackedViewHostItem@@UEAAJXZ @ 0x1800E6B70 (-RaisePresentationNotReady@ApplicationViewBackedViewHostItem@@UEAAJXZ.c)
 *     ?OnImmersiveApplicationPresentationChange@ApplicationViewBackedViewHostItem@@UEAAJPEAUIImmersiveApplication@@W4IMMERSIVE_APPLICATION_PRESENTATION_CHANGE@@@Z @ 0x1800E6FF0 (-OnImmersiveApplicationPresentationChange@ApplicationViewBackedViewHostItem@@UEAAJPEAUIImmersive.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(
        volatile signed __int64 *a1)
{
  signed __int64 v1; // rdx
  unsigned __int32 v2; // ebx
  bool v3; // zf
  __int64 v4; // rax
  signed __int32 v5; // r8d

  v1 = *((_QWORD *)a1 + 7);
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
        (*(void (__fastcall **)(volatile signed __int64 *, __int64))(*a1 + 48))(a1, 1LL);
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
      v4 = _InterlockedCompareExchange64(a1 + 7, v1 - 1, v1);
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
