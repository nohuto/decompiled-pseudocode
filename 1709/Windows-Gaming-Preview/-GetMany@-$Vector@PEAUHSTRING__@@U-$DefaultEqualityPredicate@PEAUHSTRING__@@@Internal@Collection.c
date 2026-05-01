/*
 * XREFs of ?GetMany@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUHSTRING__@@PEAI@Z @ 0x180012670
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800415E4 (--3@YAXPEAX_K@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180041990 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x18004207E (memset.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::GetMany(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        HSTRING *a4,
        _DWORD *a5)
{
  __int64 v5; // rbx
  unsigned __int64 v6; // rsi
  __int64 v7; // r12
  unsigned int v8; // r13d
  HSTRING *v9; // r15
  int *v11; // r14
  HRESULT v12; // edi
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // ecx
  void *v18; // [rsp+60h] [rbp+8h]
  unsigned int v19; // [rsp+68h] [rbp+10h]

  v19 = a2;
  v5 = 0LL;
  v6 = a3;
  v7 = 0LL;
  v8 = 0;
  v9 = a4;
  if ( a3 )
    memset(a4, 0, 8LL * a3);
  v11 = (int *)(a1 + 120);
  v18 = 0LL;
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
    v18 = operator new[](v6, (const struct std::nothrow_t *)&std::nothrow);
    if ( !v18 )
    {
      v12 = -2147024882;
LABEL_12:
      RoOriginateError((unsigned int)v12, 0LL);
      goto LABEL_23;
    }
  }
  v8 = *(_DWORD *)(a1 + 80);
  v13 = v19;
  if ( v19 > v8 )
  {
    v12 = -2147483637;
    goto LABEL_12;
  }
  if ( *(_DWORD *)(a1 + 88) )
  {
    if ( (_DWORD)v6 )
    {
      do
      {
        v14 = v7 + v13;
        if ( v14 >= v8 )
          break;
        v12 = WindowsDuplicateString(*(HSTRING *)(*(_QWORD *)(a1 + 96) + 8LL * v14), &v9[v7]);
        if ( v12 < 0 )
          break;
        v13 = v19;
        v7 = (unsigned int)(v7 + 1);
      }
      while ( (unsigned int)v7 < (unsigned int)v6 );
    }
  }
  else if ( (_DWORD)v6 )
  {
    do
    {
      v15 = v5 + v13;
      if ( v15 >= v8 )
        break;
      v12 = WindowsDuplicateString(*(HSTRING *)(*(_QWORD *)(a1 + 96) + 8LL * v15), &v9[v5]);
      if ( v12 < 0 )
        break;
      v13 = v19;
      v5 = (unsigned int)(v5 + 1);
    }
    while ( (unsigned int)v5 < (unsigned int)v6 );
  }
LABEL_23:
  if ( *(_DWORD *)(a1 + 112) == 1 )
    --*v11;
  else
    ReleaseSRWLockShared((PSRWLOCK)(a1 + 120));
  if ( v12 < 0 )
  {
    if ( (_DWORD)v5 )
    {
      do
      {
        WindowsDeleteString(*v9);
        *v9++ = 0LL;
        --v5;
      }
      while ( v5 );
    }
  }
  else
  {
    if ( (_DWORD)v7 )
    {
      v16 = 0;
      if ( (_DWORD)v6 )
      {
        a2 = v19;
        do
        {
          if ( v16 + v19 >= v8 )
            break;
          v12 = 0;
          LODWORD(v5) = v5 + 1;
          ++v16;
        }
        while ( v16 < (unsigned int)v6 );
      }
    }
    *a5 = v5;
  }
  operator delete(v18, a2);
  return (unsigned int)v12;
}
