/*
 * XREFs of ?erase@?$_HashTable@PEAUResourceHandle__@ExecutionModel@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@U?$hash@PEAUResourceHandle__@ExecutionModel@@@4@U?$equal_to@PEAUResourceHandle__@ExecutionModel@@@4@V?$allocator@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@4@$0A@@utl@@QEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@2@0@Z @ 0x18000375C
 * Callers:
 *     ?ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ @ 0x1800035A8 (-ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800269DC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 **__fastcall utl::_HashTable<ExecutionModel::ResourceHandle__ *,utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>,utl::hash<ExecutionModel::ResourceHandle__ *>,utl::equal_to<ExecutionModel::ResourceHandle__ *>,utl::allocator<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>,0>::erase(
        __int64 a1,
        __int64 **a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 v7; // r15
  __int64 *v9; // rbx
  __int64 *v10; // rcx
  __int64 v11; // rax
  __int64 *v12; // rcx
  __int64 v13; // rcx
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
    v13 = v9[4];
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    operator delete(v9);
    --*(_QWORD *)(a1 + 24);
  }
  result = a2;
  *a2 = a4;
  return result;
}
