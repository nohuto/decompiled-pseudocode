/*
 * XREFs of ??0CGenericInk@@QEAA@PEAVCComposition@@@Z @ 0x180153178
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18005A0F8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CGenericInk *__fastcall CGenericInk::CGenericInk(CGenericInk *this, struct CComposition *a2)
{
  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CGenericInk::`vftable'{for `CContent'};
  *((_QWORD *)this + 7) = &CGenericInk::`vftable'{for `IDirtyRectSource'};
  *((_QWORD *)this + 8) = &CDeviceResourceTable<CD2DGenericInk,CGenericInk,ID2DContext>::`vftable';
  *((_QWORD *)this + 9) = this;
  *((_QWORD *)this + 10) = (char *)this + 112;
  *((_QWORD *)this + 11) = (char *)this + 112;
  *((_DWORD *)this + 24) = 2;
  *(_QWORD *)((char *)this + 100) = 2LL;
  *((_OWORD *)this + 8) = *(_OWORD *)((char *)a2 + 324);
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 42) = 0;
  *((_DWORD *)this + 44) = 0;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_DWORD *)this + 52) = 0;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = (char *)this + 232;
  *((_DWORD *)this + 58) = 0;
  **((_DWORD **)this + 28) = 0;
  return this;
}
