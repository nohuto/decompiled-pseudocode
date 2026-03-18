/*
 * XREFs of ?CheckMultiPlaneOverlaySupport@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@AEAV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x180140E68
 * Callers:
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x180068020 (-ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18001D1C0 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?GetDXGIResource@CD3DSurface@@QEAAJPEAPEAUIDXGIResource@@@Z @ 0x18002D948 (-GetDXGIResource@CD3DSurface@@QEAAJPEAPEAUIDXGIResource@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z @ 0x1800824B8 (--$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z.c)
 *     ??$ReleaseInterface@VCRemoteApplicationWindow@@@@YAXAEAPEAVCRemoteApplicationWindow@@@Z @ 0x1800824CC (--$ReleaseInterface@VCRemoteApplicationWindow@@@@YAXAEAPEAVCRemoteApplicationWindow@@@Z.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0d @ 0x180126994 (McTemplateU0d.c)
 *     ?GetDXGIResourceAndSubResourceIndex@CPlaneCaptureRenderTargetEngine@@QEAAJPEAPEAUIDXGIResource@@PEAI@Z @ 0x180139A18 (-GetDXGIResourceAndSubResourceIndex@CPlaneCaptureRenderTargetEngine@@QEAAJPEAPEAUIDXGIResource@@.c)
 *     ?GetContextCandidates@COverlayContext@@CAJPEAV1@AEAV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@1@Z @ 0x180142C1C (-GetContextCandidates@COverlayContext@@CAJPEAV1@AEAV-$DynArray@PEAVOverlayPlaneInfo@COverlayCont.c)
 *     ?GetSingleDXGIResourceAndSubResourceIndex@COverlayContext@@CAJPEAVCCompositionSurfaceInfo@@PEAPEAUIDXGIResource@@PEAI@Z @ 0x180142D14 (-GetSingleDXGIResourceAndSubResourceIndex@COverlayContext@@CAJPEAVCCompositionSurfaceInfo@@PEAPE.c)
 *     ?RequiresFrontPlane@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ @ 0x180144750 (-RequiresFrontPlane@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ.c)
 *     McTemplateU0dd @ 0x180144D58 (McTemplateU0dd.c)
 *     McTemplateU0xqddddddddddddqqq @ 0x1801452BC (McTemplateU0xqddddddddddddqqq.c)
 */

