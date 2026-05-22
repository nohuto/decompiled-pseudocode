/*
 * XREFs of ?OnDeviceRemoval@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z @ 0x18007E690
 * Callers:
 *     <none>
 * Callees:
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUInputContext@@@std@@@std@@@std@@@std@@X@?$_Hash@V?$_Umap_traits@KUInputContext@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUInputContext@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUInputContext@@@std@@@std@@@std@@@1@V21@@Z @ 0x180081BF8 (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBKUInputContext@@@std@@.c)
 */

__int64 __fastcall DWMInputRouter::OnDeviceRemoval(__int64 **this, struct DeviceInfo *a2)
{
  _QWORD *v4; // rcx
  __int64 v5; // r8
  unsigned __int64 i; // r9
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 *v11; // r10
  __int64 *j; // r8
  __int64 *v13; // rax
  char v15; // [rsp+30h] [rbp+8h] BYREF

  v4 = this + 78;
  v5 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
  {
    v7 = *((unsigned __int8 *)a2 + i);
    v5 = 0x100000001B3LL * (v7 ^ v5);
  }
  v8 = v4[3];
  v9 = v5 & v4[6];
  v10 = 2 * v9;
  v11 = *(__int64 **)(v8 + 16 * v9);
  for ( j = v11; ; j = (__int64 *)*j )
  {
    v13 = v11 == (__int64 *)v4[1] ? (__int64 *)v4[1] : **(__int64 ***)(v8 + 8 * v10 + 8);
    if ( j == v13 )
      break;
    if ( *((_DWORD *)j + 4) == *(_DWORD *)a2 )
      goto LABEL_11;
  }
  j = (__int64 *)v4[1];
LABEL_11:
  if ( j != this[79] )
    std::_Hash<std::_Umap_traits<unsigned long,InputContext,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,InputContext>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,InputContext>>>>,void>(
      v4,
      &v15);
  return DWMInputRouter::OnDeviceChange((DWMInputRouter *)this, a2, 0);
}
