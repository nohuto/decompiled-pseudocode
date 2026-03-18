/*
 * XREFs of ?FindExistingGradient@CGradientSource@@IEAA_NPEAVCD3DDeviceLevel1@@_NAEBVRetrievalParams@1@@Z @ 0x180012868
 * Callers:
 *     ?GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIImageSource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180011D9C (-GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIImageSource@@PEAV-$TMilRect.c)
 *     ?GetCurrentD2DLinearGradientBrush@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAUID2D1LinearGradientBrush@@@Z @ 0x18018FE88 (-GetCurrentD2DLinearGradientBrush@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAUID2D1LinearGr.c)
 * Callees:
 *     ??$emplace@AEAPEAVCD3DDeviceLevel1@@UCache@CGradientSource@@@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@std@@@std@@@std@@_N@1@AEAPEAVCD3DDeviceLevel1@@$$QEAUCache@CGradientSource@@@Z @ 0x180012AA8 (--$emplace@AEAPEAVCD3DDeviceLevel1@@UCache@CGradientSource@@@-$_Tree@V-$_Tmap_traits@PEBVCD3DDev.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@std@@@std@@@2@AEBQEBVCD3DDeviceLevel1@@@Z @ 0x180012B8C (-find@-$_Tree@V-$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U-$less@PEBVCD3DDevi.c)
 *     ?InternalAddRef@?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@IEBAXXZ @ 0x180013048 (-InternalAddRef@-$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowBackgroundTreatment@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18001ACC8 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@PEAVCWindowBackgroundTrea.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?HasContent@CAtlasImageSource@@UEBA_NXZ @ 0x1800C5F60 (-HasContent@CAtlasImageSource@@UEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CGradientSource::FindExistingGradient(
        CGradientSource *this,
        struct CD3DDeviceLevel1 *a2,
        char a3,
        const struct CGradientSource::RetrievalParams *a4)
{
  char v6; // si
  _QWORD *v7; // rbx
  __int64 v8; // rax
  CAtlasImageSource *v9; // rcx
  bool (__fastcall *v10)(CAtlasImageSource *__hidden); // rax
  char HasContent; // al
  _QWORD *v12; // rdi
  _QWORD *v13; // rax
  _QWORD *v15; // rdi
  _QWORD *v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rbx
  __int128 v22; // [rsp+20h] [rbp-20h] BYREF
  _QWORD *v23; // [rsp+30h] [rbp-10h] BYREF
  _QWORD *v24; // [rsp+70h] [rbp+30h] BYREF
  struct CD3DDeviceLevel1 *v25; // [rsp+78h] [rbp+38h] BYREF

  v25 = a2;
  v6 = 1;
  if ( a3 )
  {
    v15 = (_QWORD *)*((_QWORD *)this + 1);
    v16 = (_QWORD *)*v15;
    v24 = (_QWORD *)*v15;
    while ( v16 != v15 )
    {
      v18 = v16[5];
      if ( v18 )
      {
        *(_QWORD *)(v18 + 40) = 0LL;
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v16 + 5);
      }
      v19 = v16[6];
      if ( v19 )
      {
        v16[6] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      }
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CWindowBackgroundTreatment *>>,std::_Iterator_base0>::operator++(&v24);
      v16 = v24;
    }
  }
  std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::find(
    (char *)this + 8,
    &v24,
    &v25);
  v7 = v24;
  if ( v24 == *((_QWORD **)this + 1) )
  {
    v22 = 0LL;
    ((void (__fastcall *)(char *, _QWORD **, struct CD3DDeviceLevel1 **, __int128 *))std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::emplace<CD3DDeviceLevel1 * &,CGradientSource::Cache>)(
      (char *)this + 8,
      &v23,
      &v25,
      &v22);
    v17 = *((_QWORD *)&v22 + 1);
    if ( *((_QWORD *)&v22 + 1) )
    {
      v20 = **((_QWORD **)&v22 + 1);
      *((_QWORD *)&v22 + 1) = 0LL;
      (*(void (__fastcall **)(__int64))(v20 + 16))(v17);
    }
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v22);
    v7 = v23;
  }
  if ( *(_QWORD *)a4 )
  {
    v8 = v7[5];
    if ( v8
      && ((v9 = (CAtlasImageSource *)(v8 + 16),
           v10 = *(bool (__fastcall **)(CAtlasImageSource *__hidden))(*(_QWORD *)(v8 + 16) + 88LL),
           v10 != CAtlasImageSource::HasContent)
        ? (HasContent = ((__int64 (*)(void))v10)())
        : (HasContent = CAtlasImageSource::HasContent(v9)),
          HasContent) )
    {
      v24 = (_QWORD *)v7[5];
      v12 = v24;
      Microsoft::WRL::ComPtr<CAtlasImageSource>::InternalAddRef(&v24);
      v13 = *(_QWORD **)a4;
      v24 = 0LL;
      *v13 = v12;
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v24);
    }
    else
    {
      v6 = 0;
    }
  }
  if ( *((_QWORD *)a4 + 1) )
  {
    v21 = v7[6];
    if ( v21 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
      **((_QWORD **)a4 + 1) = v21;
    }
    else
    {
      return 0;
    }
  }
  return v6;
}
