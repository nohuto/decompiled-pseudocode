/*
 * XREFs of ??$GetStaticConstantForDeviceType@M@MPCConstantManager@@QEAAMAEBU_GUID@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800419F8
 * Callers:
 *     ?UpdateRegistryTuneables@MPCSixDofProcessor@@CAXXZ @ 0x18003FCC8 (-UpdateRegistryTuneables@MPCSixDofProcessor@@CAXXZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0bad_variant_access@std@@QEAA@XZ @ 0x180041CA8 (--0bad_variant_access@std@@QEAA@XZ.c)
 *     ??A?$map@U_GUID@@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@U?$less@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@3@@std@@QEAAAEAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@@2@@1@AEBU_GUID@@@Z @ 0x180041E34 (--A-$map@U_GUID@@V-$map@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@V-$variant.c)
 *     ??A?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@QEAAAEAV?$variant@K_NM@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x180041F70 (--A-$map@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@V-$variant@K_NM@2@U-$less.c)
 *     ?CheckGenericConstantExistence@MPCConstantManager@@QEAA_NAEBU_GUID@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18004BFF4 (-CheckGenericConstantExistence@MPCConstantManager@@QEAA_NAEBU_GUID@@AEBV-$basic_string@DU-$char_.c)
 *     _CxxThrowException_0 @ 0x1800E22F0 (_CxxThrowException_0.c)
 */

float __fastcall MPCConstantManager::GetStaticConstantForDeviceType<float>(__int64 a1, __int64 a2, __int64 a3)
{
  const char *v4; // r9
  int v5; // eax
  _BYTE *v6; // rax
  _QWORD pExceptionObject[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( !(unsigned __int8)MPCConstantManager::CheckGenericConstantExistence(a1, &PROCESSORID_MPCSixDof, a3) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x2B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\inc\\MPCConstantManager.inl",
      v4);
    __debugbreak();
  }
  v5 = std::map<_GUID,std::map<std::string,std::variant<unsigned long,bool,float>>>::operator[](
         a1 + 16,
         &PROCESSORID_MPCSixDof);
  v6 = (_BYTE *)std::map<std::string,std::variant<unsigned long,bool,float>>::operator[](v5);
  if ( v6[4] != 2 )
  {
    memset(pExceptionObject, 0, 24);
    std::bad_variant_access::bad_variant_access((std::bad_variant_access *)pExceptionObject);
    throw (std::bad_variant_access *)pExceptionObject;
  }
  return *(float *)v6;
}
