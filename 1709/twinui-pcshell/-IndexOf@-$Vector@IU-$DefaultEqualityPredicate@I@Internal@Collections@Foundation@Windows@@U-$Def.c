/*
 * XREFs of ?IndexOf@?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$DefaultVectorOptions@I@2345@@Internal@Collections@Foundation@Windows@@UEAAJIPEAIPEAE@Z @ 0x1801C7BD0
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E3058 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<unsigned int>>::IndexOf(
        __int64 a1,
        int a2,
        unsigned int *a3,
        _BYTE *a4)
{
  RTL_SRWLOCK *v4; // rsi
  _DWORD *v5; // r14
  unsigned int v6; // ebp
  int v11; // edi
  _DWORD *v12; // rcx
  unsigned int v13; // eax
  unsigned __int64 v14; // rax
  __int64 i; // r8
  unsigned int v16; // eax
  _DWORD *v17; // rcx

  *a3 = 0;
  v4 = (RTL_SRWLOCK *)(a1 + 80);
  v5 = 0LL;
  *a4 = 0;
  v6 = 0;
  if ( *(_DWORD *)(a1 + 72) == 1 )
  {
    if ( SLODWORD(v4->Ptr) >= 0 )
      ++LODWORD(v4->Ptr);
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(a1 + 80));
  }
  v11 = 0;
  if ( *(_DWORD *)(a1 + 48) )
  {
    v14 = 4LL * *(unsigned int *)(a1 + 40);
    if ( !is_mul_ok(*(unsigned int *)(a1 + 40), 4uLL) )
      v14 = -1LL;
    v5 = operator new[](v14, (const struct std::nothrow_t *)&std::nothrow);
    if ( v5 )
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 40); i = (unsigned int)(i + 1) )
      {
        ++v6;
        v5[i] = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 4 * i);
      }
    }
    else
    {
      v11 = -2147024882;
    }
  }
  else
  {
    v12 = *(_DWORD **)(a1 + 56);
    v13 = 0;
    if ( *(_DWORD *)(a1 + 40) )
    {
      while ( a2 != *v12 )
      {
        ++v13;
        ++v12;
        if ( v13 >= *(_DWORD *)(a1 + 40) )
          goto LABEL_17;
      }
      *a4 = 1;
      *a3 = v13;
    }
  }
LABEL_17:
  if ( *(_DWORD *)(a1 + 72) == 1 )
    --LODWORD(v4->Ptr);
  else
    ReleaseSRWLockShared(v4);
  if ( v11 >= 0 && v6 )
  {
    v16 = 0;
    v17 = v5;
    while ( a2 != *v17 )
    {
      ++v16;
      ++v17;
      if ( v16 >= v6 )
        goto LABEL_27;
    }
    *a4 = 1;
    *a3 = v16;
LABEL_27:
    v11 = 0;
  }
  operator delete(v5);
  return (unsigned int)v11;
}
