/*
 * XREFs of ?IndexOf@?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$DefaultVectorOptions@I@2345@@Internal@Collections@Foundation@Windows@@UEAAJIPEAIPEAE@Z @ 0x180301220
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800993A8 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18023A43C (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     ?IndexOfInternal@?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$DefaultVectorOptions@I@2345@@Internal@Collections@Foundation@Windows@@AEAAJPEAIII0PEAE@Z @ 0x180301348 (-IndexOfInternal@-$Vector@IU-$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<unsigned int>>::IndexOf(
        __int64 a1,
        int a2,
        _DWORD *a3,
        _BYTE *a4)
{
  _DWORD *v8; // rsi
  int v9; // ebp
  const struct std::nothrow_t *v10; // rdx
  RTL_SRWLOCK *v11; // rcx
  int v12; // ebx
  unsigned __int64 v13; // r8
  size_t v14; // rax
  __int64 i; // r8
  RTL_SRWLOCK *v17; // [rsp+30h] [rbp-38h] BYREF
  int v18; // [rsp+70h] [rbp+8h] BYREF

  *a3 = 0;
  *a4 = 0;
  v8 = 0LL;
  v9 = 0;
  XWinRT::SerializingLockPolicy::Read((__int64)&v17, (RTL_SRWLOCK *)(a1 + 72), &v18);
  v12 = v18;
  if ( v18 >= 0 )
  {
    v13 = *(unsigned int *)(a1 + 40);
    if ( *(_DWORD *)(a1 + 48) )
    {
      v14 = 4 * v13;
      if ( !is_mul_ok(v13, 4uLL) )
        v14 = -1LL;
      v8 = operator new[](v14, (const struct std::nothrow_t *)&std::nothrow);
      if ( v8 )
      {
        for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 40); i = (unsigned int)(i + 1) )
        {
          if ( v12 < 0 )
            break;
          v12 = 0;
          ++v9;
          LODWORD(v11) = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 4 * i);
          v8[i] = (_DWORD)v11;
        }
      }
      else
      {
        v12 = -2147024882;
      }
    }
    else
    {
      v12 = Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<unsigned int>>::IndexOfInternal(
              (_DWORD)v11,
              *(_QWORD *)(a1 + 56),
              v13,
              a2,
              (__int64)a3,
              (__int64)a4);
    }
  }
  if ( v17 )
  {
    v11 = v17 + 1;
    if ( LODWORD(v17->Ptr) == 1 )
      --LODWORD(v11->Ptr);
    else
      ReleaseSRWLockShared(v11);
  }
  if ( v12 >= 0 && v9 )
    v12 = Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<unsigned int>>::IndexOfInternal(
            (_DWORD)v11,
            (_DWORD)v8,
            v9,
            a2,
            (__int64)a3,
            (__int64)a4);
  operator delete(v8, v10);
  return (unsigned int)v12;
}
