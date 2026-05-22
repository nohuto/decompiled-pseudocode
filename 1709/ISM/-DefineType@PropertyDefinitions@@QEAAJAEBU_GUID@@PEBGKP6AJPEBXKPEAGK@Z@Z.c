/*
 * XREFs of ?DefineType@PropertyDefinitions@@QEAAJAEBU_GUID@@PEBGKP6AJPEBXKPEAGK@Z@Z @ 0x1800335AC
 * Callers:
 *     ?ProcessInit@PropertyDefinitions@@SAJXZ @ 0x180033254 (-ProcessInit@PropertyDefinitions@@SAJXZ.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x180028C80 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?QueryType@PropertyDefinitions@@QEBAJAEBU_GUID@@PEAPEBUPropertyTypeInfo@Input@@@Z @ 0x1800337B8 (-QueryType@PropertyDefinitions@@QEBAJAEBU_GUID@@PEAPEBUPropertyTypeInfo@Input@@@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z @ 0x1800340E8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z.c)
 *     std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::_Reallocate_for__lambda_3fa8b2c8193a0f3144fc4b1b8f243931__wchar_t_const_____ptr64_ @ 0x180034298 (std--basic_string_wchar_t_std--char_traits_wchar_t__std--allocator_wchar_t___--_Reallocate_for__.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@UPropertyInfo@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@1@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@PEAX@1@@Z @ 0x180034574 (--$_Insert_hint@AEAU-$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@PEAU-$_Tree_node@U-$pair@$$CBU.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBU_GUID@@@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@U_GUID@@UPropertyTypeInfo@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@UPropertyTypeInfo@Input@@@std@@@std@@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UPropertyTypeInfo@Input@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBU_GUID@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18003480C (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBU_GUID@@@2@V-$tuple@$$V@2@@-_ea_18003480C.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800CC371 (memcmp_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PropertyDefinitions::DefineType(
        PropertyDefinitions *this,
        const struct _GUID *a2,
        unsigned __int16 *a3,
        unsigned int a4,
        int (*a5)(const void *, unsigned int, unsigned __int16 *, unsigned int))
{
  unsigned int v10; // esi
  __int64 v11; // rdx
  __int64 *v12; // rdi
  __int64 *v13; // r14
  __int64 *v14; // rbx
  __int64 v15; // r8
  __int64 v16; // rax
  struct _GUID *v17; // rdi
  void **v18; // rcx
  void **v19; // r9
  __int64 v20; // rdx
  char *v21; // r14
  __int64 v22; // rbx
  _QWORD v23[2]; // [rsp+30h] [rbp-98h] BYREF
  struct _GUID v24; // [rsp+40h] [rbp-88h] BYREF
  void *Src[2]; // [rsp+50h] [rbp-78h] BYREF
  __m128i si128; // [rsp+60h] [rbp-68h]
  unsigned int v27; // [rsp+70h] [rbp-58h]
  int (*v28)(const void *, unsigned int, unsigned __int16 *, unsigned int); // [rsp+78h] [rbp-50h]

  v23[1] = -2LL;
  if ( *(_OWORD *)a2 == 0LL )
    return 2205630465LL;
  v10 = 0;
  if ( !a3 || !*a3 )
    return 2205630467LL;
  if ( !a5 )
    return 2205630469LL;
  if ( PropertyDefinitions::QueryType(this, a2, 0LL) >= 0 )
    return 2205630470LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(Src[0]) = 0;
  v27 = 0;
  v28 = 0LL;
  v24 = *a2;
  std::wstring::assign(Src, a3);
  v27 = a4;
  v28 = a5;
  try
  {
    v12 = *(__int64 **)this;
    v13 = *(__int64 **)(*(_QWORD *)this + 8LL);
    v14 = *(__int64 **)this;
    while ( !*((_BYTE *)v13 + 25) )
    {
      if ( memcmp_0(v13 + 4, a2, 0x10uLL) >= 0 )
      {
        v14 = v13;
        v13 = (__int64 *)*v13;
      }
      else
      {
        v13 = (__int64 *)v13[2];
      }
    }
    if ( v14 == v12 || memcmp_0(a2, v14 + 4, 0x10uLL) < 0 )
    {
      v23[0] = a2;
      v16 = std::_Tree_comp_alloc<std::_Tmap_traits<_GUID,Input::PropertyTypeInfo,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyTypeInfo>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<_GUID const &>,std::tuple<>>(
              this,
              v11,
              v23);
      std::_Tree<std::_Tmap_traits<_GUID,Input::PropertyInfo,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyInfo>>,0>>::_Insert_hint<std::pair<_GUID const,Input::PropertyInfo> &,std::_Tree_node<std::pair<_GUID const,Input::PropertyInfo>,void *> *>(
        this,
        v23,
        v14,
        v16 + 32,
        v16);
      v14 = (__int64 *)v23[0];
    }
    v17 = (struct _GUID *)(v14 + 6);
    if ( &v24 != (struct _GUID *)(v14 + 6) )
    {
      *v17 = v24;
      v18 = (void **)(v14 + 8);
      if ( v14 + 8 != (__int64 *)Src )
      {
        v19 = Src;
        if ( si128.m128i_i64[1] >= 8uLL )
          v19 = (void **)Src[0];
        v20 = si128.m128i_i64[0];
        if ( si128.m128i_i64[0] > (unsigned __int64)v14[11] )
        {
          std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::_Reallocate_for__lambda_3fa8b2c8193a0f3144fc4b1b8f243931__wchar_t_const_____ptr64_(
            v18,
            si128.m128i_i64[0],
            v15,
            v19);
        }
        else
        {
          v21 = (char *)(v14 + 8);
          if ( (unsigned __int64)v14[11] >= 8 )
            v21 = (char *)*v18;
          v14[10] = si128.m128i_i64[0];
          v22 = 2 * v20;
          memmove(v21, v19, 2 * v20);
          *(_WORD *)&v21[v22] = 0;
        }
      }
      v17[3].Data1 = v27;
      *(_QWORD *)v17[3].Data4 = v28;
    }
  }
  catch ( ... )
  {
    LODWORD(v23[0]) = -2147024882;
    v10 = -2147024882;
  }
  std::wstring::_Tidy_deallocate((unsigned __int64 *)Src);
  return v10;
}
