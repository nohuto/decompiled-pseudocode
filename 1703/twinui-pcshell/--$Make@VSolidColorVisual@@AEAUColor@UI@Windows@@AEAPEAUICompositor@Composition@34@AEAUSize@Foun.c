/*
 * XREFs of ??$Make@VSolidColorVisual@@AEAUColor@UI@Windows@@AEAPEAUICompositor@Composition@34@AEAUSize@Foundation@4@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VSolidColorVisual@@@12@AEAUColor@UI@Windows@@AEAPEAUICompositor@Composition@56@AEAUSize@Foundation@6@@Z @ 0x18016AAEC
 * Callers:
 *     ??$MakeOrThrow@VSolidColorVisual@@AEAUColor@UI@Windows@@AEAPEAUICompositor@Composition@34@AEAUSize@Foundation@4@@wil@@YA?AV?$ComPtr@VSolidColorVisual@@@WRL@Microsoft@@AEAUColor@UI@Windows@@AEAPEAUICompositor@Composition@56@AEAUSize@Foundation@6@@Z @ 0x18016AA9C (--$MakeOrThrow@VSolidColorVisual@@AEAUColor@UI@Windows@@AEAPEAUICompositor@Composition@34@AEAUSi.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIDuplicateVisual@ComposableShell@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180169F80 (-Release@-$RuntimeClass@U-$InterfaceList@UIDuplicateVisual@ComposableShell@Internal@Windows@@VNi.c)
 *     ??0SolidColorVisual@@QEAA@UColor@UI@Windows@@PEAUICompositor@Composition@23@USize@Foundation@3@@Z @ 0x18016A72C (--0SolidColorVisual@@QEAA@UColor@UI@Windows@@PEAUICompositor@Composition@23@USize@Foundation@3@@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
volatile signed __int64 **__fastcall Microsoft::WRL::Details::Make<SolidColorVisual,Windows::UI::Color &,Windows::UI::Composition::ICompositor * &,Windows::Foundation::Size &>(
        volatile signed __int64 **a1,
        unsigned int *a2,
        __int64 *a3,
        __int64 *a4)
{
  _QWORD *v8; // rax
  volatile signed __int64 *v9; // rdi

  *a1 = 0LL;
  v8 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v9 = SolidColorVisual::SolidColorVisual(v8, *a2, *a3, *a4);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::ComposableShell::IDuplicateVisual,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(*a1);
    *a1 = v9;
  }
  return a1;
}
