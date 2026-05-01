/*
 * XREFs of ?RemoveAtInternal@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEAAJI_N@Z @ 0x1801AE188
 * Callers:
 *     ?RemoveAt@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJI@Z @ 0x1801AD780 (-RemoveAt@-$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboa.c)
 *     ?RemoveAtEnd@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x1801AD7C0 (-RemoveAtEnd@-$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKey.c)
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x1801979C4 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180197A34 (-RaiseEvent@-$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$.c)
 *     ?ResizeStorage@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x1801AE9FC (-ResizeStorage@-$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreK.c)
 *     _invalid_parameter_noinfo @ 0x1801E2E30 (_invalid_parameter_noinfo.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::RemoveAtInternal(
        __int64 a1,
        unsigned int a2,
        char a3)
{
  RTL_SRWLOCK *v3; // rsi
  int v7; // edi
  int v8; // ecx
  __int64 v9; // rdx
  size_t v10; // r8
  void *v11; // rcx
  unsigned int v12; // r8d
  __int64 v13; // rdx
  char v15; // [rsp+40h] [rbp+8h] BYREF

  v3 = (RTL_SRWLOCK *)(a1 + 80);
  if ( *(_DWORD *)(a1 + 72) == 1 )
  {
    if ( !LODWORD(v3->Ptr) )
      LODWORD(v3->Ptr) = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 80));
  }
  if ( a3 )
    a2 = *(_DWORD *)(a1 + 40) - 1;
  if ( a2 >= *(_DWORD *)(a1 + 40) )
  {
    v7 = -2147483637;
LABEL_14:
    RoOriginateError((unsigned int)v7, 0LL);
    goto LABEL_20;
  }
  XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v15);
  v8 = *(_DWORD *)(a1 + 40);
  v7 = 0;
  if ( a2 < v8 - 1 )
  {
    v9 = *(_QWORD *)(a1 + 56);
    v10 = 36LL * (v8 - a2 - 1);
    v11 = (void *)(v9 + 36LL * a2);
    if ( v10 )
    {
      if ( !v11 || !(v9 + 36LL * (a2 + 1)) )
      {
        *(_DWORD *)_o__errno(v11) = 22;
        invalid_parameter_noinfo();
        v7 = -2147418113;
        goto LABEL_14;
      }
      memmove(v11, (const void *)(v9 + 36LL * (a2 + 1)), v10);
    }
  }
  v12 = *(_DWORD *)(a1 + 44);
  ++*(_DWORD *)(a1 + 88);
  if ( --*(_DWORD *)(a1 + 40) < v12 / 3 )
  {
    v13 = v12 - v12 / 3;
    if ( v12 - 1 < (unsigned int)v13 )
      v13 = v12 - 1;
    v7 = Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::ResizeStorage(
           a1,
           v13);
  }
LABEL_20:
  if ( *(_DWORD *)(a1 + 72) == 1 )
    LODWORD(v3->Ptr) += 0x10000000;
  else
    ReleaseSRWLockExclusive(v3);
  if ( v7 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,0,0,0>::RaiseEvent();
  return (unsigned int)v7;
}
