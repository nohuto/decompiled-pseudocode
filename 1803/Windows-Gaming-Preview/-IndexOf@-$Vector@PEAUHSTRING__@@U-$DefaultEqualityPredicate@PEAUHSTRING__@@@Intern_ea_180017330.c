/*
 * XREFs of ?IndexOf@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@UEAAJPEAUHSTRING__@@PEAIPEAE@Z @ 0x180017330
 * Callers:
 *     <none>
 * Callees:
 *     ?IndexOfInternal@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEAAJPEAPEAUHSTRING__@@IPEAU6@PEAIPEAE@Z @ 0x1800138A4 (-IndexOfInternal@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Co.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180042940 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180042948 (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>::IndexOf(
        __int64 a1,
        HSTRING a2,
        unsigned int *a3,
        _BYTE *a4)
{
  int v4; // ebx
  _DWORD *v5; // r13
  RTL_SRWLOCK *v6; // rdi
  unsigned int *v8; // r15
  __int64 v10; // rsi
  HSTRING *v11; // r14
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned int i; // r15d
  HSTRING *v15; // rdi
  HSTRING v17; // [rsp+78h] [rbp+10h]

  v17 = a2;
  v4 = 0;
  v5 = (_DWORD *)(a1 + 72);
  *a3 = 0;
  v6 = (RTL_SRWLOCK *)(a1 + 80);
  *a4 = 0;
  v8 = a3;
  v10 = 0LL;
  v11 = 0LL;
  if ( *(_DWORD *)(a1 + 72) == 1 )
  {
    if ( SLODWORD(v6->Ptr) >= 0 )
      ++LODWORD(v6->Ptr);
  }
  else
  {
    AcquireSRWLockShared(v6);
    a2 = v17;
  }
  if ( *(_DWORD *)(a1 + 48) )
  {
    v13 = 8LL * *(unsigned int *)(a1 + 40);
    if ( !is_mul_ok(*(unsigned int *)(a1 + 40), 8uLL) )
      v13 = -1LL;
    v11 = (HSTRING *)operator new[](v13, (const struct std::nothrow_t *)&std::nothrow);
    if ( v11 )
    {
      for ( i = 0; i < *(_DWORD *)(a1 + 40); ++i )
      {
        v4 = WindowsDuplicateString(*(HSTRING *)(*(_QWORD *)(a1 + 56) + 8LL * i), &v11[i]);
        if ( v4 < 0 )
          break;
        v10 = (unsigned int)(v10 + 1);
      }
      v8 = a3;
    }
    else
    {
      v4 = -2147024882;
    }
  }
  else
  {
    v4 = Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::IndexOfInternal(
           a1,
           *(HSTRING **)(a1 + 56),
           *(_DWORD *)(a1 + 40),
           a2,
           v8,
           a4);
  }
  if ( v5 )
  {
    if ( *v5 == 1 )
      --LODWORD(v6->Ptr);
    else
      ReleaseSRWLockShared(v6);
  }
  if ( v4 >= 0 )
  {
    if ( !(_DWORD)v10 )
      goto LABEL_25;
    v4 = Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::IndexOfInternal(
           v12,
           v11,
           v10,
           v17,
           v8,
           a4);
  }
  if ( (_DWORD)v10 )
  {
    v15 = v11;
    do
    {
      WindowsDeleteString(*v15);
      *v15++ = 0LL;
      --v10;
    }
    while ( v10 );
  }
LABEL_25:
  operator delete(v11);
  return (unsigned int)v4;
}
