/*
 * XREFs of ?ReplaceAll@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@@Z @ 0x180255BE0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18005FC3C (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18005FC50 (-RaiseEvent@-$VectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@$.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18023AAB4 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::ReplaceAll(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  int v3; // ebx
  _OWORD *v5; // rsi
  int v6; // eax
  unsigned int v7; // r14d
  unsigned int v10; // ebp
  __int64 v11; // r15
  __int64 v12; // rdx
  _OWORD *v13; // rcx
  __int64 v14; // xmm0_8
  __int128 v15; // xmm2
  _OWORD *v16; // rax
  RTL_SRWLOCK *v17; // rcx
  RTL_SRWLOCK *v19; // [rsp+30h] [rbp-28h] BYREF
  int v20; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  v20 = 0;
  v5 = 0LL;
  v6 = 0;
  v7 = 0;
  if ( a2 )
  {
    v5 = malloc(40LL * a2);
    if ( v5 )
    {
      v7 = a2;
      v6 = 0;
    }
    else
    {
      v3 = -2147024882;
      v20 = -2147024882;
      v6 = -2147024882;
    }
  }
  if ( v6 >= 0 )
  {
    v10 = 0;
    if ( v7 )
    {
      v10 = v7;
      v20 = 0;
      v11 = a3 - (_QWORD)v5;
      v12 = v7;
      v13 = v5;
      do
      {
        v14 = *(_QWORD *)((char *)v13 + v11 + 32);
        v15 = *(_OWORD *)((char *)v13 + v11 + 16);
        *v13 = *(_OWORD *)((char *)v13 + v11);
        v13[1] = v15;
        *((_QWORD *)v13 + 4) = v14;
        v13 = (_OWORD *)((char *)v13 + 40);
        --v12;
      }
      while ( v12 );
    }
    XWinRT::SerializingLockPolicy::Write((__int64)&v19, (RTL_SRWLOCK *)(a1 + 72), &v20);
    v3 = v20;
    if ( v20 >= 0 )
    {
      XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v20);
      *(_DWORD *)(a1 + 40) = v10;
      v3 = 0;
      *(_DWORD *)(a1 + 44) = v7;
      *(_DWORD *)(a1 + 48) = 0;
      v16 = *(_OWORD **)(a1 + 56);
      *(_QWORD *)(a1 + 56) = v5;
      v5 = v16;
      ++*(_DWORD *)(a1 + 88);
    }
    if ( v19 )
    {
      v17 = v19 + 1;
      if ( LODWORD(v19->Ptr) == 1 )
        LODWORD(v17->Ptr) += 0x10000000;
      else
        ReleaseSRWLockExclusive(v17);
    }
  }
  if ( v5 )
    free(v5);
  if ( v3 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,0,0,0>::RaiseEvent();
  return (unsigned int)v3;
}
