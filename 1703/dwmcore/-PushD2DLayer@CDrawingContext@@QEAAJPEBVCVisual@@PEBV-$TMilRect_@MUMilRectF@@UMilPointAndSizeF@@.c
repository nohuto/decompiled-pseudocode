/*
 * XREFs of ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x18000D414
 * Callers:
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x1800A64B0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1800AB220 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x18014B1C0 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x18014BEDC (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 * Callees:
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x18000D2D0 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ??_GCD2DLayer@@UEAAPEAXI@Z @ 0x18000FAC0 (--_GCD2DLayer@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FBC0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009339C (-GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?Push@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@CDrawingContext@@@Z @ 0x1800BF438 (-Push@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     Template_q @ 0x18013BB44 (Template_q.c)
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
  int v8; // ebx
  BOOL v11; // r13d
  char v13; // r14
  __int64 v14; // rdx
  int v15; // r12d
  __int64 v16; // rcx
  char *v17; // rbx
  float v18; // xmm1_4
  unsigned int v19; // edx
  __int64 v20; // rcx
  unsigned int v21; // eax
  int v22; // eax
  int v24; // eax
  CD2DLayer *v25; // [rsp+30h] [rbp-51h] BYREF
  __int128 v26; // [rsp+38h] [rbp-49h] BYREF
  struct CVisual *v27; // [rsp+48h] [rbp-39h]
  __int128 v28; // [rsp+50h] [rbp-31h] BYREF
  void *retaddr; // [rsp+C8h] [rbp+47h]

  v8 = 0;
  v27 = a2;
  v25 = 0LL;
  v11 = *((_DWORD *)this + 66) != 0;
  v13 = 0;
  v15 = 0;
  if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 46) + 32LL))(*((_QWORD *)this + 46)) == 3 )
    v15 = 3;
  if ( a3 )
  {
    v28 = *a3;
  }
  else
  {
    LOBYTE(v14) = 1;
    CScopedClipStack::GetTopGpuClipInScope((char *)this + 912, v14, &v28);
  }
  if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(&v28) )
  {
    *((_QWORD *)&v26 + 1) = v27;
    LODWORD(v26) = 6;
    CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push((char *)this + 440, &v26);
  }
  else
  {
    v26 = v28;
    v17 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x50uLL);
    if ( !v17 )
    {
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
      __debugbreak();
    }
    *((float *)v17 + 15) = a6;
    *(_QWORD *)v17 = &CD2DLayer::`vftable';
    v17[56] = 0;
    *((_DWORD *)v17 + 16) = v11;
    *((_DWORD *)v17 + 17) = v15;
    *((_DWORD *)v17 + 18) = 0;
    *((_QWORD *)v17 + 3) = a4;
    *(_OWORD *)(v17 + 8) = v26;
    if ( a4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
    if ( a5 )
    {
      *((_OWORD *)v17 + 2) = *(_OWORD *)a5;
      *((_QWORD *)v17 + 6) = *(_QWORD *)(a5 + 16);
      v17[56] = 1;
    }
    v25 = (CD2DLayer *)v17;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_q(v16, &EVTDESC_ETWGUID_D2DLAYERCREATEREASON, a8);
    if ( a7 )
    {
      if ( a4 )
      {
        v18 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a6 - 1.0)) & _xmm);
        if ( v18 < 0.0000011920929 )
        {
          v19 = (unsigned int)v25;
          v20 = *((unsigned int *)this + 156);
          v21 = v20 + 1;
          if ( (int)v20 + 1 >= (unsigned int)v20 )
            v19 = v20 + 1;
          v8 = v21 < (unsigned int)v20 ? 0x80070216 : 0;
          if ( v21 < (unsigned int)v20 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xB5u);
          }
          else if ( v19 > *((_DWORD *)this + 155) )
          {
            v24 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 600, 8LL, 1LL, &v25);
            v8 = v24;
            if ( v24 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0xC0u);
          }
          else
          {
            *(_QWORD *)(*((_QWORD *)this + 75) + 8 * v20) = v25;
            *((_DWORD *)this + 156) = v19;
          }
          if ( v8 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x18ECu);
            goto LABEL_25;
          }
          v13 = 1;
        }
      }
    }
    v22 = CDrawingContext::PushLayer(this, v27, v25, v13 ^ 1u, 1);
    v8 = v22;
    if ( v22 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x18F7u);
    else
      v25 = 0LL;
  }
LABEL_25:
  if ( v8 < 0 )
  {
    if ( v13 )
      --*((_DWORD *)this + 156);
    if ( v25 )
      CD2DLayer::`scalar deleting destructor'(v25, 1u);
  }
  return (unsigned int)v8;
}
