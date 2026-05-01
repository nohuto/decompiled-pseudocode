/*
 * XREFs of ?GetReportedMemoryCap@ResourceSet@ExecutionModel@@QEBA_KXZ @ 0x180001924
 * Callers:
 *     ?GetEnforcedMemoryCap@ResourceSet@ExecutionModel@@QEBA_KXZ @ 0x1800018E0 (-GetEnforcedMemoryCap@ResourceSet@ExecutionModel@@QEBA_KXZ.c)
 *     ?HasMemoryForFGSharing@ResourceSet@ExecutionModel@@QEAAJ_KE@Z @ 0x180001A70 (-HasMemoryForFGSharing@ResourceSet@ExecutionModel@@QEAAJ_KE@Z.c)
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAVResourceSet@2@6PEAPEAV82@@Z @ 0x18000F210 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 *     ?GetProcessMemoryCaps@ResourceManager@ExecutionModel@@QEAAJKPEA_K0@Z @ 0x180031ED4 (-GetProcessMemoryCaps@ResourceManager@ExecutionModel@@QEAAJKPEA_K0@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ExecutionModel::ResourceSet::GetReportedMemoryCap(ExecutionModel::ResourceSet *this)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(*((_QWORD *)this + 179) + 152LL);
  if ( v1 )
    return *(_QWORD *)(v1 + 24);
  else
    return *((_QWORD *)this + 191);
}
