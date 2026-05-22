/*
 * XREFs of ??1?$_Tree@V?$_Tmap_traits@KV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x18009D004
 * Callers:
 *     ??R?$default_delete@VHolographicDeviceSnapshot@Holographic@Internal@Windows@@@std@@QEBAXPEAVHolographicDeviceSnapshot@Holographic@Internal@Windows@@@Z @ 0x18009C64C (--R-$default_delete@VHolographicDeviceSnapshot@Holographic@Internal@Windows@@@std@@QEBAXPEAVHolo.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800668E8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@KV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@PEAX@2@@Z @ 0x18009CFAC (-_Erase@-$_Tree@V-$_Tmap_traits@KV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Tree<std::_Tmap_traits<unsigned long,std::wstring,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::wstring>>,0>>::~_Tree<std::_Tmap_traits<unsigned long,std::wstring,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::wstring>>,0>>(
        void **a1)
{
  _QWORD *v2; // rax
  __int64 *v3; // rdi
  __int64 *v4; // rsi

  v2 = *a1;
  v3 = (__int64 *)*((_QWORD *)*a1 + 1);
  v4 = v3;
  if ( !*((_BYTE *)v3 + 25) )
  {
    do
    {
      std::_Tree<std::_Tmap_traits<unsigned long,std::wstring,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::wstring>>,0>>::_Erase(
        (__int64)a1,
        (unsigned __int64 *)v4[2]);
      v4 = (__int64 *)*v4;
      std::wstring::_Tidy_deallocate((unsigned __int64 *)v3 + 5);
      operator delete(v3);
      v3 = v4;
    }
    while ( !*((_BYTE *)v4 + 25) );
    v2 = *a1;
  }
  v2[1] = v2;
  *(_QWORD *)*a1 = *a1;
  *((_QWORD *)*a1 + 2) = *a1;
  a1[1] = 0LL;
  operator delete(*a1);
}
