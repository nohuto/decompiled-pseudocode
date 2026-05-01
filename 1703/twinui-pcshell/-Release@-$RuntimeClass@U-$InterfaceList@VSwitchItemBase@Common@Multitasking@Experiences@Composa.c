/*
 * XREFs of ?Release@?$RuntimeClass@U?$InterfaceList@VSwitchItemBase@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$InterfaceList@UIAppViewSwitchItem@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180164610
 * Callers:
 *     ?AppViewSwitchItem_CreateInstance@@YAJPEAUIApplicationView@@PEAUIApplicationViewIconLoader@@PEAUIThumbnailInteropDevice@@AEBU_GUID@@PEAPEAX@Z @ 0x1801641E4 (-AppViewSwitchItem_CreateInstance@@YAJPEAUIApplicationView@@PEAUIApplicationViewIconLoader@@PEAU.c)
 *     ??1?$ComPtr@VAppViewSwitchItem@@@WRL@Microsoft@@QEAA@XZ @ 0x180164444 (--1-$ComPtr@VAppViewSwitchItem@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VSwitchItemBase@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$InterfaceList@UIAppViewSwitchItem@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WIA@EAAKXZ @ 0x180164A80 (-Release@-$RuntimeClass@U-$InterfaceList@VSwitchItemBase@Common@Multitasking@Experi_ea_180164A80.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VSwitchItemBase@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$InterfaceList@UIAppViewSwitchItem@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x180164A90 (-Release@-$RuntimeClass@U-$InterfaceList@VSwitchItemBase@Common@Multitasking@Experi_ea_180164A90.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VSwitchItemBase@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$InterfaceList@UIAppViewSwitchItem@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WII@EAAKXZ @ 0x180164AB0 (-Release@-$RuntimeClass@U-$InterfaceList@VSwitchItemBase@Common@Multitasking@Experi_ea_180164AB0.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VSwitchItemBase@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$InterfaceList@UIAppViewSwitchItem@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WJA@EAAKXZ @ 0x180164AE0 (-Release@-$RuntimeClass@U-$InterfaceList@VSwitchItemBase@Common@Multitasking@Experi_ea_180164AE0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemBase,Microsoft::WRL::Details::InterfaceList<IAppViewSwitchItem,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(
        volatile signed __int64 *a1)
{
  signed __int64 v1; // rdx
  unsigned __int32 v2; // ebx
  bool v3; // zf
  __int64 v4; // rax
  signed __int32 v5; // r8d

  v1 = *((_QWORD *)a1 + 22);
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
        (*(void (__fastcall **)(volatile signed __int64 *, __int64))(*a1 + 128))(a1, 1LL);
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
      v4 = _InterlockedCompareExchange64(a1 + 22, v1 - 1, v1);
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
