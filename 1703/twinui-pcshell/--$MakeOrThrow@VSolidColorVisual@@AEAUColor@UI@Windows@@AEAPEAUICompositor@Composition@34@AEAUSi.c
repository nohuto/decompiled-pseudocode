/*
 * XREFs of ??$MakeOrThrow@VSolidColorVisual@@AEAUColor@UI@Windows@@AEAPEAUICompositor@Composition@34@AEAUSize@Foundation@4@@wil@@YA?AV?$ComPtr@VSolidColorVisual@@@WRL@Microsoft@@AEAUColor@UI@Windows@@AEAPEAUICompositor@Composition@56@AEAUSize@Foundation@6@@Z @ 0x18016AA9C
 * Callers:
 *     ?MakeSolidColorVisual@@YA?AV?$com_ptr_t@UIDuplicateVisual@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@UColor@UI@Windows@@PEAUICompositor@Composition@45@USize@Foundation@5@@Z @ 0x18016A9E0 (-MakeSolidColorVisual@@YA-AV-$com_ptr_t@UIDuplicateVisual@ComposableShell@Internal@Windows@@Uerr.c)
 * Callees:
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008A9C0 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$Make@VSolidColorVisual@@AEAUColor@UI@Windows@@AEAPEAUICompositor@Composition@34@AEAUSize@Foundation@4@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VSolidColorVisual@@@12@AEAUColor@UI@Windows@@AEAPEAUICompositor@Composition@56@AEAUSize@Foundation@6@@Z @ 0x18016AAEC (--$Make@VSolidColorVisual@@AEAUColor@UI@Windows@@AEAPEAUICompositor@Composition@34@AEAUSize@Foun.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall wil::MakeOrThrow<SolidColorVisual,Windows::UI::Color &,Windows::UI::Composition::ICompositor * &,Windows::Foundation::Size &>(
        _QWORD *a1,
        __int64 a2)
{
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Microsoft::WRL::Details::Make<SolidColorVisual,Windows::UI::Color &,Windows::UI::Composition::ICompositor * &,Windows::Foundation::Size &>(
    a1,
    a2);
  if ( !*a1 )
  {
    wil::details::in1diag3::_Throw_NullAlloc(retaddr, (void *)0x38, (__int64)"internal\\sdk\\inc\\wil/wrl.h", v3);
    __debugbreak();
  }
  return a1;
}
