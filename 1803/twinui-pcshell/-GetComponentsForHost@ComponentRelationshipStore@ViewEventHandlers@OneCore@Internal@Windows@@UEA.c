/*
 * XREFs of ?GetComponentsForHost@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJUtagHostIdentifier@2345@PEAPEAU?$IVectorView@I@Collections@Foundation@5@@Z @ 0x18002F060
 * Callers:
 *     ?_ForEachComponent@ViewEventDispatcher@@AEAAXIAEBV?$function@$$A6AXPEAUIViewWrapperInternal@@@Z@std@@@Z @ 0x1800325CC (-_ForEachComponent@ViewEventDispatcher@@AEAAXIAEBV-$function@$$A6AXPEAUIViewWrapperInternal@@@Z@.c)
 *     ?_HostChanged@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z @ 0x180032664 (-_HostChanged@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x18008DAB0 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@_K@Z @ 0x1800FA60C (-_End@-$_Hash@V-$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventH_ea_1800FA60C.c)
 *     ??R?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@QEBA_NAEBUHostIdentifierKey@@0@Z @ 0x1800FA710 (--R-$_Uhash_compare@UHostIdentifierKey@@U-$hash@UHostIdentifierKey@@@std@@U-$equal_to@UHostIdent.c)
 *     ??0?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$DefaultVectorOptions@I@2345@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@I@1234@Upermission@01234@@Z @ 0x180300404 (--0-$Vector@IU-$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U-$DefaultLi.c)
 */

__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetComponentsForHost(
        RTL_SRWLOCK *a1,
        int *a2,
        _QWORD *a3)
{
  RTL_SRWLOCK *v3; // rbp
  __int64 *v4; // rdi
  RTL_SRWLOCK *v5; // r15
  unsigned int v6; // r14d
  int v7; // ebx
  unsigned __int64 v8; // rcx
  _QWORD *Ptr; // r10
  unsigned __int64 v10; // r11
  _QWORD *v11; // rcx
  _QWORD *v12; // rbx
  _QWORD *v13; // r12
  _QWORD *i; // rsi
  _QWORD *v15; // r14
  _QWORD *v16; // rax
  _QWORD *v17; // rbx
  unsigned int v18; // r14d
  __int64 v20; // r11
  __int64 v21; // rcx
  void *v22; // rax
  __int64 v23; // r15
  __int64 v24; // r12
  __int64 v25; // rax
  int v26[18]; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v28; // [rsp+70h] [rbp+8h] BYREF
  __int64 v29; // [rsp+78h] [rbp+10h] BYREF
  _QWORD *v30; // [rsp+80h] [rbp+18h]

  v30 = a3;
  v3 = a1 + 9;
  v4 = 0LL;
  *a3 = 0LL;
  v5 = a1 + 11;
  v6 = a2[1];
  v7 = *a2;
  LODWORD(v29) = v6 >> 8;
  LODWORD(v28) = a2[2];
  v26[2] = v28;
  v26[0] = v7;
  v26[1] = v6;
  AcquireSRWLockShared(a1 + 9);
  if ( v7 == 1 )
    v8 = std::_Hash_bytes((const unsigned __int8 *)&v28, 4uLL);
  else
    v8 = 0x100000001B3LL
       * (HIBYTE(v6) ^ (0x100000001B3LL
                      * (BYTE2(v6) ^ (0x100000001B3LL
                                    * ((unsigned __int8)v29 ^ (0x100000001B3LL
                                                             * ((unsigned __int8)v6 ^ 0xCBF29CE484222325uLL)))))));
  Ptr = v5[1].Ptr;
  v10 = v8 & (unsigned __int64)v5[6].Ptr;
  v11 = v5[3].Ptr;
  v12 = (_QWORD *)v11[2 * v10];
  v13 = &v11[2 * v10];
  for ( i = v12; ; i = (_QWORD *)*i )
  {
    v15 = i;
    if ( v12 == Ptr )
      v16 = Ptr;
    else
      v16 = *(_QWORD **)v13[1];
    if ( i == v16 )
      goto LABEL_7;
    if ( !(unsigned __int8)std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>::operator()(
                             v11,
                             i + 2,
                             v26) )
      break;
  }
  v17 = i;
  while ( i != *(_QWORD **)std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::_End(
                             v5,
                             &v28,
                             v20)
       && !(unsigned __int8)std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>::operator()(
                              v21,
                              v26,
                              i + 2) )
    i = (_QWORD *)*i;
  if ( v15 == i )
  {
LABEL_7:
    v17 = Ptr;
    i = Ptr;
  }
  if ( v17 == i )
  {
    v18 = -2140667902;
  }
  else
  {
    v28 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
    v28 = 0LL;
    v29 = 0LL;
    v22 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
    v23 = 0LL;
    if ( v22 )
    {
      v23 = Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<unsigned int>>::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<unsigned int>>(v22);
      v29 = v23;
    }
    v18 = -2147024882;
    v24 = 0LL;
    if ( v23 )
    {
      v18 = 0;
      v29 = 0LL;
      v24 = v23;
      v4 = (__int64 *)v23;
      v28 = v23;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
    if ( v23 )
    {
      if ( v24 )
      {
        while ( 1 )
        {
          v25 = *v4;
          if ( v17 == i )
            break;
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v25 + 88))(v4, 0LL, *((unsigned int *)v17 + 7));
          v17 = (_QWORD *)*v17;
        }
        v18 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *))(v25 + 64))(v4, v30);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x214,
          (unsigned int)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
          (const char *)0x8007000ELL,
          v26[0]);
        v18 = -2147024882;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x213,
        (unsigned int)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
        (const char *)v18,
        v26[0]);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
  }
  if ( v3 )
    ReleaseSRWLockShared(v3);
  return v18;
}
