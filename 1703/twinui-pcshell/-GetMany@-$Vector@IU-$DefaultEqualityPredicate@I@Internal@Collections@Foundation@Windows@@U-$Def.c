/*
 * XREFs of ?GetMany@?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$DefaultVectorOptions@I@2345@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAI0@Z @ 0x18017AE00
 * Callers:
 *     <none>
 * Callees:
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180162E38 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     memset @ 0x180194E50 (memset.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194F9C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<unsigned int>>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _DWORD *a4,
        unsigned int *a5)
{
  unsigned __int64 v5; // rdi
  _DWORD *v6; // r14
  unsigned int v9; // ebp
  unsigned int v10; // r15d
  void *v11; // r13
  int v12; // ebx
  unsigned int v13; // edx
  __int64 v14; // rcx
  unsigned int v15; // eax
  unsigned int v16; // edx
  __int64 v17; // rcx
  unsigned int i; // ecx
  _QWORD v20[9]; // [rsp+20h] [rbp-48h] BYREF
  int v21; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v22; // [rsp+80h] [rbp+18h]

  v5 = a3;
  v22 = 0;
  v6 = a4;
  v21 = 0;
  v9 = 0;
  v10 = 0;
  if ( a3 )
    memset(a4, 0, 4LL * a3);
  v11 = 0LL;
  *a5 = 0;
  XWinRT::SerializingLockPolicy::Read((__int64)v20, (RTL_SRWLOCK *)(a1 + 72), &v21);
  if ( !*(_DWORD *)(a1 + 48) || (v11 = operator new[](v5, (const struct std::nothrow_t *)&std::nothrow)) != 0LL )
  {
    v12 = v21;
  }
  else
  {
    v12 = -2147024882;
    RoOriginateError(2147942414LL, 0LL);
  }
  if ( v12 >= 0 )
  {
    v10 = *(_DWORD *)(a1 + 40);
    if ( a2 > v10 )
    {
      v12 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v12 >= 0 )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        if ( (_DWORD)v5 )
        {
          v13 = a2;
          do
          {
            if ( v13 >= v10 )
              break;
            v12 = 0;
            v14 = v13++;
            v15 = v22 + 1;
            *v6++ = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 4 * v14);
            v22 = v15;
          }
          while ( v15 < (unsigned int)v5 );
        }
      }
      else if ( (_DWORD)v5 )
      {
        v16 = a2;
        do
        {
          if ( v16 >= v10 )
            break;
          v12 = 0;
          v17 = v16;
          ++v9;
          ++v16;
          *v6++ = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 4 * v17);
        }
        while ( v9 < (unsigned int)v5 );
      }
    }
  }
  if ( v20[0] )
  {
    if ( *(_DWORD *)v20[0] == 1 )
      --*(_DWORD *)(v20[0] + 8LL);
    else
      ReleaseSRWLockShared((PSRWLOCK)(v20[0] + 8LL));
    v20[0] = 0LL;
  }
  if ( v12 >= 0 )
  {
    if ( v22 )
    {
      for ( i = 0; i < (unsigned int)v5; ++i )
      {
        if ( i + a2 >= v10 )
          break;
        v12 = 0;
        ++v9;
      }
    }
    *a5 = v9;
  }
  operator delete(v11);
  return (unsigned int)v12;
}
