/*
 * XREFs of ?First@?$HashMap@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IIterator@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@345@@Z @ 0x18002C980
 * Callers:
 *     <none>
 * Callees:
 *     ??0Iterator@?$HashMap@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@QEAA@PEAV12345@@Z @ 0x180030FE0 (--0Iterator@-$HashMap@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultHash@PEAUHSTRING__@@@Internal@C.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180042918 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::First(
        __int64 a1,
        __int64 *a2)
{
  char v3; // di
  unsigned int v5; // ebx
  int *v6; // rdi
  void *v7; // rax
  __int64 v8; // rax

  *a2 = 0LL;
  v3 = *(_BYTE *)(a1 + 168);
  if ( !v3 )
    RoOriginateError(2147549183LL, 0LL);
  v5 = v3 == 0 ? 0x8000FFFF : 0;
  if ( v3 )
  {
    v6 = (int *)(a1 + 152);
    if ( *(_DWORD *)(a1 + 144) == 1 )
    {
      if ( *v6 >= 0 )
        ++*v6;
    }
    else
    {
      AcquireSRWLockShared((PSRWLOCK)(a1 + 152));
    }
    v7 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v7
      && (v8 = Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::Iterator::Iterator(
                 v7,
                 a1 - 16)) != 0 )
    {
      *a2 = v8;
      v5 = 0;
    }
    else
    {
      v5 = -2147024882;
    }
    if ( a1 != -144 )
    {
      if ( *(_DWORD *)(a1 + 144) == 1 )
        --*v6;
      else
        ReleaseSRWLockShared((PSRWLOCK)(a1 + 152));
    }
  }
  return v5;
}
