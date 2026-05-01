/*
 * XREFs of ?GetAt@?$Vector@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@U?$DefaultEqualityPredicate@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@U?$DefaultVectorOptions@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUICoreInputViewOcclusion@Core@ViewManagement@UI@5@@Z @ 0x180249230
 * Callers:
 *     <none>
 * Callees:
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18023A43C (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     ??$Construct@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAU23456@@Z @ 0x18025BBAC (--$Construct@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@InterfaceLifetimeTrait.c)
 *     ??$Destroy@UICoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUICoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Z @ 0x18025BCBC (--$Destroy@UICoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@InterfaceLifetimeTraits@XWi.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::GetAt(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3)
{
  __int64 v4; // rsi
  int v6; // ebx
  RTL_SRWLOCK *v7; // rcx
  RTL_SRWLOCK *v9; // [rsp+28h] [rbp-30h] BYREF
  int v10; // [rsp+60h] [rbp+8h] BYREF

  v4 = a2;
  *a3 = 0LL;
  XWinRT::SerializingLockPolicy::Read((__int64)&v9, (RTL_SRWLOCK *)(a1 + 72), &v10);
  v6 = v10;
  if ( v10 >= 0 )
  {
    if ( (unsigned int)v4 >= *(_DWORD *)(a1 + 40) )
    {
      v6 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v6 >= 0 )
    {
      XWinRT::InterfaceLifetimeTraits::Destroy<Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion>(a3);
      v6 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Internal::ComposableShell::Multitasking::ISwitchItem>(
             a3,
             *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8 * v4));
    }
  }
  if ( v9 )
  {
    v7 = v9 + 1;
    if ( LODWORD(v9->Ptr) == 1 )
      --LODWORD(v7->Ptr);
    else
      ReleaseSRWLockShared(v7);
  }
  if ( v6 >= 0 )
    return 0;
  return (unsigned int)v6;
}
