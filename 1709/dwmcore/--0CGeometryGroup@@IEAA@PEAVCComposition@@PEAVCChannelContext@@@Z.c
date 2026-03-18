/*
 * XREFs of ??0CGeometryGroup@@IEAA@PEAVCComposition@@PEAVCChannelContext@@@Z @ 0x180145D40
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800930B8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CCyclicResourceListEntry@@IEAA@PEAVCResourceTable@@@Z @ 0x1800B4EA0 (--0CCyclicResourceListEntry@@IEAA@PEAVCResourceTable@@@Z.c)
 */

CGeometryGroup *__fastcall CGeometryGroup::CGeometryGroup(
        CGeometryGroup *this,
        struct CComposition *a2,
        struct CResourceTable **a3)
{
  CGeometryGroup *v3; // r10
  CGeometryGroup *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CPropertyChangeResource::`vftable';
  *((_QWORD *)this + 10) = 0LL;
  *((_BYTE *)this + 88) = 0;
  *((_DWORD *)this + 8) |= 1u;
  CCyclicResourceListEntry::CCyclicResourceListEntry((CGeometryGroup *)((char *)this + 104), a3[3]);
  *((_QWORD *)v3 + 13) = &CCombinedGeometry::`vftable'{for `CCyclicResourceListEntry'};
  result = v3;
  *(_QWORD *)v3 = &CGeometryGroup::`vftable'{for `CGeometry'};
  return result;
}
