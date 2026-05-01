/*
 * XREFs of ?IndexOf@?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$DefaultVectorOptions@I@2345@@Internal@Collections@Foundation@Windows@@UEAAJIPEAIPEAE@Z @ 0x18017AA80
 * Callers:
 *     <none>
 * Callees:
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180162E38 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194F9C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<unsigned int>>::IndexOf(
        __int64 a1,
        int a2,
        unsigned int *a3,
        _BYTE *a4)
{
  _DWORD *v8; // r14
  unsigned int v9; // esi
  int v10; // ebx
  unsigned int v11; // r8d
  unsigned int v12; // ecx
  _DWORD *v13; // rdx
  unsigned __int64 v14; // rax
  __int64 v15; // r8
  unsigned int v16; // ecx
  _DWORD *v17; // rdx
  _QWORD v19[7]; // [rsp+20h] [rbp-38h] BYREF
  int v20; // [rsp+60h] [rbp+8h] BYREF

  *a3 = 0;
  *a4 = 0;
  v8 = 0LL;
  v9 = 0;
  XWinRT::SerializingLockPolicy::Read((__int64)v19, (RTL_SRWLOCK *)(a1 + 72), &v20);
  v10 = v20;
  if ( v20 >= 0 )
  {
    if ( *(_DWORD *)(a1 + 48) )
    {
      v14 = 4LL * *(unsigned int *)(a1 + 40);
      if ( !is_mul_ok(*(unsigned int *)(a1 + 40), 4uLL) )
        v14 = -1LL;
      v8 = operator new[](v14, (const struct std::nothrow_t *)&std::nothrow);
      if ( v8 )
      {
        v15 = 0LL;
        if ( *(_DWORD *)(a1 + 40) )
        {
          v10 = 0;
          do
          {
            ++v9;
            v8[v15] = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 4 * v15);
            v15 = (unsigned int)(v15 + 1);
          }
          while ( (unsigned int)v15 < *(_DWORD *)(a1 + 40) );
        }
      }
      else
      {
        v10 = -2147024882;
      }
    }
    else
    {
      v11 = *(_DWORD *)(a1 + 40);
      v12 = 0;
      v13 = *(_DWORD **)(a1 + 56);
      if ( v11 )
      {
        while ( a2 != *v13 )
        {
          ++v12;
          ++v13;
          if ( v12 >= v11 )
            goto LABEL_8;
        }
        *a4 = 1;
        *a3 = v12;
      }
LABEL_8:
      v10 = 0;
    }
  }
  if ( v19[0] )
  {
    if ( *(_DWORD *)v19[0] == 1 )
      --*(_DWORD *)(v19[0] + 8LL);
    else
      ReleaseSRWLockShared((PSRWLOCK)(v19[0] + 8LL));
    v19[0] = 0LL;
  }
  if ( v10 >= 0 && v9 )
  {
    v16 = 0;
    v17 = v8;
    while ( a2 != *v17 )
    {
      ++v16;
      ++v17;
      if ( v16 >= v9 )
        goto LABEL_28;
    }
    *a4 = 1;
    *a3 = v16;
LABEL_28:
    v10 = 0;
  }
  operator delete(v8);
  return (unsigned int)v10;
}
