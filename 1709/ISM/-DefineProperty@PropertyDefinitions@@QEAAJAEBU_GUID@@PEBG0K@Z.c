/*
 * XREFs of ?DefineProperty@PropertyDefinitions@@QEAAJAEBU_GUID@@PEBG0K@Z @ 0x180033864
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18001789C (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x180028C80 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?QueryType@PropertyDefinitions@@QEBAJAEBU_GUID@@PEAPEBUPropertyTypeInfo@Input@@@Z @ 0x1800337B8 (-QueryType@PropertyDefinitions@@QEBAJAEBU_GUID@@PEAPEBUPropertyTypeInfo@Input@@@Z.c)
 *     ?QueryProperty@PropertyDefinitions@@QEBAJAEBU_GUID@@PEAPEBUPropertyInfo@Input@@@Z @ 0x180033A38 (-QueryProperty@PropertyDefinitions@@QEBAJAEBU_GUID@@PEAPEBUPropertyInfo@Input@@@Z.c)
 *     ??4PropertyInfo@Input@@QEAAAEAU01@AEBU01@@Z @ 0x180033D28 (--4PropertyInfo@Input@@QEAAAEAU01@AEBU01@@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z @ 0x1800340E8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBU_GUID@@@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@U_GUID@@UPropertyInfo@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@@std@@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBU_GUID@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18003450C (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBU_GUID@@@2@V-$tuple@$$V@2@@-$_Tree_comp_a.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@UPropertyInfo@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@1@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@PEAX@1@@Z @ 0x180034574 (--$_Insert_hint@AEAU-$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@PEAU-$_Tree_node@U-$pair@$$CBU.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800CC371 (memcmp_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PropertyDefinitions::DefineProperty(
        struct Input::PropertyTypeInfo **this,
        const struct _GUID *Buf1,
        unsigned __int16 *Src,
        const struct _GUID *a4,
        unsigned int a5)
{
  __int64 result; // rax
  unsigned int v10; // esi
  __int64 v11; // rdx
  struct Input::PropertyTypeInfo *v12; // rdi
  __int64 *v13; // r14
  struct Input::PropertyTypeInfo *v14; // rbx
  __int64 v15; // rax
  struct Input::PropertyTypeInfo *v16[2]; // [rsp+30h] [rbp-88h] BYREF
  struct _GUID v17; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int64 v18[2]; // [rsp+50h] [rbp-68h] BYREF
  __m128i si128; // [rsp+60h] [rbp-58h]
  struct Input::PropertyTypeInfo *v20; // [rsp+70h] [rbp-48h]
  int v21; // [rsp+78h] [rbp-40h]

  v16[1] = (struct Input::PropertyTypeInfo *)-2LL;
  if ( *(_OWORD *)Buf1 == 0LL )
    return 2205630466LL;
  if ( !*(_QWORD *)&a4->Data1 && !*(_QWORD *)a4->Data4 )
    return 2205630465LL;
  v10 = 0;
  if ( !Src || !*Src )
    return 2205630467LL;
  if ( PropertyDefinitions::QueryProperty((PropertyDefinitions *)this, Buf1, 0LL) >= 0 )
    return 2205630472LL;
  result = PropertyDefinitions::QueryType((PropertyDefinitions *)this, a4, v16);
  if ( (int)result >= 0 )
  {
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    LOWORD(v18[0]) = 0;
    v20 = 0LL;
    v21 = 0;
    v17 = *Buf1;
    std::wstring::assign(v18, Src);
    v20 = v16[0];
    v21 = 3;
    try
    {
      v12 = this[2];
      v13 = (__int64 *)*((_QWORD *)v12 + 1);
      v14 = v12;
      while ( !*((_BYTE *)v13 + 25) )
      {
        if ( memcmp_0(v13 + 4, Buf1, 0x10uLL) >= 0 )
        {
          v14 = (struct Input::PropertyTypeInfo *)v13;
          v13 = (__int64 *)*v13;
        }
        else
        {
          v13 = (__int64 *)v13[2];
        }
      }
      if ( v14 == v12 || memcmp_0(Buf1, (char *)v14 + 32, 0x10uLL) < 0 )
      {
        v16[0] = (struct Input::PropertyTypeInfo *)Buf1;
        v15 = std::_Tree_comp_alloc<std::_Tmap_traits<_GUID,Input::PropertyInfo,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyInfo>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<_GUID const &>,std::tuple<>>(
                this + 2,
                v11,
                v16);
        std::_Tree<std::_Tmap_traits<_GUID,Input::PropertyInfo,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyInfo>>,0>>::_Insert_hint<std::pair<_GUID const,Input::PropertyInfo> &,std::_Tree_node<std::pair<_GUID const,Input::PropertyInfo>,void *> *>(
          this + 2,
          v16,
          v14,
          v15 + 32,
          v15);
        v14 = v16[0];
      }
      if ( &v17 != (struct _GUID *)((char *)v14 + 48) )
        Input::PropertyInfo::operator=((char *)v14 + 48, &v17);
    }
    catch ( ... )
    {
      LODWORD(v16[0]) = -2147024882;
      v10 = -2147024882;
    }
    std::wstring::_Tidy_deallocate(v18);
    return v10;
  }
  return result;
}
