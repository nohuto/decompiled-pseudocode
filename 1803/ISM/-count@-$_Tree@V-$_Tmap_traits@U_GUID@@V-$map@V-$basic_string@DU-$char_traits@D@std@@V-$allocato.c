/*
 * XREFs of ?count@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@U?$less@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@3@$0A@@std@@@std@@QEBA_KAEBU_GUID@@@Z @ 0x18004C284
 * Callers:
 *     ??$_Callback_once@V?$tuple@$$QEAV_lambda_286394bed54c76db5c0d94726973c3a4_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x180048000 (--$_Callback_once@V-$tuple@$$QEAV_lambda_286394bed54c76db5c0d94726973c3a4_@@AEAVexception_ptr@st.c)
 *     ?AddAndPopulateDeviceType@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@AEBV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@Z @ 0x18004BE04 (-AddAndPopulateDeviceType@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@AEBV-$map@V-$basic.c)
 *     ?CheckGenericConstantExistence@MPCConstantManager@@QEAA_NAEBU_GUID@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18004BFF4 (-CheckGenericConstantExistence@MPCConstantManager@@QEAA_NAEBU_GUID@@AEBV-$basic_string@DU-$char_.c)
 * Callees:
 *     memcmp_0 @ 0x1800E3211 (memcmp_0.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<_GUID,std::map<std::string,std::variant<unsigned long,bool,float>>,std::less<_GUID>,std::allocator<std::pair<_GUID const,std::map<std::string,std::variant<unsigned long,bool,float>>>>,0>>::count(
        __int64 **a1,
        const void *a2)
{
  __int64 *j; // rbx
  __int64 *v4; // rsi
  __int64 **v5; // r14
  __int64 *v6; // rdi
  __int64 *v7; // rdi
  __int64 v8; // rdx
  __int64 **v9; // rax
  __int64 *v10; // rcx
  __int64 *i; // rcx

  j = *a1;
  v4 = *a1;
  v5 = (__int64 **)(*a1 + 1);
  v6 = *v5;
  while ( !*((_BYTE *)v6 + 25) )
  {
    if ( memcmp_0(v6 + 4, a2, 0x10uLL) >= 0 )
    {
      if ( *((_BYTE *)v4 + 25) && memcmp_0(a2, v6 + 4, 0x10uLL) < 0 )
        v4 = v6;
      j = v6;
      v6 = (__int64 *)*v6;
    }
    else
    {
      v6 = (__int64 *)v6[2];
    }
  }
  if ( !*((_BYTE *)v4 + 25) )
    v5 = (__int64 **)v4;
  v7 = *v5;
  while ( !*((_BYTE *)v7 + 25) )
  {
    if ( memcmp_0(a2, v7 + 4, 0x10uLL) >= 0 )
    {
      v7 = (__int64 *)v7[2];
    }
    else
    {
      v4 = v7;
      v7 = (__int64 *)*v7;
    }
  }
  v8 = 0LL;
  while ( j != v4 )
  {
    ++v8;
    if ( !*((_BYTE *)j + 25) )
    {
      v9 = (__int64 **)j[2];
      if ( *((_BYTE *)v9 + 25) )
      {
        for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
          j = i;
        j = i;
      }
      else
      {
        v10 = *v9;
        for ( j = (__int64 *)j[2]; !*((_BYTE *)v10 + 25); v10 = (__int64 *)*v10 )
          j = v10;
      }
    }
  }
  return v8;
}
