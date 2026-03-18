/*
 * XREFs of ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x18004F974
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002BD94 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ??0CWindowNode@@IEAA@PEAVCComposition@@@Z @ 0x18008F82C (--0CWindowNode@@IEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CCoRenderVisualProxy@@AEAAJPEAVCComposition@@PEAX@Z @ 0x18014B3A0 (-Initialize@CCoRenderVisualProxy@@AEAAJPEAVCComposition@@PEAX@Z.c)
 * Callees:
 *     ?Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x180029D40 (-Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ??0CTreeData@@IEAA@XZ @ 0x180029F68 (--0CTreeData@@IEAA@XZ.c)
 */

CVisual *__fastcall CVisual::CVisual(CVisual *this, struct CComposition *a2)
{
  CTreeData *v3; // rcx

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CVisual::`vftable';
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 27) = &CSparseStorage::s_defaultEmptyAllocatedStorage;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  CTreeData::CTreeData((CVisual *)((char *)this + 288));
  *(_QWORD *)v3 = &CDesktopTreeData::`vftable';
  CTreeData::Initialize(v3, 0LL, this);
  return this;
}
