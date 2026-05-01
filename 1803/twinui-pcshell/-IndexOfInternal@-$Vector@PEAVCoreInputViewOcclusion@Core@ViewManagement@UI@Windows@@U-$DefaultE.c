/*
 * XREFs of ?IndexOfInternal@?$Vector@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@U?$DefaultEqualityPredicate@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@U?$DefaultVectorOptions@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@@Internal@Collections@Foundation@Windows@@AEAAJPEAPEAUICoreInputViewOcclusion@Core@ViewManagement@UI@5@IPEAU67895@PEAIPEAE@Z @ 0x180249BF8
 * Callers:
 *     ?IndexOf@?$Vector@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@U?$DefaultVectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@@Internal@Collections@Foundation@Windows@@UEAAJPEAUIVirtualDesktop@Multitasking@ComposableShell@25@PEAIPEAE@Z @ 0x180249A90 (-IndexOf@-$Vector@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@U-$DefaultE.c)
 * Callees:
 *     ??$?RUICoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@InterfaceEquals@XWinRT@@QEBAJPEAUICoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@0PEA_N@Z @ 0x1802459FC (--$-RUICoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@InterfaceEquals@XWinRT@@QEBAJPEAU.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::IndexOfInternal(
        __int64 a1,
        __int64 (__fastcall ****a2)(_QWORD, GUID *, CWinRTApplicationView **),
        unsigned int a3,
        __int64 (__fastcall ***a4)(_QWORD, GUID *, CWinRTApplicationView **),
        unsigned int *a5,
        _BYTE *a6)
{
  CWinRTApplicationView *v6; // rcx
  unsigned int v7; // ebx
  int v11; // eax
  bool v13; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  v13 = 0;
  v7 = 0;
  if ( a3 )
  {
    while ( (int)v6 >= 0 )
    {
      v11 = XWinRT::InterfaceEquals::operator()<Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion>(
              v6,
              a4,
              *a2,
              &v13);
      v6 = (CWinRTApplicationView *)(unsigned int)v11;
      if ( v11 >= 0 && v13 )
      {
        *a6 = 1;
        *a5 = v7;
        return (unsigned int)v6;
      }
      ++v7;
      ++a2;
      if ( v7 >= a3 )
        return (unsigned int)v6;
    }
  }
  return (unsigned int)v6;
}
