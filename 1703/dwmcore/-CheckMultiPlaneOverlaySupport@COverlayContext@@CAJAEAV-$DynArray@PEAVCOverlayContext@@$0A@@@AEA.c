/*
 * XREFs of ?CheckMultiPlaneOverlaySupport@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x18014FA70
 * Callers:
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@@Z @ 0x1800712CC (-ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18004C100 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?GetDXGIResource@CD3DSurface@@QEAAJPEAPEAUIDXGIResource@@@Z @ 0x180073514 (-GetDXGIResource@CD3DSurface@@QEAAJPEAPEAUIDXGIResource@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18008F260 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ??$ReleaseInterface@VCD3DVidMemOnlyTexture@@@@YAXAEAPEAVCD3DVidMemOnlyTexture@@@Z @ 0x1800C7650 (--$ReleaseInterface@VCD3DVidMemOnlyTexture@@@@YAXAEAPEAVCD3DVidMemOnlyTexture@@@Z.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     Template_q @ 0x18013BB44 (Template_q.c)
 *     ?GetContextCandidates@COverlayContext@@CAJPEAV1@AEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@1@Z @ 0x180150CF4 (-GetContextCandidates@COverlayContext@@CAJPEAV1@AEAV-$DynArray@PEAUOverlayPlaneInfo@COverlayCont.c)
 *     ?GetSingleDXGIResourceAndSubResourceIndex@COverlayContext@@CAJPEAVCCompositionSurfaceInfo@@PEAPEAUIDXGIResource@@PEAI@Z @ 0x180150E30 (-GetSingleDXGIResourceAndSubResourceIndex@COverlayContext@@CAJPEAVCCompositionSurfaceInfo@@PEAPE.c)
 *     ?RequiresFrontPlane@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@@Z @ 0x180151FA8 (-RequiresFrontPlane@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@@Z.c)
 *     Template_dd @ 0x180152360 (Template_dd.c)
 *     Template_xqddddddddddddqqq @ 0x1801528C8 (Template_xqddddddddddddqqq.c)
 */

