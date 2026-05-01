/*
 * XREFs of ?GetMany@?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$DefaultVectorOptions@I@2345@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAI0@Z @ 0x1801C7E50
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1801E2E6A (memset.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E3058 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<unsigned int>>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _DWORD *a4,
        unsigned int *a5)
{
  unsigned int v5; // ebp
  unsigned __int64 v6; // rsi
  unsigned int v7; // r12d
  _DWORD *v8; // r15
  int *v11; // r14
  int v12; // ebx
  unsigned int v13; // edx
  __int64 v14; // rcx
  unsigned int v15; // edx
  __int64 v16; // rcx
  unsigned int i; // ecx
  void *Block; // [rsp+60h] [rbp+8h]
  unsigned int v20; // [rsp+70h] [rbp+18h]

  v5 = 0;
  v6 = a3;
  v20 = 0;
  v7 = 0;
  v8 = a4;
  if ( a3 )
    memset(a4, 0, 4LL * a3);
  v11 = (int *)(a1 + 80);
  Block = 0LL;
  *a5 = 0;
  if ( *(_DWORD *)(a1 + 72) == 1 )
  {
    if ( *v11 >= 0 )
      ++*v11;
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(a1 + 80));
  }
  v12 = 0;
  if ( *(_DWORD *)(a1 + 48) )
  {
    Block = operator new[](v6, (const struct std::nothrow_t *)&std::nothrow);
    if ( !Block )
    {
      v12 = -2147024882;
LABEL_12:
      RoOriginateError((unsigned int)v12, 0LL);
      goto LABEL_23;
    }
  }
  v7 = *(_DWORD *)(a1 + 40);
  if ( a2 > v7 )
  {
    v12 = -2147483637;
    goto LABEL_12;
  }
  if ( *(_DWORD *)(a1 + 48) )
  {
    if ( (_DWORD)v6 )
    {
      v13 = a2;
      do
      {
        if ( v13 >= v7 )
          break;
        v14 = v13++;
        *v8++ = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 4 * v14);
        ++v20;
      }
      while ( v20 < (unsigned int)v6 );
    }
  }
  else if ( (_DWORD)v6 )
  {
    v15 = a2;
    do
    {
      v12 = 0;
      if ( v15 >= v7 )
        break;
      ++v5;
      v16 = v15++;
      *v8++ = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 4 * v16);
    }
    while ( v5 < (unsigned int)v6 );
  }
LABEL_23:
  if ( *(_DWORD *)(a1 + 72) == 1 )
    --*v11;
  else
    ReleaseSRWLockShared((PSRWLOCK)(a1 + 80));
  if ( v12 >= 0 )
  {
    if ( v20 )
    {
      for ( i = 0; i < (unsigned int)v6; ++i )
      {
        if ( i + a2 >= v7 )
          break;
        v12 = 0;
        ++v5;
      }
    }
    *a5 = v5;
  }
  operator delete(Block);
  return (unsigned int)v12;
}
