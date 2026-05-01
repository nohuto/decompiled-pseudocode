/*
 * XREFs of ?SetMainPoolSizes@ResourceManager@ExecutionModel@@QEAAX_K@Z @ 0x18003A32C
 * Callers:
 *     ?InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x18003A858 (-InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 * Callees:
 *     ?Release@ExternalResourceSet@ExecutionModel@@UEAAKXZ @ 0x1800032E0 (-Release@ExternalResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?InitializeResource@BaseResourceSet@ExecutionModel@@AEAAJPEBU_ResourceInfo@2@@Z @ 0x18001E91C (-InitializeResource@BaseResourceSet@ExecutionModel@@AEAAJPEBU_ResourceInfo@2@@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18003AA48 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ExecutionModel::ResourceManager::SetMainPoolSizes(ExecutionModel::ResourceManager *this, __int64 a2)
{
  struct IUnknown *v2; // r9
  struct IUnknown *v4; // rdx
  struct IUnknown *v6; // rcx
  ExecutionModel::BaseResourceSet *v7; // r9
  ExecutionModel::ExternalResourceSet *v8; // r9
  unsigned int (__fastcall *v9)(ExecutionModel::ExternalResourceSet *); // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rax
  int v13; // [rsp+20h] [rbp-30h] BYREF
  __int64 v14; // [rsp+28h] [rbp-28h]
  int v15; // [rsp+30h] [rbp-20h]
  __int16 v16; // [rsp+34h] [rbp-1Ch]
  int v17; // [rsp+38h] [rbp-18h] BYREF
  __int64 v18; // [rsp+40h] [rbp-10h]
  int v19; // [rsp+48h] [rbp-8h]
  __int16 v20; // [rsp+4Ch] [rbp-4h]
  struct IUnknown *v21; // [rsp+60h] [rbp+10h] BYREF

  v2 = 0LL;
  v4 = (struct IUnknown *)*((_QWORD *)this + 6);
  v21 = 0LL;
  if ( v4 )
  {
    ATL::AtlComPtrAssign(&v21, v4);
    v2 = v21;
  }
  v6 = v2 + 24;
  if ( LODWORD(v2[24].lpVtbl) != -1 )
  {
    v10 = 0LL;
    v11 = 3LL;
    do
    {
      v6[1].lpVtbl = 0LL;
      LODWORD(v6->lpVtbl) = -1;
      v6 += 3;
      v12 = (__int64)v2[174].lpVtbl & ~(1LL << v10++);
      v2[174].lpVtbl = (struct IUnknownVtbl *)v12;
      --v11;
    }
    while ( v11 );
  }
  v13 = 0;
  v16 = 1;
  v15 = 101;
  v19 = 101;
  v14 = -1LL;
  v17 = 2;
  v20 = 1;
  v18 = a2;
  ExecutionModel::BaseResourceSet::InitializeResource(
    (ExecutionModel::BaseResourceSet *)v2,
    (const struct ExecutionModel::_ResourceInfo *)&v13);
  ExecutionModel::BaseResourceSet::InitializeResource(v7, (const struct ExecutionModel::_ResourceInfo *)&v17);
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 7) = a2;
  v9 = *(unsigned int (__fastcall **)(ExecutionModel::ExternalResourceSet *))(*(_QWORD *)v8 + 16LL);
  if ( v9 == ExecutionModel::ExternalResourceSet::Release )
    ExecutionModel::ExternalResourceSet::Release(v8);
  else
    v9(v8);
}
