/*
 * XREFs of ?ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ @ 0x180097888
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 *     ??1CPrimitiveGroup@@MEAA@XZ @ 0x1800976C8 (--1CPrimitiveGroup@@MEAA@XZ.c)
 *     ?ProcessAddSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDSURFACERESOURCES@@PEBXI@Z @ 0x1800980B4 (-ProcessAddSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_.c)
 * Callees:
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x18001DBF0 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CPrimitiveGroup::ReleaseSurfaceResources(CPrimitiveGroup *this)
{
  __int64 i; // rbx
  CGdiSpriteBitmap *v3; // rcx
  void (*v4)(void); // rax

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 48); i = (unsigned int)(i + 1) )
  {
    v3 = *(CGdiSpriteBitmap **)(*((_QWORD *)this + 21) + 8 * i);
    v4 = *(void (**)(void))(*(_QWORD *)v3 + 16LL);
    if ( (char *)v4 == (char *)CGdiSpriteBitmap::Release )
      CGdiSpriteBitmap::Release(v3);
    else
      v4();
  }
  *((_DWORD *)this + 48) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 168, 8u);
}
