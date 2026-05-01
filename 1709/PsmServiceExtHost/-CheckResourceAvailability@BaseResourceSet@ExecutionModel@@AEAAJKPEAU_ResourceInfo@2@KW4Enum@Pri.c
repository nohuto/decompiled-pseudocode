/*
 * XREFs of ?CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJKPEAU_ResourceInfo@2@KW4Enum@Priority@2@W44PendType@2@PEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x180002320
 * Callers:
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW4_RM_REVOKE_REASON_INTERNAL@@W45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAVExternalResourceSet@2@@Z @ 0x1800023F4 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo.c)
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ @ 0x180010290 (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     ?AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@KPEA_N@Z @ 0x18003CDD4 (-AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResource.c)
 * Callees:
 *     ?HigherPriorityPending@BaseResourceSet@ExecutionModel@@AEAA_NKPEBU_ResourceInfo@2@W4Enum@Priority@2@@Z @ 0x180002294 (-HigherPriorityPending@BaseResourceSet@ExecutionModel@@AEAA_NKPEBU_ResourceInfo@2@W4Enum@Priorit.c)
 *     ?CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x180010550 (-CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV-$lis.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::BaseResourceSet::CheckResourceAvailability(
        ExecutionModel::BaseResourceSet *a1,
        unsigned int a2,
        unsigned int *a3,
        __int64 a4,
        int a5,
        int a6,
        _BYTE *a7,
        _BYTE *a8,
        __int64 a9)
{
  __int64 result; // rax
  char v13; // [rsp+40h] [rbp-18h] BYREF
  _BYTE v14[23]; // [rsp+41h] [rbp-17h] BYREF

  result = ExecutionModel::BaseResourceSet::CheckPoolResources(a1, 1, (__int64)v14, (__int64)&v13, a9);
  if ( (int)result >= 0 )
  {
    if ( v13
      || a6 == 1 && (ExecutionModel::BaseResourceSet::CheckPoolResources(a1, 0, (__int64)v14, (__int64)&v13, 0LL), v13) )
    {
      if ( v14[0]
        || (*(int (__fastcall **)(ExecutionModel::BaseResourceSet *, _QWORD, unsigned int *))(*(_QWORD *)a1 + 40LL))(
             a1,
             a2,
             a3) < 0
        || ExecutionModel::BaseResourceSet::HigherPriorityPending((__int64)a1, a2, a3, a5) )
      {
        *a8 = 1;
        *a7 = 1;
        return 0LL;
      }
      *a8 = 1;
    }
    else
    {
      *a8 = 0;
    }
    *a7 = 0;
    return 0LL;
  }
  return result;
}
