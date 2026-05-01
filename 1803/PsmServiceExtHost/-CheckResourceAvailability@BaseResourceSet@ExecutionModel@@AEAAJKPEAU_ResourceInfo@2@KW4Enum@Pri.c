/*
 * XREFs of ?CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJKPEAU_ResourceInfo@2@KW4Enum@Priority@2@W44PendType@2@PEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x180001E14
 * Callers:
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAVExternalResourceSet@2@@Z @ 0x180001EF4 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo.c)
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ @ 0x18001E7A0 (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     ?AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@KPEA_N@Z @ 0x18005C148 (-AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResource.c)
 * Callees:
 *     ?HigherPriorityPending@BaseResourceSet@ExecutionModel@@AEAA_NKPEBU_ResourceInfo@2@W4Enum@Priority@2@@Z @ 0x180001DC8 (-HigherPriorityPending@BaseResourceSet@ExecutionModel@@AEAA_NKPEBU_ResourceInfo@2@W4Enum@Priorit.c)
 *     ?CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x1800021B4 (-CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV-$lis.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::BaseResourceSet::CheckResourceAvailability(
        ExecutionModel::BaseResourceSet *this,
        unsigned __int64 a2,
        unsigned int *a3,
        __int64 a4,
        int a5,
        int a6,
        _BYTE *a7,
        _BYTE *a8,
        __int64 a9)
{
  unsigned int v10; // ebp
  __int64 result; // rax
  char v13; // bl
  _BYTE *v14; // rax
  char v15; // [rsp+40h] [rbp-18h] BYREF
  _BYTE v16[23]; // [rsp+41h] [rbp-17h] BYREF

  v10 = a2;
  result = ExecutionModel::BaseResourceSet::CheckPoolResources(
             this,
             a2,
             1,
             (__int64)v16,
             (ExecutionModel::ExternalResourceSet *)&v15,
             a9);
  if ( (int)result >= 0 )
  {
    if ( v15
      || a6 == 1
      && (ExecutionModel::BaseResourceSet::CheckPoolResources(
            this,
            v10,
            0,
            (__int64)v16,
            (ExecutionModel::ExternalResourceSet *)&v15,
            0LL),
          v15) )
    {
      v13 = v16[0];
      if ( !v16[0] )
        v13 = (*(int (__fastcall **)(ExecutionModel::BaseResourceSet *, _QWORD, unsigned int *))(*(_QWORD *)this + 40LL))(
                this,
                v10,
                a3) < 0
           || ExecutionModel::BaseResourceSet::HigherPriorityPending((__int64)this, v10, a3, a5) != 0;
      *a8 = 1;
      v14 = a7;
      if ( v13 )
      {
        *a7 = 1;
        return 0LL;
      }
    }
    else
    {
      *a8 = 0;
      v14 = a7;
    }
    *v14 = 0;
    return 0LL;
  }
  return result;
}