__int64 __fastcall COverlayContext::CheckMultiPlaneOverlaySupport(unsigned int *a1, __int64 a2, unsigned __int8 *a3)
{
  unsigned int v3; // r15d
  unsigned int *v5; // rsi
  unsigned int v6; // edi
  int v7; // r12d
  unsigned int *v8; // rax
  int v9; // edx
  __int64 v10; // rcx
  char *v11; // r13
  unsigned int v12; // eax
  __int64 v13; // rbx
  int ContextCandidates; // eax
  int v15; // edx
  unsigned int v16; // edx
  int v17; // eax
  char *v18; // r12
  __int64 v19; // rcx
  int v20; // eax
  int DXGIResource; // eax
  int v22; // edi
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // xmm0_8
  unsigned int v26; // edx
  unsigned int v27; // eax
  int v28; // ecx
  __int64 v29; // rax
  char *v30; // rdx
  __int64 v31; // r9
  _QWORD *v32; // r8
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // xmm0_8
  _DWORD *v36; // rbx
  __int64 v37; // r12
  unsigned __int8 *v38; // rbx
  int v39; // eax
  __int64 i; // rdx
  __int64 *v41; // rbx
  __int64 v42; // r13
  int v44; // [rsp+A0h] [rbp-80h]
  unsigned int v45; // [rsp+A4h] [rbp-7Ch]
  int v46; // [rsp+A4h] [rbp-7Ch]
  int v47; // [rsp+A8h] [rbp-78h]
  int v48; // [rsp+A8h] [rbp-78h]
  int v49; // [rsp+ACh] [rbp-74h] BYREF
  char *v50; // [rsp+B0h] [rbp-70h]
  int v51; // [rsp+B8h] [rbp-68h]
  unsigned int v52; // [rsp+BCh] [rbp-64h]
  CMILPoolResource *v53[2]; // [rsp+C0h] [rbp-60h] BYREF
  void *v54[2]; // [rsp+D0h] [rbp-50h] BYREF
  int v55; // [rsp+E0h] [rbp-40h]
  int v56; // [rsp+E4h] [rbp-3Ch]
  unsigned int v57; // [rsp+E8h] [rbp-38h]
  _BYTE v58[32]; // [rsp+F0h] [rbp-30h] BYREF
  __int64 v59; // [rsp+110h] [rbp-10h]
  char *v60; // [rsp+118h] [rbp-8h]
  char v61; // [rsp+170h] [rbp+50h] BYREF
  __int64 v62; // [rsp+178h] [rbp+58h]
  unsigned __int8 *v63; // [rsp+180h] [rbp+60h]
  unsigned int v64; // [rsp+188h] [rbp+68h]

  v63 = a3;
  v62 = a2;
  v3 = *(_DWORD *)(a2 + 24);
  v5 = a1;
  v6 = 0;
  v61 = 0;
  v7 = 0;
  v44 = 0;
  v53[0] = 0LL;
  if ( a1[6] )
  {
    a1 = *(unsigned int **)a1;
    a2 = v5[6];
    do
    {
      v8 = *(unsigned int **)a1;
      a1 += 2;
      v3 += v8[74];
      --a2;
    }
    while ( a2 );
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_dd(a1, a2, CCommonRegistryData::m_dwOverlayTestMode < 4, v3);
  v59 = v3;
  *a3 = 0;
  v60 = (char *)operator new(saturated_mul(v3, 0x88uLL));
  v11 = v60;
  if ( !v60 )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x908u);
    goto LABEL_52;
  }
  v12 = 0;
  v52 = 0;
  if ( !v5[6] )
    goto LABEL_26;
  while ( 2 )
  {
    v57 = 0;
    v54[0] = v58;
    v54[1] = v58;
    v55 = 4;
    v56 = 4;
    v13 = v12;
    ContextCandidates = COverlayContext::GetContextCandidates(*(_QWORD *)(*(_QWORD *)v5 + 8LL * v12), v62, v54);
    v6 = ContextCandidates;
    if ( ContextCandidates >= 0 )
    {
      if ( v57 && COverlayContext::RequiresFrontPlane(*(struct COverlayContext::OverlayPlaneInfo **)v54[0]) )
      {
        LODWORD(v50) = 0;
      }
      else
      {
        v15 = 0;
        LODWORD(v50) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 8 * v13) + 296LL);
      }
      v16 = v7 + v15;
      v51 = -v7;
      v17 = -v16;
      v47 = -v16;
      while ( 1 )
      {
        v64 = v16;
        v45 = v17 + v16;
        if ( v17 + v16 >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 8 * v13) + 296LL) )
          break;
        v18 = &v11[136 * v16];
        memset_0(v18, 0, 0x88uLL);
        v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 8 * v13) + 16LL);
        v20 = (*(__int64 (__fastcall **)(__int64, CMILPoolResource **))(*(_QWORD *)v19 + 496LL))(v19, v53);
        v6 = v20;
        if ( v20 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x938u);
          goto LABEL_41;
        }
        DXGIResource = CD3DSurface::GetDXGIResource(v53[0], (struct IDXGIResource **)v18 + 1);
        v49 = DXGIResource;
        v22 = DXGIResource;
        if ( DXGIResource < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, DXGIResource, 0x93Au);
        TranslateDXGIorD3DErrorInContext(v22, 14, &v49);
        v6 = v49;
        if ( v49 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v49, 0x940u);
          goto LABEL_41;
        }
        *((_DWORD *)v18 + 7) = 0;
        v23 = 112LL * v45;
        v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 8 * v13) + 272LL);
        *((_OWORD *)v18 + 2) = *(_OWORD *)(v24 + v23);
        *((_OWORD *)v18 + 3) = *(_OWORD *)(v24 + v23 + 16);
        *((_OWORD *)v18 + 4) = *(_OWORD *)(v24 + v23 + 32);
        *((_OWORD *)v18 + 5) = *(_OWORD *)(v24 + v23 + 48);
        *((_OWORD *)v18 + 6) = *(_OWORD *)(v24 + v23 + 64);
        *((_OWORD *)v18 + 7) = *(_OWORD *)(v24 + v23 + 80);
        v25 = *(_QWORD *)(v24 + v23 + 96);
        *(_DWORD *)v18 = v51 + v64;
        *((_QWORD *)v18 + 16) = v25;
        *((_DWORD *)v18 + 4) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 8 * v13) + 72LL) + 232LL);
        ReleaseInterface<CD3DVidMemOnlyTexture>(v53);
        v17 = v47;
        v16 = v64 + 1;
      }
      v26 = v57;
      v27 = 0;
      v64 = 0;
      if ( v57 )
      {
        v28 = v44 + (_DWORD)v50;
        v46 = v44 + (_DWORD)v50;
        do
        {
          v29 = v28 + v27;
          v48 = v29;
          v50 = &v11[136 * v29];
          memset_0(v50, 0, 0x88uLL);
          if ( (int)COverlayContext::GetSingleDXGIResourceAndSubResourceIndex(
                      *(struct CCompositionSurfaceInfo **)(*((_QWORD *)v54[0] + v64) + 24LL),
                      (struct IDXGIResource **)v50 + 1,
                      (unsigned int *)v50 + 7) < 0 )
            goto LABEL_41;
          v30 = v50;
          v31 = v64;
          v32 = v54[0];
          v33 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v54[0] + v64) + 24LL) + 40LL);
          *((_DWORD *)v50 + 7) = 0;
          *(_QWORD *)(v30 + 20) = v33;
          v34 = v32[v31];
          *((_OWORD *)v30 + 2) = *(_OWORD *)(v34 + 40);
          *((_OWORD *)v30 + 3) = *(_OWORD *)(v34 + 56);
          *((_OWORD *)v30 + 4) = *(_OWORD *)(v34 + 72);
          *((_OWORD *)v30 + 5) = *(_OWORD *)(v34 + 88);
          *((_OWORD *)v30 + 6) = *(_OWORD *)(v34 + 104);
          *((_OWORD *)v30 + 7) = *(_OWORD *)(v34 + 120);
          v35 = *(_QWORD *)(v34 + 136);
          *(_DWORD *)v30 = v48 + v51;
          *((_QWORD *)v30 + 16) = v35;
          v27 = v64 + 1;
          *((_DWORD *)v30 + 4) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 8 * v13) + 72LL) + 232LL);
          v26 = v57;
          v28 = v46;
          v64 = v27;
        }
        while ( v27 < v57 );
      }
      v7 = v26 + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 8 * v13) + 296LL) + v44;
      v44 = v7;
      DynArrayImpl<1>::~DynArrayImpl<1>(v54);
      v12 = v52 + 1;
      v52 = v12;
      if ( v12 < v5[6] )
        continue;
