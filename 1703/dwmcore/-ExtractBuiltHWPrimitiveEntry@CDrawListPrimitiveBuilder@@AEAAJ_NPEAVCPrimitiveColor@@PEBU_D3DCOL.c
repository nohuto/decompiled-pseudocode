/*
 * XREFs of ?ExtractBuiltHWPrimitiveEntry@CDrawListPrimitiveBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x18003FC4C
 * Callers:
 *     ?End@CDrawListPrimitiveBuilder@@QEAAJXZ @ 0x1800410F8 (-End@CDrawListPrimitiveBuilder@@QEAAJXZ.c)
 *     ?InsertHW@CDrawListPrimitiveBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180041158 (-InsertHW@CDrawListPrimitiveBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesD.c)
 *     ?InsertWARP@CDrawListPrimitiveBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18015BF50 (-InsertWARP@CDrawListPrimitiveBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttrib.c)
 * Callees:
 *     ?ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z @ 0x18001ED24 (-ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     PrimitiveStorage::Alloc_16_ @ 0x180041B1C (PrimitiveStorage--Alloc_16_.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Initialize@CDrawListPrimitive@@IEAAX_NAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IPEBGIAEBUD2D_VECTOR_2F@@0@Z @ 0x18008BFD0 (-Initialize@CDrawListPrimitive@@IEAAX_NAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x180094270 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ?HasClip@CCpuClip@@QEBA_NXZ @ 0x1800C12CC (-HasClip@CCpuClip@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawListPrimitiveBuilder::ExtractBuiltHWPrimitiveEntry(
        CDrawListPrimitiveBuilder *this,
        char a2,
        struct CPrimitiveColor *a3,
        const struct _D3DCOLORVALUE *a4)
{
  unsigned int v4; // r15d
  void *v5; // rsi
  int v6; // r14d
  void (__fastcall ***v7)(_QWORD, __int64); // rdi
  unsigned int v10; // edx
  int v11; // r14d
  __m128 v12; // xmm0
  __m128 v13; // xmm1
  __int64 v14; // rax
  void (__fastcall ***v15)(_QWORD, __int64); // rbx
  int v16; // r15d
  __int64 v17; // r13
  int Current; // eax
  struct CThreadContext *v19; // rcx
  char *v20; // r14
  int v21; // edx
  __int64 v22; // rax
  void (__fastcall ***v23)(_QWORD); // rcx
  int v24; // r13d
  __int64 v25; // rcx
  unsigned int v26; // edx
  unsigned int v27; // eax
  __int64 v28; // rcx
  int v30; // eax
  int v31; // r9d
  CCpuClip *v32; // rcx
  int v33; // eax
  unsigned int v34; // [rsp+28h] [rbp-E0h]
  int v35; // [rsp+48h] [rbp-C0h]
  bool v37; // [rsp+5Ch] [rbp-ACh]
  __int64 v38; // [rsp+60h] [rbp-A8h] BYREF
  void *Src; // [rsp+68h] [rbp-A0h] BYREF
  struct CPrimitiveColor *v40; // [rsp+70h] [rbp-98h]
  __int64 v41; // [rsp+78h] [rbp-90h]
  void (__fastcall ***v42)(_QWORD, __int64); // [rsp+80h] [rbp-88h]
  int v43; // [rsp+88h] [rbp-80h] BYREF
  __int64 v44; // [rsp+90h] [rbp-78h]
  struct CPrimitiveColor *v45; // [rsp+98h] [rbp-70h]
  const struct _D3DCOLORVALUE *v46; // [rsp+A0h] [rbp-68h]
  void (__fastcall ***v47)(_QWORD); // [rsp+A8h] [rbp-60h]
  __int64 v48; // [rsp+B0h] [rbp-58h] BYREF
  struct CShape *v49; // [rsp+B8h] [rbp-50h] BYREF
  struct CThreadContext *v50; // [rsp+C0h] [rbp-48h] BYREF
  const struct _D3DCOLORVALUE *v51; // [rsp+C8h] [rbp-40h]
  void (__fastcall ***v52)(_QWORD); // [rsp+D0h] [rbp-38h]
  void (__fastcall ***v53)(_QWORD, __int64); // [rsp+D8h] [rbp-30h]
  int v54[2]; // [rsp+E0h] [rbp-28h] BYREF
  int v55; // [rsp+E8h] [rbp-20h]
  unsigned int v56; // [rsp+ECh] [rbp-1Ch]
  int v57[2]; // [rsp+F0h] [rbp-18h] BYREF
  int v58; // [rsp+F8h] [rbp-10h]
  unsigned int v59; // [rsp+FCh] [rbp-Ch]
  __int64 v60; // [rsp+100h] [rbp-8h]
  __int64 v61; // [rsp+108h] [rbp+0h]
  __int64 v62; // [rsp+110h] [rbp+8h]
  _DWORD v63[2]; // [rsp+118h] [rbp+10h] BYREF
  unsigned int v64; // [rsp+120h] [rbp+18h]
  void *retaddr; // [rsp+160h] [rbp+58h]

  v4 = *((_DWORD *)this + 594);
  v5 = 0LL;
  v38 = 0LL;
  v6 = 0;
  v7 = 0LL;
  v51 = a4;
  v40 = a3;
  v60 = 0LL;
  if ( !v4 )
    goto LABEL_36;
  v10 = *((_DWORD *)this + 586);
  v11 = *(_DWORD *)this;
  v12 = (__m128)*((unsigned int *)this + 2);
  v13 = (__m128)*((unsigned int *)this + 1);
  v37 = *((_BYTE *)this + 348) >= 0x80u;
  Src = (void *)*((_QWORD *)this + 294);
  *(_QWORD *)v54 = *((_QWORD *)this + 169);
  *(_QWORD *)v57 = *((_QWORD *)this + 45);
  v48 = _mm_unpacklo_ps(v13, v12).m128_u64[0];
  v55 = 8 * v11 + 16;
  v56 = v10;
  v58 = v55;
  v59 = v10;
  v63[0] = v10;
  v63[1] = v11;
  v64 = v4;
  if ( (v10 & 1) != 0 )
  {
    v10 = v10 - (v10 & 1) + 2;
    v63[0] = v10;
  }
  if ( v10 > 0x10000 || v4 > 0x1FFFE )
  {
    v63[0] = 0;
    v64 = 0;
  }
  v14 = PrimitiveStorage::Alloc_16_((struct CDrawListPrimitive::GeometryCounts *)v63);
  v41 = v14;
  v15 = (void (__fastcall ***)(_QWORD, __int64))v14;
  if ( !v14 )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x4Fu);
    v34 = 1419;
    goto LABEL_51;
  }
  LOBYTE(v35) = v37;
  CDrawListPrimitive::Initialize(v14, 0, (int)v57, (int)v54, v11, Src, v4, (__int64)&v48, v35);
  v61 = 0LL;
  v7 = v15;
  memset_0(&v43, 0, 0x28uLL);
  v16 = *((_DWORD *)this + 6);
  v52 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 4);
  v47 = v52;
  v45 = v40;
  v46 = a4;
  v43 = v16;
  if ( a2 )
  {
    v16 |= 8u;
    v43 = v16;
  }
  if ( *((_BYTE *)this + 2465) )
  {
    v16 &= ~1u;
    *((_BYTE *)this + 2465) = 0;
    v43 = v16;
  }
  if ( !*((_BYTE *)this + 2464) && CCpuClip::HasClip(*((CCpuClip **)this + 2)) )
  {
    if ( *((_BYTE *)v32 + 32) )
    {
      v33 = CCpuClip::ResolveClip(v32, &v49);
      v6 = v33;
      if ( v33 < 0 )
      {
        v34 = 1454;
      }
      else
      {
        Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(&v38);
        v33 = (*(__int64 (__fastcall **)(struct CShape *, _QWORD, __int64 *))(*(_QWORD *)v49 + 24LL))(v49, 0LL, &v38);
        v6 = v33;
        if ( v33 >= 0 )
        {
          v17 = v38;
          v44 = v38;
          goto LABEL_13;
        }
        v34 = 1455;
      }
      v31 = v33;
      goto LABEL_55;
    }
    v16 &= ~0x20u;
    v43 = v16;
  }
  v17 = v44;
LABEL_13:
  v7 = 0LL;
  v53 = 0LL;
  v42 = v15;
  Current = CThreadContext::GetCurrent(&v50);
  if ( Current < 0 )
  {
    ModuleFailFastForHRESULT((unsigned int)Current, retaddr);
    __debugbreak();
  }
  v19 = v50;
  v20 = 0LL;
  v21 = *((_DWORD *)v50 + 7);
  if ( v21 )
  {
    v20 = (char *)*((_QWORD *)v50 + 4);
    *((_QWORD *)v50 + 4) = *(_QWORD *)v20;
    *((_DWORD *)v19 + 7) = v21 - 1;
  }
  if ( v20 || (v20 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x98uLL)) != 0LL )
  {
    v22 = v41;
    v15 = 0LL;
    *((_DWORD *)v20 + 10) = 0;
    *(_QWORD *)v20 = &CMILRefCountBase::`vftable';
    v42 = 0LL;
    v62 = v22;
    *((_QWORD *)v20 + 2) = v40;
    *((_DWORD *)v20 + 2) = 0;
    *((_DWORD *)v20 + 11) = v16;
    *((_QWORD *)v20 + 6) = v17;
    *(_OWORD *)(v20 + 24) = _xmm;
    if ( v17 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
      v22 = v41;
    }
    if ( v51 )
      *(struct _D3DCOLORVALUE *)(v20 + 24) = *(const struct _D3DCOLORVALUE *)&v51->r;
    *(_QWORD *)v20 = &CHWDrawListEntry::`vftable';
    v23 = v52;
    *((_QWORD *)v20 + 7) = v22;
    *((_QWORD *)v20 + 8) = v23;
    if ( v23 )
      (**v23)(v23);
    *((_WORD *)v20 + 68) = 32085;
    *(_OWORD *)(v20 + 72) = _xmm;
    *(_OWORD *)(v20 + 88) = _xmm;
    *(_OWORD *)(v20 + 104) = _xmm;
    *(_OWORD *)(v20 + 120) = _xmm;
    *((_DWORD *)v20 + 36) = 0;
    ++CHWDrawListEngineMetrics::s_cDrawListEntries;
    *((_DWORD *)v20 + 35) = 1065353216;
  }
  if ( v20 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v20 + 2);
    v7 = v53;
    v5 = v20;
    v15 = v42;
    v24 = 0;
  }
  else
  {
    v24 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x10u);
  }
  if ( v15 )
    (**v15)(v15, 1LL);
  v6 = v24;
  if ( v24 < 0 )
  {
    v34 = 1460;
    v31 = v24;
    goto LABEL_55;
  }
  v25 = *((unsigned int *)this + 16);
  v26 = 0;
  Src = v5;
  v27 = v25 + 1;
  if ( (int)v25 + 1 >= (unsigned int)v25 )
    v26 = v25 + 1;
  v6 = v27 < (unsigned int)v25 ? 0x80070216 : 0;
  if ( v27 < (unsigned int)v25 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xB5u);
  }
  else if ( v26 > *((_DWORD *)this + 15) )
  {
    v30 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 40, 8LL, 1LL, &Src);
    v6 = v30;
    if ( v30 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v25) = Src;
    *((_DWORD *)this + 16) = v26;
  }
  if ( v6 >= 0 )
  {
    v5 = 0LL;
LABEL_36:
    *((_DWORD *)this + 96) = 0;
    *((_DWORD *)this + 344) = 0;
    *((_DWORD *)this + 594) = 0;
    *((_DWORD *)this + 586) = 0;
    *((_DWORD *)this + 612) = 0;
    goto LABEL_37;
  }
  v34 = 1461;
LABEL_51:
  v31 = v6;
LABEL_55:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, v34);
LABEL_37:
  v28 = v38;
  if ( v38 )
  {
    v38 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  }
  if ( v5 )
    CMILRefCountBase::Release((CMILRefCountBase *)v5);
  if ( v7 )
    (**v7)(v7, 1LL);
  return (unsigned int)v6;
}
