/*
 * XREFs of ?Generate@CGradientSource@@QEAAJPEAVCDrawingContext@@V?$span@$$CBUD2D1_GRADIENT_STOP@@@gsl@@_NW4D2D1_EXTEND_MODE@@2@Z @ 0x180071CD8
 * Callers:
 *     ?GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIImageSource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800716F8 (-GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIImageSource@@PEAV-$TMilRect.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBQEBVCD3DDeviceLevel1@@@Z @ 0x180071F7C (-find@-$_Tree@V-$_Tmap_traits@PEBVCD3DDeviceLevel1@@V-$ComPtr@VCAtlasImageSource@@@WRL@Microsoft.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UpdateGradientStrip@CAtlasTexture@@QEAAXPEBVCAtlasEntry@@V?$span@$$CBE@gsl@@@Z @ 0x18008BADC (-UpdateGradientStrip@CAtlasTexture@@QEAAXPEBVCAtlasEntry@@V-$span@$$CBE@gsl@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CD2DFactory@@SAJW4D2D1_FACTORY_TYPE@@UD2D1_FACTORY_OPTIONS@@PEAPEAV1@@Z @ 0x180191838 (-Create@CD2DFactory@@SAJW4D2D1_FACTORY_TYPE@@UD2D1_FACTORY_OPTIONS@@PEAPEAV1@@Z.c)
 *     ?Register@CMesh2DEffect@@SAJPEAVCD2DFactory@@@Z @ 0x1801DAEAC (-Register@CMesh2DEffect@@SAJPEAVCD2DFactory@@@Z.c)
 */

__int64 __fastcall CGradientSource::Generate(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4, int a5, char a6)
{
  void *v9; // r15
  enum D2D1_FACTORY_TYPE v10; // ecx
  struct CD2DFactory *v11; // rbx
  int v12; // edi
  int v13; // eax
  __int64 *v14; // r14
  __int128 v15; // xmm6
  __int64 *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 *v19; // rax
  __int64 *i; // rax
  int v22; // eax
  int v23; // eax
  int v24; // r9d
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned int v27; // [rsp+28h] [rbp-59h]
  __int64 v28; // [rsp+78h] [rbp-9h] BYREF
  struct CD2DFactory *v29; // [rsp+80h] [rbp-1h] BYREF
  _OWORD v30[2]; // [rsp+88h] [rbp+7h] BYREF

  v9 = HeapAlloc(WPF::g_processHeap, 0, 0x2000uLL);
  if ( !v9 )
  {
    v12 = -2147024882;
    v27 = 92;
LABEL_35:
    v24 = v12;
    goto LABEL_36;
  }
  EnterCriticalSection(&CriticalSection);
  v11 = qword_18026EF28;
  v12 = 0;
  if ( !qword_18026EF28 )
  {
    v22 = CD2DFactory::Create(v10, 0, &qword_18026EF28);
    v12 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x10Fu);
    }
    else
    {
      v23 = CMesh2DEffect::Register(qword_18026EF28);
      v12 = v23;
      if ( v23 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x13Fu);
      if ( v12 >= 0 )
      {
        v11 = qword_18026EF28;
        goto LABEL_3;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x111u);
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x3FFu);
    v11 = v29;
  }
LABEL_3:
  LeaveCriticalSection(&CriticalSection);
  if ( v12 < 0 )
  {
    v27 = 95;
    goto LABEL_35;
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int, unsigned int, int, int, _DWORD, int, void *, int))(**((_QWORD **)v11 + 4) + 40LL))(
          *((_QWORD *)v11 + 4),
          *(_QWORD *)a3,
          *(unsigned int *)(a3 + 8),
          0LL,
          1,
          (unsigned int)a4 + 1,
          1,
          a5,
          0,
          87,
          v9,
          0x2000);
  v12 = v13;
  if ( v13 < 0 )
  {
    v27 = 108;
    v24 = v13;
    goto LABEL_36;
  }
  *(_QWORD *)&v30[0] = v9;
  *((_QWORD *)&v30[0] + 1) = 0x2000LL;
  if ( !a6 )
  {
    v28 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 384) + 152LL))(*(_QWORD *)(a2 + 384));
    std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,Microsoft::WRL::ComPtr<CAtlasImageSource>,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,Microsoft::WRL::ComPtr<CAtlasImageSource>>>,0>>::find(
      a1 + 8,
      &v29,
      &v28);
    v25 = *((_QWORD *)v29 + 5);
    *(_BYTE *)(v25 + 56) = 0;
    v26 = *(_QWORD *)(v25 + 32);
    if ( v26 )
    {
      CAtlasTexture::UpdateGradientStrip(v26, v25 + 32, v30);
      v12 = 0;
      goto LABEL_14;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304307, 0x2Cu);
    v27 = 128;
LABEL_30:
    v12 = -2003304307;
    v24 = -2003304307;
LABEL_36:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, v27);
    goto LABEL_14;
  }
  v14 = *(__int64 **)(a1 + 8);
  v15 = v30[0];
  v16 = (__int64 *)*v14;
  while ( v16 != v14 )
  {
    v17 = v16[5];
    *(_BYTE *)(v17 + 56) = 0;
    v18 = *(_QWORD *)(v17 + 32);
    if ( !v18 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304307, 0x2Cu);
      v27 = 117;
      goto LABEL_30;
    }
    v30[0] = v15;
    CAtlasTexture::UpdateGradientStrip(v18, v17 + 32, v30);
    v12 = 0;
    if ( !*((_BYTE *)v16 + 25) )
    {
      v19 = (__int64 *)v16[2];
      if ( *((_BYTE *)v19 + 25) )
      {
        for ( i = (__int64 *)v16[1]; !*((_BYTE *)i + 25) && v16 == (__int64 *)i[2]; i = (__int64 *)i[1] )
          v16 = i;
        v16 = i;
      }
      else
      {
        do
        {
          v16 = v19;
          v19 = (__int64 *)*v19;
        }
        while ( !*((_BYTE *)v19 + 25) );
      }
    }
  }
LABEL_14:
  WPF::ProcessHeapImpl::Free(v9);
  return (unsigned int)v12;
}
