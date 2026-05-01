/*
 * XREFs of ?SetAt@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJIUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@@Z @ 0x180255D40
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18005FC3C (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18005FC50 (-RaiseEvent@-$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18023AAB4 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     memmove_s @ 0x180255F04 (memmove_s.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::SetAt(
        __int64 a1,
        unsigned int a2,
        __int128 *a3)
{
  __int128 v3; // xmm0
  __int128 v5; // xmm1
  __int64 v6; // rbp
  int v7; // ebx
  __int64 v8; // rax
  __int128 v9; // xmm1
  __int64 v10; // xmm0_8
  RTL_SRWLOCK *v11; // rcx
  _BYTE v13[4]; // [rsp+30h] [rbp-88h] BYREF
  int v14; // [rsp+34h] [rbp-84h] BYREF
  __int64 v15; // [rsp+38h] [rbp-80h]
  __int128 v16; // [rsp+40h] [rbp-78h]
  __int128 v17; // [rsp+50h] [rbp-68h]
  RTL_SRWLOCK *v18; // [rsp+60h] [rbp-58h] BYREF
  _BYTE Destination[40]; // [rsp+70h] [rbp-48h] BYREF

  v3 = *a3;
  v14 = 0;
  v5 = a3[1];
  v6 = a2;
  v16 = v3;
  v15 = *((_QWORD *)a3 + 4);
  v17 = v5;
  XWinRT::SerializingLockPolicy::Write((__int64)&v18, (RTL_SRWLOCK *)(a1 + 72), &v14);
  v7 = v14;
  if ( v14 >= 0 )
  {
    if ( (unsigned int)v6 >= *(_DWORD *)(a1 + 40) )
    {
      v7 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v7 >= 0 )
    {
      XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)v13);
      v7 = 0;
      if ( memmove_s(Destination, 0x28uLL, (const void *const)(*(_QWORD *)(a1 + 56) + 40 * v6), 0x28uLL) )
      {
        v7 = -2147418113;
        RoOriginateError(2147549183LL, 0LL);
      }
      else
      {
        v8 = *(_QWORD *)(a1 + 56);
        v9 = v17;
        *(_OWORD *)(v8 + 40 * v6) = v16;
        v10 = v15;
        *(_OWORD *)(v8 + 40 * v6 + 16) = v9;
        *(_QWORD *)(v8 + 40 * v6 + 32) = v10;
        ++*(_DWORD *)(a1 + 88);
      }
    }
  }
  if ( v18 )
  {
    v11 = v18 + 1;
    if ( LODWORD(v18->Ptr) == 1 )
      LODWORD(v11->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v11);
  }
  if ( v7 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,0,0,0>::RaiseEvent();
  return (unsigned int)v7;
}
