/*
 * XREFs of ?Release@?$RuntimeClass@U?$InterfaceList@UIDuplicateVisual@ComposableShell@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180169F80
 * Callers:
 *     ?MakeThumbnailInteropVisual@@YA?AV?$com_ptr_t@UIDuplicateVisual@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIThumbnailDeviceInternal@@PEAUIThumbnailFactoryInternal@@PEAUHWND__@@PEAURect@Foundation@Windows@@PEAUICompositor@Composition@UI@8@USize@78@UThumbnailProperties@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180169E60 (-MakeThumbnailInteropVisual@@YA-AV-$com_ptr_t@UIDuplicateVisual@ComposableShell@Internal@Windows.c)
 *     ??1?$ComPtr@VSolidColorVisual@@@WRL@Microsoft@@QEAA@XZ @ 0x180169EEC (--1-$ComPtr@VSolidColorVisual@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$Make@VThumbnailInteropVisual@@AEAPEAUIThumbnailDeviceInternal@@AEAPEAUIThumbnailFactoryInternal@@AEAPEAUHWND__@@AEAPEAURect@Foundation@Windows@@AEAPEAUICompositor@Composition@UI@7@AEAUSize@67@AEAUThumbnailProperties@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VThumbnailInteropVisual@@@12@AEAPEAUIThumbnailDeviceInternal@@AEAPEAUIThumbnailFactoryInternal@@AEAPEAUHWND__@@AEAPEAURect@Foundation@Windows@@AEAPEAUICompositor@Composition@UI@9@AEAUSize@89@AEAUThumbnailProperties@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18016A528 (--$Make@VThumbnailInteropVisual@@AEAPEAUIThumbnailDeviceInternal@@AEAPEAUIThumbnailFactoryIntern.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIDuplicateVisual@ComposableShell@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x18016A710 (-Release@-$RuntimeClass@U-$InterfaceList@UIDuplicateVisual@ComposableShell@Internal_ea_18016A710.c)
 *     ?MakeSolidColorVisual@@YA?AV?$com_ptr_t@UIDuplicateVisual@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@UColor@UI@Windows@@PEAUICompositor@Composition@45@USize@Foundation@5@@Z @ 0x18016A9E0 (-MakeSolidColorVisual@@YA-AV-$com_ptr_t@UIDuplicateVisual@ComposableShell@Internal@Windows@@Uerr.c)
 *     ??$Make@VSolidColorVisual@@AEAUColor@UI@Windows@@AEAPEAUICompositor@Composition@34@AEAUSize@Foundation@4@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VSolidColorVisual@@@12@AEAUColor@UI@Windows@@AEAPEAUICompositor@Composition@56@AEAUSize@Foundation@6@@Z @ 0x18016AAEC (--$Make@VSolidColorVisual@@AEAUColor@UI@Windows@@AEAPEAUICompositor@Composition@34@AEAUSize@Foun.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::ComposableShell::IDuplicateVisual,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(
        volatile signed __int64 *a1)
{
  signed __int64 v1; // rdx
  unsigned __int32 v2; // ebx
  bool v3; // zf
  __int64 v4; // rax
  signed __int32 v5; // r8d

  v1 = *((_QWORD *)a1 + 3);
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
        (*(void (__fastcall **)(volatile signed __int64 *, __int64))(*a1 + 88))(a1, 1LL);
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
      v4 = _InterlockedCompareExchange64(a1 + 3, v1 - 1, v1);
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
