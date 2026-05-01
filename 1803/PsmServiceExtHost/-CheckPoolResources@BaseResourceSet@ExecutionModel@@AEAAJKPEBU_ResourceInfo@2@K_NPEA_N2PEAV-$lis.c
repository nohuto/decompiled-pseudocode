/*
 * XREFs of ?CheckPoolResources@BaseResourceSet@ExecutionModel@@AEAAJKPEBU_ResourceInfo@2@K_NPEA_N2PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x1800021B4
 * Callers:
 *     ?CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJKPEAU_ResourceInfo@2@KW4Enum@Priority@2@W44PendType@2@PEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x180001E14 (-CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJKPEAU_ResourceInfo@2@KW4Enum@Pri.c)
 * Callees:
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x18001EA30 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18002145C (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003F5A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18003F5B0 (--_U@YAPEAX_K@Z.c)
 */

__int64 __fastcall ExecutionModel::BaseResourceSet::CheckPoolResources(
        ExecutionModel::BaseResourceSet *this,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        __int64 a6,
        ExecutionModel::ExternalResourceSet *a7,
        __int64 a8)
{
  __int64 v10; // rsi
  _QWORD *v13; // rax
  _QWORD *v14; // rbx
  _QWORD *v15; // rax
  __int64 v16; // rdi
  int v17; // edi

  v10 = a2;
  v13 = operator new[](saturated_mul(a2, 0x18uLL));
  v14 = v13;
  if ( v13 )
    `vector constructor iterator'(v13, 0x18uLL, a2, (void *(*)(void *))ExecutionModel::_ResourceInfo::_ResourceInfo);
  else
    v14 = 0LL;
  if ( v14 )
  {
    if ( a2 )
    {
      v15 = v14;
      v16 = a3 - (_QWORD)v14;
      do
      {
        *(_OWORD *)v15 = *(_OWORD *)((char *)v15 + v16);
        v15[2] = *(_QWORD *)((char *)v15 + v16 + 16);
        v15 += 3;
        --v10;
      }
      while ( v10 );
    }
    v17 = ExecutionModel::BaseResourceSet::RecursiveVisit(this, a4, a5, a6, a7, a8, 0LL);
    if ( v17 >= 0 )
      v17 = 0;
    operator delete(v14);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v17;
}
