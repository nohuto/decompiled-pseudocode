/*
 * XREFs of ??0CComponentTransform3D@@IEAA@PEAVCComposition@@@Z @ 0x18002B440
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18005A0F8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??4CMILMatrix@@QEAAAEAV0@AEBVCMILMatrix_IdentityType@@@Z @ 0x18009AE70 (--4CMILMatrix@@QEAAAEAV0@AEBVCMILMatrix_IdentityType@@@Z.c)
 */

CComponentTransform3D *__fastcall CComponentTransform3D::CComponentTransform3D(
        CComponentTransform3D *this,
        struct CComposition *a2)
{
  CComponentTransform3D *v2; // r8

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 34) = 0;
  *((_DWORD *)this + 8) |= 1u;
  *(_QWORD *)this = &CComponentTransform3D::`vftable';
  *((_BYTE *)this + 148) = 1;
  *((_DWORD *)this + 70) = 0;
  *((_DWORD *)this + 52) = 1065353216;
  *((_DWORD *)this + 45) = 1065353216;
  *((_DWORD *)this + 46) = 1065353216;
  *((_DWORD *)this + 47) = 1065353216;
  *((_DWORD *)this + 48) = 1065353216;
  CMILMatrix::operator=((char *)this + 216);
  return v2;
}
