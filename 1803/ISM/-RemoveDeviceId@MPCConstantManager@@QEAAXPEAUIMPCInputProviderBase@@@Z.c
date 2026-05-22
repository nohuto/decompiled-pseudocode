/*
 * XREFs of ?RemoveDeviceId@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@@Z @ 0x18004BDB8
 * Callers:
 *     ?OnDeviceRemoval@MPCInputProviderBase@@UEAAJPEAUDeviceInfo@@@Z @ 0x180049EA0 (-OnDeviceRemoval@MPCInputProviderBase@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@MPCMouseProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800978C0 (-OnDeviceRemoval@MPCMouseProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?CheckIdExistence@MPCConstantManager@@QEAA_NK@Z @ 0x18004BF14 (-CheckIdExistence@MPCConstantManager@@QEAA_NK@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@KU_GUID@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKU_GUID@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x18004C184 (-erase@-$_Tree@V-$_Tmap_traits@KU_GUID@@U-$less@K@std@@V-$allocator@U-$pair@$$CBKU_GUID@@@std@@@.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@KV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@2@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x18004C450 (-erase@-$_Tree@V-$_Tmap_traits@KV-$map@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCConstantManager::RemoveDeviceId(MPCConstantManager *this, struct IMPCInputProviderBase *a2)
{
  unsigned int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 88LL))(a2);
  if ( MPCConstantManager::CheckIdExistence(this, v3) )
  {
    std::_Tree<std::_Tmap_traits<unsigned long,std::map<std::string,std::variant<unsigned long,bool,float>>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::map<std::string,std::variant<unsigned long,bool,float>>>>,0>>::erase(
      this,
      &v3);
    std::_Tree<std::_Tmap_traits<unsigned long,_GUID,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,_GUID>>,0>>::erase(
      (char *)this + 32,
      &v3);
  }
}
