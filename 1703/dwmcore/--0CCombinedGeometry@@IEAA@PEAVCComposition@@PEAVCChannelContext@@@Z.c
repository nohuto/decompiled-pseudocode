/*
 * XREFs of ??0CCombinedGeometry@@IEAA@PEAVCComposition@@PEAVCChannelContext@@@Z @ 0x1801530DC
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18005A0F8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CCyclicResourceListEntry@@IEAA@PEAVCResourceTable@@@Z @ 0x18000418C (--0CCyclicResourceListEntry@@IEAA@PEAVCResourceTable@@@Z.c)
 */

CCombinedGeometry *__fastcall CCombinedGeometry::CCombinedGeometry(
        CCombinedGeometry *this,
        struct CComposition *a2,
        struct CResourceTable **a3)
{
  CCombinedGeometry *v3; // r10
  CCombinedGeometry *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CPropertyChangeResource::`vftable';
  *((_QWORD *)this + 10) = 0LL;
  *((_BYTE *)this + 88) = 0;
  *((_DWORD *)this + 8) |= 1u;
  CCyclicResourceListEntry::CCyclicResourceListEntry((CCombinedGeometry *)((char *)this + 104), a3[4]);
  *((_QWORD *)v3 + 13) = &CCombinedGeometry::`vftable'{for `CCyclicResourceListEntry'};
  result = v3;
  *(_QWORD *)v3 = &CCombinedGeometry::`vftable'{for `CGeometry'};
  return result;
}
