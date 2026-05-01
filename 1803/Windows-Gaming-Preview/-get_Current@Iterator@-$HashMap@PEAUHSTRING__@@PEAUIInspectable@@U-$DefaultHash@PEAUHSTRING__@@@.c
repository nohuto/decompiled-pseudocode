/*
 * XREFs of ?get_Current@Iterator@?$HashMap@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@@456@@Z @ 0x18002EA50
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeUserConfiguration@GamesEnumeration@Preview@Gaming@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002F040 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeUserConf.c)
 *     ?Make@?$SimpleKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@$00@Internal@Collections@Foundation@Windows@@SAJAEBQEAUHSTRING__@@AEBV?$GitStorageType@UIInspectable@@@detail@XWinRT@@PEAPEAV12345@@Z @ 0x18002F24C (-Make@-$SimpleKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultLifetimeTraits@PEAUHSTRING.c)
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::Iterator::get_Current(
        _QWORD *a1,
        _QWORD *a2)
{
  _DWORD *v4; // rbp
  RTL_SRWLOCK *v5; // rdi
  __int64 v6; // r15
  __int64 v7; // r14
  __int64 v8; // rbx
  signed int v9; // esi
  int v10; // eax
  __int64 v11; // rbx
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  *a2 = 0LL;
  v4 = (_DWORD *)(a1[8] + 160LL);
  v5 = (RTL_SRWLOCK *)(a1[8] + 168LL);
  if ( *v4 == 1 )
  {
    if ( SLODWORD(v5->Ptr) >= 0 )
      ++LODWORD(v5->Ptr);
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(a1[8] + 168LL));
  }
  v6 = a1[10];
  v7 = *(_QWORD *)(a1[8] + 176LL);
  if ( v7 != v6 )
    RoOriginateError(2147483660LL, 0LL);
  v8 = a1[9];
  v9 = v6 != v7 ? 0x8000000C : 0;
  if ( v7 == v6 && !v8 )
  {
    v9 = -2147483637;
    RoOriginateError(2147483659LL, 0LL);
  }
  if ( v9 >= 0 )
  {
    v13 = 0LL;
    v10 = Windows::Foundation::Collections::Internal::SimpleKeyValuePair<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,1>::Make(
            v8,
            v8 + 8,
            &v13);
    v11 = v13;
    v9 = v10;
    if ( v10 >= 0 )
    {
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      *a2 = v11;
    }
    if ( v11 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration,Microsoft::WRL::FtmBase>::Release(v11);
  }
  if ( v4 )
  {
    if ( *v4 == 1 )
      --LODWORD(v5->Ptr);
    else
      ReleaseSRWLockShared(v5);
  }
  return (unsigned int)v9;
}
