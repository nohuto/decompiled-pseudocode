/*
 * XREFs of ??0CTreeData@@IEAA@XZ @ 0x18004F06C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18005A0F8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x180084B84 (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 *     ?EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z @ 0x18008AE80 (-EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z.c)
 *     ?ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x1800946B0 (-ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z.c)
 * Callees:
 *     <none>
 */

CTreeData *__fastcall CTreeData::CTreeData(CTreeData *this)
{
  CTreeData *result; // rax

  *((_BYTE *)this + 16) &= 0xF2u;
  *(_QWORD *)this = &CTreeData::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  result = this;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *(_OWORD *)((char *)this + 40) = _xmm;
  *((_WORD *)this + 52) = 32085;
  *(_OWORD *)((char *)this + 56) = _xmm;
  *(_OWORD *)((char *)this + 72) = _xmm;
  *(_OWORD *)((char *)this + 88) = _xmm;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 34) = 0;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_DWORD *)this + 52) = 0;
  *((_BYTE *)this + 212) = 0;
  *((_QWORD *)this + 27) = 0LL;
  return result;
}
