/*
 * XREFs of ?at@?$unordered_map@IUViewHierarchyEntry@ViewHierarchy@@U?$hash@I@std@@U?$equal_to@I@4@V?$allocator@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@4@@std@@QEBAAEBUViewHierarchyEntry@ViewHierarchy@@AEBI@Z @ 0x18002CCBC
 * Callers:
 *     ?GetAllAncestors@ViewHierarchy@@UEBA?AV?$vector@IV?$allocator@I@std@@@std@@I@Z @ 0x18002C710 (-GetAllAncestors@ViewHierarchy@@UEBA-AV-$vector@IV-$allocator@I@std@@@std@@I@Z.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::unordered_map<unsigned int,ViewHierarchy::ViewHierarchyEntry>::at(_QWORD *a1, _DWORD *a2)
{
  __int64 v3; // r8
  unsigned __int64 i; // r9
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 *v9; // rdx
  __int64 v10; // r9
  __int64 *j; // rax
  __int64 v12; // rcx

  v3 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
  {
    v6 = *((unsigned __int8 *)a2 + i);
    v3 = 0x100000001B3LL * (v6 ^ v3);
  }
  v7 = v3 & a1[6];
  v8 = a1[3];
  v9 = (__int64 *)a1[1];
  v10 = 2 * v7;
  for ( j = *(__int64 **)(v8 + 16 * v7); ; j = (__int64 *)*j )
  {
    v12 = *(__int64 **)(v8 + 8 * v10) == v9 ? (__int64)v9 : **(_QWORD **)(v8 + 8 * v10 + 8);
    if ( j == (__int64 *)v12 )
      break;
    if ( *((_DWORD *)j + 4) == *a2 )
      goto LABEL_11;
  }
  j = v9;
LABEL_11:
  if ( j == v9 )
  {
    std::_Xout_of_range("invalid unordered_map<K, T> key");
    __debugbreak();
  }
  return j + 3;
}
