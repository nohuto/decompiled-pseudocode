/*
 * XREFs of ??1?$map@KV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@5@@std@@QEAA@XZ @ 0x1802B882C
 * Callers:
 *     _ShellPositionerManager::DoWorkForEachMonitor__lambda_82278fcd7836ba841de055e25599339d____::_1_::dtor$0 @ 0x1802B8009 (_ShellPositionerManager--DoWorkForEachMonitor__lambda_82278fcd7836ba841de055e25599339d____--_1_-.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@KV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@std@@@std@@@2@0@Z @ 0x1802BAA3C (-erase@-$_Tree@V-$_Tmap_traits@KV-$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U-$le_ea_1802BAA3C.c)
 */

void __fastcall std::map<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>>::~map<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>>(
        char **a1)
{
  char v2; // [rsp+30h] [rbp+8h] BYREF

  std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::erase(
    a1,
    &v2);
  std::_Deallocate(*a1, 1uLL, 0x30uLL);
}
