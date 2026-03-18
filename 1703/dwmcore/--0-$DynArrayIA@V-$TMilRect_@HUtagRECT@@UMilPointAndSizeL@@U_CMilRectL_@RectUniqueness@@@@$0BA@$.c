/*
 * XREFs of ??0?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@QEAA@XZ @ 0x180026CC8
 * Callers:
 *     ?CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x18000B598 (-CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 *     ?Create@CRegionShape@@SAJAEBVCRegion@@PEAPEAV1@@Z @ 0x180024DCC (-Create@CRegionShape@@SAJAEBVCRegion@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800B3474 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

__int64 __fastcall DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>,16,0>::DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>,16,0>(
        __int64 a1)
{
  CInputSinkStruct::InputQueueInfo *v2; // rcx

  v2 = (CInputSinkStruct::InputQueueInfo *)(a1 + 32);
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)a1 = v2;
  *(_QWORD *)(a1 + 8) = v2;
  *(_DWORD *)(a1 + 16) = 16;
  *(_DWORD *)(a1 + 20) = 16;
  `vector constructor iterator'(
    v2,
    0x10uLL,
    0x10uLL,
    (void *(*)(void *))COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
  return a1;
}
