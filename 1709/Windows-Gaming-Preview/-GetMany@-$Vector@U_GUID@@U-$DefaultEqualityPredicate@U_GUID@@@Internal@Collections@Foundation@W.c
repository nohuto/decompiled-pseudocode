/*
 * XREFs of ?GetMany@?$Vector@U_GUID@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@3456@U?$VectorOptions@U_GUID@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAU_GUID@@PEAI@Z @ 0x18002CCF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800415E4 (--3@YAXPEAX_K@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180041990 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x18004207E (memset.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<_GUID,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::VectorOptions<_GUID,0,1,0>>::GetMany(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        _OWORD *a4,
        unsigned int *a5)
{
  unsigned int v5; // r15d
  unsigned __int64 v6; // rsi
  unsigned int v7; // r12d
  _OWORD *v8; // rbp
  unsigned int v9; // r13d
  int *v11; // r14
  int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned int i; // ecx
  void *v17; // [rsp+60h] [rbp+8h]
  unsigned int v18; // [rsp+70h] [rbp+18h]

  v5 = 0;
  v6 = a3;
  v18 = 0;
  v7 = 0;
  v8 = a4;
  v9 = a2;
  if ( a3 )
    memset(a4, 0, 16LL * a3);
  v11 = (int *)(a1 + 120);
  v17 = 0LL;
  *a5 = 0;
  if ( *(_DWORD *)(a1 + 112) == 1 )
  {
    if ( *v11 >= 0 )
      ++*v11;
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(a1 + 120));
  }
  v12 = 0;
  if ( *(_DWORD *)(a1 + 88) )
  {
    v17 = operator new[](v6, (const struct std::nothrow_t *)&std::nothrow);
    if ( !v17 )
    {
      v12 = -2147024882;
LABEL_12:
      RoOriginateError((unsigned int)v12, 0LL);
      goto LABEL_23;
    }
  }
  v7 = *(_DWORD *)(a1 + 80);
  if ( v9 > v7 )
  {
    v12 = -2147483637;
    goto LABEL_12;
  }
  if ( *(_DWORD *)(a1 + 88) )
  {
    if ( (_DWORD)v6 )
    {
      a2 = v9;
      do
      {
        if ( (unsigned int)a2 >= v7 )
          break;
        v13 = (unsigned int)a2;
        a2 = (unsigned int)(a2 + 1);
        *v8++ = *(_OWORD *)(*(_QWORD *)(a1 + 96) + 16 * v13);
        ++v18;
      }
      while ( v18 < (unsigned int)v6 );
    }
  }
  else if ( (_DWORD)v6 )
  {
    a2 = v9;
    do
    {
      v12 = 0;
      if ( (unsigned int)a2 >= v7 )
        break;
      ++v5;
      v14 = (unsigned int)a2;
      a2 = (unsigned int)(a2 + 1);
      *v8++ = *(_OWORD *)(*(_QWORD *)(a1 + 96) + 16 * v14);
    }
    while ( v5 < (unsigned int)v6 );
  }
LABEL_23:
  if ( *(_DWORD *)(a1 + 112) == 1 )
    --*v11;
  else
    ReleaseSRWLockShared((PSRWLOCK)(a1 + 120));
  if ( v12 >= 0 )
  {
    if ( v18 )
    {
      for ( i = 0; i < (unsigned int)v6; ++i )
      {
        if ( i + v9 >= v7 )
          break;
        v12 = 0;
        ++v5;
      }
    }
    *a5 = v5;
  }
  operator delete(v17, a2);
  return (unsigned int)v12;
}
