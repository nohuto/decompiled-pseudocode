/*
 * XREFs of ?ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ @ 0x18004C450
 * Callers:
 *     ??1CPrimitiveGroup@@MEAA@XZ @ 0x18004CAD8 (--1CPrimitiveGroup@@MEAA@XZ.c)
 *     ?ProcessAddSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDSURFACERESOURCES@@PEBXI@Z @ 0x18004CC48 (-ProcessAddSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?Release@CCompositionSurfaceBitmap@@UEAAKXZ @ 0x180037610 (-Release@CCompositionSurfaceBitmap@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CPrimitiveGroup::ReleaseSurfaceResources(CPrimitiveGroup *this)
{
  __int64 i; // rbx
  CCompositionSurfaceBitmap *v3; // rcx
  void (*v4)(void); // rax

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 48); i = (unsigned int)(i + 1) )
  {
    v3 = *(CCompositionSurfaceBitmap **)(*((_QWORD *)this + 21) + 8 * i);
    v4 = *(void (**)(void))(*(_QWORD *)v3 + 16LL);
    if ( (char *)v4 == (char *)CCompositionSurfaceBitmap::Release )
      CCompositionSurfaceBitmap::Release(v3);
    else
      v4();
  }
  *((_DWORD *)this + 48) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 168, 8LL);
}
