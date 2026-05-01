/*
 * XREFs of ?CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x180010550
 * Callers:
 *     ?CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJKPEAU_ResourceInfo@2@KW4Enum@Priority@2@W44PendType@2@PEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x180002320 (-CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJKPEAU_ResourceInfo@2@KW4Enum@Pri.c)
 *     ?EvaluatePoolResourceRequest@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_NPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAW4_RM_REVOKE_POLICY@@@Z @ 0x180011DFC (-EvaluatePoolResourceRequest@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_NPEAV-$list@.c)
 * Callees:
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x180010840 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ??0_ResourceInfo@ExecutionModel@@QEAA@XZ @ 0x180010A30 (--0_ResourceInfo@ExecutionModel@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800269DC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800269E4 (--_U@YAPEAX_K@Z.c)
 */

__int64 __fastcall ExecutionModel::BaseResourceSet::CheckPoolResources(
        ExecutionModel::BaseResourceSet *this,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v9; // r15
  __int64 v10; // rbp
  _QWORD *v13; // rax
  _QWORD *v14; // rdi
  __int64 v15; // rbx
  ExecutionModel::_ResourceInfo *v16; // rsi
  _QWORD *v17; // rax
  __int64 v18; // r14
  __int128 v19; // xmm0
  int v20; // ebx

  v9 = a2;
  v10 = a2;
  v13 = operator new[](saturated_mul(a2, 0x18uLL));
  v14 = v13;
  if ( !v13 )
    return 2147942414LL;
  v15 = (unsigned int)v9;
  v16 = (ExecutionModel::_ResourceInfo *)v13;
  if ( v9 )
  {
    do
    {
      ExecutionModel::_ResourceInfo::_ResourceInfo(v16);
      v16 = (ExecutionModel::_ResourceInfo *)((char *)v16 + 24);
      --v15;
    }
    while ( v15 );
  }
  if ( (_DWORD)v9 )
  {
    v17 = v14;
    v18 = a3 - (_QWORD)v14;
    do
    {
      v19 = *(_OWORD *)((char *)v17 + v18);
      v17 += 3;
      *(_OWORD *)(v17 - 3) = v19;
      *(v17 - 1) = *(_QWORD *)((char *)v17 + v18 - 8);
      --v10;
    }
    while ( v10 );
  }
  v20 = ExecutionModel::BaseResourceSet::RecursiveVisit(this, a4, a5, a6, a7, a8, 0LL);
  if ( v20 >= 0 )
    v20 = 0;
  operator delete(v14);
  return (unsigned int)v20;
}
