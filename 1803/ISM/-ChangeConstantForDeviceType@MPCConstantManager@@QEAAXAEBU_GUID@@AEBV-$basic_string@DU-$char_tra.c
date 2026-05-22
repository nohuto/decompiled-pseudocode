/*
 * XREFs of ?ChangeConstantForDeviceType@MPCConstantManager@@QEAAXAEBU_GUID@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@4@@Z @ 0x18004BD48
 * Callers:
 *     ?UpdateRegistryTuneables@MPCSixDofProcessor@@CAXXZ @ 0x18003FCC8 (-UpdateRegistryTuneables@MPCSixDofProcessor@@CAXXZ.c)
 *     _lambda_21afebd74e54e2939f016acf53012d19_::operator() @ 0x180040648 (_lambda_21afebd74e54e2939f016acf53012d19_--operator().c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??A?$map@U_GUID@@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@U?$less@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@3@@std@@QEAAAEAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@@2@@1@AEBU_GUID@@@Z @ 0x180041E34 (--A-$map@U_GUID@@V-$map@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@V-$variant.c)
 *     ??A?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@QEAAAEAV?$variant@K_NM@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x180041F70 (--A-$map@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@V-$variant@K_NM@2@U-$less.c)
 *     ?CheckGenericConstantExistence@MPCConstantManager@@QEAA_NAEBU_GUID@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18004BFF4 (-CheckGenericConstantExistence@MPCConstantManager@@QEAA_NAEBU_GUID@@AEBV-$basic_string@DU-$char_.c)
 */

size_t *__fastcall MPCConstantManager::ChangeConstantForDeviceType(__int64 a1, __int64 a2, size_t *a3, size_t a4)
{
  const char *v7; // r9
  char *v8; // rax
  size_t *result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !(unsigned __int8)MPCConstantManager::CheckGenericConstantExistence(a1, &PROCESSORID_MPCSixDof, a3) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x5B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v7);
    JUMPOUT(0x18004BDB4LL);
  }
  v8 = std::map<_GUID,std::map<std::string,std::variant<unsigned long,bool,float>>>::operator[](
         (const void **)(a1 + 16),
         (char *)&PROCESSORID_MPCSixDof);
  result = std::map<std::string,std::variant<unsigned long,bool,float>>::operator[]((size_t **)v8, a3);
  *result = a4;
  return result;
}
