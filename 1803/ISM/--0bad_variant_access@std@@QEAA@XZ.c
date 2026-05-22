/*
 * XREFs of ??0bad_variant_access@std@@QEAA@XZ @ 0x180041CA8
 * Callers:
 *     ?UpdateRegistryTuneables@MPCSixDofProcessor@@CAXXZ @ 0x18003FCC8 (-UpdateRegistryTuneables@MPCSixDofProcessor@@CAXXZ.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180041468 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@AEBV-$basic_string@DU-$char.c)
 *     ??$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180041574 (--$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@AEBV-$basic_string@DU-$char.c)
 *     ??$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800418EC (--$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@AEBV-$basic_string@DU-$ch.c)
 *     ??$GetStaticConstantForDeviceType@M@MPCConstantManager@@QEAAMAEBU_GUID@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800419F8 (--$GetStaticConstantForDeviceType@M@MPCConstantManager@@QEAAMAEBU_GUID@@AEBV-$basic_string@DU-$c.c)
 * Callees:
 *     <none>
 */

std::bad_variant_access *__fastcall std::bad_variant_access::bad_variant_access(std::bad_variant_access *this)
{
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &std::bad_variant_access::`vftable';
  return this;
}
