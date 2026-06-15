/*
 * XREFs of ?IndexOf@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJPEAUHSTRING__@@PEAIPEAE@Z @ 0x1800E3A90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180028D50 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180033220 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?IndexOfInternal@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEAAJPEAPEAUHSTRING__@@IPEAU6@PEAIPEAE@Z @ 0x1800E3BE8 (-IndexOfInternal@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Co.c)
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x1800E46D0 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::IndexOf(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        _BYTE *a4)
{
  HSTRING *v8; // r14
  __int64 v9; // rsi
  __int64 v10; // rcx
  HRESULT v11; // edi
  SIZE_T v12; // rax
  __int64 i; // rbp
  __int64 v14; // rcx
  HSTRING *v15; // rbx
  __int64 v17; // [rsp+30h] [rbp-38h] BYREF
  int v18; // [rsp+70h] [rbp+8h] BYREF

  *a3 = 0;
  *a4 = 0;
  v8 = 0LL;
  v9 = 0LL;
  XWinRT::SerializingLockPolicy::Read(&v17, a1 + 112, &v18);
  v11 = v18;
  if ( v18 >= 0 )
  {
    if ( *(_DWORD *)(a1 + 88) )
    {
      v12 = 8LL * *(unsigned int *)(a1 + 80);
      if ( !is_mul_ok(*(unsigned int *)(a1 + 80), 8uLL) )
        v12 = -1LL;
      v8 = (HSTRING *)operator new[](v12, (const struct std::nothrow_t *)&std::nothrow);
      if ( v8 )
      {
        for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 80); i = (unsigned int)(i + 1) )
        {
          v11 = WindowsDuplicateString(*(HSTRING *)(*(_QWORD *)(a1 + 96) + 8 * i), &v8[i]);
          if ( v11 < 0 )
            break;
          v9 = (unsigned int)(v9 + 1);
        }
      }
      else
      {
        v11 = -2147024882;
      }
    }
    else
    {
      v11 = Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::IndexOfInternal(
              v10,
              *(_QWORD *)(a1 + 96),
              *(unsigned int *)(a1 + 80),
              a2,
              a3,
              a4);
    }
  }
  v14 = v17;
  if ( v17 )
  {
    if ( *(_DWORD *)v17 == 1 )
      --*(_DWORD *)(v17 + 8);
    else
      ReleaseSRWLockShared((PSRWLOCK)(v17 + 8));
  }
  if ( v11 >= 0 )
  {
    if ( !(_DWORD)v9 )
      goto LABEL_21;
    v11 = Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::IndexOfInternal(
            v14,
            v8,
            (unsigned int)v9,
            a2,
            a3,
            a4);
  }
  if ( (_DWORD)v9 )
  {
    v15 = v8;
    do
    {
      WindowsDeleteString(*v15);
      *v15++ = 0LL;
      --v9;
    }
    while ( v9 );
  }
LABEL_21:
  operator delete(v8);
  return (unsigned int)v11;
}
