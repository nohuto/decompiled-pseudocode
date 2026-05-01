/*
 * XREFs of ?GetMany@?$Vector@U_GUID@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@3456@U?$VectorOptions@U_GUID@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAU_GUID@@PEAI@Z @ 0x18002DAE0
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180042940 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180042948 (--3@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x180042FEC (memset_0.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<_GUID,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::VectorOptions<_GUID,0,1,0>>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _OWORD *a4,
        unsigned int *a5)
{
  unsigned int v5; // r15d
  unsigned int v7; // r12d
  unsigned __int64 v8; // rbx
  _OWORD *v9; // rbp
  int *v11; // r14
  int v12; // ebx
  unsigned int v13; // edx
  __int64 v14; // rcx
  unsigned int v15; // edx
  __int64 v16; // rcx
  unsigned int i; // ecx
  void *Block; // [rsp+60h] [rbp+8h]
  unsigned int v21; // [rsp+70h] [rbp+18h]

  v5 = 0;
  v21 = 0;
  v7 = 0;
  v8 = a3;
  v9 = a4;
  if ( a3 )
    memset_0(a4, 0, 16LL * a3);
  Block = 0LL;
  v11 = (int *)(a1 + 112);
  *a5 = 0;
  if ( *(_DWORD *)(a1 + 104) == 1 )
  {
    if ( *v11 >= 0 )
      ++*v11;
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(a1 + 112));
  }
  if ( *(_DWORD *)(a1 + 80) )
  {
    Block = operator new[](v8, (const struct std::nothrow_t *)&std::nothrow);
    if ( !Block )
    {
      v12 = -2147024882;
LABEL_12:
      RoOriginateError((unsigned int)v12, 0LL);
      goto LABEL_23;
    }
  }
  v7 = *(_DWORD *)(a1 + 72);
  if ( a2 > v7 )
  {
    v12 = -2147483637;
    goto LABEL_12;
  }
  if ( *(_DWORD *)(a1 + 80) )
  {
    if ( a3 )
    {
      v13 = a2;
      do
      {
        if ( v13 >= v7 )
          break;
        v14 = v13++;
        *v9++ = *(_OWORD *)(*(_QWORD *)(a1 + 88) + 16 * v14);
        ++v21;
      }
      while ( v21 < a3 );
    }
    v12 = 0;
  }
  else
  {
    v12 = 0;
    if ( a3 )
    {
      v15 = a2;
      do
      {
        v12 = 0;
        if ( v15 >= v7 )
          break;
        ++v5;
        v16 = v15++;
        *v9++ = *(_OWORD *)(*(_QWORD *)(a1 + 88) + 16 * v16);
      }
      while ( v5 < a3 );
    }
  }
LABEL_23:
  if ( a1 != -104 )
  {
    if ( *(_DWORD *)(a1 + 104) == 1 )
      --*v11;
    else
      ReleaseSRWLockShared((PSRWLOCK)(a1 + 112));
  }
  if ( v12 >= 0 )
  {
    if ( v21 )
    {
      for ( i = 0; i < a3; ++i )
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
