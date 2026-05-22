/*
 * XREFs of ?CheckDeviceConstantExistence@MPCConstantManager@@QEAA_NKAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18004C0C8
 * Callers:
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180041468 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@AEBV-$basic_string@DU-$char.c)
 *     ??$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180041574 (--$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@AEBV-$basic_string@DU-$char.c)
 *     ??$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800418EC (--$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@AEBV-$basic_string@DU-$ch.c)
 * Callees:
 *     ??A?$map@KV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@2@@std@@QEAAAEAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@@2@@1@AEBK@Z @ 0x180041EE4 (--A-$map@KV-$map@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@V-$variant@K_NM@2.c)
 *     ?CheckIdExistence@MPCConstantManager@@QEAA_NK@Z @ 0x18004BF14 (-CheckIdExistence@MPCConstantManager@@QEAA_NK@Z.c)
 *     ??$_Eqrange@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@@2@$0A@@std@@@std@@IEBA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@@std@@V12@@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x18004CDC8 (--$_Eqrange@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@@-$_Tree@V-$_Tmap_trai.c)
 */

char __fastcall MPCConstantManager::CheckDeviceConstantExistence(MPCConstantManager *a1, unsigned int a2, __int64 a3)
{
  unsigned int *v5; // rax
  __int64 *j; // rax
  __int64 v7; // r9
  char v8; // r8
  __int64 **v9; // rcx
  __int64 *v10; // rdx
  __int64 *i; // rcx
  __int64 *v13; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v14; // [rsp+28h] [rbp-10h]
  unsigned int v15; // [rsp+48h] [rbp+10h] BYREF

  v15 = a2;
  if ( !MPCConstantManager::CheckIdExistence(a1, a2) )
    return 0;
  v5 = std::map<unsigned long,std::map<std::string,std::variant<unsigned long,bool,float>>>::operator[](
         (unsigned int **)a1,
         &v15);
  std::_Tree<std::_Tmap_traits<std::string,std::variant<unsigned long,bool,float>,std::less<std::string>,std::allocator<std::pair<std::string const,std::variant<unsigned long,bool,float>>>,0>>::_Eqrange<std::string>(
    v5,
    &v13,
    a3);
  j = v13;
  v7 = 0LL;
  if ( v13 == v14 )
    return 0;
  v8 = 1;
  do
  {
    ++v7;
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
  while ( j != v14 );
  if ( !v7 )
    return 0;
  return v8;
}
