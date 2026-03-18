/*
 * XREFs of ??0CTreeData@@IEAA@XZ @ 0x180029F68
 * Callers:
 *     ?ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x18000ACD0 (-ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z.c)
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002BD94 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z @ 0x18004F820 (-EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z.c)
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x18004F974 (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
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
