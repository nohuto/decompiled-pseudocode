/*
 * XREFs of ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x180094270
 * Callers:
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCBrushRenderingEffect@@@Z @ 0x1800151A8 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCBrushRenderingEffect@@@Z.c)
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListPrimitiveBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x18003FC4C (-ExtractBuiltHWPrimitiveEntry@CDrawListPrimitiveBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOL.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18007258C (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ??_GCCommonRenderingEffect@@UEAAPEAXI@Z @ 0x180077010 (--_GCCommonRenderingEffect@@UEAAPEAXI@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCSurfaceDrawListBrush@@@Z @ 0x18007B0EC (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCSurfaceDrawListBrush@@@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCDrawListPrimitive8@@@Z @ 0x18007B164 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCDrawListPrimitive8@@@Z.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x180094110 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009D050 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A2960 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x1800A64B0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ??_GCHWDrawListEntry@@EEAAPEAXI@Z @ 0x1800AB6D0 (--_GCHWDrawListEntry@@EEAAPEAXI@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCGeometryOnlyDrawListBrush@@@Z @ 0x1800C01DC (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCGeometryOnlyDrawListBrush@@@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCommonRenderingEffect@@@Z @ 0x1800C2F3C (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCommonRenderingEffect@@@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z @ 0x1800C45BC (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z.c)
 *     ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x1800C6210 (-UnregisterGraphWalkRoot@CThreadContext@@SAXXZ.c)
 *     ?InitializeObjectCaches@CThreadContext@@SAJXZ @ 0x1800CC0E0 (-InitializeObjectCaches@CThreadContext@@SAJXZ.c)
 *     ?DestroyObjectCaches@CThreadContext@@SAXXZ @ 0x18018608C (-DestroyObjectCaches@CThreadContext@@SAXXZ.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCWARPDrawListEntry@@@Z @ 0x18018610C (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCWARPDrawListEntry@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CThreadContext::GetCurrent(struct CThreadContext **a1)
{
  struct CThreadContext *Value; // rax
  struct CThreadContext *v4; // rax
  struct CThreadContext *v5; // rbx
  DWORD v6; // ecx

  Value = (struct CThreadContext *)TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( Value )
  {
    *a1 = Value;
    return 0LL;
  }
  else
  {
    v4 = (struct CThreadContext *)operator new(0x98uLL);
    v5 = v4;
    if ( v4 )
    {
      v6 = CThreadContext::s_dwTlsIndex;
      *(_QWORD *)v4 = 0LL;
      *((_QWORD *)v4 + 1) = 0LL;
      *((_QWORD *)v4 + 2) = 0LL;
      *((_QWORD *)v4 + 3) = 0LL;
      *((_QWORD *)v4 + 4) = 0LL;
      *((_QWORD *)v4 + 5) = 0LL;
      *((_QWORD *)v4 + 6) = 0LL;
      *((_QWORD *)v4 + 7) = 0LL;
      *((_QWORD *)v4 + 8) = 0LL;
      *((_QWORD *)v4 + 9) = 0LL;
      *((_QWORD *)v4 + 10) = 0LL;
      *((_QWORD *)v4 + 11) = 0LL;
      *((_QWORD *)v4 + 12) = 0LL;
      *((_QWORD *)v4 + 13) = 0LL;
      *((_QWORD *)v4 + 14) = 0LL;
      *((_QWORD *)v4 + 15) = 0LL;
      *((_QWORD *)v4 + 16) = 0LL;
      *((_QWORD *)v4 + 17) = 0LL;
      *((_QWORD *)v4 + 18) = 0LL;
      TlsSetValue(v6, v4);
      *a1 = v5;
      return 0LL;
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x42u);
      return 2147942414LL;
    }
  }
}
