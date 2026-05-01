/*
 * XREFs of ?CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAX_NKW45PendType@2@5PEAU_RM_ACTIVITY_HOST@@PEA_NPEAPEAV12@@Z @ 0x180001F68
 * Callers:
 *     ?RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAXKW44PendType@2@_NPEA_NPEAPEAUResourceHandle__@2@@Z @ 0x180002984 (-RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG@Z @ 0x180002274 (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG@Z.c)
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW4_RM_REVOKE_REASON_INTERNAL@@W45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAVExternalResourceSet@2@@Z @ 0x1800023F4 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo.c)
 *     ?ResourceSetFactory@ExternalResourceSet@ExecutionModel@@CAJPEAPEAV12@@Z @ 0x1800026B0 (-ResourceSetFactory@ExternalResourceSet@ExecutionModel@@CAJPEAPEAV12@@Z.c)
 *     ?ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ @ 0x180010680 (-ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ.c)
 *     ?RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18001549C (-RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001B54C (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ExternalResourceSet::CreateInstance(
        __int64 a1,
        unsigned int a2,
        struct ExecutionModel::_ResourceInfo *a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        unsigned __int8 a9,
        __int64 a10,
        unsigned __int8 a11,
        struct _RM_OBJECT_HEADER *a12,
        __int64 a13,
        struct ExecutionModel::ExternalResourceSet **a14)
{
  int v18; // eax
  __int64 v19; // rdx
  struct ExecutionModel::ExternalResourceSet *v20; // rbx
  int v21; // esi
  struct ExecutionModel::ExternalResourceSet *v23; // [rsp+60h] [rbp-28h] BYREF

  v23 = 0LL;
  if ( a12 )
    ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriorities(
      (struct ExecutionModel::ResourceManager *)a1,
      2u,
      a2,
      a3,
      a12);
  v18 = ExecutionModel::ExternalResourceSet::ResourceSetFactory(&v23);
  v20 = v23;
  v21 = v18;
  if ( v18 >= 0 )
  {
    *((_QWORD *)v23 + 23) = a1;
    *((_DWORD *)v20 + 4) = *(_DWORD *)(a1 + 16);
    *((_QWORD *)v20 + 3) = *(_QWORD *)(a1 + 24);
    *((_QWORD *)v20 + 174) = *(_QWORD *)(a1 + 1392);
    v21 = ExecutionModel::BaseResourceSet::AcquireResources(a1, v19, a2, a3, a4, a5);
    if ( v21 >= 0 )
    {
      if ( a12 )
        RmpObjectAddRef(a12);
      *((_QWORD *)v20 + 177) = a6;
      *((_QWORD *)v20 + 178) = a7;
      *((_DWORD *)v20 + 368) &= ~1u;
      *((_DWORD *)v20 + 368) = (*((_DWORD *)v20 + 368) | a11) ^ (a9 ^ (unsigned __int8)(*((_BYTE *)v20 + 1472) | a11)) & 4;
      *((_QWORD *)v20 + 182) = a12;
      if ( !a12 || *((_DWORD *)a12 + 14) )
        goto LABEL_11;
      if ( (unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
                              (char *)v20 + 32,
                              (char *)a12 + 88) )
      {
        *((_OWORD *)v20 + 4) = *(_OWORD *)((char *)a12 + 552);
        *((_OWORD *)v20 + 5) = *(_OWORD *)((char *)a12 + 568);
        *((_OWORD *)v20 + 6) = *(_OWORD *)((char *)a12 + 584);
        *((_OWORD *)v20 + 7) = *(_OWORD *)((char *)a12 + 600);
        *((_DWORD *)v20 + 32) = *((_DWORD *)a12 + 154);
        *((_DWORD *)v20 + 33) = *((_DWORD *)a12 + 155);
        *((_DWORD *)v20 + 34) = *((_DWORD *)a12 + 156);
        *((_QWORD *)v20 + 18) = *((_QWORD *)a12 + 79);
LABEL_11:
        *a14 = v20;
        return (unsigned int)v21;
      }
      v21 = -2147024882;
    }
  }
  if ( v20 )
  {
    ExecutionModel::BaseResourceSet::ReleaseResourcesAndCheckPendingRequests(v20);
    (*(void (__fastcall **)(struct ExecutionModel::ExternalResourceSet *))(*(_QWORD *)v20 + 16LL))(v20);
  }
  return (unsigned int)v21;
}
