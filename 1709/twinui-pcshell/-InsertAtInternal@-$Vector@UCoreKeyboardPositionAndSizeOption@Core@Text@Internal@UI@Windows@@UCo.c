/*
 * XREFs of ?InsertAtInternal@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEAAJIUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@_N@Z @ 0x1801ADF9C
 * Callers:
 *     ?InsertAt@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJIUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@@Z @ 0x1801AD740 (-InsertAt@-$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboa.c)
 *     ?Append@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@@Z @ 0x1801AD790 (-Append@-$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboard.c)
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x1801979C4 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180197A34 (-RaiseEvent@-$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$.c)
 *     ?ResizeStorage@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x1801AE9FC (-ResizeStorage@-$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreK.c)
 *     _invalid_parameter_noinfo @ 0x1801E2E30 (_invalid_parameter_noinfo.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::InsertAtInternal(
        __int64 a1,
        unsigned int a2,
        __int128 *a3,
        char a4)
{
  RTL_SRWLOCK *v4; // rsi
  int v8; // r14d
  int v9; // edi
  unsigned int v10; // r8d
  int v11; // edx
  unsigned int v12; // eax
  __int64 v13; // rdx
  size_t v14; // r8
  void *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int128 v19; // [rsp+30h] [rbp-38h]
  __int128 v20; // [rsp+40h] [rbp-28h]
  char v21; // [rsp+80h] [rbp+18h] BYREF

  v4 = (RTL_SRWLOCK *)(a1 + 80);
  v19 = *a3;
  v20 = a3[1];
  v8 = *((_DWORD *)a3 + 8);
  if ( *(_DWORD *)(a1 + 72) == 1 )
  {
    if ( !LODWORD(v4->Ptr) )
      LODWORD(v4->Ptr) = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 80));
  }
  if ( a4 )
    a2 = *(_DWORD *)(a1 + 40);
  if ( a2 > *(_DWORD *)(a1 + 40) )
  {
    v9 = -2147483637;
    RoOriginateError(2147483659LL, 0LL);
    goto LABEL_26;
  }
  if ( *(_DWORD *)(a1 + 40) >= 0x7FFFFFFFu )
  {
    v9 = -2147024882;
    goto LABEL_26;
  }
  XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v21);
  v9 = 0;
  v10 = *(_DWORD *)(a1 + 44);
  if ( *(_DWORD *)(a1 + 40) + 1 <= v10 )
    goto LABEL_15;
  v11 = v10 >> 1;
  if ( v10 + 1 > (v10 >> 1) + v10 )
    v11 = 1;
  v9 = Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::ResizeStorage(
         a1,
         v10 + v11);
  if ( v9 >= 0 )
  {
LABEL_15:
    v12 = *(_DWORD *)(a1 + 40);
    if ( a2 < v12 )
    {
      v13 = *(_QWORD *)(a1 + 56);
      v14 = 36LL * (v12 - a2);
      v15 = (void *)(v13 + 36LL * (a2 + 1));
      if ( v14 )
      {
        if ( !v15 || !(v13 + 36LL * a2) )
        {
          *(_DWORD *)_o__errno(v15) = 22;
LABEL_22:
          invalid_parameter_noinfo();
          v9 = -2147418113;
          RoOriginateError(2147549183LL, 0LL);
          goto LABEL_24;
        }
        if ( 36 * (unsigned __int64)(*(_DWORD *)(a1 + 44) - a2 - 1) < v14 )
        {
          *(_DWORD *)_o__errno(v15) = 34;
          goto LABEL_22;
        }
        memmove(v15, (const void *)(v13 + 36LL * a2), v14);
      }
    }
LABEL_24:
    if ( v9 >= 0 )
    {
      v16 = 9LL * a2;
      v17 = *(_QWORD *)(a1 + 56);
      *(_OWORD *)(v17 + 4 * v16) = v19;
      *(_OWORD *)(v17 + 4 * v16 + 16) = v20;
      *(_DWORD *)(v17 + 4 * v16 + 32) = v8;
      ++*(_DWORD *)(a1 + 40);
      ++*(_DWORD *)(a1 + 88);
    }
  }
LABEL_26:
  if ( *(_DWORD *)(a1 + 72) == 1 )
    LODWORD(v4->Ptr) += 0x10000000;
  else
    ReleaseSRWLockExclusive(v4);
  if ( v9 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,0,0,0>::RaiseEvent();
  return (unsigned int)v9;
}
