/*
 * XREFs of ?erase@?$_HashTable@_KU?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@QEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@utl@@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@2@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@utl@@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@2@@2@0@Z @ 0x18000F6C8
 * Callers:
 *     ?RemoveProxyResourceSet@ResourceManagerClientProxy@@QEAAJ_K@Z @ 0x18000F024 (-RemoveProxyResourceSet@ResourceManagerClientProxy@@QEAAJ_K@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180007598 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 **__fastcall utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ResourceSetClientProxy *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ResourceSetClientProxy *>>,0>::erase(
        __int64 a1,
        __int64 **a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 v7; // rsi
  __int64 *v9; // rcx
  __int64 **v10; // rax
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 **result; // rax

  v7 = (8LL << *(_BYTE *)(a1 + 32)) - 1;
  while ( a3 != a4 )
  {
    v9 = a3;
    a3 = (__int64 *)*a3;
    v10 = (__int64 **)v9[1];
    *v10 = a3;
    a3[1] = (__int64)v10;
    v11 = *(_QWORD *)(a1 + 16);
    v12 = 2 * (v7 & v9[2]);
    if ( *(__int64 **)(v11 + 16 * (v7 & v9[2])) == v9 )
    {
      if ( *(__int64 **)(v11 + 16 * (v7 & v9[2]) + 8) == v9 )
      {
        *(_QWORD *)(v11 + 16 * (v7 & v9[2]) + 8) = 0LL;
        v13 = 0LL;
      }
      else
      {
        v13 = *v9;
      }
      *(_QWORD *)(v11 + 8 * v12) = v13;
    }
    else if ( *(__int64 **)(v11 + 16 * (v7 & v9[2]) + 8) == v9 )
    {
      *(_QWORD *)(v11 + 16 * (v7 & v9[2]) + 8) = v9[1];
    }
    operator delete(v9);
    --*(_QWORD *)(a1 + 24);
  }
  result = a2;
  *a2 = a4;
  return result;
}
