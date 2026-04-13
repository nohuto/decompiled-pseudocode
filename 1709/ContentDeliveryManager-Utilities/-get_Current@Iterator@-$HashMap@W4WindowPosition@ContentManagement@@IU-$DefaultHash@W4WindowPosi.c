/*
 * XREFs of ?get_Current@Iterator@?$HashMap@W4WindowPosition@ContentManagement@@IU?$DefaultHash@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IKeyValuePair@W4WindowPosition@ContentManagement@@I@456@@Z @ 0x18007BA30
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IKeyValuePair@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007BE70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IKeyValuePair@W.c)
 *     ?Make@?$SimpleKeyValuePair@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@4567@$00@Internal@Collections@Foundation@Windows@@SAJAEBW4WindowPosition@ContentManagement@@AEBIPEAPEAV12345@@Z @ 0x18007BFF8 (-Make@-$SimpleKeyValuePair@W4WindowPosition@ContentManagement@@IU-$DefaultLifetimeTraits@W4Windo.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::HashMap<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultHash<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::Iterator::get_Current(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v3; // rbp
  int *v5; // rsi
  int v6; // edi
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rbx
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  v3 = a1[9];
  v5 = (int *)(v3 + 176);
  if ( *(_DWORD *)(v3 + 168) == 1 )
  {
    if ( *v5 >= 0 )
      ++*v5;
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(v3 + 176));
  }
  if ( *(_QWORD *)(a1[9] + 184LL) == a1[11] )
  {
    v6 = 0;
  }
  else
  {
    v6 = -2147483636;
    RoOriginateError(2147483660LL, 0LL);
  }
  v7 = a1[10];
  if ( v6 >= 0 )
  {
    if ( !v7 )
    {
      v6 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v6 >= 0 )
    {
      v11 = 0LL;
      v8 = Windows::Foundation::Collections::Internal::SimpleKeyValuePair<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,1>::Make(
             v7,
             v7 + 4,
             &v11);
      v9 = v11;
      v6 = v8;
      if ( v8 >= 0 )
      {
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
        *a2 = v9;
      }
      if ( v9 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IKeyValuePair<enum ContentManagement::WindowPosition,unsigned int>,Microsoft::WRL::FtmBase>::Release(v9);
    }
  }
  if ( *(_DWORD *)(v3 + 168) == 1 )
    --*v5;
  else
    ReleaseSRWLockShared((PSRWLOCK)(v3 + 176));
  return (unsigned int)v6;
}
