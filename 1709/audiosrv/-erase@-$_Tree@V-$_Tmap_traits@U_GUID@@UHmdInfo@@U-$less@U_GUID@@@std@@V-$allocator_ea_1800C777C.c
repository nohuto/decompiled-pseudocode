/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBU_GUID@@@Z @ 0x1800C777C
 * Callers:
 *     ?OnHmdRemoved@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAUIHolographicDisplay@456@@Z @ 0x1800C67E0 (-OnHmdRemoved@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@G.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@@2@0@Z @ 0x1800C2EE0 (-erase@-$_Tree@V-$_Tmap_traits@U_GUID@@UHmdInfo@@U-$less@U_GUID@@@std@@V-$allocator@U-$pair@$$CB.c)
 *     ??$_Eqrange@U_GUID@@@?$_Tree@V?$_Tmap_traits@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@@std@@V12@@1@AEBU_GUID@@@Z @ 0x1800C54FC (--$_Eqrange@U_GUID@@@-$_Tree@V-$_Tmap_traits@U_GUID@@UHmdInfo@@U-$less@U_GUID@@@std@@V-$allocato.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::erase(
        __int64 *a1,
        __int128 *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 i; // rcx
  __int64 *v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v9; // [rsp+28h] [rbp-10h]
  __int64 *v10; // [rsp+40h] [rbp+8h] BYREF

  std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::_Eqrange<_GUID>(
    a1,
    &v8,
    a2);
  v3 = v8;
  v4 = 0LL;
  while ( v3 != v9 )
  {
    ++v4;
    if ( !*((_BYTE *)v3 + 25) )
    {
      v5 = v3[2];
      if ( *(_BYTE *)(v5 + 25) )
      {
        for ( i = v3[1]; !*(_BYTE *)(i + 25) && v3 == *(__int64 **)(i + 16); i = *(_QWORD *)(i + 8) )
          v3 = (__int64 *)i;
        v3 = (__int64 *)i;
      }
      else
      {
        do
        {
          v3 = (__int64 *)v5;
          v5 = *(_QWORD *)v5;
        }
        while ( !*(_BYTE *)(v5 + 25) );
      }
    }
  }
  std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::erase(
    (__int64 ***)a1,
    &v10,
    v8,
    v9);
  return v4;
}
