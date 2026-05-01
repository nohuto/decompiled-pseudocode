/*
 * XREFs of ?InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x18003A858
 * Callers:
 *     ?Initialize@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnforcer@@@Z @ 0x18003A918 (-Initialize@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnfo.c)
 * Callees:
 *     ??0BaseResourceSet@ExecutionModel@@QEAA@XZ @ 0x18001E970 (--0BaseResourceSet@ExecutionModel@@QEAA@XZ.c)
 *     ?SetMainPoolSizes@ResourceManager@ExecutionModel@@QEAAX_K@Z @ 0x18003A32C (-SetMainPoolSizes@ResourceManager@ExecutionModel@@QEAAX_K@Z.c)
 *     ?InitResourcesFromRegisteredDlls@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x18003A3F8 (-InitResourcesFromRegisteredDlls@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18003AA48 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?Attach@?$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@QEAAXPEAVBaseResourceSet@ExecutionModel@@@Z @ 0x18003B120 (-Attach@-$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@QEAAXPEAVBaseResourceSet@ExecutionM.c)
 *     ?RmpGetIoPoolSize@@YAKPEA_K@Z @ 0x18003B14C (-RmpGetIoPoolSize@@YAKPEA_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18003E450 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 */

signed int __fastcall ExecutionModel::ResourceManager::InitializePools(ExecutionModel::ResourceManager *this)
{
  ExecutionModel::BaseResourceSet *v2; // rax
  char *v3; // rdi
  signed int result; // eax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = (ExecutionModel::BaseResourceSet *)operator new(0x588uLL);
  if ( v2 )
    v2 = ExecutionModel::BaseResourceSet::BaseResourceSet(v2);
  v3 = (char *)this + 48;
  ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::Attach((char *)this + 48, v2);
  if ( !*((_QWORD *)this + 6) )
    return -2147024882;
  result = RmpGetIoPoolSize(&v6);
  if ( result )
  {
    if ( result > 0 )
      return (unsigned __int16)result | 0x80070000;
  }
  else
  {
    v5 = v6;
    *(_DWORD *)(*(_QWORD *)v3 + 1400LL) = 2;
    *(_DWORD *)(*(_QWORD *)v3 + 16LL) = 1;
    *(_QWORD *)(*(_QWORD *)v3 + 24LL) = this;
    ExecutionModel::ResourceManager::SetMainPoolSizes(this, v5);
    if ( *((_QWORD *)this + 5) )
      ATL::AtlComPtrAssign((struct IUnknown **)this + 5, 0LL);
    result = ExecutionModel::ResourceManager::InitResourcesFromRegisteredDlls(this);
    if ( result >= 0 )
    {
      (*(void (__fastcall **)(ExecutionModel::ResourceManager *, __int64, __int64))(*(_QWORD *)this + 24LL))(
        this,
        27LL,
        0xFFFFFFFFLL);
      return 0;
    }
  }
  return result;
}
