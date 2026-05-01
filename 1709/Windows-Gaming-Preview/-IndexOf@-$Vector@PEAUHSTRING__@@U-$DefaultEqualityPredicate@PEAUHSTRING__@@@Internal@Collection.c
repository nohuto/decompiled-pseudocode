/*
 * XREFs of ?IndexOf@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJPEAUHSTRING__@@PEAIPEAE@Z @ 0x1800122C0
 * Callers:
 *     <none>
 * Callees:
 *     ?IndexOfInternal@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEAAJPEAPEAUHSTRING__@@IPEAU6@PEAIPEAE@Z @ 0x1800132DC (-IndexOfInternal@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Co.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800415E4 (--3@YAXPEAX_K@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180041990 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::IndexOf(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        _BYTE *a4)
{
  RTL_SRWLOCK *v4; // rdi
  HSTRING *v5; // r14
  unsigned int v6; // ebp
  __int64 v9; // r15
  HRESULT v11; // esi
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  __int64 i; // r15
  HSTRING *v16; // rbx
  __int64 v17; // rdi

  *a3 = 0;
  v4 = (RTL_SRWLOCK *)(a1 + 120);
  v5 = 0LL;
  *a4 = 0;
  v6 = 0;
  v9 = a2;
  if ( *(_DWORD *)(a1 + 112) == 1 )
  {
    if ( SLODWORD(v4->Ptr) >= 0 )
      ++LODWORD(v4->Ptr);
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(a1 + 120));
  }
  v11 = 0;
  if ( *(_DWORD *)(a1 + 88) )
  {
    v14 = 8LL * *(unsigned int *)(a1 + 80);
    if ( !is_mul_ok(*(unsigned int *)(a1 + 80), 8uLL) )
      v14 = -1LL;
    v5 = (HSTRING *)operator new[](v14, (const struct std::nothrow_t *)&std::nothrow);
    if ( v5 )
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 80); i = (unsigned int)(i + 1) )
      {
        v11 = WindowsDuplicateString(*(HSTRING *)(*(_QWORD *)(a1 + 96) + 8 * i), &v5[i]);
        if ( v11 < 0 )
          break;
        ++v6;
      }
      v9 = a2;
    }
    else
    {
      v11 = -2147024882;
    }
  }
  else
  {
    v11 = Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::IndexOfInternal(
            a1,
            *(_QWORD *)(a1 + 96),
            *(unsigned int *)(a1 + 80),
            v9,
            a3,
            a4);
  }
  if ( *(_DWORD *)(a1 + 112) == 1 )
    --LODWORD(v4->Ptr);
  else
    ReleaseSRWLockShared(v4);
  if ( v11 >= 0 )
  {
    if ( !v6 )
      goto LABEL_24;
    v11 = Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::IndexOfInternal(
            v13,
            v5,
            v6,
            v9,
            a3,
            a4);
  }
  if ( v6 )
  {
    v16 = v5;
    v17 = v6;
    do
    {
      WindowsDeleteString(*v16);
      *v16++ = 0LL;
      --v17;
    }
    while ( v17 );
  }
LABEL_24:
  operator delete(v5, v12);
  return (unsigned int)v11;
}
