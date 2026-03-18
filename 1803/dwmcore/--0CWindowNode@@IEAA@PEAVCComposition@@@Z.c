/*
 * XREFs of ??0CWindowNode@@IEAA@PEAVCComposition@@@Z @ 0x18008F82C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002BD94 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x18004F974 (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 */

CWindowNode *__fastcall CWindowNode::CWindowNode(CWindowNode *this, struct CComposition *a2)
{
  CWindowNode *result; // rax

  CVisual::CVisual(this, a2);
  *(_QWORD *)this = &CWindowNode::`vftable';
  memset_0((char *)this + 520, 0, 0x4CuLL);
  *((_DWORD *)this + 147) = 1;
  *((_QWORD *)this + 91) = (char *)this + 760;
  *((_QWORD *)this + 92) = (char *)this + 760;
  *((_DWORD *)this + 186) = 2;
  *(_QWORD *)((char *)this + 748) = 2LL;
  *((_DWORD *)this + 196) = 1065353216;
  *((_DWORD *)this + 197) = 1065353216;
  *((_DWORD *)this + 198) = 1065353216;
  *(_QWORD *)((char *)this + 796) = 1065353216LL;
  result = this;
  *(_QWORD *)((char *)this + 804) = 0LL;
  *((_DWORD *)this + 203) = 0;
  *((_BYTE *)this + 816) = 0;
  *((_QWORD *)this + 109) = 0LL;
  *((_QWORD *)this + 110) = 0LL;
  *((_QWORD *)this + 111) = 0LL;
  *((_DWORD *)this + 224) = 0;
  *((_QWORD *)this + 117) = 0LL;
  *((_QWORD *)this + 118) = 0LL;
  *((_BYTE *)this + 976) = 0;
  *((_QWORD *)this + 120) = 0LL;
  *((_QWORD *)this + 121) = 0LL;
  return result;
}
