/*
 * XREFs of ?Lookup@?$HashMap@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIInspectable@@@Z @ 0x18002BE00
 * Callers:
 *     <none>
 * Callees:
 *     ?Lookup@?$XHashMap@PEAUHSTRING__@@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@UKeyTraits@?$HashMap@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@@4@@XWinRT@@QEAAJAEBQEAUHSTRING__@@PEAPEAVCPair@12@@Z @ 0x18002E8D4 (-Lookup@-$XHashMap@PEAUHSTRING__@@V-$GitStorageType@UIInspectable@@@detail@XWinRT@@UKeyTraits@-$.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800415E4 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::Lookup(
        __int64 a1,
        __int64 a2,
        unsigned int **a3)
{
  int v5; // ebx
  unsigned int *v6; // rdi
  char v7; // r15
  int *v8; // rsi
  __m128i v10; // [rsp+30h] [rbp-38h]
  __int64 v11; // [rsp+70h] [rbp+8h] BYREF
  __int64 v12; // [rsp+78h] [rbp+10h] BYREF

  v12 = a2;
  if ( *(_BYTE *)(a1 + 192) )
  {
    v5 = 0;
  }
  else
  {
    v5 = -2147418113;
    RoOriginateError(2147549183LL, 0LL);
  }
  v6 = 0LL;
  v7 = 0;
  if ( v5 < 0 )
    goto LABEL_29;
  v8 = (int *)(a1 + 176);
  if ( *(_DWORD *)(a1 + 168) == 1 )
  {
    if ( *v8 >= 0 )
      ++*v8;
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(a1 + 176));
  }
  v5 = XWinRT::XHashMap<HSTRING__ *,XWinRT::detail::GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<XWinRT::detail::GitStorageType<IInspectable>>>::Lookup(
         a1 + 80,
         &v12,
         &v11);
  if ( v5 >= 0 )
  {
    if ( v11 )
    {
      v10 = *(__m128i *)(v11 + 8);
      v6 = *(unsigned int **)(v11 + 8);
      v7 = _mm_cvtsi128_si32(_mm_srli_si128(v10, 8));
      if ( v7 )
      {
        _InterlockedIncrement((volatile signed __int32 *)v10.m128i_i64[0]);
      }
      else if ( v10.m128i_i64[0] )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10.m128i_i64[0] + 8LL))(v10.m128i_i64[0]);
      }
      v5 = 0;
    }
    else
    {
      v5 = -2147483637;
    }
  }
  if ( *(_DWORD *)(a1 + 168) == 1 )
    --*v8;
  else
    ReleaseSRWLockShared((PSRWLOCK)(a1 + 176));
  if ( v5 < 0 )
    goto LABEL_29;
  *a3 = 0LL;
  v5 = 0;
  if ( v7 )
  {
    *a3 = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, unsigned int **))(*(_QWORD *)qword_18005BDB8 + 40LL))(
           qword_18005BDB8,
           v6[1],
           &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
           a3);
    if ( v5 >= 0 && _InterlockedExchangeAdd((volatile signed __int32 *)v6, 0xFFFFFFFF) == 1 )
    {
      if ( v6[1] )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18005BDB8 + 32LL))(qword_18005BDB8);
      operator delete(v6, 8uLL);
    }
  }
  else
  {
    *a3 = v6;
  }
  if ( v5 < 0 )
LABEL_29:
    *a3 = 0LL;
  return (unsigned int)v5;
}
