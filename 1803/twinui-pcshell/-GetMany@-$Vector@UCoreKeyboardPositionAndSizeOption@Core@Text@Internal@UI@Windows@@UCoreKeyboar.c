/*
 * XREFs of ?GetMany@?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@PEAI@Z @ 0x180255190
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800993A8 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18023A43C (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _OWORD *a4,
        unsigned int *a5)
{
  void *v5; // r13
  size_t v6; // rdi
  _OWORD *v7; // rbp
  unsigned int v10; // r15d
  unsigned int v11; // r14d
  unsigned __int64 v12; // rdx
  int v13; // ebx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // xmm0_8
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  RTL_SRWLOCK *v21; // rcx
  unsigned int i; // ecx
  RTL_SRWLOCK *v24; // [rsp+20h] [rbp-48h] BYREF
  int v25; // [rsp+70h] [rbp+8h] BYREF
  int v26; // [rsp+80h] [rbp+18h]

  v5 = 0LL;
  v6 = a3;
  v26 = 0;
  v7 = a4;
  v25 = 0;
  v10 = 0;
  v11 = 0;
  if ( a3 )
    memset_0(a4, 0, 40LL * a3);
  *a5 = 0;
  XWinRT::SerializingLockPolicy::Read((__int64)&v24, (RTL_SRWLOCK *)(a1 + 72), &v25);
  if ( !*(_DWORD *)(a1 + 48) || (v5 = operator new[](v6, (const struct std::nothrow_t *)&std::nothrow)) != 0LL )
  {
    v13 = v25;
  }
  else
  {
    v13 = -2147024882;
    RoOriginateError(2147942414LL, 0LL);
  }
  if ( v13 >= 0 )
  {
    v11 = *(_DWORD *)(a1 + 40);
    if ( a2 > v11 )
    {
      v13 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v13 >= 0 )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        if ( (_DWORD)v6 )
        {
          v12 = a2;
          do
          {
            if ( (unsigned int)v12 >= v11 )
              break;
            v14 = (unsigned int)v12;
            v13 = 0;
            v12 = (unsigned int)(v12 + 1);
            v15 = 5 * v14;
            v16 = *(_QWORD *)(a1 + 56);
            *v7 = *(_OWORD *)(v16 + 8 * v15);
            v7[1] = *(_OWORD *)(v16 + 8 * v15 + 16);
            v17 = *(_QWORD *)(v16 + 8 * v15 + 32);
            LODWORD(v16) = v26 + 1;
            *((_QWORD *)v7 + 4) = v17;
            v7 = (_OWORD *)((char *)v7 + 40);
            v26 = v16;
          }
          while ( (unsigned int)v16 < (unsigned int)v6 );
        }
      }
      else if ( (_DWORD)v6 )
      {
        v12 = a2;
        do
        {
          if ( (unsigned int)v12 >= v11 )
            break;
          v18 = (unsigned int)v12;
          v13 = 0;
          ++v10;
          v12 = (unsigned int)(v12 + 1);
          v19 = 5 * v18;
          v20 = *(_QWORD *)(a1 + 56);
          *v7 = *(_OWORD *)(v20 + 8 * v19);
          v7[1] = *(_OWORD *)(v20 + 8 * v19 + 16);
          *((_QWORD *)v7 + 4) = *(_QWORD *)(v20 + 8 * v19 + 32);
          v7 = (_OWORD *)((char *)v7 + 40);
        }
        while ( v10 < (unsigned int)v6 );
      }
    }
  }
  if ( v24 )
  {
    v21 = v24 + 1;
    if ( LODWORD(v24->Ptr) == 1 )
      --LODWORD(v21->Ptr);
    else
      ReleaseSRWLockShared(v21);
  }
  if ( v13 >= 0 )
  {
    if ( v26 )
    {
      for ( i = 0; i < (unsigned int)v6; ++i )
      {
        if ( i + a2 >= v11 )
          break;
        v13 = 0;
        ++v10;
      }
    }
    *a5 = v10;
  }
  operator delete(v5, (const struct std::nothrow_t *)v12);
  return (unsigned int)v13;
}
