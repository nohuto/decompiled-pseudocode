/*
 * XREFs of ??0CPrimitiveGroupLayerClip@@IEAA@PEAVCComposition@@@Z @ 0x18016D750
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002BD94 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CPrimitiveGroup@@IEAA@PEAVCComposition@@@Z @ 0x18009717C (--0CPrimitiveGroup@@IEAA@PEAVCComposition@@@Z.c)
 */

CPrimitiveGroupLayerClip *__fastcall CPrimitiveGroupLayerClip::CPrimitiveGroupLayerClip(
        CPrimitiveGroupLayerClip *this,
        struct CComposition *a2)
{
  CPrimitiveGroupLayerClip *v2; // rcx

  CPrimitiveGroup::CPrimitiveGroup(this, a2);
  *((_QWORD *)v2 + 7) = &CPrimitiveGroupLayerClip::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)v2 = &CPrimitiveGroupLayerClip::`vftable'{for `CContent'};
  *((_QWORD *)v2 + 8) = &CPrimitiveGroupLayerClip::`vftable'{for `IDirtyRectSource'};
  return v2;
}
