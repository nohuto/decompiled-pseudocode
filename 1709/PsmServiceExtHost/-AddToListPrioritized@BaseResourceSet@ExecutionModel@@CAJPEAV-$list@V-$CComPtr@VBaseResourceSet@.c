/*
 * XREFs of ?AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@_N@Z @ 0x18001E938
 * Callers:
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW4_RM_REVOKE_REASON_INTERNAL@@W45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAVExternalResourceSet@2@@Z @ 0x1800023F4 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo.c)
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ @ 0x180010290 (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     ?ResetPriorities@ResourceSet@ExecutionModel@@IEAAXXZ @ 0x180011988 (-ResetPriorities@ResourceSet@ExecutionModel@@IEAAXXZ.c)
 *     ?SetTransitionalPriorities@ResourceSet@ExecutionModel@@IEAAXW4Enum@Priority@2@0@Z @ 0x180011AA8 (-SetTransitionalPriorities@ResourceSet@ExecutionModel@@IEAAXW4Enum@Priority@2@0@Z.c)
 * Callees:
 *     ??0?$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@@@Z @ 0x18001F8FC (--0-$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800269EC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall ExecutionModel::BaseResourceSet::AddToListPrioritized(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  unsigned int v5; // esi
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  _QWORD *v8; // rax

  v2 = (_QWORD *)*a1;
  v5 = 0;
  while ( v2 != a1 && *(_DWORD *)(v2[2] + 1408LL) < *(_DWORD *)(a2 + 1408) )
    v2 = (_QWORD *)*v2;
  v6 = operator new(0x18uLL, (const struct std::nothrow_t *)&unk_180052633);
  v7 = v6;
  if ( v6 )
  {
    ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::CComPtrBase<ExecutionModel::BaseResourceSet>(v6 + 2, a2);
    v8 = (_QWORD *)v2[1];
    v7[1] = v8;
    *v7 = v2;
    *v8 = v7;
    v2[1] = v7;
    ++a1[2];
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v5;
}
