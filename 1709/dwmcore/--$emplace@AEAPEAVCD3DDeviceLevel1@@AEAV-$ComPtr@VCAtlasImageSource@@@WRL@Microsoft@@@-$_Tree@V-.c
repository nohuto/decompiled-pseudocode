/*
 * XREFs of ??$emplace@AEAPEAVCD3DDeviceLevel1@@AEAV?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEAPEAVCD3DDeviceLevel1@@AEAV?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@Z @ 0x180071EE8
 * Callers:
 *     ?GetImageSource@CGradientSource@@QEAAJPEAVCDrawingContext@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIImageSource@@@Z @ 0x180071BC0 (-GetImageSource@CGradientSource@@QEAAJPEAVCDrawingContext@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UMil.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??$_Insert_at@AEAU?$pair@QEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@std@@PEAU?$_Tree_node@U?$pair@QEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@QEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@std@@PEAX@1@AEAU?$pair@QEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@1@1@Z @ 0x180071E70 (--$_Insert_at@AEAU-$pair@QEBVCD3DDeviceLevel1@@V-$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@st.c)
 *     ??$_Buynode@AEAPEAVCD3DDeviceLevel1@@AEAV?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@?$_Tree_buy@U?$pair@QEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@std@@@2@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@std@@PEAX@1@AEAPEAVCD3DDeviceLevel1@@AEAV?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@Z @ 0x180072750 (--$_Buynode@AEAPEAVCD3DDeviceLevel1@@AEAV-$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@-$_Tree_b.c)
 *     ?InternalRelease@?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x1800BC190 (-InternalRelease@-$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,Microsoft::WRL::ComPtr<CAtlasImageSource>,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,Microsoft::WRL::ComPtr<CAtlasImageSource>>>,0>>::emplace<CD3DDeviceLevel1 * &,Microsoft::WRL::ComPtr<CAtlasImageSource> &>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  _QWORD *lpMem; // rsi
  _QWORD *v8; // r9
  char v9; // dl
  __int64 *v10; // r8
  _QWORD *v11; // rbx
  char v12; // r8
  _QWORD *v13; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  __int64 i; // rax
  int v18; // [rsp+20h] [rbp-18h]
  __int64 v19; // [rsp+40h] [rbp+8h] BYREF

  v6 = std::_Tree_buy<std::pair<CD3DDeviceLevel1 const * const,Microsoft::WRL::ComPtr<CAtlasImageSource>>>::_Buynode<CD3DDeviceLevel1 * &,Microsoft::WRL::ComPtr<CAtlasImageSource> &>(
         a1,
         a3,
         a4);
  lpMem = (_QWORD *)v6;
  v8 = (_QWORD *)*a1;
  v9 = 1;
  v10 = *(__int64 **)(*a1 + 8);
  if ( !*((_BYTE *)v10 + 25) )
  {
    v15 = *(_QWORD *)(v6 + 32);
    do
    {
      v8 = v10;
      if ( v15 >= v10[4] )
      {
        v10 = (__int64 *)v10[2];
        v9 = 0;
      }
      else
      {
        v10 = (__int64 *)*v10;
        v9 = 1;
      }
    }
    while ( !*((_BYTE *)v10 + 25) );
  }
  v11 = v8;
  if ( v9 )
  {
    if ( v8 == *(_QWORD **)*a1 )
    {
      v12 = 1;
      goto LABEL_5;
    }
    if ( *((_BYTE *)v8 + 25) )
    {
      v11 = (_QWORD *)v8[2];
    }
    else
    {
      v16 = *v8;
      if ( *(_BYTE *)(*v8 + 25LL) )
      {
        for ( i = v8[1]; !*(_BYTE *)(i + 25) && v11 == *(_QWORD **)i; i = *(_QWORD *)(i + 8) )
          v11 = (_QWORD *)i;
        if ( !*((_BYTE *)v11 + 25) )
          v11 = (_QWORD *)i;
      }
      else
      {
        do
        {
          v11 = (_QWORD *)v16;
          v16 = *(_QWORD *)(v16 + 16);
        }
        while ( !*(_BYTE *)(v16 + 25) );
      }
    }
  }
  if ( v11[4] >= lpMem[4] )
  {
    Microsoft::WRL::ComPtr<CAtlasImageSource>::InternalRelease(lpMem + 5);
    WPF::ProcessHeapImpl::Free(lpMem);
    *(_QWORD *)a2 = v11;
    *(_BYTE *)(a2 + 8) = 0;
    return a2;
  }
  v12 = v9;
LABEL_5:
  v13 = std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,Microsoft::WRL::ComPtr<CAtlasImageSource>,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,Microsoft::WRL::ComPtr<CAtlasImageSource>>>,0>>::_Insert_at<std::pair<CD3DDeviceLevel1 const * const,Microsoft::WRL::ComPtr<CAtlasImageSource>> &,std::_Tree_node<std::pair<CD3DDeviceLevel1 const * const,Microsoft::WRL::ComPtr<CAtlasImageSource>>,void *> *>(
          a1,
          &v19,
          v12,
          v8,
          v18,
          (char *)lpMem);
  *(_BYTE *)(a2 + 8) = 1;
  *(_QWORD *)a2 = *v13;
  return a2;
}
