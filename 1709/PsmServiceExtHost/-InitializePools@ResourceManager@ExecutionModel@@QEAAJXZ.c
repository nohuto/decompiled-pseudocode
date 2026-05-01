/*
 * XREFs of ?InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x180022744
 * Callers:
 *     ?Initialize@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnforcer@@@Z @ 0x180022808 (-Initialize@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnfo.c)
 * Callees:
 *     ??0BaseResourceSet@ExecutionModel@@QEAA@XZ @ 0x180010490 (--0BaseResourceSet@ExecutionModel@@QEAA@XZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18001EE28 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?SetMainPoolSizes@ResourceManager@ExecutionModel@@QEAAXPEAK@Z @ 0x18002202C (-SetMainPoolSizes@ResourceManager@ExecutionModel@@QEAAXPEAK@Z.c)
 *     ?InitResourcesFromRegisteredDlls@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x180022114 (-InitResourcesFromRegisteredDlls@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 *     ?Attach@?$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@QEAAXPEAVBaseResourceSet@ExecutionModel@@@Z @ 0x1800231E4 (-Attach@-$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@QEAAXPEAVBaseResourceSet@ExecutionM.c)
 *     ?RmpGetPoolSizesForDeviceTier@@YAKPEAK@Z @ 0x180023218 (-RmpGetPoolSizesForDeviceTier@@YAKPEAK@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180025A8C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

signed int __fastcall ExecutionModel::ResourceManager::InitializePools(struct IUnknown **this)
{
  signed int result; // eax
  ExecutionModel::BaseResourceSet *v3; // rax
  char *v4; // rdi
  unsigned int v5[6]; // [rsp+30h] [rbp-18h] BYREF

  result = RmpGetPoolSizesForDeviceTier(v5);
  if ( result )
  {
    if ( result > 0 )
      return (unsigned __int16)result | 0x80070000;
  }
  else
  {
    v3 = (ExecutionModel::BaseResourceSet *)operator new(0x588uLL);
    if ( v3 )
      v3 = ExecutionModel::BaseResourceSet::BaseResourceSet(v3);
    v4 = (char *)(this + 13);
    ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::Attach(this + 13, v3);
    if ( this[13] )
    {
      *(_DWORD *)(*(_QWORD *)v4 + 1400LL) = 2;
      *(_DWORD *)(*(_QWORD *)v4 + 16LL) = 1;
      *(_QWORD *)(*(_QWORD *)v4 + 24LL) = this;
      ExecutionModel::ResourceManager::SetMainPoolSizes((ExecutionModel::ResourceManager *)this, v5);
      if ( this[12] )
        ATL::AtlComPtrAssign(this + 12, 0LL);
      result = ExecutionModel::ResourceManager::InitResourcesFromRegisteredDlls((ExecutionModel::ResourceManager *)this);
      if ( result >= 0 )
      {
        ((void (__fastcall *)(struct IUnknown **, __int64, __int64))(*this)[3].lpVtbl)(this, 27LL, 0xFFFFFFFFLL);
        return 0;
      }
    }
    else
    {
      return -2147024882;
    }
  }
  return result;
}
