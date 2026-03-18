/*
 * XREFs of ??0CGeometry2DGroup@@IEAA@PEAVCComposition@@PEAVCChannelContext@@@Z @ 0x180145CF0
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800930B8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CCyclicResourceListEntry@@IEAA@PEAVCResourceTable@@@Z @ 0x1800B4EA0 (--0CCyclicResourceListEntry@@IEAA@PEAVCResourceTable@@@Z.c)
 */

CGeometry2DGroup *__fastcall CGeometry2DGroup::CGeometry2DGroup(
        CGeometry2DGroup *this,
        struct CComposition *a2,
        struct CResourceTable **a3)
{
  CGeometry2DGroup *v3; // r10
  CGeometry2DGroup *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CGeometry2D::`vftable';
  CCyclicResourceListEntry::CCyclicResourceListEntry((CGeometry2DGroup *)((char *)this + 72), a3[3]);
  *((_QWORD *)v3 + 9) = &CGeometry2DGroup::`vftable'{for `CCyclicResourceListEntry'};
  result = v3;
  *(_QWORD *)v3 = &CGeometry2DGroup::`vftable'{for `CGeometry2D'};
  return result;
}
