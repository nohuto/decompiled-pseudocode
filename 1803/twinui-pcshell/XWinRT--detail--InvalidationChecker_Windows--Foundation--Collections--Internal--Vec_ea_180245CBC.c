/*
 * XREFs of XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop_____ptr64__Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop_____ptr64____XWinRT::IntVersionTag_::Do__lambda_dfbad7935c0c472b2bc075847312c8bb___lambda_97598bd11a26f71520c553fb79ba3456___ @ 0x180245CBC
 * Callers:
 *     ?get_Current@?$SimpleVectorIterator@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@V?$Vector@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4785@U?$DefaultVectorOptions@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4785@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4785@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAUISwitchItem@Multitasking@ComposableShell@25@@Z @ 0x180250670 (-get_Current@-$SimpleVectorIterator@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Window.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$Destroy@UICoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUICoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Z @ 0x18025BCBC (--$Destroy@UICoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@InterfaceLifetimeTraits@XWi.c)
 */

__int64 __fastcall XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop_____ptr64__Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop_____ptr64____XWinRT::IntVersionTag_::Do__lambda_dfbad7935c0c472b2bc075847312c8bb___lambda_97598bd11a26f71520c553fb79ba3456___(
        unsigned int *a1,
        __int64 a2,
        _QWORD **a3,
        _QWORD **a4)
{
  unsigned int v4; // ebx
  int v8; // eax

  v4 = *a1;
  if ( (*a1 & 0x80000000) == 0 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*a3)[4] + 48LL))(
           (*a3)[4],
           *((unsigned int *)*a3 + 10),
           *a3[1]);
    v4 = v8;
    if ( a1[1] != *(_DWORD *)(a2 + 88) )
    {
      *a1 = -2147483636;
      if ( v8 < 0 )
      {
        RoTransformError((unsigned int)v8, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        XWinRT::InterfaceLifetimeTraits::Destroy<Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion>(**a4);
        *(_QWORD *)**a4 = 0LL;
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError(v4, 0LL);
  }
  return v4;
}
