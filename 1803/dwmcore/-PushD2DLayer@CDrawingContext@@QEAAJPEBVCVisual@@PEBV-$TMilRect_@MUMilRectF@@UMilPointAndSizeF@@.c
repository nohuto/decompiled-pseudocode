/*
 * XREFs of ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x18006BDCC
 * Callers:
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x18006B500 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV-.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x18009BA00 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x18015EF00 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?DrawDwm3DRE@CDrawingContext@@QEAAJPEAUIDwm3DRESceneViewer@@AEBVCMILMatrix@@_N@Z @ 0x18015F8D0 (-DrawDwm3DRE@CDrawingContext@@QEAAJPEAUIDwm3DRESceneViewer@@AEBVCMILMatrix@@_N@Z.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x1801604F8 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     ?DrawAsDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180185D60 (-DrawAsDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TM.c)
 * Callees:
 *     ??_GCD2DLayer@@UEAAPEAXI@Z @ 0x180024D40 (--_GCD2DLayer@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEBAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180063000 (-GetTopGpuClipInScope@CScopedClipStack@@QEBAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x18006BC74 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Push@?$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackBackfaceVisibilityEntry@CDrawingContext@@@Z @ 0x1800BDD0C (-Push@-$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUSta.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0d @ 0x180167AC0 (McTemplateU0d.c)
 */

__int64 __fastcall CDrawingContext::PushD2DLayer(
        CDrawingContext *this,
        struct CVisual *a2,
        __int128 *a3,
        __int64 a4,
        __int64 a5,
        float a6,
        char a7,
        unsigned int a8)
{
  bool v8; // zf
  int v9; // ebx
  char v10; // r14
  BOOL v14; // r13d
  int v15; // r12d
  char *v16; // rbx
  float v17; // xmm1_4
  unsigned int v18; // eax
  unsigned int v19; // edx
  int v20; // eax
  int v22; // eax
  CD2DLayer *v23; // [rsp+30h] [rbp-48h] BYREF
  struct CVisual *v24; // [rsp+38h] [rbp-40h]
  __int128 v25; // [rsp+40h] [rbp-38h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+40h]

  v24 = a2;
  v8 = *((_DWORD *)this + 64) == 0;
  v23 = 0LL;
  v9 = 0;
  v10 = 0;
  v14 = !v8;
  v15 = 3;
  if ( *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 45) + 24LL))(
                     *((_QWORD *)this + 45),
                     &v25)
                 + 4) != 3 )
    v15 = 0;
  if ( a3 )
    v25 = *a3;
  else
    CScopedClipStack::GetTopGpuClipInScope((__int64 *)this + 126, 1, (__int64)&v25);
  if ( *((float *)&v25 + 2) <= *(float *)&v25 || *((float *)&v25 + 3) <= *((float *)&v25 + 1) )
  {
    *((_QWORD *)&v25 + 1) = v24;
    LODWORD(v25) = 6;
    CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push((char *)this + 448, &v25);
  }
  else
  {
    v16 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x50uLL);
    if ( !v16 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    *((float *)v16 + 15) = a6;
    *(_QWORD *)v16 = &CD2DLayer::`vftable';
    v16[56] = 0;
    *((_DWORD *)v16 + 16) = v14;
    *((_DWORD *)v16 + 17) = v15;
    *((_DWORD *)v16 + 18) = 0;
    *((_QWORD *)v16 + 3) = a4;
    *(_OWORD *)(v16 + 8) = v25;
    if ( a4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
    if ( a5 )
    {
      *((_OWORD *)v16 + 2) = *(_OWORD *)a5;
      *((_QWORD *)v16 + 6) = *(_QWORD *)(a5 + 16);
      v16[56] = 1;
    }
    v23 = (CD2DLayer *)v16;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0d(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_D2DLAYERCREATEREASON, a8);
    if ( a7 )
    {
      if ( a4 )
      {
        v17 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a6 - 1.0)) & _xmm);
        if ( v17 < 0.0000011920929 )
        {
          v18 = *((_DWORD *)this + 158);
          v19 = v18 + 1;
          v9 = v18 + 1 < v18 ? 0x80070216 : 0;
          if ( v18 + 1 < v18 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xB5u);
          }
          else if ( v19 > *((_DWORD *)this + 157) )
          {
            v22 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 608, 8LL, 1LL, &v23);
            v9 = v22;
            if ( v22 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0xC0u);
          }
          else
          {
            *(_QWORD *)(*((_QWORD *)this + 76) + 8LL * v18) = v23;
            *((_DWORD *)this + 158) = v19;
          }
          if ( v9 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x1719u);
            goto LABEL_24;
          }
          v10 = 1;
        }
      }
    }
    v20 = CDrawingContext::PushLayer(this, v24, v23, v10 ^ 1u, 1);
    v9 = v20;
    if ( v20 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x1724u);
    else
      v23 = 0LL;
  }
LABEL_24:
  if ( v9 < 0 )
  {
    if ( v10 )
      --*((_DWORD *)this + 158);
    if ( v23 )
      CD2DLayer::`scalar deleting destructor'(v23, 1);
  }
  return (unsigned int)v9;
}
