/*
 * XREFs of ??0CComponentTransform3D@@IEAA@PEAVCComposition@@@Z @ 0x180096168
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800930B8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CComponentTransform3D *__fastcall CComponentTransform3D::CComponentTransform3D(
        CComponentTransform3D *this,
        struct CComposition *a2)
{
  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 34) = 0;
  *((_DWORD *)this + 8) |= 1u;
  *(_QWORD *)this = &CComponentTransform3D::`vftable';
  *((_BYTE *)this + 148) = 1;
  *((_DWORD *)this + 70) = 0;
  *(_OWORD *)((char *)this + 196) = CComponentTransform3D::sc_defaultOrientation;
  *(_QWORD *)((char *)this + 172) = CComponentTransform3D::sc_defaultRotationAxis;
  *((_DWORD *)this + 45) = dword_18026E180;
  *((_QWORD *)this + 23) = CComponentTransform3D::sc_defaultScale;
  *((_DWORD *)this + 48) = dword_18026E190;
  *(_OWORD *)((char *)this + 216) = CComponentTransform3D::sc_defaultTransformMatrix;
  *(_OWORD *)((char *)this + 232) = xmmword_18026DE20;
  *(_OWORD *)((char *)this + 248) = xmmword_18026DE30;
  *(_OWORD *)((char *)this + 264) = xmmword_18026DE40;
  *((_DWORD *)this + 70) = dword_18026DE50;
  return this;
}
