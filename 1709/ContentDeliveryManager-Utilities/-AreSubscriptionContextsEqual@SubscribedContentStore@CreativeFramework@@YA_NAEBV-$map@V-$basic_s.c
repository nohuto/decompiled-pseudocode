/*
 * XREFs of ?AreSubscriptionContextsEqual@SubscribedContentStore@CreativeFramework@@YA_NAEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@0@Z @ 0x18003EDA0
 * Callers:
 *     ?ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@PEAW4SubscriptionActivationFlags@12@@Z @ 0x18003F64C (-ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV-$map@V-$ba.c)
 * Callees:
 *     ??0?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@QEAA@AEBU01@@Z @ 0x18003EF28 (--0-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V12@@std@@QEAA@AEBU0.c)
 *     std::_Find_if_std::_Tree_unchecked_const_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short__________std::_Iterator_base0___lambda_30b10436083aba01be8f7c4a25a13343___ @ 0x180043CD0 (std--_Find_if_std--_Tree_unchecked_const_iterator_std--_Tree_val_std--_Tree_simple_types_std--pa.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall CreativeFramework::SubscribedContentStore::AreSubscriptionContextsEqual(
        __int64 ***a1,
        __int64 **a2,
        __int64 a3)
{
  __int64 *v4; // rax
  __int64 **v5; // rsi
  __int64 *v6; // rdi
  __int64 *v7; // r14
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 *v10; // rbx
  __int64 *v11; // rax
  __int64 *i; // rcx
  void *v14[4]; // [rsp+20h] [rbp-69h] BYREF
  void *v15; // [rsp+40h] [rbp-49h]
  __int64 v16; // [rsp+50h] [rbp-39h]
  unsigned __int64 v17; // [rsp+58h] [rbp-31h]
  __int64 v18; // [rsp+60h] [rbp-29h]
  _BYTE v19[120]; // [rsp+68h] [rbp-21h] BYREF
  char v20; // [rsp+108h] [rbp+7Fh] BYREF

  v18 = -2LL;
  v4 = (__int64 *)a1[1];
  LOBYTE(a3) = v4 == a2[1];
  if ( v4 == a2[1] )
  {
    v5 = *a1;
    v6 = **a1;
    if ( v6 != (__int64 *)*a1 )
    {
      do
      {
        std::pair<std::wstring const,std::wstring>::pair<std::wstring const,std::wstring>(v14, v6 + 4, a3);
        v7 = *a2;
        v8 = **a2;
        std::pair<std::wstring const,std::wstring>::pair<std::wstring const,std::wstring>(v19, v14, v9);
        v10 = *(__int64 **)std::_Find_if_std::_Tree_unchecked_const_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short__________std::_Iterator_base0___lambda_30b10436083aba01be8f7c4a25a13343___(
                             &v20,
                             v8,
                             v7,
                             v19);
        if ( v17 >= 8 )
          operator delete(v15);
        v17 = 7LL;
        v16 = 0LL;
        LOWORD(v15) = 0;
        if ( v14[3] >= (void *)8 )
          operator delete(v14[0]);
        LOBYTE(a3) = v10 != v7;
        if ( v10 == v7 )
          break;
        if ( !*((_BYTE *)v6 + 25) )
        {
          v11 = (__int64 *)v6[2];
          if ( *((_BYTE *)v11 + 25) )
          {
            for ( i = (__int64 *)v6[1]; !*((_BYTE *)i + 25) && v6 == (__int64 *)i[2]; i = (__int64 *)i[1] )
              v6 = i;
            v6 = i;
          }
          else
          {
            do
            {
              v6 = v11;
              v11 = (__int64 *)*v11;
            }
            while ( !*((_BYTE *)v11 + 25) );
          }
        }
      }
      while ( v6 != (__int64 *)v5 );
    }
  }
  return a3;
}
