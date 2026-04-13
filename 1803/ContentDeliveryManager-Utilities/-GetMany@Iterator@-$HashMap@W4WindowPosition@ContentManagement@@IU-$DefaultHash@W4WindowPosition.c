/*
 * XREFs of ?GetMany@Iterator@?$HashMap@W4WindowPosition@ContentManagement@@IU?$DefaultHash@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJIQEAPEAU?$IKeyValuePair@W4WindowPosition@ContentManagement@@I@456@PEAI@Z @ 0x180086930
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IKeyValuePair@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180087140 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IKeyValuePair@W.c)
 *     ?Make@?$SimpleKeyValuePair@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@4567@$00@Internal@Collections@Foundation@Windows@@SAJAEBW4WindowPosition@ContentManagement@@AEBIPEAPEAV12345@@Z @ 0x1800872B8 (-Make@-$SimpleKeyValuePair@W4WindowPosition@ContentManagement@@IU-$DefaultLifetimeTraits@W4Windo.c)
 *     ?GetNext@?$XHashMap@W4WindowPosition@ContentManagement@@IUKeyTraits@?$HashMap@W4WindowPosition@ContentManagement@@IU?$DefaultHash@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@I@XWinRT@@@XWinRT@@QEAAPEAVCPair@12@AEAPEAUTXPOSITION@2@@Z @ 0x180087924 (-GetNext@-$XHashMap@W4WindowPosition@ContentManagement@@IUKeyTraits@-$HashMap@W4WindowPosition@C.c)
 *     memset_0 @ 0x1800C1147 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::HashMap<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultHash<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::Iterator::GetMany(
        _QWORD *a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int *a4)
{
  unsigned int v4; // r15d
  _QWORD *v5; // r14
  _DWORD *v7; // r12
  RTL_SRWLOCK *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rbx
  unsigned int v11; // eax
  signed int v12; // esi
  __int64 v13; // rbp
  unsigned int v14; // ecx
  int v15; // eax
  __int64 v16; // rbx
  __int64 v17; // rbx
  __int64 v19; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v20[8]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v21; // [rsp+70h] [rbp+8h]
  int v22; // [rsp+70h] [rbp+8h]

  v4 = 0;
  *a4 = 0;
  v5 = a3;
  if ( a2 )
    memset_0(a3, 0, 8LL * a2);
  v7 = (_DWORD *)(a1[8] + 160LL);
  v8 = (RTL_SRWLOCK *)(a1[8] + 168LL);
  if ( *v7 == 1 )
  {
    if ( SLODWORD(v8->Ptr) >= 0 )
      ++LODWORD(v8->Ptr);
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(a1[8] + 168LL));
  }
  v9 = a1[10];
  v21 = v9;
  v10 = *(_QWORD *)(a1[8] + 176LL);
  if ( v10 != v9 )
  {
    RoOriginateError(2147483660LL, 0LL);
    v9 = v21;
  }
  v11 = 0;
  v12 = v9 != v10 ? 0x8000000C : 0;
  v22 = 0;
  v13 = a1[9];
  v20[0] = v13;
  if ( v10 == v9 )
  {
    v14 = a2;
    while ( v11 < v14 )
    {
      if ( v12 >= 0 )
      {
        if ( !v13 )
          break;
        v19 = 0LL;
        v15 = Windows::Foundation::Collections::Internal::SimpleKeyValuePair<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,1>::Make(
                v13,
                v13 + 4,
                &v19);
        v16 = v19;
        v12 = v15;
        if ( v15 >= 0 )
        {
          if ( v19 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
          v5[v22] = v16;
          XWinRT::XHashMap<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::HashMap<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultHash<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<unsigned int>>::GetNext(
            a1[8] + 72LL,
            v20);
          v13 = v20[0];
          ++v4;
          if ( !v20[0] )
          {
            if ( v16 )
            {
              v19 = 0LL;
              Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IKeyValuePair<enum ContentManagement::WindowPosition,unsigned int>,Microsoft::WRL::FtmBase>::Release(v16);
            }
            break;
          }
        }
        if ( v16 )
        {
          v19 = 0LL;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IKeyValuePair<enum ContentManagement::WindowPosition,unsigned int>,Microsoft::WRL::FtmBase>::Release(v16);
        }
        v14 = a2;
        v11 = v22;
      }
      v22 = ++v11;
      if ( v12 < 0 )
        goto LABEL_22;
    }
    if ( v12 >= 0 )
    {
      a1[9] = v13;
      *a4 = v4;
      goto LABEL_25;
    }
LABEL_22:
    if ( v4 )
    {
      v17 = v4;
      do
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 16LL))(*v5);
        *v5++ = 0LL;
        --v17;
      }
      while ( v17 );
    }
  }
LABEL_25:
  if ( v7 )
  {
    if ( *v7 == 1 )
      --LODWORD(v8->Ptr);
    else
      ReleaseSRWLockShared(v8);
  }
  return (unsigned int)v12;
}
