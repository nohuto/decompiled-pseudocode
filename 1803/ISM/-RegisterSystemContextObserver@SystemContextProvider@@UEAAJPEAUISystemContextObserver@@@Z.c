/*
 * XREFs of ?RegisterSystemContextObserver@SystemContextProvider@@UEAAJPEAUISystemContextObserver@@@Z @ 0x180090F90
 * Callers:
 *     ?RegisterSystemContextObserver@InputConfigContextProvider@@UEAAJPEAUISystemContextObserver@@@Z @ 0x180090690 (-RegisterSystemContextObserver@InputConfigContextProvider@@UEAAJPEAUISystemContextObserver@@@Z.c)
 * Callees:
 *     ??$_Insert@AEBQEAUIHeatSystemContextClient@@U_Not_a_node_tag@std@@@?$_Hash@V?$_Uset_traits@PEAUIHeatSystemContextClient@@V?$_Uhash_compare@PEAUIHeatSystemContextClient@@U?$hash@PEAUIHeatSystemContextClient@@@std@@U?$equal_to@PEAUIHeatSystemContextClient@@@3@@std@@V?$allocator@PEAUIHeatSystemContextClient@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIHeatSystemContextClient@@@std@@@std@@@std@@_N@1@AEBQEAUIHeatSystemContextClient@@U_Not_a_node_tag@1@@Z @ 0x18003A458 (--$_Insert@AEBQEAUIHeatSystemContextClient@@U_Not_a_node_tag@std@@@-$_Hash@V-$_Uset_traits@PEAUI.c)
 */

__int64 __fastcall SystemContextProvider::RegisterSystemContextObserver(
        __int64 **this,
        struct ISystemContextObserver *a2)
{
  unsigned int v2; // ebx
  _QWORD *v5; // r10
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r11
  __int64 *v12; // rdi
  __int64 *i; // rax
  __int64 *v14; // rcx
  _BYTE v16[24]; // [rsp+20h] [rbp-18h] BYREF
  struct ISystemContextObserver *v17; // [rsp+48h] [rbp+10h] BYREF

  v17 = a2;
  v2 = 0;
  if ( !a2 )
    return (unsigned int)-2147024809;
  v5 = this + 3;
  v6 = 0xCBF29CE484222325uLL;
  v7 = 0LL;
  do
  {
    v8 = *((unsigned __int8 *)&v17 + v7++);
    v6 = 0x100000001B3LL * (v8 ^ v6);
  }
  while ( v7 < 8 );
  v9 = v6 & v5[6];
  v10 = v5[3];
  v11 = 2 * v9;
  v12 = *(__int64 **)(v10 + 16 * v9);
  for ( i = v12; ; i = (__int64 *)*i )
  {
    v14 = v12 == (__int64 *)v5[1] ? (__int64 *)v5[1] : **(__int64 ***)(v10 + 8 * v11 + 8);
    if ( i == v14 )
      break;
    if ( (struct ISystemContextObserver *)i[2] == a2 )
      goto LABEL_13;
  }
  i = (__int64 *)v5[1];
LABEL_13:
  if ( i == this[4] )
    std::_Hash<std::_Uset_traits<IHeatSystemContextClient *,std::_Uhash_compare<IHeatSystemContextClient *,std::hash<IHeatSystemContextClient *>,std::equal_to<IHeatSystemContextClient *>>,std::allocator<IHeatSystemContextClient *>,0>>::_Insert<IHeatSystemContextClient * const &,std::_Not_a_node_tag>(
      v5,
      (__int64)v16,
      (__int64 *)&v17);
  else
    return (unsigned int)-2147024809;
  return v2;
}
