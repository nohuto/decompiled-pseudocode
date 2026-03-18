/*
 * XREFs of ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x1800618C0
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180046EB0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@@Z @ 0x180048CC0 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@@Z.c)
 *     ?End@CDrawListEntryBuilder@@QEAAJXZ @ 0x180062EB0 (-End@CDrawListEntryBuilder@@QEAAJXZ.c)
 *     ?InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180062EEC (-InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180151EA0 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Initialize@CDrawListPrimitive@@IEAAX_NAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IPEBGIAEBUD2D_VECTOR_2F@@0@Z @ 0x1800635A0 (-Initialize@CDrawListPrimitive@@IEAAX_NAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     PrimitiveStorage::Alloc_16_ @ 0x180069C50 (PrimitiveStorage--Alloc_16_.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z @ 0x1800B707C (-ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(
        CDrawListEntryBuilder *this,
        char a2,
        struct CPrimitiveColor *a3,
        const struct _D3DCOLORVALUE *a4)
{
  unsigned int v4; // r15d
  void *v6; // rbx
  int v7; // esi
  void (__fastcall ***v8)(_QWORD, __int64); // rdi
  unsigned int v9; // edx
  __m128 v10; // xmm0
  __m128 v11; // xmm1
  int v12; // r12d
  void (__fastcall ***v13)(_QWORD, __int64); // r13
  void (__fastcall ***v14)(_QWORD, __int64, _QWORD); // r12
  unsigned int v15; // eax
  char *v16; // rsi
  __int64 v17; // rdx
  _DWORD *Value; // r15
  int v19; // ecx
  __int64 v20; // rcx
  int v21; // r15d
  unsigned int v22; // eax
  unsigned int v23; // edx
  __int64 v24; // rcx
  int v26; // eax
  __int64 v27; // rcx
  int v28; // eax
  int v29; // eax
  _QWORD *v30; // rax
  DWORD v31; // ecx
  int v32; // [rsp+40h] [rbp-C0h]
  unsigned int v34; // [rsp+54h] [rbp-ACh]
  __int64 v35; // [rsp+58h] [rbp-A8h] BYREF
  void *Src; // [rsp+60h] [rbp-A0h] BYREF
  int v37; // [rsp+68h] [rbp-98h]
  __int64 v38; // [rsp+70h] [rbp-90h]
  struct CPrimitiveColor *v39; // [rsp+78h] [rbp-88h]
  const struct _D3DCOLORVALUE *v40; // [rsp+80h] [rbp-80h]
  unsigned int v41; // [rsp+88h] [rbp-78h] BYREF
  __int64 v42; // [rsp+90h] [rbp-70h]
  struct CPrimitiveColor *v43; // [rsp+98h] [rbp-68h]
  const struct _D3DCOLORVALUE *v44; // [rsp+A0h] [rbp-60h]
  void (__fastcall ***v45)(_QWORD, _QWORD, _QWORD); // [rsp+A8h] [rbp-58h]
  __int64 v46; // [rsp+B0h] [rbp-50h] BYREF
  struct CShape *v47; // [rsp+B8h] [rbp-48h] BYREF
  void (__fastcall ***v48)(_QWORD, __int64); // [rsp+C0h] [rbp-40h]
  int v49[2]; // [rsp+C8h] [rbp-38h] BYREF
  int v50; // [rsp+D0h] [rbp-30h]
  unsigned int v51; // [rsp+D4h] [rbp-2Ch]
  int v52[2]; // [rsp+D8h] [rbp-28h] BYREF
  int v53; // [rsp+E0h] [rbp-20h]
  unsigned int v54; // [rsp+E4h] [rbp-1Ch]
  __int64 v55; // [rsp+E8h] [rbp-18h]
  __int64 v56; // [rsp+F0h] [rbp-10h]
  void (__fastcall ***v57)(_QWORD, __int64); // [rsp+F8h] [rbp-8h]
  _DWORD v58[2]; // [rsp+100h] [rbp+0h] BYREF
  unsigned int v59; // [rsp+108h] [rbp+8h]
  void *retaddr; // [rsp+148h] [rbp+48h]

  v4 = *((_DWORD *)this + 594);
  v39 = a3;
  v40 = a4;
  v6 = 0LL;
  v7 = 0;
  v55 = 0LL;
  v8 = 0LL;
  v35 = 0LL;
  if ( !v4 )
    goto LABEL_31;
  v9 = *((_DWORD *)this + 586);
  v10 = (__m128)*((unsigned int *)this + 2);
  v11 = (__m128)*((unsigned int *)this + 1);
  if ( *((char *)this + 348) < 0 )
    LOBYTE(v7) = 1;
  v12 = *(_DWORD *)this;
  Src = (void *)*((_QWORD *)this + 294);
  *(_QWORD *)v49 = *((_QWORD *)this + 169);
  *(_QWORD *)v52 = *((_QWORD *)this + 45);
  v46 = _mm_unpacklo_ps(v11, v10).m128_u64[0];
  v50 = 8 * v12 + 16;
  v51 = v9;
  v53 = v50;
  v54 = v9;
  v58[0] = v9;
  v58[1] = v12;
  v59 = v4;
  if ( (v9 & 1) != 0 )
  {
    v9 = v9 - (v9 & 1) + 2;
    v58[0] = v9;
  }
  if ( v9 > 0x10000 || v4 > 0x1FFFE )
  {
    v58[0] = 0;
    v59 = 0;
  }
  v13 = (void (__fastcall ***)(_QWORD, __int64))PrimitiveStorage::Alloc_16_((struct CDrawListPrimitive::GeometryCounts *)v58);
  if ( !v13 )
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x4Fu);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x5C7u);
    goto LABEL_32;
  }
  LOBYTE(v32) = v7;
  CDrawListPrimitive::Initialize((int)v13, 0, (int)v52, (int)v49, v12, Src, v4, (__int64)&v46, v32);
  v8 = v13;
  memset_0(&v41, 0, 0x28uLL);
  v14 = (void (__fastcall ***)(_QWORD, __int64, _QWORD))*((_QWORD *)this + 4);
  v43 = v39;
  v44 = v40;
  v15 = *((_DWORD *)this + 6);
  v41 = v15;
  v45 = v14;
  if ( a2 )
  {
    v15 |= 8u;
    v41 = v15;
  }
  if ( *((_BYTE *)this + 2465) )
  {
    v15 &= ~1u;
    *((_BYTE *)this + 2465) = 0;
    v41 = v15;
  }
  v34 = v15;
  if ( !*((_BYTE *)this + 2464) && ((v27 = *((_QWORD *)this + 2), *(_QWORD *)v27) || *(_QWORD *)(v27 + 16)) )
  {
    if ( *(_BYTE *)(v27 + 32) )
    {
      v28 = CCpuClip::ResolveClip((CCpuClip *)v27, &v47);
      v7 = v28;
      if ( v28 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0x5EAu);
        goto LABEL_32;
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v35);
      v29 = (*(__int64 (__fastcall **)(struct CShape *, _QWORD, __int64 *))(*(_QWORD *)v47 + 24LL))(v47, 0LL, &v35);
      v7 = v29;
      if ( v29 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x5EBu);
        goto LABEL_32;
      }
      v38 = v35;
      v42 = v35;
    }
    else
    {
      v34 = v15 & 0xFFFFFFDF;
      v41 = v15 & 0xFFFFFFDF;
      v38 = v42;
    }
  }
  else
  {
    v38 = v42;
  }
  v16 = 0LL;
  v8 = 0LL;
  v48 = 0LL;
  v37 = 0;
  Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v30 = operator new(0xA8uLL);
    Value = v30;
    if ( !v30 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x42u);
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    }
    v31 = CThreadContext::s_dwTlsIndex;
    *v30 = 0LL;
    v30[1] = 0LL;
    v30[2] = 0LL;
    v30[3] = 0LL;
    v30[4] = 0LL;
    v30[5] = 0LL;
    v30[6] = 0LL;
    v30[7] = 0LL;
    v30[8] = 0LL;
    v30[9] = 0LL;
    v30[10] = 0LL;
    v30[11] = 0LL;
    v30[12] = 0LL;
    v30[13] = 0LL;
    v30[14] = 0LL;
    v30[15] = 0LL;
    v30[16] = 0LL;
    v30[17] = 0LL;
    v30[18] = 0LL;
    v30[19] = 0LL;
    v30[20] = 0LL;
    TlsSetValue(v31, v30);
  }
  v19 = Value[7];
  if ( v19 )
  {
    v16 = (char *)*((_QWORD *)Value + 4);
    *((_QWORD *)Value + 4) = *(_QWORD *)v16;
    Value[7] = v19 - 1;
  }
  if ( v16 || (v16 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x98uLL)) != 0LL )
  {
    v20 = v38;
    *(_QWORD *)v16 = &CMILRefCountBase::`vftable';
    *((_QWORD *)v16 + 2) = v39;
    v56 = 0LL;
    v57 = v13;
    *((_DWORD *)v16 + 11) = v34;
    *((_DWORD *)v16 + 2) = 0;
    *((_DWORD *)v16 + 10) = 0;
    *((_QWORD *)v16 + 6) = v20;
    *(_OWORD *)(v16 + 24) = _xmm;
    if ( v20 )
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v20 + 8LL))(v20, v17, 0LL);
    if ( v40 )
      *(struct _D3DCOLORVALUE *)(v16 + 24) = *(const struct _D3DCOLORVALUE *)&v40->r;
    *(_QWORD *)v16 = &CHWDrawListEntry::`vftable';
    *((_QWORD *)v16 + 7) = v13;
    *((_QWORD *)v16 + 8) = v14;
    if ( v14 )
      (**v14)(v14, v17, 0LL);
    ++CHWDrawListEngineMetrics::s_cDrawListEntries;
    *((_WORD *)v16 + 68) = 32085;
    *(_OWORD *)(v16 + 72) = _xmm;
    *(_OWORD *)(v16 + 88) = _xmm;
    *(_OWORD *)(v16 + 104) = _xmm;
    *(_OWORD *)(v16 + 120) = _xmm;
    *(_QWORD *)(v16 + 140) = 1065353216LL;
    _InterlockedIncrement((volatile signed __int32 *)v16 + 2);
    v8 = v48;
    v6 = v16;
    v21 = v37;
  }
  else
  {
    v21 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x10u);
    (**v13)(v13, 1LL);
  }
  v7 = v21;
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x5F0u);
  }
  else
  {
    v22 = *((_DWORD *)this + 16);
    Src = v6;
    v23 = v22 + 1;
    if ( v22 + 1 < v22 )
    {
      v7 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    else
    {
      if ( v23 <= *((_DWORD *)this + 15) )
      {
        v7 = 0;
        *(_QWORD *)(*((_QWORD *)this + 5) + 8LL * v22) = Src;
        *((_DWORD *)this + 16) = v23;
LABEL_30:
        v6 = 0LL;
LABEL_31:
        *((_DWORD *)this + 96) = 0;
        *((_DWORD *)this + 344) = 0;
        *((_DWORD *)this + 594) = 0;
        *((_DWORD *)this + 586) = 0;
        *((_DWORD *)this + 612) = 0;
        goto LABEL_32;
      }
      v26 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 40, 8LL, 1LL, &Src);
      v7 = v26;
      if ( v26 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0xC0u);
    }
    if ( v7 >= 0 )
      goto LABEL_30;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x5F1u);
  }
LABEL_32:
  v24 = v35;
  if ( v35 )
  {
    v35 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
  if ( v6 )
    CMILRefCountBase::Release((CMILRefCountBase *)v6);
  if ( v8 )
    (**v8)(v8, 1LL);
  return (unsigned int)v7;
}