LABEL_26:
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 && v3 )
      {
        v36 = v11 + 88;
        v37 = v3;
        do
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            Template_xqddddddddddddqqq(
              v10,
              v9,
              *((_QWORD *)v36 - 10),
              *(v36 - 14),
              *(v36 - 13),
              *(v36 - 12),
              *(v36 - 11),
              *(v36 - 10),
              *(v36 - 9),
              *(v36 - 8),
              *(v36 - 7),
              *(v36 - 6),
              *(v36 - 5),
              *(v36 - 4),
              *(v36 - 3),
              *(v36 - 2),
              *(v36 - 1),
              *v36,
              v36[5]);
          v36 += 34;
          --v37;
        }
        while ( v37 );
      }
      v38 = v63;
      if ( CCommonRegistryData::m_dwOverlayTestMode >= 4 )
      {
        if ( CCommonRegistryData::m_dwOverlayTestMode == 4 )
          *v63 = 1;
      }
      else
      {
        v39 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, unsigned __int8 *, char *))(**(_QWORD **)(**(_QWORD **)v5 + 16LL)
                                                                                           + 392LL))(
                *(_QWORD *)(**(_QWORD **)v5 + 16LL),
                v3,
                v11,
                v63,
                &v61);
        v6 = v39;
        if ( v39 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v39, 0x988u);
          goto LABEL_47;
        }
        if ( v61 )
        {
          for ( i = 0LL; (unsigned int)i < v5[6]; *(_BYTE *)(v10 + 1102) = 1 )
          {
            v10 = *(_QWORD *)(*(_QWORD *)v5 + 8 * i);
            i = (unsigned int)(i + 1);
          }
        }
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_q(v10, &EVTDESC_OVERLAY_CHECKSUPPORT_Stop, *v38);
      goto LABEL_47;
    }
    break;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, ContextCandidates, 0x916u);
LABEL_41:
  DynArrayImpl<1>::~DynArrayImpl<1>(v54);
LABEL_47:
  if ( v3 )
  {
    v41 = (__int64 *)(v11 + 8);
    v42 = v59;
    do
    {
      ReleaseInterfaceNoNULL<CD2DPencil>(*v41);
      v41 += 17;
      --v42;
    }
    while ( v42 );
    v11 = v60;
  }
  WPF::ProcessHeapImpl::Free(v11);
LABEL_52:
  if ( v53[0] )
    CMILPoolResource::Release(v53[0]);
  return v6;
}
