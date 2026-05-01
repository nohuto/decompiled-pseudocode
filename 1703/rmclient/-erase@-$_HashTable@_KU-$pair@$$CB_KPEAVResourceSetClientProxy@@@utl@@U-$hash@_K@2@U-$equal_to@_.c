/*
 * XREFs of ?erase@?$_HashTable@_KU?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@QEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@utl@@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@utl@@@2@0@Z @ 0x18000E528
 * Callers:
 *     ?RemoveProxyResourceSet@ResourceManagerClientProxy@@QEAAJ_K@Z @ 0x18000DF44 (-RemoveProxyResourceSet@ResourceManagerClientProxy@@QEAAJ_K@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180007C88 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 **__fastcall utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ResourceSetClientProxy *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ResourceSetClientProxy *>>,0>::erase(
        __int64 a1,
        __int64 **a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 v7; // r14
  __int64 *v9; // rcx
  __int64 *v10; // rdx
  __int64 v11; // rax
  __int64 *v12; // rdx
  __int64 **result; // rax

  v7 = (8LL << *(_BYTE *)(a1 + 32)) - 1;
  while ( a3 != a4 )
  {
    v9 = a3;
    a3 = (__int64 *)*a3;
    v10 = (__int64 *)v9[1];
    v11 = *v9;
    *v10 = *v9;
    *(_QWORD *)(v11 + 8) = v10;
    v12 = (__int64 *)(*(_QWORD *)(a1 + 16) + 16 * (v7 & v9[2]));
    if ( (__int64 *)*v12 == v9 )
    {
      if ( (__int64 *)v12[1] == v9 )
      {
        *v12 = 0LL;
        v12[1] = 0LL;
      }
      else
      {
        *v12 = *v9;
      }
    }
    else if ( (__int64 *)v12[1] == v9 )
    {
      v12[1] = v9[1];
    }
    operator delete(v9);
    --*(_QWORD *)(a1 + 24);
  }
  result = a2;
  *a2 = a4;
  return result;
}