__int64 __fastcall COverlayContext::CheckMultiPlaneOverlaySupport(unsigned int *a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  unsigned int v4; // r15d
  unsigned int *v5; // rsi
  unsigned int v6; // edi
  unsigned int *v7; // rax
  _BYTE *v8; // r13
  __int64 v9; // r12
  int v10; // edx
  int v11; // ecx
  char *v12; // rbx
  unsigned int v13; // eax
  __int64 v14; // r12
  signed int ContextCandidates; // eax
  unsigned int v16; // r8d
  unsigned int v17; // edx
  char *v18; // r13
  __int64 v19; // rcx
  signed int v20; // eax
  int DXGIResource; // eax
  int v22; // ebx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int128 v25; // xmm0
  __int64 *v26; // r13
  unsigned int v27; // r8d
  int v28; // eax
  char *v29; // rbx
  signed int DXGIResourceAndSubResourceIndex; // eax
  __int64 *v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  unsigned int v34; // edx
  unsigned int v35; // eax
  int v36; // r11d
  int v37; // ebx
  unsigned int v38; // r8d
  __int64 v39; // r9
  __int64 v40; // rdx
  char *v41; // r13
  _QWORD *v42; // r8
  __int64 v43; // rax
  __int64 v44; // rax
  __int128 v45; // xmm0
  _DWORD *v46; // rbx
  signed int v47; // eax
  __int64 j; // rdx
  __int64 v49; // rcx
  __int64 v50; // rsi
  __int64 *v51; // rbx
  unsigned int v53; // [rsp+A8h] [rbp-80h]
  unsigned int i; // [rsp+A8h] [rbp-80h]
  char *lpMem; // [rsp+B0h] [rbp-78h]
  int v56; // [rsp+B8h] [rbp-70h]
  unsigned int v57; // [rsp+BCh] [rbp-6Ch]
  unsigned int v58; // [rsp+BCh] [rbp-6Ch]
  int v59; // [rsp+C0h] [rbp-68h]
  unsigned int v60; // [rsp+C4h] [rbp-64h]
  int v61; // [rsp+C8h] [rbp-60h] BYREF
  int v62; // [rsp+CCh] [rbp-5Ch]
  unsigned int v63; // [rsp+D0h] [rbp-58h]
  CD3DSurface *v64; // [rsp+D8h] [rbp-50h] BYREF
  unsigned int v65; // [rsp+E0h] [rbp-48h] BYREF
  void *v66[2]; // [rsp+E8h] [rbp-40h] BYREF
  int v67; // [rsp+F8h] [rbp-30h]
  int v68; // [rsp+FCh] [rbp-2Ch]
  unsigned int v69; // [rsp+100h] [rbp-28h]
  _BYTE v70[32]; // [rsp+108h] [rbp-20h] BYREF
  struct IDXGIResource *v71; // [rsp+128h] [rbp+0h] BYREF
  __int64 v72; // [rsp+130h] [rbp+8h]
  char v73; // [rsp+188h] [rbp+60h] BYREF
  __int64 *v74; // [rsp+190h] [rbp+68h]
  __int64 v75; // [rsp+198h] [rbp+70h]
  _BYTE *v76; // [rsp+1A0h] [rbp+78h]

  v76 = a4;
  v75 = a3;
  v74 = (__int64 *)a2;
  v4 = *(_DWORD *)(a2 + 24) + *(_DWORD *)(a3 + 24);
  v5 = a1;
  v6 = 0;
  v73 = 0;
  v56 = 0;
  v62 = 0;
  v64 = 0LL;
  if ( a1[6] )
  {
    a1 = *(unsigned int **)a1;
    a2 = v5[6];
    do
    {
      v7 = *(unsigned int **)a1;
      a1 += 2;
      v4 += v7[76];
      --a2;
    }
    while ( a2 );
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0dd(a1, a2, CCommonRegistryData::m_dwOverlayTestMode < 4, v4);
  v8 = v76;
  v9 = v4;
  *v76 = 0;
  v72 = v4;
  lpMem = (char *)operator new(saturated_mul(v4, 0x90uLL));
  v12 = lpMem;
  if ( !lpMem )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x9BDu);
    goto LABEL_63;
  }
  v13 = 0;
  v63 = 0;
  if ( v5[6] )
  {
    while ( 2 )
    {
      v69 = 0;
      v66[0] = v70;
      v66[1] = v70;
      v67 = 4;
      v68 = 4;
      v14 = v13;
      ContextCandidates = COverlayContext::GetContextCandidates(*(_QWORD *)(*(_QWORD *)v5 + 8LL * v13), v75, v66);
      v6 = ContextCandidates;
      if ( ContextCandidates < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, ContextCandidates, 0x9CBu);
LABEL_53:
        DynArrayImpl<1>::~DynArrayImpl<1>(v66);
        goto LABEL_59;
      }
      v57 = v69;
      if ( v69 && COverlayContext::OverlayPlaneInfo::RequiresFrontPlane(*(COverlayContext::OverlayPlaneInfo **)v66[0]) )
      {
        v59 = 0;
      }
      else
      {
        v16 = 0;
        v57 = 0;
        v59 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 8 * v14) + 304LL);
      }
      v17 = 0;
      while ( 1 )
      {
        v53 = v17;
        if ( v17 >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 8 * v14) + 304LL) )
          break;
        v60 = v17 + v16;
        v18 = &v12[144 * v56 + 144 * v17 + 144 * v16];
        memset_0(v18, 0, 0x90uLL);
        v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 8 * v14) + 16LL);
        v20 = (*(__int64 (__fastcall **)(__int64, CD3DSurface **))(*(_QWORD *)v19 + 488LL))(v19, &v64);
        v6 = v20;
        if ( v20 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v20, 0x9EDu);
          goto LABEL_53;
        }
        DXGIResource = CD3DSurface::GetDXGIResource(v64, (struct IDXGIResource **)v18 + 1);
        v61 = DXGIResource;
        v22 = DXGIResource;
        if ( DXGIResource < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, DXGIResource, 0x9EFu);
        TranslateDXGIorD3DErrorInContext(v22, 14, &v61);
        v6 = v61;
        if ( v61 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v61, 0x9F5u);
