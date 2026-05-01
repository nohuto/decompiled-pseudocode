/*
 * XREFs of ?SetAt@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJIUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@@Z @ 0x1801AD5F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x1801979C4 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180197A34 (-RaiseEvent@-$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _invalid_parameter_noinfo @ 0x1801E2E30 (_invalid_parameter_noinfo.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::SetAt(
        __int64 a1,
        unsigned int a2,
        __int128 *a3)
{
  bool v3; // zf
  RTL_SRWLOCK *v4; // rdi
  int v5; // r15d
  __int128 v7; // xmm1
  __int64 v8; // rbp
  int v9; // esi
  __int64 v10; // rcx
  const void *v11; // rdx
  __int64 v12; // rax
  __int128 v13; // xmm1
  _BYTE v15[8]; // [rsp+30h] [rbp-88h] BYREF
  __int128 v16; // [rsp+38h] [rbp-80h]
  __int128 v17; // [rsp+48h] [rbp-70h]
  _BYTE v18[40]; // [rsp+58h] [rbp-60h] BYREF

  v3 = *(_DWORD *)(a1 + 72) == 1;
  v4 = (RTL_SRWLOCK *)(a1 + 80);
  v5 = *((_DWORD *)a3 + 8);
  v7 = a3[1];
  v8 = a2;
  v16 = *a3;
  v17 = v7;
  if ( v3 )
  {
    if ( !LODWORD(v4->Ptr) )
      LODWORD(v4->Ptr) = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 80));
  }
  if ( (unsigned int)v8 >= *(_DWORD *)(a1 + 40) )
  {
    v9 = -2147483637;
LABEL_9:
    RoOriginateError((unsigned int)v9, 0LL);
    goto LABEL_11;
  }
  XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)v15);
  v9 = 0;
  v11 = (const void *)(*(_QWORD *)(a1 + 56) + 36 * v8);
  if ( !v11 )
  {
    *(_DWORD *)_o__errno(v10) = 22;
    invalid_parameter_noinfo();
    v9 = -2147418113;
    goto LABEL_9;
  }
  memmove(v18, v11, 0x24uLL);
  v12 = *(_QWORD *)(a1 + 56);
  v13 = v17;
  *(_OWORD *)(v12 + 36 * v8) = v16;
  *(_OWORD *)(v12 + 36 * v8 + 16) = v13;
  *(_DWORD *)(v12 + 36 * v8 + 32) = v5;
  ++*(_DWORD *)(a1 + 88);
LABEL_11:
  if ( *(_DWORD *)(a1 + 72) == 1 )
    LODWORD(v4->Ptr) += 0x10000000;
  else
    ReleaseSRWLockExclusive(v4);
  if ( v9 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,0,0,0>::RaiseEvent();
  return (unsigned int)v9;
}
