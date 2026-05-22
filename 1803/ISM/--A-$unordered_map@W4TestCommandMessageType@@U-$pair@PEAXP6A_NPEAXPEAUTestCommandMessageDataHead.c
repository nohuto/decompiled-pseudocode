/*
 * XREFs of ??A?$unordered_map@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@U?$hash@W4TestCommandMessageType@@@3@U?$equal_to@W4TestCommandMessageType@@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@@std@@QEAAAEAU?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@1@AEBW4TestCommandMessageType@@@Z @ 0x18000A298
 * Callers:
 *     ??1CommandRegistrationToken@TestCommandHost@@QEAA@XZ @ 0x1800098AC (--1CommandRegistrationToken@TestCommandHost@@QEAA@XZ.c)
 *     ?RegisterForTestCommandMessage@TestCommandHost@@SAXW4TestCommandMessageType@@PEAXQ6A_N1PEAUTestCommandMessageDataHeader@@@ZAEAVCommandRegistrationToken@1@@Z @ 0x180009950 (-RegisterForTestCommandMessage@TestCommandHost@@SAXW4TestCommandMessageType@@PEAXQ6A_N1PEAUTestC.c)
 *     ?OnCoreMessageStatic@TestCommandHost@@CAJPEAXPEBXH@Z @ 0x180009ED0 (-OnCoreMessageStatic@TestCommandHost@@CAJPEAXPEBXH@Z.c)
 * Callees:
 *     ??$_Insert@AEAU?$pair@$$CBK_K@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBK_K@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@K_KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBK_K@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBK_K@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBK_K@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBK_K@std@@@std@@@std@@@1@@Z @ 0x18000A98C (--$_Insert@AEAU-$pair@$$CBK_K@std@@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_type.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBW4TestCommandMessageType@@@2@V?$tuple@$$V@2@@?$_List_buy@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@PEAX@1@PEAU21@0AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBW4TestCommandMessageType@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18000ABF8 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBW4TestCommandMessageType@@@2@V-$tuple@$$V.c)
 */

__int64 *__fastcall std::unordered_map<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>::operator[](
        _QWORD *a1,
        _DWORD *a2)
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
    v17 = std::_List_buy<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>::_Buynode<std::piecewise_construct_t const &,std::tuple<enum TestCommandMessageType const &>,std::tuple<>>(
            (_DWORD)v13,
            v15,
            (_DWORD)v16,
            v10,
            (__int64)&v21);
    v18 = a1[2];
    if ( v18 == 0x666666666666665LL )
      std::_Xlength_error("list<T> too long");
    a1[2] = v18 + 1;
    *(_QWORD *)(v14 + 8) = v17;
    *v16 = v17;
    std::_Hash<std::_Umap_traits<unsigned long,unsigned __int64,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned __int64>>,0>>::_Insert<std::pair<unsigned long const,unsigned __int64> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,unsigned __int64>>>>>(
      a1,
      v20,
      *(_QWORD *)a1[1] + 16LL);
    j = (__int64 *)v20[0];
  }
  return j + 3;
}
