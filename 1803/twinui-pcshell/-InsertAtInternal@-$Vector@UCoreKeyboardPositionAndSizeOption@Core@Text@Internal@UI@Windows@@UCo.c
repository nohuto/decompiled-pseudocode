/*
 * XREFs of ?InsertAtInternal@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEAAJIUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@_N@Z @ 0x18005F770
 * Callers:
 *     ?Append@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@@Z @ 0x18005F980 (-Append@-$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboard.c)
 *     ?InsertAt@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJIUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@@Z @ 0x1802557E0 (-InsertAt@-$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboa.c)
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18005FC3C (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18005FC50 (-RaiseEvent@-$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$.c)
 *     memmove_s @ 0x180255F04 (memmove_s.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::InsertAtInternal(
        __int64 a1,
        unsigned int a2,
        __int128 *a3,
        char a4)
{
  bool v4; // zf
  __int64 v5; // rbp
  __int128 v6; // xmm0
  __int128 v9; // xmm1
  __int64 v11; // xmm2_8
  unsigned int v12; // eax
  int v13; // r15d
  unsigned int v14; // r9d
  int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // rdx
  int v18; // r14d
  size_t v19; // rdx
  void *v20; // rax
  unsigned int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rcx
  char v25[8]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v26; // [rsp+38h] [rbp-50h]
  __int128 v27; // [rsp+40h] [rbp-48h]
  __int128 v28; // [rsp+50h] [rbp-38h]

  v4 = *(_DWORD *)(a1 + 72) == 1;
  v5 = a1 + 72;
  v6 = *a3;
  v9 = a3[1];
  v11 = *((_QWORD *)a3 + 4);
  v27 = *a3;
  v28 = v9;
  v26 = v11;
  if ( v4 )
  {
    if ( !*(_DWORD *)(a1 + 80) )
      *(_DWORD *)(a1 + 80) = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 80));
    v6 = v27;
    v9 = v28;
    v11 = v26;
  }
  v12 = *(_DWORD *)(a1 + 40);
  if ( a4 )
    a2 = *(_DWORD *)(a1 + 40);
  if ( a2 > v12 )
  {
    v13 = -2147483637;
    RoOriginateError(2147483659LL, 0LL);
    goto LABEL_19;
  }
  if ( v12 >= 0x7FFFFFFF )
  {
    v13 = -2147024882;
    goto LABEL_19;
  }
  XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>(v25, *(unsigned __int8 *)(a1 + 93), a1 + 96);
  v13 = 0;
  v14 = *(_DWORD *)(a1 + 44);
  if ( *(_DWORD *)(a1 + 40) + 1 > v14 )
  {
    v15 = 1;
    v16 = *(_QWORD *)(a1 + 56);
    if ( v14 + 1 <= (v14 >> 1) + v14 )
      v15 = v14 >> 1;
    v17 = v14 + v15;
    v18 = v17;
    v19 = 40 * v17;
    if ( v16 )
      v20 = (void *)_o_realloc(v16, v19);
    else
      v20 = malloc(v19);
    if ( v20 )
    {
      *(_QWORD *)(a1 + 56) = v20;
      *(_DWORD *)(a1 + 44) = v18;
    }
    else
    {
      v13 = -2147024882;
    }
    if ( v13 < 0 )
      goto LABEL_19;
    v6 = v27;
    v9 = v28;
    v11 = v26;
  }
  v21 = *(_DWORD *)(a1 + 40);
  if ( a2 >= v21 )
  {
LABEL_18:
    v22 = *(_QWORD *)(a1 + 56);
    v23 = 5LL * a2;
    *(_OWORD *)(v22 + 8 * v23) = v6;
    *(_OWORD *)(v22 + 8 * v23 + 16) = v9;
    *(_QWORD *)(v22 + 8 * v23 + 32) = v11;
    ++*(_DWORD *)(a1 + 40);
    ++*(_DWORD *)(a1 + 88);
    goto LABEL_19;
  }
  if ( !memmove_s(
          (void *const)(*(_QWORD *)(a1 + 56) + 40LL * (a2 + 1)),
          40LL * (*(_DWORD *)(a1 + 44) - a2 - 1),
          (const void *const)(*(_QWORD *)(a1 + 56) + 40LL * a2),
          40LL * (v21 - a2)) )
  {
    v6 = v27;
    v9 = v28;
    v11 = v26;
    goto LABEL_18;
  }
  v13 = -2147418113;
  RoOriginateError(2147549183LL, 0LL);
LABEL_19:
  if ( v5 )
  {
    if ( *(_DWORD *)v5 == 1 )
      *(_DWORD *)(v5 + 8) += 0x10000000;
    else
      ReleaseSRWLockExclusive((PSRWLOCK)(v5 + 8));
  }
  if ( v13 < 0 )
    return (unsigned int)v13;
  else
    return Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,0,0,0>::RaiseEvent(
             (unsigned __int8)v25[0],
             *(unsigned __int8 *)(a1 + 92),
             a1,
             1LL,
             a2);
}
