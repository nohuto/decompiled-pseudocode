/*
 * XREFs of ?GetImageSource@CGradientSource@@QEAAJPEAVCDrawingContext@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIImageSource@@@Z @ 0x180071BC0
 * Callers:
 *     ?GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIImageSource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800716F8 (-GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIImageSource@@PEAV-$TMilRect.c)
 * Callees:
 *     ??$emplace@AEAPEAVCD3DDeviceLevel1@@AEAV?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEAPEAVCD3DDeviceLevel1@@AEAV?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@Z @ 0x180071EE8 (--$emplace@AEAPEAVCD3DDeviceLevel1@@AEAV-$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@-$_Tree@V-.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBQEBVCD3DDeviceLevel1@@@Z @ 0x180071F7C (-find@-$_Tree@V-$_Tmap_traits@PEBVCD3DDeviceLevel1@@V-$ComPtr@VCAtlasImageSource@@@WRL@Microsoft.c)
 *     ?Create@CAtlasImageSource@@SAJPEAVIAtlasEntryOwner@@PEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x1800727E4 (-Create@CAtlasImageSource@@SAJPEAVIAtlasEntryOwner@@PEAVCD3DDeviceLevel1@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x1800BC190 (-InternalRelease@-$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGradientSource::GetImageSource(
        struct IAtlasEntryOwner *a1,
        __int64 a2,
        _BYTE *a3,
        _DWORD *a4,
        __int64 **a5)
{
  unsigned int v6; // edi
  struct CD3DDeviceLevel1 *v9; // r12
  struct CAtlasImageSource *v10; // rbx
  __int64 v11; // rdx
  unsigned int v12; // eax
  unsigned int v13; // ecx
  __m128i v14; // xmm0
  __int64 v15; // rax
  __m128i v16; // xmm1
  __int64 v17; // rdx
  __int64 *v18; // rcx
  __int64 v19; // rax
  void (__fastcall *v20)(__int64 *, __int64); // rax
  int v22; // eax
  struct CAtlasImageSource *v23; // [rsp+30h] [rbp-38h] BYREF
  __int64 v24; // [rsp+38h] [rbp-30h] BYREF
  __int64 **v25; // [rsp+40h] [rbp-28h]
  struct CAtlasImageSource *v26; // [rsp+48h] [rbp-20h]

  v25 = a5;
  v6 = 0;
  *a3 = 0;
  v24 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 384) + 152LL))(*(_QWORD *)(a2 + 384));
  v9 = (struct CD3DDeviceLevel1 *)v24;
  std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,Microsoft::WRL::ComPtr<CAtlasImageSource>,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,Microsoft::WRL::ComPtr<CAtlasImageSource>>>,0>>::find(
    (char *)a1 + 8,
    &v23,
    &v24);
  v10 = v23;
  if ( v23 == *((struct CAtlasImageSource **)a1 + 1) )
  {
    v23 = 0LL;
    Microsoft::WRL::ComPtr<CAtlasImageSource>::InternalRelease(&v23);
    v22 = CAtlasImageSource::Create(a1, v9, &v23);
    v6 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x34u);
      Microsoft::WRL::ComPtr<CAtlasImageSource>::InternalRelease(&v23);
      return v6;
    }
    std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,Microsoft::WRL::ComPtr<CAtlasImageSource>,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,Microsoft::WRL::ComPtr<CAtlasImageSource>>>,0>>::emplace<CD3DDeviceLevel1 * &,Microsoft::WRL::ComPtr<CAtlasImageSource> &>((_DWORD)a1 + 8);
    v10 = v26;
    *a3 = 1;
    Microsoft::WRL::ComPtr<CAtlasImageSource>::InternalRelease(&v23);
  }
  v11 = *((_QWORD *)v10 + 5);
  v12 = *(_DWORD *)(v11 + 48);
  *a4 = 0;
  a4[2] = 1157627904;
  v13 = v12 + 1;
  v14 = _mm_cvtsi32_si128(v12);
  v15 = v11 + 16;
  v16 = _mm_cvtsi32_si128(v13);
  v17 = -v11;
  v18 = (__int64 *)(v15 & -(__int64)(v17 != 0));
  *v25 = v18;
  v19 = *v18;
  a4[1] = _mm_cvtepi32_ps(v14).m128_u32[0];
  v20 = *(void (__fastcall **)(__int64 *, __int64))(v19 + 8);
  a4[3] = _mm_cvtepi32_ps(v16).m128_u32[0];
  v20(v18, v17);
  return v6;
}
