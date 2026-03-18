/*
 * XREFs of ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x1800ADB70
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180071D00 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@PEBVCDrawListBrush@@PEAVCRenderingEffectFactory@@@Z @ 0x18008CC4C (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@PEBVCDrawListBrush@@P.c)
 *     ?End@CDrawListEntryBuilder@@QEAAJXZ @ 0x1800AF094 (-End@CDrawListEntryBuilder@@QEAAJXZ.c)
 *     ?InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800AF0D0 (-InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18017AEE0 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z @ 0x180019248 (-ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     PrimitiveStorage::Alloc_16_ @ 0x18008ACAC (PrimitiveStorage--Alloc_16_.c)
 *     ?Initialize@CDrawListPrimitive@@IEAAX_NAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IPEBGIAEBUD2D_VECTOR_2F@@0@Z @ 0x1800AF3E0 (-Initialize@CDrawListPrimitive@@IEAAX_NAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??R?$default_delete@VCDrawListPrimitive@@@std@@QEBAXPEAVCDrawListPrimitive@@@Z @ 0x18013F804 (--R-$default_delete@VCDrawListPrimitive@@@std@@QEBAXPEAVCDrawListPrimitive@@@Z.c)
 */

__int64 __fastcall CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(
        CDrawListEntryBuilder *this,
        char a2,
        struct CPrimitiveColor *a3,
        const struct _D3DCOLORVALUE *a4)
{
  unsigned int v4; // r15d
  void *v7; // rbx
  int v8; // esi
  PrimitiveStorage::CInlineStorageBase *v9; // rdi
  unsigned int v10; // edx
  int v11; // edi
  __int64 v12; // xmm1_8
  bool v13; // si
  PrimitiveStorage::CInlineStorageBase *v14; // r12
  void (__fastcall ***v15)(_QWORD); // r15
  unsigned int v16; // eax
  _QWORD *Value; // r13
  int v18; // ecx
  char *v19; // rsi
  __int64 v20; // rcx
  int v21; // r15d
  unsigned int v22; // eax
  unsigned int v23; // edx
  __int64 v24; // rcx
  int v26; // eax
  int v27; // r9d
  __int64 v28; // rcx
  int v29; // eax
  int v30; // eax
  DWORD v31; // ecx
  __int64 v32; // rcx
  unsigned int v33; // [rsp+20h] [rbp-E0h]
  int v34; // [rsp+40h] [rbp-C0h]
  unsigned int v36; // [rsp+54h] [rbp-ACh]
  __int64 v37; // [rsp+58h] [rbp-A8h] BYREF
  void *Src; // [rsp+60h] [rbp-A0h] BYREF
  int v39; // [rsp+68h] [rbp-98h]
  __int64 v40; // [rsp+70h] [rbp-90h]
  struct CPrimitiveColor *v41; // [rsp+78h] [rbp-88h]
  unsigned int v42; // [rsp+80h] [rbp-80h] BYREF
  __int64 v43; // [rsp+88h] [rbp-78h]
  struct CPrimitiveColor *v44; // [rsp+90h] [rbp-70h]
  const struct _D3DCOLORVALUE *v45; // [rsp+98h] [rbp-68h]
  void (__fastcall ***v46)(_QWORD); // [rsp+A0h] [rbp-60h]
  __int64 v47; // [rsp+A8h] [rbp-58h] BYREF
  struct CShape *v48; // [rsp+B0h] [rbp-50h] BYREF
  const struct _D3DCOLORVALUE *v49; // [rsp+B8h] [rbp-48h]
  PrimitiveStorage::CInlineStorageBase *v50; // [rsp+C0h] [rbp-40h]
  int v51[2]; // [rsp+C8h] [rbp-38h] BYREF
  int v52; // [rsp+D0h] [rbp-30h]
  unsigned int v53; // [rsp+D4h] [rbp-2Ch]
  int v54[2]; // [rsp+D8h] [rbp-28h] BYREF
  int v55; // [rsp+E0h] [rbp-20h]
  unsigned int v56; // [rsp+E4h] [rbp-1Ch]
  __int64 v57; // [rsp+E8h] [rbp-18h]
  __int64 v58; // [rsp+F0h] [rbp-10h]
  __int64 v59; // [rsp+F8h] [rbp-8h]
  PrimitiveStorage::CInlineStorageBase *v60; // [rsp+100h] [rbp+0h]
  _DWORD v61[2]; // [rsp+108h] [rbp+8h] BYREF
  unsigned int v62; // [rsp+110h] [rbp+10h]
  void *retaddr; // [rsp+148h] [rbp+48h]

  v4 = *((_DWORD *)this + 594);
  v41 = a3;
  v49 = a4;
  v7 = 0LL;
  v57 = 0LL;
  v8 = 0;
  v37 = 0LL;
  v9 = 0LL;
  if ( !v4 )
    goto LABEL_29;
  v10 = *((_DWORD *)this + 586);
  v11 = *(_DWORD *)this;
  v12 = *(_QWORD *)((char *)this + 4);
  v13 = *((char *)this + 348) < 0;
  Src = (void *)*((_QWORD *)this + 294);
  *(_QWORD *)v51 = *((_QWORD *)this + 169);
  *(_QWORD *)v54 = *((_QWORD *)this + 45);
  v47 = v12;
  v52 = 8 * v11 + 16;
  v53 = v10;
  v55 = v52;
  v56 = v10;
  v61[0] = v10;
  v61[1] = v11;
  v62 = v4;
  if ( (v10 & 1) != 0 )
  {
    v10 = (v10 & 0xFFFFFFFE) + 2;
    v61[0] = v10;
  }
  if ( v10 > 0x10000 || v4 > 0x1FFFE )
  {
    v61[0] = 0;
    v62 = 0;
  }
  v14 = PrimitiveStorage::Alloc_16_((struct CDrawListPrimitive::GeometryCounts *)v61);
  if ( !v14 )
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x4Fu);
    v33 = 1359;
    v9 = 0LL;
    goto LABEL_46;
  }
  LOBYTE(v34) = v13;
  CDrawListPrimitive::Initialize((int)v14, 0, (int)v54, (int)v51, v11, Src, v4, (__int64)&v47, v34);
  v58 = 0LL;
  v9 = v14;
  memset_0(&v42, 0, 0x28uLL);
  v15 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 4);
  v44 = v41;
  v16 = *((_DWORD *)this + 6);
  v36 = v16;
  v42 = v16;
  v46 = v15;
  v45 = a4;
  if ( a2 )
  {
    v16 |= 8u;
    v36 = v16;
    v42 = v16;
  }
  if ( *((_BYTE *)this + 2465) )
  {
    v16 &= ~1u;
    *((_BYTE *)this + 2465) = 0;
    v36 = v16;
    v42 = v16;
  }
  if ( *((_BYTE *)this + 2464) || (v28 = *((_QWORD *)this + 2), !*(_QWORD *)v28) && !*(_QWORD *)(v28 + 16) )
  {
    v40 = v43;
LABEL_13:
    v9 = 0LL;
    v39 = 0;
    v50 = 0LL;
    Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
    if ( !Value )
    {
      Value = operator new(0xF8uLL);
      if ( !Value )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x42u);
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
      }
      v31 = CThreadContext::s_dwTlsIndex;
      *Value = 0LL;
      Value[1] = 0LL;
      Value[2] = 0LL;
      Value[3] = 0LL;
      Value[4] = 0LL;
      Value[5] = 0LL;
      Value[6] = 0LL;
      Value[7] = 0LL;
      Value[8] = 0LL;
      Value[9] = 0LL;
      Value[10] = 0LL;
      Value[11] = 0LL;
      Value[12] = 0LL;
      Value[13] = 0LL;
      Value[14] = 0LL;
      Value[15] = 0LL;
      Value[16] = 0LL;
      Value[17] = 0LL;
      Value[18] = 0LL;
      Value[19] = 0LL;
      Value[20] = 0LL;
      Value[21] = 0LL;
      Value[22] = 0LL;
      Value[23] = 0LL;
      Value[24] = 0LL;
      Value[25] = 0LL;
      Value[26] = 0LL;
      Value[27] = 0LL;
      Value[28] = 0LL;
      Value[29] = 0LL;
      Value[30] = 0LL;
      TlsSetValue(v31, Value);
    }
    v18 = *((_DWORD *)Value + 15);
    v19 = 0LL;
    if ( v18 )
    {
      v19 = (char *)Value[8];
      Value[8] = *(_QWORD *)v19;
      *((_DWORD *)Value + 15) = v18 - 1;
    }
    if ( v19 || (v19 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x98uLL)) != 0LL )
    {
      v20 = v40;
      *(_QWORD *)v19 = &CMILRefCountBase::`vftable';
      *((_QWORD *)v19 + 2) = v41;
      v59 = 0LL;
      v60 = v14;
      *((_DWORD *)v19 + 11) = v36;
      *((_DWORD *)v19 + 2) = 0;
      *((_DWORD *)v19 + 10) = 0;
      *((_QWORD *)v19 + 6) = v20;
      *(_OWORD *)(v19 + 24) = _xmm;
      if ( v20 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
      if ( v49 )
        *(struct _D3DCOLORVALUE *)(v19 + 24) = *(const struct _D3DCOLORVALUE *)&v49->r;
      *(_QWORD *)v19 = &CHWDrawListEntry::`vftable';
      *((_QWORD *)v19 + 7) = v14;
      *((_QWORD *)v19 + 8) = v15;
      if ( v15 )
        (**v15)(v15);
      ++CHWDrawListEngineMetrics::s_cDrawListEntries;
      *((_WORD *)v19 + 68) = 32085;
      *(_OWORD *)(v19 + 72) = _xmm;
      *(_OWORD *)(v19 + 88) = _xmm;
      *(_OWORD *)(v19 + 104) = _xmm;
      *(_OWORD *)(v19 + 120) = _xmm;
      *(_QWORD *)(v19 + 140) = 1065353216LL;
      _InterlockedIncrement((volatile signed __int32 *)v19 + 2);
      v9 = v50;
      v7 = v19;
      v21 = v39;
    }
    else
    {
      v21 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x10u);
      std::default_delete<CDrawListPrimitive>::operator()(v32, v14);
    }
    v8 = v21;
    if ( v21 < 0 )
    {
      v33 = 1400;
      v27 = v21;
      goto LABEL_48;
    }
    v22 = *((_DWORD *)this + 16);
    Src = v7;
    v23 = v22 + 1;
    if ( v22 + 1 < v22 )
    {
      v8 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    else
    {
      if ( v23 <= *((_DWORD *)this + 15) )
      {
        v8 = 0;
        *(_QWORD *)(*((_QWORD *)this + 5) + 8LL * v22) = Src;
        *((_DWORD *)this + 16) = v23;
LABEL_28:
        v7 = 0LL;
LABEL_29:
        *((_DWORD *)this + 96) = 0;
        *((_DWORD *)this + 344) = 0;
        *((_DWORD *)this + 594) = 0;
        *((_DWORD *)this + 586) = 0;
        *((_DWORD *)this + 612) = 0;
        goto LABEL_30;
      }
      v26 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 40, 8u, 1, &Src);
      v8 = v26;
      if ( v26 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0xC0u);
    }
    if ( v8 >= 0 )
      goto LABEL_28;
    v33 = 1401;
LABEL_46:
    v27 = v8;
LABEL_48:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, v33);
    goto LABEL_30;
  }
  if ( !*(_BYTE *)(v28 + 32) )
  {
    v36 = v16 & 0xFFFFFFDF;
    v42 = v16 & 0xFFFFFFDF;
    v40 = v43;
    goto LABEL_13;
  }
  v29 = CCpuClip::ResolveClip((CCpuClip *)v28, &v48);
  v8 = v29;
  if ( v29 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x572u);
  }
  else
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v37);
    v30 = (*(__int64 (__fastcall **)(struct CShape *, _QWORD, __int64 *))(*(_QWORD *)v48 + 24LL))(v48, 0LL, &v37);
    v8 = v30;
    if ( v30 >= 0 )
    {
      v40 = v37;
      v43 = v37;
      goto LABEL_13;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0x573u);
  }
LABEL_30:
  v24 = v37;
  if ( v37 )
  {
    v37 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
  if ( v7 )
    CMILRefCountBase::Release((CMILRefCountBase *)v7);
  if ( v9 )
    std::default_delete<CDrawListPrimitive>::operator()(v24, v9);
  return (unsigned int)v8;
}
