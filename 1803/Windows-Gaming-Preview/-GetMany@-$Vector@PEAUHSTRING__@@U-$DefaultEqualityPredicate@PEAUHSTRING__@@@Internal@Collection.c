/*
 * XREFs of ?GetMany@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUHSTRING__@@PEAI@Z @ 0x180012B50
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180042940 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180042948 (--3@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x180042FEC (memset_0.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        HSTRING *a4,
        _DWORD *a5)
{
  __int64 v5; // rdi
  __int64 v7; // r12
  unsigned __int64 v8; // rbx
  unsigned int v9; // r13d
  HSTRING *v10; // r14
  int *v12; // r15
  HRESULT v13; // ebx
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int i; // ecx
  void *Block; // [rsp+70h] [rbp+8h]

  v5 = 0LL;
  v7 = 0LL;
  v8 = a3;
  v9 = 0;
  v10 = a4;
  if ( a3 )
    memset_0(a4, 0, 8LL * a3);
  Block = 0LL;
  *a5 = 0;
  v12 = (int *)(a1 + 112);
  if ( *(_DWORD *)(a1 + 104) == 1 )
  {
    if ( *v12 >= 0 )
      ++*v12;
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
      v13 = -2147024882;
LABEL_12:
      RoOriginateError((unsigned int)v13, 0LL);
      goto LABEL_23;
    }
  }
  v9 = *(_DWORD *)(a1 + 72);
  v14 = a2;
  if ( a2 > v9 )
  {
    v13 = -2147483637;
    goto LABEL_12;
  }
  v13 = 0;
  if ( *(_DWORD *)(a1 + 80) )
  {
    if ( a3 )
    {
      do
      {
        v15 = v7 + v14;
        if ( v15 >= v9 )
          break;
        v13 = WindowsDuplicateString(*(HSTRING *)(*(_QWORD *)(a1 + 88) + 8LL * v15), &v10[v7]);
        if ( v13 < 0 )
          break;
        v14 = a2;
        v7 = (unsigned int)(v7 + 1);
      }
      while ( (unsigned int)v7 < a3 );
    }
  }
  else if ( a3 )
  {
    do
    {
      v16 = v5 + v14;
      if ( v16 >= v9 )
        break;
      v13 = WindowsDuplicateString(*(HSTRING *)(*(_QWORD *)(a1 + 88) + 8LL * v16), &v10[v5]);
      if ( v13 < 0 )
        break;
      v14 = a2;
      v5 = (unsigned int)(v5 + 1);
    }
    while ( (unsigned int)v5 < a3 );
  }
LABEL_23:
  if ( a1 != -104 )
  {
    if ( *(_DWORD *)(a1 + 104) == 1 )
      --*v12;
    else
      ReleaseSRWLockShared((PSRWLOCK)(a1 + 112));
  }
  if ( v13 < 0 )
  {
    if ( (_DWORD)v5 )
    {
      do
      {
        WindowsDeleteString(*v10);
        *v10++ = 0LL;
        --v5;
      }
      while ( v5 );
    }
  }
  else
  {
    if ( (_DWORD)v7 )
    {
      for ( i = 0; i < a3; ++i )
      {
        if ( i + a2 >= v9 )
          break;
        v13 = 0;
        LODWORD(v5) = v5 + 1;
      }
    }
    *a5 = v5;
  }
  operator delete(Block);
  return (unsigned int)v13;
}
