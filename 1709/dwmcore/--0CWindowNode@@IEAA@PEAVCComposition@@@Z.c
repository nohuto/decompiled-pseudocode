/*
 * XREFs of ??0CWindowNode@@IEAA@PEAVCComposition@@@Z @ 0x18009CEE4
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800930B8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180017080 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x180050740 (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 */

CWindowNode *__fastcall CWindowNode::CWindowNode(CWindowNode *this, struct CComposition *a2)
{
  CWindowNode *result; // rax

  CVisual::CVisual(this, a2);
  *(_QWORD *)this = &CWindowNode::`vftable';
  `vector constructor iterator'(
    (CWindowNode *)((char *)this + 512),
    16LL,
    4LL,
    COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
  memset_0((char *)this + 512, 0, 0x4CuLL);
  *((_DWORD *)this + 145) = 1;
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)((char *)this + 712),
    CGenericTableMap<unsigned long,CLegacySurfaceManager::TokenToWindowRecord>::CompareTableData,
    CGenericTableMap<CResource *,CWeakReferenceMappingEntry>::AllocTableData,
    CGenericTableMap<unsigned long,CWindowNode::TokenToUpdateListRecord>::FreeTableData,
    0LL);
  *((_QWORD *)this + 99) = (char *)this + 824;
  *((_QWORD *)this + 100) = (char *)this + 824;
  *((_DWORD *)this + 202) = 2;
  *(_QWORD *)((char *)this + 812) = 2LL;
  *((_DWORD *)this + 212) = 1065353216;
  *((_DWORD *)this + 213) = 1065353216;
  *((_DWORD *)this + 214) = 1065353216;
  *(_QWORD *)((char *)this + 860) = 1065353216LL;
  result = this;
  *(_QWORD *)((char *)this + 868) = 0LL;
  *((_DWORD *)this + 219) = 0;
  *((_BYTE *)this + 880) = 0;
  *((_QWORD *)this + 119) = 0LL;
  *((_QWORD *)this + 120) = 0LL;
  *((_QWORD *)this + 121) = 0LL;
  *((_DWORD *)this + 244) = 0;
  *((_QWORD *)this + 129) = 0LL;
  *((_QWORD *)this + 130) = 0LL;
  *((_BYTE *)this + 1072) = 0;
  *((_QWORD *)this + 132) = 0LL;
  *((_QWORD *)this + 133) = 0LL;
  return result;
}
