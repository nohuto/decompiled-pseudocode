/*
 * XREFs of ??0CComponentTransform3D@@IEAA@PEAVCComposition@@@Z @ 0x18002BA60
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002BD94 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CComponentTransform3D *__fastcall CComponentTransform3D::CComponentTransform3D(
        CComponentTransform3D *this,
        struct CComposition *a2)
{
  CComponentTransform3D *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 34) = 0;
  *((_DWORD *)this + 8) |= 1u;
  *(_QWORD *)this = &CComponentTransform3D::`vftable';
  *((_BYTE *)this + 148) = 1;
  *((_QWORD *)this + 27) = 1065353216LL;
  *(_QWORD *)((char *)this + 236) = 1065353216LL;
  *((_QWORD *)this + 32) = 1065353216LL;
  *((_DWORD *)this + 69) = 1065353216;
  *((_QWORD *)this + 28) = 0LL;
  *((_DWORD *)this + 58) = 0;
  *(_QWORD *)((char *)this + 244) = 0LL;
  *((_DWORD *)this + 63) = 0;
  *((_QWORD *)this + 33) = 0LL;
  *((_DWORD *)this + 68) = 0;
  *(_OWORD *)((char *)this + 196) = CComponentTransform3D::sc_defaultOrientation;
  *(_QWORD *)((char *)this + 172) = CComponentTransform3D::sc_defaultRotationAxis;
  *((_DWORD *)this + 45) = dword_1802D55A8;
  *((_QWORD *)this + 23) = CComponentTransform3D::sc_defaultScale;
  *((_DWORD *)this + 48) = dword_1802D55B8;
  result = this;
  *(_OWORD *)((char *)this + 216) = CComponentTransform3D::sc_defaultTransformMatrix;
  *(_OWORD *)((char *)this + 232) = xmmword_1802D55E0;
  *(_OWORD *)((char *)this + 248) = xmmword_1802D55F0;
  *(_OWORD *)((char *)this + 264) = xmmword_1802D5600;
  return result;
}
