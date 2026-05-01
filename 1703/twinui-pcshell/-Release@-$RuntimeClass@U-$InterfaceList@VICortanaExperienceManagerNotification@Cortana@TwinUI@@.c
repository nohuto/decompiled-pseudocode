/*
 * XREFs of ?Release@?$RuntimeClass@U?$InterfaceList@VICortanaExperienceManagerNotification@Cortana@TwinUI@@U?$InterfaceList@UIClosable@Foundation@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800AE530
 * Callers:
 *     ?GetExperienceManager@CortanaExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x18009BD30 (-GetExperienceManager@CortanaExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspec.c)
 *     ?Release@CQuickConnectExperienceManager@@UEAAKXZ @ 0x1800AB840 (-Release@CQuickConnectExperienceManager@@UEAAKXZ.c)
 *     ?GetExperienceManager@QuickConnectExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x1800AE190 (-GetExperienceManager@QuickConnectExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUII.c)
 *     ??1?$ComPtr@VCQuickConnectExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B0600 (--1-$ComPtr@VCQuickConnectExperienceManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UILightDismissNotification@@U?$InterfaceList@UIQuickConnectExperienceManager@Experience@Shell@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x1800B0E20 (-Release@-$RuntimeClass@U-$InterfaceList@UILightDismissNotification@@U-$InterfaceList@UIQuickCon.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VICortanaExperienceManagerNotification@Cortana@TwinUI@@U?$InterfaceList@UIClosable@Foundation@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x1800B0E80 (-Release@-$RuntimeClass@U-$InterfaceList@VICortanaExperienceManagerNotification@Cor_ea_1800B0E80.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VICortanaExperienceManagerNotification@Cortana@TwinUI@@U?$InterfaceList@UIClosable@Foundation@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1800B0EE0 (-Release@-$RuntimeClass@U-$InterfaceList@VICortanaExperienceManagerNotification@Cor_ea_1800B0EE0.c)
 *     ??$Make@VCortanaExperienceManagerNotification@@QEAVCortanaSharedExperienceManager@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCortanaExperienceManagerNotification@@@12@$$QEBQEAVCortanaSharedExperienceManager@@@Z @ 0x1800BEDB8 (--$Make@VCortanaExperienceManagerNotification@@QEAVCortanaSharedExperienceManager@@@Details@WRL@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<TwinUI::Cortana::ICortanaExperienceManagerNotification,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IClosable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(
        volatile signed __int64 *a1)
{
  signed __int64 v1; // rdx
  unsigned __int32 v2; // ebx
  bool v3; // zf
  __int64 v4; // rax
  signed __int32 v5; // r8d

  v1 = *((_QWORD *)a1 + 5);
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
      v4 = _InterlockedCompareExchange64(a1 + 5, v1 - 1, v1);
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