LABEL_49:
          DynArrayImpl<1>::~DynArrayImpl<1>(v66);
          v12 = lpMem;
          goto LABEL_59;
        }
        *((_DWORD *)v18 + 7) = 0;
        v23 = 120LL * v53;
        v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 8 * v14) + 280LL);
        *((_OWORD *)v18 + 2) = *(_OWORD *)(v24 + v23);
        *((_OWORD *)v18 + 3) = *(_OWORD *)(v24 + v23 + 16);
        *((_OWORD *)v18 + 4) = *(_OWORD *)(v24 + v23 + 32);
        *((_OWORD *)v18 + 5) = *(_OWORD *)(v24 + v23 + 48);
        *((_OWORD *)v18 + 6) = *(_OWORD *)(v24 + v23 + 64);
        *((_OWORD *)v18 + 7) = *(_OWORD *)(v24 + v23 + 80);
        v25 = *(_OWORD *)(v24 + v23 + 96);
        *(_DWORD *)v18 = v60;
        *((_OWORD *)v18 + 8) = v25;
        *((_DWORD *)v18 + 4) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 8 * v14) + 96LL);
        ReleaseInterface<CRemoteApplicationWindow>((__int64 *)&v64);
        v12 = lpMem;
        v17 = v53 + 1;
        v16 = v57;
      }
      v26 = v74;
      v27 = 0;
      v58 = 0;
      if ( *((_DWORD *)v74 + 6) )
      {
        v28 = v59 + v56;
        while ( 1 )
        {
          v29 = &v12[144 * v27 + 144 * v28];
          memset_0(v29, 0, 0x90uLL);
          DXGIResourceAndSubResourceIndex = CPlaneCaptureRenderTargetEngine::GetDXGIResourceAndSubResourceIndex(
                                              *(CPlaneCaptureRenderTargetEngine **)(*v74 + 144 * v14),
                                              &v71,
                                              &v65);
          v6 = DXGIResourceAndSubResourceIndex;
          if ( DXGIResourceAndSubResourceIndex < 0 )
            break;
          v31 = v74;
          *((_QWORD *)v29 + 1) = v71;
          *((_DWORD *)v29 + 7) = v65;
          v32 = 18LL * v58;
          v33 = *v31;
          v27 = v58 + 1;
          v58 = v27;
          *((_OWORD *)v29 + 2) = *(_OWORD *)(*v31 + 8 * v32 + 16);
          *((_OWORD *)v29 + 3) = *(_OWORD *)(v33 + 8 * v32 + 32);
          *((_OWORD *)v29 + 4) = *(_OWORD *)(v33 + 8 * v32 + 48);
          *((_OWORD *)v29 + 5) = *(_OWORD *)(v33 + 8 * v32 + 64);
          *((_OWORD *)v29 + 6) = *(_OWORD *)(v33 + 8 * v32 + 80);
          *((_OWORD *)v29 + 7) = *(_OWORD *)(v33 + 8 * v32 + 96);
          *((_OWORD *)v29 + 8) = *(_OWORD *)(v33 + 8 * v32 + 112);
          v28 = v59 + v56;
          *(_DWORD *)v29 = *(_DWORD *)(*v31 + 8 * v32 + 136);
          v12 = lpMem;
          if ( v27 >= *((_DWORD *)v31 + 6) )
          {
            v26 = v31;
            goto LABEL_26;
          }
        }
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, DXGIResourceAndSubResourceIndex, 0xA0Du);
        goto LABEL_49;
      }
