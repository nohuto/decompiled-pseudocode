/*
 * XREFs of ?RemoveInvalidWeakPointersNoLock@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x180044E2C
 * Callers:
 *     ?RegisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJPEAUHSTRING__@@PEAUISubscriptionPriv@234@PEAU?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@@Z @ 0x180043BA0 (-RegisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJP.c)
 *     ?OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x180044A44 (-OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x1800366EC (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@@2@$0A@@std@@@std@@QEAA_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x180045AAC (-erase@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$.c)
 *     ??A?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@@2@@std@@QEAAAEAV?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180045B5C (--A-$unordered_map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$shared_ptr@V.c)
 *     ?_Reserve@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAAX_K@Z @ 0x180046A5C (-_Reserve@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAA.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RemoveInvalidWeakPointersNoLock(
        ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *this)
{
  char *v1; // rbx
  _QWORD *v2; // r15
  _QWORD *v3; // rsi
  void **v4; // rcx
  __int64 v5; // r14
  _QWORD *v6; // rdi
  _QWORD *v7; // r14
  char *v8; // r12
  char *v9; // r13
  char *v10; // r15
  _QWORD *v11; // rbx
  __int64 v12; // rax
  __int64 *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 *v17; // rdi
  __int64 *v18; // r14
  __int64 v19; // rcx
  char *i; // rbx
  __int64 v21; // rcx
  __int128 v22; // [rsp+28h] [rbp-39h] BYREF
  char *v23; // [rsp+38h] [rbp-29h]
  __int64 v24; // [rsp+40h] [rbp-21h] BYREF
  _QWORD *v25; // [rsp+48h] [rbp-19h] BYREF
  char *v26; // [rsp+50h] [rbp-11h]
  __int64 v27; // [rsp+58h] [rbp-9h]
  _QWORD *v28; // [rsp+60h] [rbp-1h]
  __int64 v29; // [rsp+68h] [rbp+7h]
  void *v30[3]; // [rsp+70h] [rbp+Fh] BYREF
  unsigned __int64 v31; // [rsp+88h] [rbp+27h]

  v29 = -2LL;
  v1 = (char *)this + 88;
  v26 = (char *)this + 88;
  v2 = (_QWORD *)*((_QWORD *)this + 11);
  v28 = v2;
  v3 = (_QWORD *)*v2;
  if ( (_QWORD *)*v2 == v2 )
    return;
  do
  {
    v4 = (void **)(v3 + 2);
    v22 = 0LL;
    v23 = 0LL;
    v5 = v3[6];
    v6 = *(_QWORD **)(v5 + 8);
    v7 = *(_QWORD **)(v5 + 16);
    v8 = 0LL;
    v9 = 0LL;
    if ( v6 == v7 )
      goto LABEL_26;
    v10 = v23;
    do
    {
      v11 = (_QWORD *)*v6;
      v25 = v11;
      if ( v11 )
        (*(void (__fastcall **)(_QWORD *))(*v11 + 8LL))(v11);
      v24 = 0LL;
      if ( v11
        && (*(int (__fastcall **)(_QWORD *, GUID *, __int64 *))(*v11 + 24LL))(
             v11,
             &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
             &v24) >= 0
        && v24 )
      {
        if ( &v25 >= (_QWORD **)v8 || v9 > (char *)&v25 )
        {
          if ( v8 == v10 )
          {
            std::vector<Microsoft::WRL::WeakRef>::_Reserve(&v22);
            v8 = (char *)*((_QWORD *)&v22 + 1);
            v9 = (char *)v22;
            v10 = v23;
          }
          *(_QWORD *)v8 = v11;
          v14 = *v11;
          v13 = v11;
        }
        else
        {
          v12 = ((char *)&v25 - v9) >> 3;
          v27 = v12;
          if ( v8 == v10 )
          {
            std::vector<Microsoft::WRL::WeakRef>::_Reserve(&v22);
            v8 = (char *)*((_QWORD *)&v22 + 1);
            v9 = (char *)v22;
            v12 = v27;
            v10 = v23;
          }
          v13 = *(__int64 **)&v9[8 * v12];
          *(_QWORD *)v8 = v13;
          if ( !v13 )
            goto LABEL_19;
          v14 = *v13;
        }
        (*(void (__fastcall **)(__int64 *))(v14 + 8))(v13);
LABEL_19:
        v8 += 8;
        *((_QWORD *)&v22 + 1) = v8;
      }
      v15 = v24;
      if ( v24 )
      {
        v24 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
      if ( v11 )
        (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
      ++v6;
    }
    while ( v6 != v7 );
    v2 = v28;
    v4 = (void **)(v3 + 2);
    v1 = v26;
LABEL_26:
    if ( (v8 - v9) >> 3 )
    {
      v16 = *(_QWORD *)std::unordered_map<std::wstring,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>>::operator[](
                         v1,
                         v4)
          + 8LL;
      if ( (__int128 *)v16 != &v22 )
      {
        v17 = *(__int64 **)v16;
        if ( *(_QWORD *)v16 )
        {
          v18 = *(__int64 **)(v16 + 8);
          if ( v17 != v18 )
          {
            do
            {
              v19 = *v17;
              if ( *v17 )
              {
                *v17 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
              }
              ++v17;
            }
            while ( v17 != v18 );
            v17 = *(__int64 **)v16;
          }
          operator delete(v17);
          *(_QWORD *)v16 = 0LL;
          *(_QWORD *)(v16 + 8) = 0LL;
          *(_QWORD *)(v16 + 16) = 0LL;
        }
        *(_QWORD *)v16 = v9;
        *(_QWORD *)(v16 + 8) = v8;
        *(_QWORD *)(v16 + 16) = v23;
        v22 = 0LL;
        v8 = 0LL;
        v9 = 0LL;
      }
    }
    else
    {
      v31 = 7LL;
      v30[2] = 0LL;
      LOWORD(v30[0]) = 0;
      std::wstring::assign(v30, v4, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
      std::_Hash<std::_Umap_traits<std::wstring,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>>>,0>>::erase(
        v1,
        v30);
      if ( v31 >= 8 )
        operator delete(v30[0]);
    }
    if ( v9 )
    {
      for ( i = v9; i != v8; i += 8 )
      {
        v21 = *(_QWORD *)i;
        if ( *(_QWORD *)i )
        {
          *(_QWORD *)i = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        }
      }
      operator delete(v9);
    }
    v3 = (_QWORD *)*v3;
    v1 = v26;
  }
  while ( v3 != v2 );
}
