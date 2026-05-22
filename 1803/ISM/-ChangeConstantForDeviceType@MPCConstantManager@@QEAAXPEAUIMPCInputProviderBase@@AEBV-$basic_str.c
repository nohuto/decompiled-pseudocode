/*
 * XREFs of ?ChangeConstantForDeviceType@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@4@@Z @ 0x18004BCBC
 * Callers:
 *     _lambda_0fe84b0df1de98c8718b27672fc0a862_::operator() @ 0x180096EC0 (_lambda_0fe84b0df1de98c8718b27672fc0a862_--operator().c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??A?$map@U_GUID@@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@U?$less@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@3@@std@@QEAAAEAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@@2@@1@AEBU_GUID@@@Z @ 0x180041E34 (--A-$map@U_GUID@@V-$map@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@V-$variant.c)
 *     ??A?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@QEAAAEAV?$variant@K_NM@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x180041F70 (--A-$map@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@V-$variant@K_NM@2@U-$less.c)
 *     ?GetIds@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@PEAU_GUID@@PEAK@Z @ 0x18004BC04 (-GetIds@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@PEAU_GUID@@PEAK@Z.c)
 *     ?CheckGenericConstantExistence@MPCConstantManager@@QEAA_NAEBU_GUID@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18004BFF4 (-CheckGenericConstantExistence@MPCConstantManager@@QEAA_NAEBU_GUID@@AEBV-$basic_string@DU-$char_.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

size_t *__fastcall MPCConstantManager::ChangeConstantForDeviceType(
        const void **a1,
        struct IMPCInputProviderBase *a2,
        size_t *a3,
        size_t a4)
{
  const char *v7; // r9
  char *v8; // rax
  size_t *result; // rax
  struct _GUID v10; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  MPCConstantManager::GetIds((MPCConstantManager *)a1, a2, &v10, 0LL);
  if ( !(unsigned __int8)MPCConstantManager::CheckGenericConstantExistence(a1, &v10, a3) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x53,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v7);
    JUMPOUT(0x18004BD44LL);
  }
  v8 = std::map<_GUID,std::map<std::string,std::variant<unsigned long,bool,float>>>::operator[](a1 + 2, (char *)&v10);
  result = std::map<std::string,std::variant<unsigned long,bool,float>>::operator[]((size_t **)v8, a3);
  *result = a4;
  return result;
}
