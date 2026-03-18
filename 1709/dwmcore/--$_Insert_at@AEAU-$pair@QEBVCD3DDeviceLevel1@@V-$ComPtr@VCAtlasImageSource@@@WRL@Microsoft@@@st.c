/*
 * XREFs of ??$_Insert_at@AEAU?$pair@QEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@std@@PEAU?$_Tree_node@U?$pair@QEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@QEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@std@@PEAX@1@AEAU?$pair@QEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@1@1@Z @ 0x180071E70
 * Callers:
 *     ??$emplace@AEAPEAVCD3DDeviceLevel1@@AEAV?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEAPEAVCD3DDeviceLevel1@@AEAV?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@Z @ 0x180071EE8 (--$emplace@AEAPEAVCD3DDeviceLevel1@@AEAV-$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@-$_Tree@V-.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x1800BC190 (-InternalRelease@-$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     ?_Rrotate@?$_Tree@V?$_Tmap_traits@PEAVCResource@@PEBGU?$less@PEAVCResource@@@std@@V?$allocator@U?$pair@QEAVCResource@@PEBG@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEAVCResource@@PEBG@std@@PEAX@2@@Z @ 0x180124E40 (-_Rrotate@-$_Tree@V-$_Tmap_traits@PEAVCResource@@PEBGU-$less@PEAVCResource@@@std@@V-$allocator@U.c)
 *     ?_Lrotate@?$_Tree@V?$_Tmap_traits@PEAVCResource@@PEBGU?$less@PEAVCResource@@@std@@V?$allocator@U?$pair@QEAVCResource@@PEBG@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEAVCResource@@PEBG@std@@PEAX@2@@Z @ 0x180157EB4 (-_Lrotate@-$_Tree@V-$_Tmap_traits@PEAVCResource@@PEBGU-$less@PEAVCResource@@@std@@V-$allocator@U.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,Microsoft::WRL::ComPtr<CAtlasImageSource>,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,Microsoft::WRL::ComPtr<CAtlasImageSource>>>,0>>::_Insert_at<std::pair<CD3DDeviceLevel1 const * const,Microsoft::WRL::ComPtr<CAtlasImageSource>> &,std::_Tree_node<std::pair<CD3DDeviceLevel1 const * const,Microsoft::WRL::ComPtr<CAtlasImageSource>>,void *> *>(
        __int64 *a1,
        _QWORD *a2,
        char a3,
        _QWORD *a4,
        int a5,
        char *lpMem)
{
  unsigned __int64 v6; // rax
  __int64 *v7; // r10
  _QWORD *v8; // r11
  __int64 v9; // rax
  __int64 v10; // rax
  char *v11; // r9
  __int64 v12; // rax
  __int64 v13; // rcx
  _QWORD *result; // rax
  __int64 v15; // rax
  __int64 *v16; // rdx
  __int64 v17; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v6 = a1[1];
  v7 = a1;
  v8 = a2;
  if ( v6 >= 0x555555555555554LL )
  {
    Microsoft::WRL::ComPtr<CAtlasImageSource>::InternalRelease(lpMem + 40);
    WPF::ProcessHeapImpl::Free(lpMem);
    ModuleFailFastForHRESULT(2147483659LL, retaddr);
  }
  a1[1] = v6 + 1;
  *((_QWORD *)lpMem + 1) = a4;
  if ( a4 == (_QWORD *)*a1 )
  {
    *(_QWORD *)(*a1 + 8) = lpMem;
    *(_QWORD *)*a1 = lpMem;
    v9 = *a1;
LABEL_4:
    *(_QWORD *)(v9 + 16) = lpMem;
    goto LABEL_5;
  }
  if ( a3 )
  {
    *a4 = lpMem;
    if ( a4 == *(_QWORD **)*a1 )
      *(_QWORD *)*a1 = lpMem;
    goto LABEL_5;
  }
  a4[2] = lpMem;
  v9 = *a1;
  if ( a4 == *(_QWORD **)(*a1 + 16) )
    goto LABEL_4;
LABEL_5:
  v10 = *((_QWORD *)lpMem + 1);
  v11 = lpMem;
  while ( !*(_BYTE *)(v10 + 24) )
  {
    v15 = *((_QWORD *)v11 + 1);
    v16 = *(__int64 **)(v15 + 8);
    v17 = *v16;
    if ( v15 == *v16 )
    {
      v17 = v16[2];
      if ( !*(_BYTE *)(v17 + 24) )
        goto LABEL_24;
      if ( v11 == *(char **)(v15 + 16) )
        std::_Tree<std::_Tmap_traits<CResource *,unsigned short const *,std::less<CResource *>,std::allocator<std::pair<CResource * const,unsigned short const *>>,0>>::_Lrotate(
          v7,
          *((_QWORD *)v11 + 1));
      *(_BYTE *)(*((_QWORD *)v11 + 1) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v11 + 1) + 8LL) + 24LL) = 0;
      std::_Tree<std::_Tmap_traits<CResource *,unsigned short const *,std::less<CResource *>,std::allocator<std::pair<CResource * const,unsigned short const *>>,0>>::_Rrotate(
        v7,
        *(_QWORD *)(*((_QWORD *)v11 + 1) + 8LL));
    }
    else
    {
      if ( !*(_BYTE *)(v17 + 24) )
      {
LABEL_24:
        *(_BYTE *)(v15 + 24) = 1;
        *(_BYTE *)(v17 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v11 + 1) + 8LL) + 24LL) = 0;
        v11 = *(char **)(*((_QWORD *)v11 + 1) + 8LL);
        goto LABEL_23;
      }
      if ( v11 == *(char **)v15 )
        std::_Tree<std::_Tmap_traits<CResource *,unsigned short const *,std::less<CResource *>,std::allocator<std::pair<CResource * const,unsigned short const *>>,0>>::_Rrotate(
          v7,
          *((_QWORD *)v11 + 1));
      *(_BYTE *)(*((_QWORD *)v11 + 1) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v11 + 1) + 8LL) + 24LL) = 0;
      std::_Tree<std::_Tmap_traits<CResource *,unsigned short const *,std::less<CResource *>,std::allocator<std::pair<CResource * const,unsigned short const *>>,0>>::_Lrotate(
        v7,
        *(_QWORD *)(*((_QWORD *)v11 + 1) + 8LL));
    }
LABEL_23:
    v10 = *((_QWORD *)v11 + 1);
  }
  v12 = *v7;
  *v8 = lpMem;
  v13 = *(_QWORD *)(v12 + 8);
  result = v8;
  *(_BYTE *)(v13 + 24) = 1;
  return result;
}
