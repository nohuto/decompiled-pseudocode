/*
 * XREFs of ?GetInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@_K@Z @ 0x18000BAF0
 * Callers:
 *     ?GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAX@Z @ 0x18000BB40 (-GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@P.c)
 *     ?RegisterInputSiteElement@InputSiteManager@@MEAAJPEAVBamoInputSiteManagerStub@@PEAVBamoInputSiteElementProxy@@@Z @ 0x18000BDD0 (-RegisterInputSiteElement@InputSiteManager@@MEAAJPEAVBamoInputSiteManagerStub@@PEAVBamoInputSite.c)
 * Callees:
 *     ?CreateInputSiteFromId@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@_K@Z @ 0x18000BEFC (-CreateInputSiteFromId@InputSiteManager@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall InputSiteManager::GetInputSiteFromId(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 *i; // r9
  __int64 v5; // rcx

  for ( i = *(__int64 **)(a1 + 56); i != *(__int64 **)(a1 + 64) && *(_QWORD *)(*i + 16) != a3; ++i )
    ;
  if ( i == *(__int64 **)(a1 + 64) )
  {
    InputSiteManager::CreateInputSiteFromId();
  }
  else
  {
    v5 = *i;
    *a2 = *i;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  }
  return a2;
}
