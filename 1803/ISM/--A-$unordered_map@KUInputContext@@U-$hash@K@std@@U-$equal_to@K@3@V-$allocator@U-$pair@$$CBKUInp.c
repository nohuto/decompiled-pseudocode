/*
 * XREFs of ??A?$unordered_map@KUInputContext@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKUInputContext@@@std@@@3@@std@@QEAAAEAUInputContext@@AEBK@Z @ 0x180080EDC
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z @ 0x18007E750 (-HitTest@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z.c)
 *     ?GetTargetWithFocus@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUDeviceInfo@@PEAUIInputTarget@@PEAPEAU4@@Z @ 0x18007F2B0 (-GetTargetWithFocus@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUDeviceInfo@@PEAUIInputTarget@@PE.c)
 * Callees:
 *     ??$_Insert@AEAU?$pair@$$CBKUInputContext@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUInputContext@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KUInputContext@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUInputContext@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUInputContext@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBKUInputContext@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUInputContext@@@std@@@std@@@std@@@1@@Z @ 0x180081F44 (--$_Insert@AEAU-$pair@$$CBKUInputContext@@@std@@V-$_List_unchecked_iterator@V-$_List_val@U-$_Lis.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_List_buy@U?$pair@$$CBKUInputContext@@@std@@V?$allocator@U?$pair@$$CBKUInputContext@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKUInputContext@@@std@@PEAX@1@PEAU21@0AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800821E0 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@2@V-$tuple@$$V@2@@-$_List__ea_1800821E0.c)
 */

__int64 *__fastcall std::unordered_map<unsigned long,InputContext>::operator[](_QWORD *a1, _DWORD *a2)
{
  __int64 v4; // r8
  unsigned __int64 i; // r9
  __int64 v6; // rax
  __int64 *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *j; // rax
  __int64 *v12; // rcx
  __int64 *v13; // rcx
  __int64 v14; // rdi
  int v15; // edx
  __int64 *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rax
  _QWORD v20[3]; // [rsp+30h] [rbp-18h] BYREF
  _DWORD *v21; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
  {
    v6 = *((unsigned __int8 *)a2 + i);
    v4 = 0x100000001B3LL * (v6 ^ v4);
  }
  v7 = (__int64 *)a1[1];
  v8 = v4 & a1[6];
  v9 = a1[3];
  v10 = 2 * v8;
  for ( j = *(__int64 **)(v9 + 16 * v8); ; j = (__int64 *)*j )
  {
    v12 = *(__int64 **)(v9 + 8 * v10) == v7 ? (__int64 *)a1[1] : **(__int64 ***)(v9 + 8 * v10 + 8);
    if ( j == v12 )
      break;
    if ( *((_DWORD *)j + 4) == *a2 )
    {
      v13 = j;
      goto LABEL_12;
    }
  }
  j = (__int64 *)a1[1];
  v13 = j;
LABEL_12:
  if ( v13 == v7 )
  {
    v14 = *v7;
    v15 = *v7;
    v21 = a2;
    v16 = *(__int64 **)(v14 + 8);
    v17 = std::_List_buy<std::pair<unsigned long const,InputContext>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
            (_DWORD)v13,
            v15,
            (_DWORD)v16,
            v10,
            (__int64)&v21);
    v18 = a1[2];
    if ( v18 == 0x3FFFFFFFFFFFFFELL )
      std::_Xlength_error("list<T> too long");
    a1[2] = v18 + 1;
    *(_QWORD *)(v14 + 8) = v17;
    *v16 = v17;
    std::_Hash<std::_Umap_traits<unsigned long,InputContext,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,InputContext>>,0>>::_Insert<std::pair<unsigned long const,InputContext> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,InputContext>>>>>(
      a1,
      v20,
      *(_QWORD *)a1[1] + 16LL);
    j = (__int64 *)v20[0];
  }
  return j + 3;
}
