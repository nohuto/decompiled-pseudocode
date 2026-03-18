/*
 * XREFs of ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x18003B87C
 * Callers:
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1800237F0 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x18003BD30 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x18013C558 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x18013CE88 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     ?DrawAsDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18015CD60 (-DrawAsDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TM.c)
 * Callees:
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180031D18 (-GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x18003B750 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?Push@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@CDrawingContext@@@Z @ 0x180045A8C (-Push@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??_GCD2DLayer@@UEAAPEAXI@Z @ 0x180081870 (--_GCD2DLayer@@UEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0d @ 0x180126994 (McTemplateU0d.c)
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
  unsigned int v18; // edx
  __int64 v19; // rcx
  unsigned int v20; // eax
  int v21; // eax
  int v23; // eax
  CD2DLayer *v24; // [rsp+30h] [rbp-48h] BYREF
  struct CVisual *v25; // [rsp+38h] [rbp-40h]
  __int128 v26; // [rsp+40h] [rbp-38h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+40h]

  v25 = a2;
  v8 = *((_DWORD *)this + 64) == 0;
  v24 = 0LL;
  v9 = 0;
  v10 = 0;
  v14 = !v8;
  v15 = 3;
  if ( *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 45) + 24LL))(
                     *((_QWORD *)this + 45),
                     &v26)
                 + 4) != 3 )
    v15 = 0;
  if ( a3 )
    v26 = *a3;
  else
    CScopedClipStack::GetTopGpuClipInScope((CDrawingContext *)((char *)this + 1008), 1);
  if ( *((float *)&v26 + 2) <= *(float *)&v26 || *((float *)&v26 + 3) <= *((float *)&v26 + 1) )
  {
    *((_QWORD *)&v26 + 1) = v25;
    LODWORD(v26) = 6;
    CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push((char *)this + 448, &v26);
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
    *(_OWORD *)(v16 + 8) = v26;
    if ( a4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
    if ( a5 )
    {
      *((_OWORD *)v16 + 2) = *(_OWORD *)a5;
      *((_QWORD *)v16 + 6) = *(_QWORD *)(a5 + 16);
      v16[56] = 1;
    }
    v24 = (CD2DLayer *)v16;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0d(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_D2DLAYERCREATEREASON, a8);
    if ( a7 )
    {
      if ( a4 )
      {
        v17 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a6 - 1.0)) & _xmm);
        if ( v17 < 0.0000011920929 )
        {
          v18 = (unsigned int)v24;
          v19 = *((unsigned int *)this + 158);
          v20 = v19 + 1;
          if ( (int)v19 + 1 >= (unsigned int)v19 )
            v18 = v19 + 1;
          v9 = v20 < (unsigned int)v19 ? 0x80070216 : 0;
          if ( v20 < (unsigned int)v19 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xB5u);
          }
          else if ( v18 > *((_DWORD *)this + 157) )
          {
            v23 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 608, 8LL, 1LL, &v24);
            v9 = v23;
            if ( v23 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0xC0u);
          }
          else
          {
            *(_QWORD *)(*((_QWORD *)this + 76) + 8 * v19) = v24;
            *((_DWORD *)this + 158) = v18;
          }
          if ( v9 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x16C6u);
            goto LABEL_26;
          }
          v10 = 1;
        }
      }
    }
    v21 = CDrawingContext::PushLayer(this, v25, v24, v10 ^ 1u, 1);
    v9 = v21;
    if ( v21 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x16D1u);
    else
      v24 = 0LL;
  }
LABEL_26:
  if ( v9 < 0 )
  {
    if ( v10 )
      --*((_DWORD *)this + 158);
    if ( v24 )
      CD2DLayer::`scalar deleting destructor'(v24, 1u);
  }
  return (unsigned int)v9;
}
