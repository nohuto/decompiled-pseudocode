/*
 * XREFs of ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x180035760
 * Callers:
 *     ??_GCHWDrawListEntry@@EEAAPEAXI@Z @ 0x180023CF0 (--_GCHWDrawListEntry@@EEAAPEAXI@Z.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x1800354D0 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180037630 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x18003BD30 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005F130 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     PrimitiveStorage::Alloc_16_ @ 0x180069C50 (PrimitiveStorage--Alloc_16_.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCPrimitiveGroupDrawListBrush@@@Z @ 0x1800701EC (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCPrimitiveGroupDrawListBrush@@@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCBrushRenderingEffect@@@Z @ 0x180070218 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCBrushRenderingEffect@@@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x180070D50 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCGeometryOnlyDrawListBrush@@@Z @ 0x18007267C (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCGeometryOnlyDrawListBrush@@@Z.c)
 *     ?EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEAAJP6AJPEAVCDrawListBrush@@PEAX@Z1@Z @ 0x18009F190 (-EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEAAJP6AJPEAVCDrawListBrush@@PEAX@Z1@Z.c)
 *     ?Create@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x18009F6D4 (-Create@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@AEBUD2D_RECT_F@@PEAPEAV1@@Z.c)
 *     ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x1800B3330 (-UnregisterGraphWalkRoot@CThreadContext@@SAXXZ.c)
 *     ??_E?$CCachableStorage@VCDrawListPrimitive8@@$0BA@@PrimitiveStorage@@UEAAPEAXI@Z @ 0x1800B5F00 (--_E-$CCachableStorage@VCDrawListPrimitive8@@$0BA@@PrimitiveStorage@@UEAAPEAXI@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z @ 0x1800B9E50 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCommonRenderingEffect@@@Z @ 0x1800B9EA4 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCommonRenderingEffect@@@Z.c)
 *     ?DestroyObjectCaches@CThreadContext@@SAXXZ @ 0x18018EE28 (-DestroyObjectCaches@CThreadContext@@SAXXZ.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCWARPDrawListEntry@@@Z @ 0x18018EEB4 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCWARPDrawListEntry@@@Z.c)
 *     ?InitializeObjectCaches@CThreadContext@@SAJXZ @ 0x18018EEE8 (-InitializeObjectCaches@CThreadContext@@SAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CThreadContext::GetCurrent(struct CThreadContext **a1)
{
  struct CThreadContext *Value; // rbx
  struct CThreadContext *v4; // rax
  DWORD v5; // ecx

  Value = (struct CThreadContext *)TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( Value )
    goto LABEL_2;
  v4 = (struct CThreadContext *)operator new(0xA8uLL);
  Value = v4;
  if ( v4 )
  {
    v5 = CThreadContext::s_dwTlsIndex;
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
    *((_QWORD *)v4 + 19) = 0LL;
    *((_QWORD *)v4 + 20) = 0LL;
    TlsSetValue(v5, v4);
LABEL_2:
    *a1 = Value;
    return 0LL;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x42u);
  return 2147942414LL;
}
