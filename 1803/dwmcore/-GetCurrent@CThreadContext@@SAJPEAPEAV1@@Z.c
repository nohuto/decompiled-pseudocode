/*
 * XREFs of ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x18008BA48
 * Callers:
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCColorDrawListBrush@@@Z @ 0x180002B54 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCColorDrawListBrush@@@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCPrimitiveGroupDrawListBrush@@@Z @ 0x180006054 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCPrimitiveGroupDrawListBrush@@@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCNineGridDrawListBrush@@@Z @ 0x180006360 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCNineGridDrawListBrush@@@Z.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180071D00 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z @ 0x18008B270 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCDrawListPrimitive8@@@Z @ 0x18008B954 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCDrawListPrimitive8@@@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCBrushRenderingEffect@@@Z @ 0x18008B980 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCBrushRenderingEffect@@@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCommonRenderingEffect@@@Z @ 0x18008B9AC (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCommonRenderingEffect@@@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x18008B9E0 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18008C1F8 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18008DA30 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?CreateLayoutGeometryDrawListBrush@CSpriteVisualContent@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAPEAVCDrawListBrush@@@Z @ 0x18009CDB0 (-CreateLayoutGeometryDrawListBrush@CSpriteVisualContent@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x1800BEDE4 (-UnregisterGraphWalkRoot@CThreadContext@@SAXXZ.c)
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z @ 0x1800BEE20 (-RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCGeometryOnlyDrawListBrush@@@Z @ 0x1800C3988 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCGeometryOnlyDrawListBrush@@@Z.c)
 *     ?InitializeObjectCaches@CThreadContext@@SAJXZ @ 0x1800C9FF0 (-InitializeObjectCaches@CThreadContext@@SAJXZ.c)
 *     ?DestroyObjectCaches@CThreadContext@@SAXXZ @ 0x1801C6A3C (-DestroyObjectCaches@CThreadContext@@SAXXZ.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCDwm3DRECallbackRenderer@@@Z @ 0x1801C6B04 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCDwm3DRECallbackRenderer@@@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCEmptyRegionDrawListBrush@@@Z @ 0x1801C6B38 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCEmptyRegionDrawListBrush@@@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCWARPDrawListEntry@@@Z @ 0x1801C6B6C (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCWARPDrawListEntry@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x1800C88D4 (--0CThreadContext@@AEAA@XZ.c)
 */

__int64 __fastcall CThreadContext::GetCurrent(struct CThreadContext **a1)
{
  unsigned int v2; // ebx
  CThreadContext *Value; // rdi
  CThreadContext *v5; // rax

  v2 = 0;
  Value = (CThreadContext *)TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v5 = (CThreadContext *)operator new(0xF8uLL);
    if ( v5 )
      Value = CThreadContext::CThreadContext(v5);
    else
      Value = 0LL;
    if ( !Value )
    {
      v2 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x42u);
      return v2;
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, Value);
  }
  *a1 = Value;
  return v2;
}
