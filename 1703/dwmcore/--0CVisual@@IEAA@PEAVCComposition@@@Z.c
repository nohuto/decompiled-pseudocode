/*
 * XREFs of ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x180084B84
 * Callers:
 *     ??0CWindowNode@@IEAA@PEAVCComposition@@@Z @ 0x18004FF70 (--0CWindowNode@@IEAA@PEAVCComposition@@@Z.c)
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18005A0F8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?Initialize@CCoRenderVisualProxy@@AEAAJPEAVCComposition@@PEAX@Z @ 0x180140290 (-Initialize@CCoRenderVisualProxy@@AEAAJPEAVCComposition@@PEAX@Z.c)
 * Callees:
 *     ?Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x18004EDE0 (-Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ??0CTreeData@@IEAA@XZ @ 0x18004F06C (--0CTreeData@@IEAA@XZ.c)
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
  *((_BYTE *)this + 88) |= 0x20u;
  *((_QWORD *)this + 26) = &CSparseStorage::s_defaultEmptyAllocatedStorage;
  *((_QWORD *)this + 32) = 0LL;
  CTreeData::CTreeData((CVisual *)((char *)this + 264));
  *((_BYTE *)v3 + 224) &= 0xF8u;
  *(_QWORD *)v3 = &CDesktopTreeData::`vftable';
  CTreeData::Initialize(v3, 0LL, this);
  return this;
}
