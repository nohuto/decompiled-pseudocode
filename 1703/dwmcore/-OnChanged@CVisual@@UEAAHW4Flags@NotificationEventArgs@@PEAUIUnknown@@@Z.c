/*
 * XREFs of ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180088C60
 * Callers:
 *     ?NotifyListenerOfChange@CTransform3D@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18002B2F0 (-NotifyListenerOfChange@CTransform3D@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUn.c)
 *     ?NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034580 (-NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyListenerOfChange@CSurfaceBrush@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800390D0 (-NotifyListenerOfChange@CSurfaceBrush@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIU.c)
 * Callees:
 *     ?GetSwapChainTransformForDirtyRects@CVisual@@KA_NPEAVISwapChainContent@@PEAVCMILMatrix@@@Z @ 0x180009CE8 (-GetSwapChainTransformForDirtyRects@CVisual@@KA_NPEAVISwapChainContent@@PEAVCMILMatrix@@@Z.c)
 *     ?GetDirtyRegion@CCompositionSurfaceBitmap@@UEAAJPEAPEBVCRegion@@@Z @ 0x18000AB30 (-GetDirtyRegion@CCompositionSurfaceBitmap@@UEAAJPEAPEBVCRegion@@@Z.c)
 *     ?StraddlesMultipleDisplays@CCompositionSurfaceBitmap@@UEAA_NXZ @ 0x18000AB50 (-StraddlesMultipleDisplays@CCompositionSurfaceBitmap@@UEAA_NXZ.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x180012FCC (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?IsOverlayOrDirectFlipAssigned@CRenderTargetManager@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@@Z @ 0x18001E120 (-IsOverlayOrDirectFlipAssigned@CRenderTargetManager@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@@.c)
 *     ??_GCKeyframeAnimation@@UEAAPEAXI@Z @ 0x180031090 (--_GCKeyframeAnimation@@UEAAPEAXI@Z.c)
 *     ??_GCPropertyBag@@MEAAPEAXI@Z @ 0x1800315F0 (--_GCPropertyBag@@MEAAPEAXI@Z.c)
 *     ??_ECExpression@@UEAAPEAXI@Z @ 0x180032360 (--_ECExpression@@UEAAPEAXI@Z.c)
 *     ?Release@CResource@@UEAAKXZ @ 0x180034460 (-Release@CResource@@UEAAKXZ.c)
 *     ?QueryInterface@CResource@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180034840 (-QueryInterface@CResource@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Release@CCompositionSurfaceBitmap@@UEAAKXZ @ 0x180037610 (-Release@CCompositionSurfaceBitmap@@UEAAKXZ.c)
 *     ?QueryInterface@CCompositionSurfaceBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180037660 (-QueryInterface@CCompositionSurfaceBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetScrollOptimization@CCompositionSurfaceBitmap@@UEAAJPEAUScrollOptimization@@@Z @ 0x180037810 (-GetScrollOptimization@CCompositionSurfaceBitmap@@UEAAJPEAUScrollOptimization@@@Z.c)
 *     ?IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180037CE0 (-IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180037F70 (-IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CMaskBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800393B0 (-IsOfType@CMaskBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z @ 0x180039790 (-EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z.c)
 *     ?GetDirtyRegion@CPrimitiveGroup@@UEAAJPEAPEBVCRegion@@@Z @ 0x18004C930 (-GetDirtyRegion@CPrimitiveGroup@@UEAAJPEAPEBVCRegion@@@Z.c)
 *     ?Release@CPrimitiveGroup@@UEAAKXZ @ 0x18004C950 (-Release@CPrimitiveGroup@@UEAAKXZ.c)
 *     ?QueryInterface@CPrimitiveGroup@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004C9B0 (-QueryInterface@CPrimitiveGroup@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?IsEmptyDrawing@CPrimitiveGroup@@UEBA_NXZ @ 0x18004CA50 (-IsEmptyDrawing@CPrimitiveGroup@@UEBA_NXZ.c)
 *     ?IsOfType@CPrimitiveGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18004CA70 (-IsOfType@CPrimitiveGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?Invalidate@CDrawListCacheSet@@QEAAXXZ @ 0x18004F708 (-Invalidate@CDrawListCacheSet@@QEAAXXZ.c)
 *     ??$ReleaseInterfaceNoNULL@VCDrawListCache@@@@YAXPEAVCDrawListCache@@@Z @ 0x18004F7FC (--$ReleaseInterfaceNoNULL@VCDrawListCache@@@@YAXPEAVCDrawListCache@@@Z.c)
 *     ??_GCRgnGeometry@@MEAAPEAXI@Z @ 0x1800581A0 (--_GCRgnGeometry@@MEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??$AppendAllRectangles@V?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$03$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$03$0A@@@@Z @ 0x180074530 (--$AppendAllRectangles@V-$DynArrayIA@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Rec.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z @ 0x180083880 (-PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x180085014 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z @ 0x1800853C0 (-AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z.c)
 *     ?OnTransformChanged@CVisual@@AEAAXXZ @ 0x180086A80 (-OnTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?OnInnerTransformChanged@CVisual@@AEAAXXZ @ 0x180086B80 (-OnInnerTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x180086BB0 (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     ?HasSingleD2DBitmapOrPrimitiveGroupInternal@CVisual@@MEBA_NXZ @ 0x180086C60 (-HasSingleD2DBitmapOrPrimitiveGroupInternal@CVisual@@MEBA_NXZ.c)
 *     ?GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ @ 0x180086E24 (-GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ.c)
 *     ?IsEmptyDrawing@CSpriteVisualContent@@UEBA_NXZ @ 0x18008CA40 (-IsEmptyDrawing@CSpriteVisualContent@@UEBA_NXZ.c)
 *     ?IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800931E0 (-IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ @ 0x1800B779C (-NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800BBE10 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?IsOfType@CNineGridBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800BF9D0 (-IsOfType@CNineGridBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CPrimitiveGroupLayerClip@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C0260 (-IsOfType@CPrimitiveGroupLayerClip@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??_ECAtlasedRectsMesh@@MEAAPEAXI@Z @ 0x1800C0280 (--_ECAtlasedRectsMesh@@MEAAPEAXI@Z.c)
 *     ?Remove@?$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z @ 0x1800C5964 (-Remove@-$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?DirtySecondaryRepresentations@CVisual@@IEAAXXZ @ 0x1801605DC (-DirtySecondaryRepresentations@CVisual@@IEAAXXZ.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x180189314 (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall CVisual::OnChanged(__int64 a1, int a2, CCompositionSurfaceBitmap *a3)
{
  int v4; // edi
  CAtlasedRectsMesh *v6; // r15
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // edx
  int *v10; // rcx
  _QWORD *j; // r14
  char v12; // r13
  char v13; // r12
  __int64 v14; // rsi
  __int64 (__fastcall *v15)(CPrimitiveGroup *, const struct _GUID *, void **); // r8
  __int64 (__fastcall *v16)(CPrimitiveGroup *, const struct _GUID *, void **); // rax
  __int64 (__fastcall *v17)(CResource *); // rax
  float *v18; // rcx
  bool (__fastcall *v19)(CColorBrush *__hidden); // rax
  bool v20; // cl
  __int64 v21; // rcx
  char v22; // r15
  __int64 (__fastcall *v23)(_QWORD, _QWORD); // rdx
  __int64 (__fastcall *v24)(__int64, __int64, _QWORD); // rax
  CMaskBrush *v25; // rsi
  __int64 (__fastcall *v26)(__int64, __int64, _QWORD); // rax
  __int64 (__fastcall *v27)(CMaskBrush *, char); // rax
  __int64 v28; // rax
  char v29; // si
  char (__fastcall *v30)(CVisual *); // rax
  __int64 v31; // rcx
  __int64 (__fastcall *v32)(__int64, __int64); // rax
  char HasSingleD2DBitmapOrPrimitiveGroupInternal; // al
  CExpression *v34; // rcx
  __int64 (__fastcall *v35)(CCompositionSurfaceBitmap *); // rax
  char v37; // al
  CResource *v38; // rcx
  __int64 (__fastcall *v39)(CResource *, const struct _GUID *, void **); // rax
  CResource *v40; // rcx
  char v41; // al
  __int64 v42; // rax
  __int64 v43; // rax
  void (*v44)(void); // rax
  struct CEffect *EffectInternal; // rsi
  __int64 (__fastcall *v46)(struct CEffect *, __int64); // rax
  char v47; // al
  __int64 (__fastcall *v48)(struct CEffect *, __int64); // rax
  char v49; // al
  char IsEmptyDrawing; // al
  char v51; // al
  CPrimitiveGroup *v52; // rcx
  __int64 (__fastcall *v53)(CPrimitiveGroup *, const struct _GUID *, void **); // rax
  CCompositionSurfaceBitmap *v54; // rsi
  bool (__fastcall *v55)(CCompositionSurfaceBitmap *); // rax
  bool v56; // al
  __int64 (__fastcall **v57)(CPrimitiveGroup *, const struct _GUID *, void **); // rax
  __int64 (__fastcall *v58)(CPrimitiveGroup *, const struct _GUID *, void **); // rax
  int Interface; // eax
  CCompositionSurfaceBitmap *v60; // rsi
  __int64 (__fastcall *v61)(CCompositionSurfaceBitmap *, const struct CRegion **); // rax
  int DirtyRegion; // eax
  __int64 (__fastcall *v63)(CCompositionSurfaceBitmap *, struct ScrollOptimization *); // rax
  int ScrollOptimization; // eax
  int v65; // eax
  char SwapChainTransformForDirtyRects; // r15
  unsigned int v67; // esi
  char *v68; // rax
  __m128i v69; // xmm1
  __m128i v70; // xmm0
  unsigned int v71; // xmm2_4
  int v72; // eax
  char v73; // al
  CKeyframeAnimation *(__fastcall *v74)(CKeyframeAnimation *, char); // rax
  unsigned int i; // esi
  unsigned int *k; // rdx
  _QWORD *v77; // rdx
  _QWORD *v78; // rax
  unsigned int *m; // rdx
  _QWORD *v80; // rdx
  _QWORD *v81; // rax
  unsigned int v82; // r10d
  __int64 v83; // rax
  unsigned __int64 v84; // rax
  CVisual *v85; // rax
  int v86; // r10d
  __int64 v87; // rcx
  __int64 v88; // r10
  unsigned int v89; // eax
  unsigned int v90; // edx
  int v91; // eax
  int v92; // eax
  int v93; // r15d
  BOOL v94; // eax
  CHAR v95; // cl
  HANDLE CurrentProcess; // rax
  HANDLE CurrentThread; // rax
  __int64 v98; // rcx
  unsigned int v99; // esi
  __int64 v100; // r14
  __int64 v101; // rcx
  _QWORD *v102; // rcx
  __m128 v103; // xmm3
  __m128 v104; // xmm3
  __m128 v105; // xmm3
  __m128 v106; // xmm3
  __m128 v107; // xmm4
  __m128 v108; // xmm4
  __m128 v109; // xmm4
  int v110; // eax
  struct CTransform3D *Transform3DEffectNoRef; // rax
  CAtlasedRectsMesh *v112; // rcx
  CHAR Response[8]; // [rsp+68h] [rbp-A0h] BYREF
  CAtlasedRectsMesh *v114; // [rsp+70h] [rbp-98h] BYREF
  CCompositionSurfaceBitmap *v115; // [rsp+78h] [rbp-90h] BYREF
  CCompositionSurfaceBitmap *v116; // [rsp+80h] [rbp-88h]
  CCompositionSurfaceBitmap *v117; // [rsp+88h] [rbp-80h] BYREF
  CResource *v118; // [rsp+90h] [rbp-78h] BYREF
  struct CRegion *v119; // [rsp+98h] [rbp-70h] BYREF
  CAtlasedRectsMesh *v120; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v121; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD *v122; // [rsp+B0h] [rbp-58h]
  __int64 v123; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD *v124; // [rsp+C0h] [rbp-48h]
  _QWORD *v125; // [rsp+C8h] [rbp-40h]
  float v126; // [rsp+D0h] [rbp-38h]
  unsigned int v127; // [rsp+D4h] [rbp-34h]
  unsigned __int64 v128; // [rsp+D8h] [rbp-30h]
  _BYTE v129[64]; // [rsp+E8h] [rbp-20h] BYREF
  int v130; // [rsp+128h] [rbp+20h]
  __m128 v131; // [rsp+138h] [rbp+30h] BYREF
  __int64 v132; // [rsp+148h] [rbp+40h] BYREF
  __int64 v133; // [rsp+150h] [rbp+48h]
  __int64 v134; // [rsp+158h] [rbp+50h]
  int v135; // [rsp+160h] [rbp+58h]
  __int128 v136; // [rsp+168h] [rbp+60h] BYREF
  __m128 v137; // [rsp+178h] [rbp+70h] BYREF
  void *lpMem; // [rsp+188h] [rbp+80h] BYREF
  _BYTE *v139; // [rsp+190h] [rbp+88h]
  int v140; // [rsp+198h] [rbp+90h]
  __int64 v141; // [rsp+19Ch] [rbp+94h]
  _BYTE v142[64]; // [rsp+1A8h] [rbp+A0h] BYREF

  v4 = 0;
  v6 = a3;
  v116 = a3;
  v117 = 0LL;
  v115 = 0LL;
  v114 = 0LL;
  Response[0] = 0;
  Response[2] = 0;
  if ( a2 >= 1 )
  {
    switch ( a2 )
    {
      case 1:
        v12 = 0;
        v13 = 1;
        goto LABEL_15;
      case 3:
        v12 = 1;
        v13 = 0;
        goto LABEL_15;
      case 4:
        Response[0] = 0;
        if ( qword_18023E528 )
          Response[0] = CDisplaySet::NeedsDesktopMoves(qword_18023E528);
        CVisual::OnClipChanged((CVisual *)a1);
        break;
      case 5:
        v7 = *(_QWORD *)(a1 + 392);
        if ( v7 )
        {
          for ( i = 0; i < *(_DWORD *)(v7 + 24); ++i )
          {
            ReleaseInterfaceNoNULL<CDrawListCache>(*(CMILRefCountBase **)(*(_QWORD *)v7 + 24LL * i + 16));
            v7 = *(_QWORD *)(a1 + 392);
          }
          *(_DWORD *)(*(_QWORD *)(a1 + 392) + 24LL) = 0;
        }
        v8 = *(_QWORD *)(a1 + 208);
        if ( (*(_DWORD *)(v8 + 4) & 0x80000) != 0 )
        {
          v9 = *(_DWORD *)(v8 + 12);
          v10 = (int *)(v8 + 12);
          if ( (v9 & 0x7F000000) != 0xD000000 )
          {
            do
            {
              v10 = (int *)((char *)v10 + (v9 & 0xFFFFFF) + 4);
              v9 = *v10;
            }
            while ( (*v10 & 0x7F000000) != 0xD000000 );
          }
          v122 = *(_QWORD **)(v10 + 1);
          if ( v122 )
          {
            for ( j = (_QWORD *)*v122; j != v122; j = (_QWORD *)*j )
              CDrawListCacheSet::Invalidate((CDrawListCacheSet *)(j - 12));
          }
        }
        goto LABEL_35;
      case 11:
        v13 = 0;
        Response[2] = 1;
        v12 = 0;
        goto LABEL_15;
    }
  }
  v12 = 1;
  v13 = 1;
LABEL_15:
  v14 = *(_QWORD *)(a1 + 240);
  if ( !v14 )
    goto LABEL_33;
  v15 = CPrimitiveGroup::QueryInterface;
  v16 = **(__int64 (__fastcall ***)(CPrimitiveGroup *, const struct _GUID *, void **))v14;
  if ( v16 == CResource::QueryInterface )
  {
    v114 = *(CAtlasedRectsMesh **)(a1 + 240);
    v17 = *(__int64 (__fastcall **)(CResource *))(*(_QWORD *)v14 + 8LL);
    if ( v17 == CResource::AddRef )
    {
      if ( *(int *)(v14 + 8) < 0 )
      {
        while ( 1 )
        {
          v92 = IsKernelDebuggerPresent();
          strcpy(&Response[4], "?");
          v93 = v92;
          if ( !v92 )
          {
            v94 = IsDebuggerPresent();
            v95 = Response[4];
            if ( v94 )
              v95 = 103;
            Response[4] = v95;
          }
          DbgPrintEx(
            0x65u,
            0,
            "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
            L"Tried to AddRef an object which has previously been freed (refcount went to 0).",
            word_1801D5868,
            word_1801D5868,
            "Function: ",
            L"CMILCOMBase::InternalAddRef",
            ", ",
            L"onecoreuap\\windows\\dwm\\common\\shared\\milcom.cpp",
            31);
          if ( !v93 )
          {
            DbgPrintEx(
              0x65u,
              0,
              "(No kernel debugger is present.) Respond with:\n"
              "  g                    -- Go (continue)\n"
              "  eb 0x%p 'p';g  -- terminate Process\n"
              "  eb 0x%p 't';g  -- terminate Thread\n"
              " or regular debugging.\n",
              &Response[4],
              &Response[4]);
            JUMPOUT(0x18010578ALL);
          }
          DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", &Response[4], 2u);
          switch ( Response[4] )
          {
            case 'B':
            case 'b':
              __debugbreak();
              goto LABEL_226;
            case 'G':
            case 'g':
LABEL_226:
              v6 = v116;
              goto LABEL_19;
            case 'I':
            case 'i':
              DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
              continue;
            case 'P':
            case 'p':
              CurrentProcess = GetCurrentProcess();
              TerminateProcess(CurrentProcess, 0xC0000001);
              goto LABEL_224;
            case 'T':
            case 't':
              CurrentThread = GetCurrentThread();
              TerminateThread(CurrentThread, 0xC0000001);
              goto LABEL_224;
            default:
LABEL_224:
              DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
              break;
          }
        }
      }
LABEL_19:
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
    }
    else
    {
      ((void (__fastcall *)(__int64, __int64 (__fastcall *)(CCompositionSurfaceBitmap *, const struct _GUID *, void **), __int64 (__fastcall *)(CPrimitiveGroup *, const struct _GUID *, void **)))v17)(
        v14,
        CCompositionSurfaceBitmap::QueryInterface,
        CPrimitiveGroup::QueryInterface);
    }
  }
  else
  {
    v52 = *(CPrimitiveGroup **)(a1 + 240);
    if ( v16 == CPrimitiveGroup::QueryInterface )
    {
      CPrimitiveGroup::QueryInterface(v52, &GUID_00000000_0000_0000_c000_000000000046, (void **)&v114);
    }
    else if ( v16 == CCompositionSurfaceBitmap::QueryInterface )
    {
      CCompositionSurfaceBitmap::QueryInterface(v52, &GUID_00000000_0000_0000_c000_000000000046, (void **)&v114);
    }
    else
    {
      v16(v52, &GUID_00000000_0000_0000_c000_000000000046, (void **)&v114);
    }
  }
  if ( v6 != v114 )
    goto LABEL_33;
  v18 = *(float **)(a1 + 240);
  v19 = *(bool (__fastcall **)(CColorBrush *__hidden))(*(_QWORD *)v18 + 176LL);
  if ( v19 == CColorBrush::IsEmptyDrawing )
  {
    v20 = (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v18[23]) & _xmm) < 0.0000011920929;
    goto LABEL_23;
  }
  if ( v19 == CSpriteVisualContent::IsEmptyDrawing )
  {
    IsEmptyDrawing = CSpriteVisualContent::IsEmptyDrawing((CSpriteVisualContent *)v18);
    goto LABEL_89;
  }
  if ( (char *)v19 != (char *)CPrimitiveGroup::IsEmptyDrawing )
  {
    IsEmptyDrawing = ((__int64 (__fastcall *)(float *, _BOOL8 (__fastcall *)(CPrimitiveGroup *), _QWORD))v19)(
                       v18,
                       CPrimitiveGroup::IsEmptyDrawing,
                       v15);
LABEL_89:
    v20 = IsEmptyDrawing;
    goto LABEL_23;
  }
  v20 = CPrimitiveGroup::IsEmptyDrawing((CPrimitiveGroup *)v18);
LABEL_23:
  if ( ((*(_BYTE *)(a1 + 88) & 0x20) != 0) != v20 )
    *(_BYTE *)(a1 + 488) |= 1u;
  v21 = *(_QWORD *)(a1 + 240);
  v22 = 0;
  if ( v21 )
  {
    v23 = CColorBrush::IsOfType;
    v24 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v21 + 48LL);
    if ( (char *)v24 == (char *)CColorBrush::IsOfType
      || ((char *)v24 == (char *)CCompositionSurfaceBitmap::IsOfType
        ? (v51 = CCompositionSurfaceBitmap::IsOfType(v21, 81))
        : (char *)v24 != (char *)CMaskBrush::IsOfType
        ? ((char *)v24 == (char *)CPrimitiveGroup::IsOfType
         ? (v51 = CPrimitiveGroup::IsOfType(v21, 81))
         : (char *)v24 != (char *)CSurfaceBrush::IsOfType
         ? ((char *)v24 != (char *)CPrimitiveGroupLayerClip::IsOfType
          ? (v51 = v24(v21, 81LL, v15))
          : (v51 = CPrimitiveGroupLayerClip::IsOfType(v21, 81LL)))
         : (v51 = CSurfaceBrush::IsOfType(v21, 81)))
        : (v51 = CMaskBrush::IsOfType(v21, 81)),
          v51) )
    {
      v25 = *(CMaskBrush **)(a1 + 240);
      v26 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v25 + 48LL);
      if ( (char *)v26 != (char *)CColorBrush::IsOfType )
      {
        if ( (char *)v26 == (char *)CMaskBrush::IsOfType )
        {
          v73 = CMaskBrush::IsOfType(*(_QWORD *)(a1 + 240), 89);
        }
        else if ( (char *)v26 == (char *)CSurfaceBrush::IsOfType )
        {
          v73 = CSurfaceBrush::IsOfType(*(_QWORD *)(a1 + 240), 89);
        }
        else
        {
          v87 = *(_QWORD *)(a1 + 240);
          v73 = v26 == CNineGridBrush::IsOfType ? CNineGridBrush::IsOfType(v87, 89LL, v15) : v26(v87, 89LL, v15);
        }
        if ( v73 )
          goto LABEL_228;
      }
      LOBYTE(v23) = 1;
      v27 = *(__int64 (__fastcall **)(CMaskBrush *, char))(*(_QWORD *)v25 + 256LL);
      if ( v27 == CMaskBrush::EnsureBrushGraph )
        CMaskBrush::EnsureBrushGraph(v25, 1);
      else
        ((void (__fastcall *)(CMaskBrush *, __int64 (__fastcall *)(_QWORD, _QWORD), __int64 (__fastcall *)(CPrimitiveGroup *, const struct _GUID *, void **)))v27)(
          v25,
          v23,
          v15);
      v28 = *((_QWORD *)v25 + 8);
      if ( v28 )
      {
        v22 = *(_BYTE *)(v28 + 353);
        if ( *(_BYTE *)(v28 + 354) )
LABEL_228:
          v22 = 1;
      }
    }
  }
  if ( v22 != ((*(_BYTE *)(a1 + 90) & 0x40) != 0) )
  {
    if ( v22 )
    {
      v88 = *(_QWORD *)(a1 + 16);
      v121 = a1;
      v89 = *(_DWORD *)(v88 + 1112);
      v90 = v89 + 1;
      if ( v89 + 1 < v89 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      }
      else if ( v90 > *(_DWORD *)(v88 + 1108) )
      {
        v91 = DynArrayImpl<0>::AddMultipleAndSet(v88 + 1088, 8u, 1, &v121);
        if ( v91 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v91, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(v88 + 1088) + 8LL * v89) = v121;
        *(_DWORD *)(v88 + 1112) = v90;
      }
    }
    else
    {
      v98 = *(_QWORD *)(a1 + 16) + 1088LL;
      v123 = a1;
      DynArray<CVisual *,0>::Remove(v98, &v123);
    }
    *(_BYTE *)(a1 + 90) &= ~0x40u;
    *(_BYTE *)(a1 + 90) |= (v22 & 1) << 6;
  }
  v6 = v116;
  if ( a2 != 1 )
    goto LABEL_33;
  v53 = **(__int64 (__fastcall ***)(CPrimitiveGroup *, const struct _GUID *, void **))v116;
  if ( v53 == CCompositionSurfaceBitmap::QueryInterface )
  {
    CCompositionSurfaceBitmap::QueryInterface(v116, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, (void **)&v115);
  }
  else if ( v53 == CPrimitiveGroup::QueryInterface )
  {
    CPrimitiveGroup::QueryInterface(v116, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, (void **)&v115);
  }
  else
  {
    v53(v116, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, (void **)&v115);
  }
  v54 = v115;
  if ( v115 )
  {
    v55 = *(bool (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)v115 + 192LL);
    if ( v55 == CCompositionSurfaceBitmap::StraddlesMultipleDisplays )
    {
      v56 = CCompositionSurfaceBitmap::StraddlesMultipleDisplays(v115);
    }
    else
    {
      v56 = v55(v115);
      v54 = v115;
    }
    if ( !v56
      && CRenderTargetManager::IsOverlayOrDirectFlipAssigned(
           *(CRenderTargetManager **)(*(_QWORD *)(a1 + 16) + 32LL),
           (const struct CVisual *)a1,
           v54) )
    {
      CVisual::DirtySecondaryRepresentations((CVisual *)a1);
      v99 = 0;
      v100 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
      if ( *(_DWORD *)(v100 + 48) )
      {
        do
        {
          v101 = *(_QWORD *)(*(_QWORD *)(v100 + 24) + 8LL * v99);
          if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v101 + 48LL))(v101, 38LL) )
          {
            v102 = *(_QWORD **)(*(_QWORD *)(v100 + 24) + 8LL * v99);
            if ( *(_QWORD *)(v102[14] + 128LL) != v102[14] )
              (*(void (__fastcall **)(_QWORD *))(*v102 + 200LL))(v102);
          }
          ++v99;
        }
        while ( v99 < *(_DWORD *)(v100 + 48) );
      }
      goto LABEL_35;
    }
  }
  v140 = 4;
  v132 = 0LL;
  v133 = 0LL;
  v134 = 0LL;
  v135 = 0;
  lpMem = v142;
  v139 = v142;
  v57 = *(__int64 (__fastcall ***)(CPrimitiveGroup *, const struct _GUID *, void **))v6;
  v141 = 4LL;
  v58 = *v57;
  if ( v58 == CCompositionSurfaceBitmap::QueryInterface )
  {
    Interface = CCompositionSurfaceBitmap::QueryInterface(
                  v6,
                  &GUID_c155b649_2c5b_416a_b836_bbda56b2ec26,
                  (void **)&v117);
  }
  else if ( v58 == CPrimitiveGroup::QueryInterface )
  {
    Interface = CPrimitiveGroup::QueryInterface(v6, &GUID_c155b649_2c5b_416a_b836_bbda56b2ec26, (void **)&v117);
  }
  else
  {
    Interface = v58(v6, &GUID_c155b649_2c5b_416a_b836_bbda56b2ec26, (void **)&v117);
  }
  if ( Interface >= 0 )
  {
    v60 = v117;
    v61 = *(__int64 (__fastcall **)(CCompositionSurfaceBitmap *, const struct CRegion **))(*(_QWORD *)v117 + 24LL);
    if ( v61 == CCompositionSurfaceBitmap::GetDirtyRegion )
    {
      DirtyRegion = CCompositionSurfaceBitmap::GetDirtyRegion(v117, &v119);
    }
    else
    {
      if ( v61 == CPrimitiveGroup::GetDirtyRegion )
        DirtyRegion = CPrimitiveGroup::GetDirtyRegion(v117, &v119);
      else
        DirtyRegion = v61(v117, &v119);
      v60 = v117;
    }
    if ( DirtyRegion < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, DirtyRegion, 0x1CCu);
    }
    else
    {
      v63 = *(__int64 (__fastcall **)(CCompositionSurfaceBitmap *, struct ScrollOptimization *))(*(_QWORD *)v60 + 32LL);
      if ( v63 == CCompositionSurfaceBitmap::GetScrollOptimization )
        ScrollOptimization = CCompositionSurfaceBitmap::GetScrollOptimization(v60, (struct ScrollOptimization *)&v132);
      else
        ScrollOptimization = v63(v60, (struct ScrollOptimization *)&v132);
      if ( ScrollOptimization < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, ScrollOptimization, 0x1CDu);
      }
      else
      {
        if ( !v119 )
          goto LABEL_111;
        HIDWORD(v141) = 0;
        v65 = CRegion::AppendAllRectangles<DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>,4,0>>(
                (FastRegion::Internal::CRgnData **)v119,
                (__int64)&lpMem);
        if ( v65 >= 0 )
          goto LABEL_111;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v65, 0x1D1u);
      }
    }
    DynArrayImpl<1>::~DynArrayImpl<1>(&lpMem);
    goto LABEL_33;
  }
LABEL_111:
  if ( HIDWORD(v141) || (_DWORD)v132 )
  {
    SwapChainTransformForDirtyRects = 0;
    v130 = 0;
    if ( v115 )
    {
      v136 = 0LL;
      SwapChainTransformForDirtyRects = CVisual::GetSwapChainTransformForDirtyRects(v115, (struct CMILMatrix *)v129);
      if ( CVisual::GetEffectiveSize((CVisual *)a1, (float *)&v136 + 2, (float *)&v136 + 3) )
        SwapChainTransformForDirtyRects |= (*(__int64 (__fastcall **)(CCompositionSurfaceBitmap *, __int128 *, _BYTE *))(*(_QWORD *)v115 + 176LL))(
                                             v115,
                                             &v136,
                                             v129);
    }
    if ( !(_DWORD)v132 )
      goto LABEL_116;
    v103 = _mm_shuffle_ps(
             (__m128)COERCE_UNSIGNED_INT((float)SHIDWORD(v132)),
             (__m128)COERCE_UNSIGNED_INT((float)SHIDWORD(v132)),
             225);
    v103.m128_f32[0] = (float)(int)v133;
    v104 = _mm_shuffle_ps(v103, v103, 198);
    v104.m128_f32[0] = (float)SHIDWORD(v133);
    v105 = _mm_shuffle_ps(v104, v104, 39);
    v105.m128_f32[0] = (float)(int)v134;
    v106 = _mm_shuffle_ps(v105, v105, 57);
    v107 = _mm_shuffle_ps(v106, v106, 225);
    v107.m128_f32[0] = _mm_shuffle_ps(v106, v106, 85).m128_f32[0];
    v108 = _mm_shuffle_ps(v107, v107, 198);
    v108.m128_f32[0] = _mm_shuffle_ps(v106, v106, 170).m128_f32[0];
    v109 = _mm_shuffle_ps(v108, v108, 39);
    v109.m128_f32[0] = _mm_shuffle_ps(v106, v106, 255).m128_f32[0];
    v131 = _mm_shuffle_ps(v109, v109, 57);
    if ( SwapChainTransformForDirtyRects )
    {
      CMILMatrix::Transform2DBoundsHelper<0>(v129, &v131, &v137);
      v131 = v137;
    }
    v110 = CVisual::AddAdditionalDirtyRects((CVisual *)a1, (const struct MilRectF *)&v131);
    if ( v110 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v110, 0x1FEu);
    }
    else
    {
LABEL_116:
      v67 = 0;
      if ( !HIDWORD(v141) )
      {
LABEL_121:
        v6 = v116;
        v29 = 1;
        v13 = 0;
        goto LABEL_122;
      }
      while ( 1 )
      {
        v68 = (char *)lpMem + 16 * v67;
        v69 = _mm_cvtsi32_si128(*((_DWORD *)v68 + 2));
        v70 = _mm_cvtsi32_si128(*((_DWORD *)v68 + 3));
        *(float *)&v71 = (float)*((int *)v68 + 1);
        v126 = (float)*(int *)v68;
        v127 = v71;
        v131.m128_u64[0] = __PAIR64__(v71, LODWORD(v126));
        LODWORD(v128) = _mm_cvtepi32_ps(v69).m128_u32[0];
        HIDWORD(v128) = _mm_cvtepi32_ps(v70).m128_u32[0];
        v131.m128_u64[1] = v128;
        if ( SwapChainTransformForDirtyRects )
        {
          CMILMatrix::Transform2DBoundsHelper<0>(v129, &v131, &v137);
          v131 = v137;
        }
        v72 = CVisual::AddAdditionalDirtyRects((CVisual *)a1, (const struct MilRectF *)&v131);
        if ( v72 < 0 )
          break;
        if ( ++v67 >= HIDWORD(v141) )
          goto LABEL_121;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v72, 0x20Fu);
    }
    DynArrayImpl<1>::~DynArrayImpl<1>(&lpMem);
    v6 = v116;
LABEL_33:
    v29 = 0;
    goto LABEL_34;
  }
  v29 = 0;
LABEL_122:
  if ( lpMem != v139 )
    WPF::ProcessHeapImpl::Free(lpMem);
LABEL_34:
  CVisual::PropagateFlags((struct CVisual *)a1, v12, v13, v29, 0, 0, Response[0], Response[2]);
  if ( a2 == 2 )
  {
    v38 = *(CResource **)(a1 + 224);
    if ( v38 )
    {
      v118 = 0LL;
      v39 = **(__int64 (__fastcall ***)(CResource *, const struct _GUID *, void **))v38;
      if ( v39 == CResource::QueryInterface )
        CResource::QueryInterface(v38, &GUID_00000000_0000_0000_c000_000000000046, (void **)&v118);
      else
        v39(v38, &GUID_00000000_0000_0000_c000_000000000046, (void **)&v118);
      v40 = v118;
      if ( v6 == v118 )
      {
        v41 = *(_BYTE *)(a1 + 488);
        if ( (v41 & 2) != 0 )
        {
          v82 = 0;
          *(_BYTE *)(a1 + 488) = v41 | 1;
          while ( 1 )
          {
            v83 = *(_QWORD *)(a1 + 72);
            v84 = (v83 & 2) != 0 ? *(_QWORD *)(v83 & 0xFFFFFFFFFFFFFFFCuLL) : *(_QWORD *)(a1 + 72) & 1LL;
            if ( v82 >= v84 )
              break;
            v85 = (CVisual *)CPtrArrayBase::operator[](a1 + 72, v82);
            if ( v85 )
              CVisual::OnTransformChanged(v85);
            v82 = v86 + 1;
          }
          v40 = v118;
        }
        v42 = *(_QWORD *)(a1 + 208);
        *(_QWORD *)(a1 + 384) = 0LL;
        if ( (*(_DWORD *)(v42 + 4) & 0x80000) != 0 )
        {
          a3 = (CCompositionSurfaceBitmap *)*(unsigned int *)(v42 + 12);
          for ( k = (unsigned int *)(v42 + 12); (*k & 0x7F000000) != 0xD000000; a3 = (CCompositionSurfaceBitmap *)*k )
            k = (unsigned int *)((char *)k + ((unsigned int)a3 & 0xFFFFFF) + 4);
          v124 = *(_QWORD **)(k + 1);
          v77 = v124;
          if ( v124 )
          {
            v78 = (_QWORD *)*v124;
            if ( (_QWORD *)*v124 != v124 )
            {
              do
              {
                *(v78 - 13) = 0LL;
                v78 = (_QWORD *)*v78;
              }
              while ( v78 != v77 );
              v40 = v118;
            }
          }
        }
        v43 = *(_QWORD *)(a1 + 208);
        *(_QWORD *)(a1 + 440) = 0LL;
        if ( (*(_DWORD *)(v43 + 4) & 0x80000) != 0 )
        {
          a3 = (CCompositionSurfaceBitmap *)*(unsigned int *)(v43 + 12);
          for ( m = (unsigned int *)(v43 + 12); (*m & 0x7F000000) != 0xD000000; a3 = (CCompositionSurfaceBitmap *)*m )
            m = (unsigned int *)((char *)m + ((unsigned int)a3 & 0xFFFFFF) + 4);
          v125 = *(_QWORD **)(m + 1);
          v80 = v125;
          if ( v125 )
          {
            v81 = (_QWORD *)*v125;
            if ( (_QWORD *)*v125 != v125 )
            {
              do
              {
                *(v81 - 6) = 0LL;
                v81 = (_QWORD *)*v81;
              }
              while ( v81 != v80 );
              v40 = v118;
            }
          }
        }
      }
      if ( v40 )
      {
        v44 = *(void (**)(void))(*(_QWORD *)v40 + 16LL);
        if ( (char *)v44 == (char *)CResource::Release )
          CResource::Release(v40);
        else
          v44();
      }
    }
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 208) + 4LL) & 0x8000000) != 0 )
    {
      EffectInternal = CVisual::GetEffectInternal((CVisual *)a1);
      v46 = *(__int64 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 48LL);
      if ( (char *)v46 == (char *)CEffectGroup::IsOfType )
        v47 = CEffectGroup::IsOfType(EffectInternal, 23LL);
      else
        v47 = v46(EffectInternal, 23LL);
      if ( !v47 )
      {
        v48 = *(__int64 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 48LL);
        if ( (char *)v48 == (char *)CEffectGroup::IsOfType )
          v49 = CEffectGroup::IsOfType(EffectInternal, 7LL);
        else
          v49 = v48(EffectInternal, 7LL);
        if ( !v49 )
          goto LABEL_35;
        EffectInternal = (struct CEffect *)*((_QWORD *)EffectInternal + 11);
      }
      if ( EffectInternal )
      {
        v120 = 0LL;
        Transform3DEffectNoRef = CVisual::GetTransform3DEffectNoRef((CVisual *)a1);
        (**(void (__fastcall ***)(struct CTransform3D *, GUID *, CAtlasedRectsMesh **))Transform3DEffectNoRef)(
          Transform3DEffectNoRef,
          &GUID_00000000_0000_0000_c000_000000000046,
          &v120);
        v112 = v120;
        if ( v6 == v120 )
        {
          CVisual::OnInnerTransformChanged((CVisual *)a1);
          v112 = v120;
        }
        if ( v112 )
          (*(void (__fastcall **)(CAtlasedRectsMesh *))(*(_QWORD *)v112 + 16LL))(v112);
      }
    }
  }
LABEL_35:
  v30 = *(char (__fastcall **)(CVisual *))(*(_QWORD *)a1 + 288LL);
  if ( (char *)v30 == (char *)CSpriteVisual::HasSingleD2DBitmapOrPrimitiveGroupInternal )
  {
    v31 = *(_QWORD *)(a1 + 240);
    if ( v31 )
    {
      if ( (v32 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v31 + 48LL), v32 == CColorBrush::IsOfType)
        || (char *)v32 == (char *)CMaskBrush::IsOfType
        || ((char *)v32 != (char *)CSurfaceBrush::IsOfType
          ? ((char *)v32 != (char *)CNineGridBrush::IsOfType
           ? (v37 = v32(v31, 81LL))
           : (v37 = CNineGridBrush::IsOfType(v31, 81LL, a3)))
          : (v37 = CSurfaceBrush::IsOfType(v31, 81)),
            v37) )
      {
        v4 = 1;
      }
    }
    if ( *(_QWORD *)(a1 + 496) )
      ++v4;
    HasSingleD2DBitmapOrPrimitiveGroupInternal = v4 == 1;
  }
  else if ( v30 == CVisual::HasSingleD2DBitmapOrPrimitiveGroupInternal )
  {
    HasSingleD2DBitmapOrPrimitiveGroupInternal = CVisual::HasSingleD2DBitmapOrPrimitiveGroupInternal((CVisual *)a1);
  }
  else
  {
    HasSingleD2DBitmapOrPrimitiveGroupInternal = v30((CVisual *)a1);
  }
  *(_BYTE *)(a1 + 89) &= ~1u;
  *(_BYTE *)(a1 + 89) |= HasSingleD2DBitmapOrPrimitiveGroupInternal & 1;
  if ( v117 )
    (*(void (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)v117 + 16LL))(v117);
  if ( v115 )
    (*(void (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)v115 + 16LL))(v115);
  v34 = v114;
  if ( v114 )
  {
    v35 = *(__int64 (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)v114 + 16LL);
    if ( v35 == CResource::Release )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v114 + 2, 0xFFFFFFFF) == 1 )
      {
        --*((_DWORD *)v34 + 2);
        v74 = *(CKeyframeAnimation *(__fastcall **)(CKeyframeAnimation *, char))(*(_QWORD *)v34 + 24LL);
        if ( v74 == CExpression::`vector deleting destructor' )
        {
          CExpression::`vector deleting destructor'(v34, 1);
        }
        else if ( v74 == CRgnGeometry::`scalar deleting destructor' )
        {
          CRgnGeometry::`scalar deleting destructor'(v34, 1);
        }
        else if ( v74 == CPropertyBag::`scalar deleting destructor' )
        {
          CPropertyBag::`scalar deleting destructor'(v34, 1);
        }
        else if ( (char *)v74 == (char *)CAtlasedRectsMesh::`vector deleting destructor' )
        {
          CAtlasedRectsMesh::`vector deleting destructor'(v34, 1u);
        }
        else if ( v74 == CKeyframeAnimation::`scalar deleting destructor' )
        {
          CKeyframeAnimation::`scalar deleting destructor'(v34, 1);
        }
        else
        {
          v74(v34, 1);
        }
      }
    }
    else if ( v35 == CPrimitiveGroup::Release )
    {
      CPrimitiveGroup::Release(v114);
    }
    else if ( v35 == CCompositionSurfaceBitmap::Release )
    {
      CCompositionSurfaceBitmap::Release(v114);
    }
    else
    {
      v35(v114);
    }
  }
  return 0LL;
}
