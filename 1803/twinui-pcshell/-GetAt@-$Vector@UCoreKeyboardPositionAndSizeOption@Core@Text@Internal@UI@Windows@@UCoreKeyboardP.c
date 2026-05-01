/*
 * XREFs of ?GetAt@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@@Z @ 0x180254CB0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18023A43C (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::GetAt(
        __int64 a1,
        unsigned int a2,
        _OWORD *a3)
{
  __int64 v4; // rsi
  int v6; // ebx
  __int64 v7; // rax
  __int128 v8; // xmm2
  __int64 v9; // xmm0_8
  RTL_SRWLOCK *v10; // rcx
  RTL_SRWLOCK *v12; // [rsp+20h] [rbp-28h] BYREF
  int v13; // [rsp+50h] [rbp+8h] BYREF

  v4 = a2;
  memset_0(a3, 0, 0x28uLL);
  XWinRT::SerializingLockPolicy::Read((__int64)&v12, (RTL_SRWLOCK *)(a1 + 72), &v13);
  v6 = v13;
  if ( v13 >= 0 )
  {
    if ( (unsigned int)v4 >= *(_DWORD *)(a1 + 40) )
    {
      v6 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v6 >= 0 )
    {
      v7 = *(_QWORD *)(a1 + 56);
      v6 = 0;
      v8 = *(_OWORD *)(v7 + 40 * v4 + 16);
      v9 = *(_QWORD *)(v7 + 40 * v4 + 32);
      *a3 = *(_OWORD *)(v7 + 40 * v4);
      a3[1] = v8;
      *((_QWORD *)a3 + 4) = v9;
    }
  }
  if ( v12 )
  {
    v10 = v12 + 1;
    if ( LODWORD(v12->Ptr) == 1 )
      --LODWORD(v10->Ptr);
    else
      ReleaseSRWLockShared(v10);
  }
  if ( v6 >= 0 )
    return 0;
  return (unsigned int)v6;
}
