/*
 * XREFs of ?EvaluatePoolResourceRequest@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_NPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAW4_RM_REVOKE_POLICY@@@Z @ 0x180011DFC
 * Callers:
 *     ?EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KW4Enum@PendType@2@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@PEA_N5@Z @ 0x180011EC0 (-EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KW4Enum@PendType@2@PEAU_RM_RESOURCE_U.c)
 * Callees:
 *     ?CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x180010550 (-CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV-$lis.c)
 *     ?clear@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAAXXZ @ 0x180015DEC (-clear@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBaseRes.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::EvaluatePoolResourceRequest(
        __int64 a1,
        int a2,
        char *a3,
        __int64 a4,
        int *a5)
{
  __int64 v5; // rbp
  char v10; // bl
  int v11; // eax
  int v12; // edx
  unsigned int v13; // edi
  int *v14; // rax
  char v16; // [rsp+70h] [rbp+8h] BYREF
  char v17; // [rsp+80h] [rbp+18h] BYREF

  v5 = a1 + 1592;
  if ( *(_DWORD *)(a1 + 1592) != 2 )
  {
    v12 = 0;
    v10 = 0;
    v13 = 0;
    goto LABEL_5;
  }
  v10 = 1;
  v11 = ExecutionModel::BaseResourceSet::CheckPoolResources(
          *(ExecutionModel::BaseResourceSet **)(a1 + 184),
          1u,
          v5,
          0,
          1,
          (__int64)&v16,
          (__int64)&v17,
          a4);
  v12 = 0;
  v13 = v11;
  if ( v11 < 0 )
  {
    v10 = v16;
    goto LABEL_5;
  }
  if ( !v17 )
  {
    if ( a2 != 1 || *(_QWORD *)(v5 + 8) > *(_QWORD *)(*(_QWORD *)(a1 + 24) + 112LL) )
    {
      v10 = 0;
      v13 = -2147220992;
      goto LABEL_5;
    }
    utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::clear(a4);
    goto LABEL_7;
  }
  v10 = v16;
  if ( v16 )
LABEL_7:
    v12 = 2;
LABEL_5:
  v14 = a5;
  *a3 = v10;
  *v14 = v12;
  return v13;
}
