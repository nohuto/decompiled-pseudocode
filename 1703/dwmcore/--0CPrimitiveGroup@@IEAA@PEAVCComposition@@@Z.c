/*
 * XREFs of ??0CPrimitiveGroup@@IEAA@PEAVCComposition@@@Z @ 0x18004C86C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18005A0F8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ??0CPrimitiveGroupLayerClip@@IEAA@PEAVCComposition@@@Z @ 0x1800C0220 (--0CPrimitiveGroupLayerClip@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     <none>
 */

CPrimitiveGroup *__fastcall CPrimitiveGroup::CPrimitiveGroup(CPrimitiveGroup *this, struct CComposition *a2)
{
  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CPrimitiveGroup::`vftable'{for `CContent'};
  *((_QWORD *)this + 7) = &CPrimitiveGroupLayerClip::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 8) = &CPrimitiveGroupLayerClip::`vftable'{for `IDirtyRectSource'};
  *((_QWORD *)this + 14) = (char *)this + 144;
  *((_QWORD *)this + 15) = (char *)this + 144;
  *((_DWORD *)this + 32) = 2;
  *(_QWORD *)((char *)this + 132) = 2LL;
  *((_QWORD *)this + 21) = (char *)this + 200;
  *((_QWORD *)this + 22) = (char *)this + 200;
  *((_DWORD *)this + 46) = 4;
  *(_QWORD *)((char *)this + 188) = 4LL;
  *((_QWORD *)this + 29) = (char *)this + 264;
  *((_QWORD *)this + 30) = (char *)this + 264;
  *((_DWORD *)this + 62) = 4;
  *(_QWORD *)((char *)this + 252) = 4LL;
  *((_QWORD *)this + 57) = (char *)this + 464;
  *((_DWORD *)this + 116) = 0;
  return this;
}
