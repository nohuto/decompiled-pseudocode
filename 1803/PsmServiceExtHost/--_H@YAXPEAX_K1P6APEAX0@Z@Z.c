/*
 * XREFs of ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18002145C
 * Callers:
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAVExternalResourceSet@2@@Z @ 0x180001EF4 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo.c)
 *     ?CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x1800021B4 (-CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV-$lis.c)
 *     ??0ResourceManager@ExecutionModel@@QEAA@XZ @ 0x18003A978 (--0ResourceManager@ExecutionModel@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `vector constructor iterator'(
        char *a1,
        __int64 a2,
        __int64 a3,
        ExecutionModel::_ResourceInfo *(__fastcall *a4)(ExecutionModel::_ResourceInfo *this))
{
  char *v5; // rbx
  __int64 v6; // rdi
  ExecutionModel::_ResourceInfo *v8; // rcx

  if ( a3 )
  {
    v5 = a1 + 16;
    v6 = a3;
    do
    {
      --v6;
      v8 = (ExecutionModel::_ResourceInfo *)(v5 - 16);
      if ( a4 == ExecutionModel::_ResourceInfo::_ResourceInfo )
      {
        *(_DWORD *)v8 = -1;
        *((_QWORD *)v5 - 1) = 0LL;
        *((_WORD *)v5 + 2) = 0;
        *(_DWORD *)v5 = 101;
      }
      else
      {
        a4(v8);
      }
      v5 += a2;
    }
    while ( v6 );
  }
}