LABEL_26:
      v34 = v69;
      v35 = 0;
      for ( i = 0; v35 < v34; i = v35 )
      {
        v36 = v62;
        v37 = v62 + v35 + v59;
        v38 = *((_DWORD *)v26 + 6);
        v39 = v37 + v38 + v56;
        while ( 1 )
        {
          v40 = 0LL;
          if ( !v38 )
            break;
          while ( *(_DWORD *)(*v26 + 144 * v40 + 136) != v37 )
          {
            v40 = (unsigned int)(v40 + 1);
            if ( (unsigned int)v40 >= v38 )
              goto LABEL_31;
          }
          ++v37;
          ++v36;
        }
LABEL_31:
        v62 = v36;
        v41 = &lpMem[144 * v39];
        memset_0(v41, 0, 0x90uLL);
        if ( (int)COverlayContext::GetSingleDXGIResourceAndSubResourceIndex(
                    *(struct CCompositionSurfaceInfo **)(*((_QWORD *)v66[0] + i) + 24LL),
                    (struct IDXGIResource **)v41 + 1,
                    (unsigned int *)v41 + 7) < 0 )
          goto LABEL_49;
        v42 = v66[0];
        v43 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v66[0] + i) + 24LL) + 40LL);
        *((_DWORD *)v41 + 7) = 0;
        *(_QWORD *)(v41 + 20) = v43;
        v44 = v42[i];
        v34 = v69;
        *((_OWORD *)v41 + 2) = *(_OWORD *)(v44 + 40);
        *((_OWORD *)v41 + 3) = *(_OWORD *)(v44 + 56);
        *((_OWORD *)v41 + 4) = *(_OWORD *)(v44 + 72);
        *((_OWORD *)v41 + 5) = *(_OWORD *)(v44 + 88);
        *((_OWORD *)v41 + 6) = *(_OWORD *)(v44 + 104);
        *((_OWORD *)v41 + 7) = *(_OWORD *)(v44 + 120);
        v45 = *(_OWORD *)(v44 + 136);
        *(_DWORD *)v41 = v37;
        *((_OWORD *)v41 + 8) = v45;
        *((_DWORD *)v41 + 4) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 8 * v14) + 96LL);
        v26 = v74;
        v35 = i + 1;
      }
      v56 += *((_DWORD *)v26 + 6) + v34 + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 8 * v14) + 304LL);
      DynArrayImpl<1>::~DynArrayImpl<1>(v66);
      v12 = lpMem;
      v13 = v63 + 1;
      v63 = v13;
      if ( v13 < v5[6] )
        continue;
      break;
    }
    v8 = v76;
    v9 = v4;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 && v4 )
  {
    v46 = v12 + 88;
    do
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0xqddddddddddddqqq(
          v11,
          v10,
          *((_QWORD *)v46 - 10),
          *(v46 - 14),
          *(v46 - 13),
          *(v46 - 12),
          *(v46 - 11),
          *(v46 - 10),
          *(v46 - 9),
          *(v46 - 8),
          *(v46 - 7),
          *(v46 - 6),
          *(v46 - 5),
          *(v46 - 4),
          *(v46 - 3),
          *(v46 - 2),
          *(v46 - 1),
          *v46,
          v46[5]);
      v46 += 36;
      --v9;
    }
    while ( v9 );
  }
  v12 = lpMem;
  if ( CCommonRegistryData::m_dwOverlayTestMode >= 4 )
  {
    if ( CCommonRegistryData::m_dwOverlayTestMode == 4 )
      *v8 = 1;
    goto LABEL_57;
  }
  v47 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, _BYTE *, char *))(**(_QWORD **)(**(_QWORD **)v5 + 16LL)
                                                                           + 408LL))(
          *(_QWORD *)(**(_QWORD **)v5 + 16LL),
          v4,
          lpMem,
          v8,
          &v73);
  v6 = v47;
  if ( v47 >= 0 )
  {
    if ( v73 )
    {
      for ( j = 0LL; (unsigned int)j < v5[6]; *(_BYTE *)(v49 + 1188) = 1 )
      {
        v49 = *(_QWORD *)(*(_QWORD *)v5 + 8 * j);
        j = (unsigned int)(j + 1);
      }
    }
LABEL_57:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0d(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_OVERLAY_CHECKSUPPORT_Stop,
        (unsigned __int8)*v8);
    goto LABEL_59;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v47, 0xA6Du);
LABEL_59:
  if ( v4 )
  {
    v50 = v72;
    v51 = (__int64 *)(v12 + 8);
    do
    {
      ReleaseInterfaceNoNULL<CManipulationManager>(*v51);
      v51 += 18;
      --v50;
    }
    while ( v50 );
  }
  WPF::ProcessHeapImpl::Free(lpMem);
LABEL_63:
  ReleaseInterfaceNoNULL<CD3DSurface>((__int64)v64);
  return v6;
}
