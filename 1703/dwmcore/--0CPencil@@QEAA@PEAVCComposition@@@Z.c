/*
 * XREFs of ??0CPencil@@QEAA@PEAVCComposition@@@Z @ 0x180153418
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18005A0F8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CPencil *__fastcall CPencil::CPencil(CPencil *this, struct CComposition *a2)
{
  CPencil *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CPencil::`vftable';
  *((_QWORD *)this + 7) = &CDeviceResourceTable<CD2DGenericInk,CGenericInk,ID2DContext>::`vftable';
  *((_QWORD *)this + 8) = this;
  *((_QWORD *)this + 9) = (char *)this + 104;
  *((_QWORD *)this + 10) = (char *)this + 104;
  *((_DWORD *)this + 22) = 2;
  *(_QWORD *)((char *)this + 92) = 2LL;
  result = this;
  *(_OWORD *)((char *)this + 120) = *(_OWORD *)((char *)a2 + 324);
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_DWORD *)this + 52) = 0;
  return result;
}
