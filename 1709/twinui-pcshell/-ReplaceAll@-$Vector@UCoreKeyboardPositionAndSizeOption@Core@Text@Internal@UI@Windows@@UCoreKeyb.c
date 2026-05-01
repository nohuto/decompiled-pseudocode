/*
 * XREFs of ?ReplaceAll@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@@Z @ 0x1801ADA40
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x1801979C4 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180197A34 (-RaiseEvent@-$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::ReplaceAll(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  _OWORD *v3; // rsi
  unsigned int v5; // ebp
  unsigned int v9; // r15d
  _OWORD *v10; // rcx
  __int64 v11; // r14
  __int64 v12; // rdx
  int v13; // eax
  __int128 v14; // xmm1
  _DWORD *v15; // rdi
  void *v16; // rbp
  char v17; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0LL;
  v5 = 0;
  if ( a2 )
  {
    v3 = malloc(36LL * a2);
    if ( !v3 )
      return 2147942414LL;
    v5 = a2;
  }
  v9 = 0;
  if ( v5 )
  {
    v10 = v3;
    v9 = v5;
    v11 = a3 - (_QWORD)v3;
    v12 = v5;
    do
    {
      v13 = *(_DWORD *)((char *)v10 + v11 + 32);
      v14 = *(_OWORD *)((char *)v10 + v11 + 16);
      *v10 = *(_OWORD *)((char *)v10 + v11);
      v10[1] = v14;
      *((_DWORD *)v10 + 8) = v13;
      v10 = (_OWORD *)((char *)v10 + 36);
      --v12;
    }
    while ( v12 );
  }
  v15 = (_DWORD *)(a1 + 80);
  if ( *(_DWORD *)(a1 + 72) == 1 )
  {
    if ( !*v15 )
      *v15 = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 80));
  }
  XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v17);
  *(_DWORD *)(a1 + 40) = v9;
  *(_DWORD *)(a1 + 44) = v5;
  *(_DWORD *)(a1 + 48) = 0;
  v16 = *(void **)(a1 + 56);
  *(_QWORD *)(a1 + 56) = v3;
  ++*(_DWORD *)(a1 + 88);
  if ( *(_DWORD *)(a1 + 72) == 1 )
    *v15 += 0x10000000;
  else
    ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 80));
  if ( v16 )
    free(v16);
  return Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,0,0,0>::RaiseEvent();
}
