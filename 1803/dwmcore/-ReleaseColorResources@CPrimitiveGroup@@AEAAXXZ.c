/*
 * XREFs of ?ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ @ 0x180097838
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 *     ??1CPrimitiveGroup@@MEAA@XZ @ 0x1800976C8 (--1CPrimitiveGroup@@MEAA@XZ.c)
 *     ?ProcessAddColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDCOLORRESOURCES@@PEBXI@Z @ 0x18019F330 (-ProcessAddColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_AD.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CPrimitiveGroup::ReleaseColorResources(CPrimitiveGroup *this)
{
  __int64 i; // rbp
  __int64 v3; // rbx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 64); i = (unsigned int)(i + 1) )
  {
    v3 = *((_QWORD *)this + 29);
    CResource::UnRegisterNotifierInternal(this, *(struct CResource **)(v3 + 8 * i));
    *(_QWORD *)(v3 + 8 * i) = 0LL;
  }
  *((_DWORD *)this + 64) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 232, 8u);
}
