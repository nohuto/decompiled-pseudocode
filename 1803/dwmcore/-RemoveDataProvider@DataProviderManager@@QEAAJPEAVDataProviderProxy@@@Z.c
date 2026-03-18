/*
 * XREFs of ?RemoveDataProvider@DataProviderManager@@QEAAJPEAVDataProviderProxy@@@Z @ 0x180154628
 * Callers:
 *     ?Unregister@DataProviderRegistrarPrincipal@@MEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoDataProviderProxy@@@Z @ 0x180169460 (-Unregister@DataProviderRegistrarPrincipal@@MEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoData.c)
 *     ?OnDisconnected@DataProviderProxy@@MEAAJXZ @ 0x180169A50 (-OnDisconnected@DataProviderProxy@@MEAAJXZ.c)
 * Callees:
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x1800C1BB0 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V?$_Uhash_compare@PEAVCResource@@U?$hash@PEAVCResource@@@std@@U?$equal_to@PEAVCResource@@@3@@std@@V?$allocator@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@std@@@std@@@2@_K@Z @ 0x180140A3C (-_End@-$_Hash@V-$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V-$_Uh.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180142BFC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPeerId@BamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x180153918 (-GetPeerId@BamoPeer@Bamo@Microsoft@@QEBAIXZ.c)
 *     ?erase@?$list@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@Z @ 0x18016A1D8 (-erase@-$list@U-$pair@$$CB_KV-$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@V-$allocator@U-$.c)
 */

__int64 __fastcall DataProviderManager::RemoveDataProvider(DataProviderManager *this, struct DataProviderProxy *a2)
{
  unsigned int v3; // ebx
  unsigned __int64 v4; // rbx
  __int64 v5; // r10
  _QWORD *v6; // rax
  __int64 v7; // r11
  __int64 v9; // rax
  _QWORD *v10; // r11
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  v3 = *((_DWORD *)a2 + 10);
  v15 = __PAIR64__(
          Microsoft::Bamo::BamoPeer::GetPeerId(*(Microsoft::Bamo::BamoPeer **)(*((_QWORD *)a2 + 4) + 16LL)),
          v3);
  v4 = v15;
  v5 = *((_QWORD *)this + 12) & std::_Hash_bytes((const unsigned __int8 *)&v15, 8uLL);
  while ( 1 )
  {
    v6 = std::_Hash<std::_Umap_traits<CResource *,CAnimationLoggingManager::ResourceDebugInfo,std::_Uhash_compare<CResource *,std::hash<CResource *>,std::equal_to<CResource *>>,std::allocator<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>>,0>>::_End(
           (__int64)this + 48,
           &v15,
           v5);
    if ( v7 == *v6 )
      break;
    if ( *(_QWORD *)(v7 + 16) == v4 )
      goto LABEL_6;
  }
  v7 = *((_QWORD *)this + 7);
LABEL_6:
  if ( v7 == *((_QWORD *)this + 7) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x141,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataprovidermanager.cpp",
      (const char *)0x8000000BLL);
    return 2147483659LL;
  }
  else
  {
    v9 = std::_Hash_bytes((const unsigned __int8 *)(v7 + 16), 8uLL);
    v11 = *((_QWORD *)this + 9);
    v12 = 2 * (*((_QWORD *)this + 12) & v9);
    if ( *(_QWORD **)(v11 + 16 * (*((_QWORD *)this + 12) & v9) + 8) == v10 )
    {
      if ( *(_QWORD **)(v11 + 16 * (*((_QWORD *)this + 12) & v9)) == v10 )
      {
        *(_QWORD *)(v11 + 16 * (*((_QWORD *)this + 12) & v9)) = *((_QWORD *)this + 7);
        v11 = *((_QWORD *)this + 9);
        v13 = *((_QWORD *)this + 7);
      }
      else
      {
        v13 = v10[1];
      }
      *(_QWORD *)(v11 + 8 * v12 + 8) = v13;
    }
    else if ( *(_QWORD **)(v11 + 16 * (*((_QWORD *)this + 12) & v9)) == v10 )
    {
      *(_QWORD *)(v11 + 16 * (*((_QWORD *)this + 12) & v9)) = *v10;
    }
    std::list<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<DataProviderProxy>>>::erase(
      (char *)this + 56,
      &v15,
      v10);
    return 0LL;
  }
}
