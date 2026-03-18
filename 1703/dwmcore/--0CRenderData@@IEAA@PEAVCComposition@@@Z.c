/*
 * XREFs of ??0CRenderData@@IEAA@PEAVCComposition@@@Z @ 0x180084210
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18005A0F8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0?$DynArrayImpl@$00@@IEAA@PEAXIII@Z @ 0x1800B3368 (--0-$DynArrayImpl@$00@@IEAA@PEAXIII@Z.c)
 */

CRenderData *__fastcall CRenderData::CRenderData(CRenderData *this, struct CComposition *a2)
{
  CRenderData *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CRenderData::`vftable';
  *((_QWORD *)this + 8) = (char *)this + 56;
  *((_QWORD *)this + 7) = (char *)this + 56;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 21) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 24) = 0;
  DynArrayImpl<1>::DynArrayImpl<1>((char *)this + 104, 0LL, 0LL);
  result = this;
  *((_WORD *)this + 68) = 256;
  *((_BYTE *)this + 138) = 0;
  return result;
}
