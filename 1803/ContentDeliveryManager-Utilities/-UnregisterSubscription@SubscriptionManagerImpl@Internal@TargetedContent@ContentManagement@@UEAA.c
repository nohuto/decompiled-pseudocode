/*
 * XREFs of ?UnregisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJPEAUHSTRING__@@PEAUISubscriptionPriv@234@@Z @ 0x180044660
 * Callers:
 *     <none>
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x180037C48 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@@2@$0A@@std@@@std@@QEAA_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x180045AAC (-erase@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$.c)
 *     ??A?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@@2@@std@@QEAAAEAV?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180045B5C (--A-$unordered_map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$shared_ptr@V.c)
 *     ?erase@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@0@Z @ 0x180045CD4 (-erase@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA-AV.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::UnregisterSubscription(
        RTL_SRWLOCK *this,
        HSTRING a2,
        struct ContentManagement::TargetedContent::Internal::ISubscriptionPriv *a3)
{
  struct ContentManagement::TargetedContent::Internal::ISubscriptionPriv *v3; // rsi
  RTL_SRWLOCK *v6; // r15
  char *StringRawBuffer; // rax
  unsigned __int64 v8; // r8
  RTL_SRWLOCK *v9; // r13
  __int64 v10; // rax
  __int64 v11; // r12
  char *v12; // rbx
  __int64 *v13; // rdi
  __int64 *v14; // r14
  struct ContentManagement::TargetedContent::Internal::ISubscriptionPriv *v15; // rcx
  int v16; // eax
  bool v17; // zf
  char v18; // si
  char *i; // rsi
  struct ContentManagement::TargetedContent::Internal::ISubscriptionPriv *v20; // rcx
  int v21; // eax
  char v22; // r14
  __int64 *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  const char *v26; // r9
  struct ContentManagement::TargetedContent::Internal::ISubscriptionPriv *v28; // [rsp+20h] [rbp-88h] BYREF
  struct ContentManagement::TargetedContent::Internal::ISubscriptionPriv *v29; // [rsp+28h] [rbp-80h] BYREF
  struct ContentManagement::TargetedContent::Internal::ISubscriptionPriv *v30; // [rsp+30h] [rbp-78h]
  char v31[8]; // [rsp+38h] [rbp-70h] BYREF
  __int64 v32; // [rsp+40h] [rbp-68h]
  RTL_SRWLOCK *v33; // [rsp+48h] [rbp-60h]
  void *v34[2]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v35; // [rsp+60h] [rbp-48h]
  unsigned __int64 v36; // [rsp+68h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v32 = -2LL;
  v3 = a3;
  v30 = a3;
  try
  {
    v6 = this + 10;
    AcquireSRWLockExclusive(this + 10);
    v33 = v6;
    StringRawBuffer = (char *)WindowsGetStringRawBuffer(a2, 0LL);
    v36 = 7LL;
    v35 = 0LL;
    LOWORD(v34[0]) = 0;
    if ( *(_WORD *)StringRawBuffer )
    {
      v8 = -1LL;
      do
        ++v8;
      while ( *(_WORD *)&StringRawBuffer[2 * v8] );
    }
    else
    {
      v8 = 0LL;
    }
    std::wstring::assign(v34, StringRawBuffer, v8);
    v9 = this + 11;
    v10 = std::unordered_map<std::wstring,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>>::operator[](
            &this[11],
            v34);
    v11 = *(_QWORD *)v10;
    v12 = *(char **)(*(_QWORD *)v10 + 16LL);
    v13 = *(__int64 **)(*(_QWORD *)v10 + 8LL);
    if ( v13 != (__int64 *)v12 )
    {
      while ( 1 )
      {
        v14 = v13;
        v15 = 0LL;
        v28 = 0LL;
        if ( *v13
          && (v16 = (*(__int64 (__fastcall **)(__int64, GUID *, struct ContentManagement::TargetedContent::Internal::ISubscriptionPriv **))(*(_QWORD *)*v13 + 24LL))(
                      *v13,
                      &GUID_abd0aea7_14e7_4d83_80d4_ee8a293e8af9,
                      &v28),
              v15 = v28,
              v16 < 0)
          || (v17 = v3 == v15, v18 = 1, !v17) )
        {
          v18 = 0;
        }
        if ( v15 )
        {
          v28 = 0LL;
          (*(void (__fastcall **)(struct ContentManagement::TargetedContent::Internal::ISubscriptionPriv *))(*(_QWORD *)v15 + 16LL))(v15);
        }
        if ( v18 )
          break;
        if ( ++v13 == (__int64 *)v12 )
          break;
        v3 = v30;
      }
      v13 = v14 + 1;
      if ( v18 )
        v13 = v14;
      if ( v13 != (__int64 *)v12 )
      {
        for ( i = (char *)(v13 + 1); i != v12; i += 8 )
        {
          v20 = 0LL;
          v29 = 0LL;
          if ( *(_QWORD *)i
            && (v21 = (*(__int64 (__fastcall **)(_QWORD, GUID *, struct ContentManagement::TargetedContent::Internal::ISubscriptionPriv **))(**(_QWORD **)i + 24LL))(
                        *(_QWORD *)i,
                        &GUID_abd0aea7_14e7_4d83_80d4_ee8a293e8af9,
                        &v29),
                v20 = v29,
                v21 < 0)
            || (v22 = 1, v30 != v20) )
          {
            v22 = 0;
          }
          if ( v20 )
          {
            v29 = 0LL;
            (*(void (__fastcall **)(struct ContentManagement::TargetedContent::Internal::ISubscriptionPriv *))(*(_QWORD *)v20 + 16LL))(v20);
          }
          if ( !v22 )
          {
            v23 = v13++;
            if ( v31 == i )
            {
              v24 = 0LL;
            }
            else
            {
              v24 = *(_QWORD *)i;
              *(_QWORD *)i = 0LL;
            }
            v25 = *v23;
            *v23 = v24;
            if ( v25 )
              (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v25 + 16LL))(v25, v23, 0LL);
          }
        }
      }
    }
    std::vector<Microsoft::WRL::WeakRef>::erase(v11 + 8, v31, v13, v12);
    if ( ((*(_QWORD *)(v11 + 16) - *(_QWORD *)(v11 + 8)) & 0xFFFFFFFFFFFFFFF8uLL) == 0 )
      std::_Hash<std::_Umap_traits<std::wstring,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>>>,0>>::erase(
        v9,
        v34);
    if ( v36 >= 8 )
      operator delete(v34[0]);
    v36 = 7LL;
    v35 = 0LL;
    LOWORD(v34[0]) = 0;
    if ( v6 )
      ReleaseSRWLockExclusive(v6);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x99,
                           (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
                           v26);
  }
  return 0LL;
}
