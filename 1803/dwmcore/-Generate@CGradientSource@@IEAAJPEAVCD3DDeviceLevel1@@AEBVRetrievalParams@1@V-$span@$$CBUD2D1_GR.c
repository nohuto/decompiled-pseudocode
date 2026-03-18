/*
 * XREFs of ?Generate@CGradientSource@@IEAAJPEAVCD3DDeviceLevel1@@AEBVRetrievalParams@1@V?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@_N3W4D2D1_EXTEND_MODE@@@Z @ 0x18001269C
 * Callers:
 *     ?Generate@CGradientBrush@@AEAAJPEAVCD3DDeviceLevel1@@AEBVRetrievalParams@CGradientSource@@@Z @ 0x180011E84 (-Generate@CGradientBrush@@AEAAJPEAVCD3DDeviceLevel1@@AEBVRetrievalParams@CGradientSource@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CAtlasImageSource@@SAJPEAVIAtlasEntryOwner@@PEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x180011640 (-Create@CAtlasImageSource@@SAJPEAVIAtlasEntryOwner@@PEAVCD3DDeviceLevel1@@PEAPEAV1@@Z.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@std@@@std@@@2@AEBQEBVCD3DDeviceLevel1@@@Z @ 0x180012B8C (-find@-$_Tree@V-$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U-$less@PEBVCD3DDevi.c)
 *     ?InternalAddRef@?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@IEBAXXZ @ 0x180013048 (-InternalAddRef@-$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Update@CAtlasImageSource@@QEAAJV?$span@$$CBE$0?0@gsl@@_N@Z @ 0x18001317C (-Update@CAtlasImageSource@@QEAAJV-$span@$$CBE$0-0@gsl@@_N@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180088FE0 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGradientSource::Generate(
        struct IAtlasEntryOwner *a1,
        struct CD3DDeviceLevel1 *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        char a6,
        int a7)
{
  unsigned int v10; // esi
  __int64 v11; // rbx
  struct CAtlasImageSource **v12; // rdi
  int v13; // eax
  CD3DDeviceManager *v14; // rcx
  void *v15; // r14
  int D2DFactoryNoRef; // eax
  int v17; // eax
  struct CD2DFactory *v18; // rdi
  __int64 v19; // r8
  int v20; // eax
  struct CD2DFactory **v21; // rax
  _QWORD *v22; // rax
  __m128i v24; // xmm6
  int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rdi
  _QWORD *v30; // rax
  __int64 v31; // rcx
  struct CD2DFactory *v32[2]; // [rsp+78h] [rbp-51h] BYREF
  _QWORD v33[2]; // [rsp+88h] [rbp-41h] BYREF
  _QWORD v34[2]; // [rsp+98h] [rbp-31h] BYREF

  v32[0] = a2;
  v34[0] = a4;
  v10 = 0;
  std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::find(
    (char *)a1 + 8,
    v33,
    v32);
  v11 = v33[0];
  v12 = (struct CAtlasImageSource **)(v33[0] + 40LL);
  if ( !*(_QWORD *)(v33[0] + 40LL) )
  {
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v33[0] + 40LL);
    v13 = CAtlasImageSource::Create(a1, a2, v12);
    v10 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x80u);
      return v10;
    }
  }
  if ( *(_QWORD *)a3 && !**(_QWORD **)a3 )
  {
    v15 = HeapAlloc(WPF::g_processHeap, 0, 0x2000uLL);
    if ( !v15 )
    {
      v10 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x8Au);
      return v10;
    }
    D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(v14, v32);
    v10 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D2DFactoryNoRef, 0x8Du);
    }
    else
    {
      v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int, unsigned int, int, int, _DWORD, int, void *, int))(**((_QWORD **)v32[0] + 4) + 40LL))(
              *((_QWORD *)v32[0] + 4),
              *(_QWORD *)(v34[0] + 8LL),
              *(unsigned int *)v34[0],
              0LL,
              1,
              (unsigned int)a5 + 1,
              1,
              a7,
              0,
              87,
              v15,
              0x2000);
      v10 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x9Au);
      }
      else
      {
        v18 = *v12;
        v32[0] = v18;
        Microsoft::WRL::ComPtr<CAtlasImageSource>::InternalAddRef(v32);
        LOBYTE(v19) = a6;
        v33[0] = 0x2000LL;
        v33[1] = v15;
        v20 = CAtlasImageSource::Update(v18, v33, v19);
        v10 = v20;
        if ( v20 >= 0 )
        {
          v21 = *(struct CD2DFactory ***)a3;
          v32[0] = 0LL;
          *v21 = v18;
          Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v32);
          operator delete(v15);
          goto LABEL_10;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0xA1u);
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v32);
      }
    }
    operator delete(v15);
    return v10;
  }
LABEL_10:
  v22 = *(_QWORD **)(a3 + 8);
  if ( v22 && !*v22 )
  {
    v32[0] = 0LL;
    v33[0] = 0LL;
    v24 = *(__m128i *)v34[0];
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v32);
    v25 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, __int64, _QWORD, int, struct CD2DFactory **))(**((_QWORD **)a2 + 22) + 72LL))(
            *((_QWORD *)a2 + 22),
            _mm_srli_si128(v24, 8).m128i_u64[0],
            v24.m128i_i64[0],
            a5,
            a7,
            v32);
    v10 = v25;
    if ( v25 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0xB0u);
    }
    else
    {
      v26 = v33[0];
      v34[0] = 0LL;
      v34[1] = 0LL;
      if ( v33[0] )
      {
        v33[0] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
      }
      v27 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, _QWORD, struct CD2DFactory *, _QWORD *))(**((_QWORD **)a2 + 22)
                                                                                                + 80LL))(
              *((_QWORD *)a2 + 22),
              v34,
              0LL,
              v32[0],
              v33);
      v10 = v27;
      if ( v27 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0xB9u);
      }
      else
      {
        v28 = *(_QWORD *)(v11 + 48);
        v29 = v33[0];
        if ( v28 != v33[0] )
        {
          if ( v33[0] )
          {
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v33[0] + 8LL))(v33[0]);
            v28 = *(_QWORD *)(v11 + 48);
          }
          *(_QWORD *)(v11 + 48) = v29;
          if ( v28 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
          v29 = v33[0];
        }
        v30 = *(_QWORD **)(a3 + 8);
        v33[0] = 0LL;
        *v30 = v29;
      }
    }
    v31 = v33[0];
    if ( v33[0] )
    {
      v33[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v32);
  }
  return v10;
}
