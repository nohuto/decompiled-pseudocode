/*
 * XREFs of ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x18004C4BC
 * Callers:
 *     ?ProcessAddColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDCOLORRESOURCES@@PEBXI@Z @ 0x18000CA84 (-ProcessAddColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_AD.c)
 *     ?ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ @ 0x18004C3B0 (-ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ.c)
 *     ??1CPrimitiveGroup@@MEAA@XZ @ 0x18004CAD8 (--1CPrimitiveGroup@@MEAA@XZ.c)
 *     ?ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDPRIMITIVES@@@Z @ 0x18004CB80 (-ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDPRI.c)
 *     ?ProcessAddSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDSURFACERESOURCES@@PEBXI@Z @ 0x18004CC48 (-ProcessAddSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?NotifyInvalidResource@CPrimitiveGroup@@UEAAXPEBVIDeviceResource@@@Z @ 0x180166300 (-NotifyInvalidResource@CPrimitiveGroup@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?Release@CDxHandleYUVBitmapRealization@@UEAAKXZ @ 0x180047190 (-Release@CDxHandleYUVBitmapRealization@@UEAAKXZ.c)
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x18004BD30 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CPrimitiveGroup::ReleasePrimitiveCaches(CPrimitiveGroup *this, char a2)
{
  CMILRefCountBase *v4; // rcx
  void (*v5)(void); // rax
  __int64 v6; // rdi
  __int64 v7; // rsi
  CDxHandleYUVBitmapRealization *v8; // r14
  unsigned int (__fastcall *v9)(CDxHandleYUVBitmapRealization *); // rax

  if ( *((_DWORD *)this + 34) )
  {
    v6 = 0LL;
    v7 = *((unsigned int *)this + 34);
    do
    {
      v8 = *(CDxHandleYUVBitmapRealization **)(v6 + *((_QWORD *)this + 14));
      CD2DResource::RemoveResourceNotifier(
        (CDxHandleYUVBitmapRealization *)((char *)v8 + 16),
        (CPrimitiveGroup *)((char *)this + 56));
      v9 = *(unsigned int (__fastcall **)(CDxHandleYUVBitmapRealization *))(*(_QWORD *)v8 + 16LL);
      if ( v9 == CDxHandleYUVBitmapRealization::Release )
        CDxHandleYUVBitmapRealization::Release(v8);
      else
        v9(v8);
      v6 += 8LL;
      --v7;
    }
    while ( v7 );
  }
  *((_DWORD *)this + 34) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 112, 8LL);
  v4 = (CMILRefCountBase *)*((_QWORD *)this + 20);
  if ( v4 )
  {
    v5 = *(void (**)(void))(*(_QWORD *)v4 + 8LL);
    if ( (char *)v5 == (char *)CMILRefCountBase::Release )
      CMILRefCountBase::Release(v4);
    else
      v5();
    *((_QWORD *)this + 20) = 0LL;
  }
  if ( a2 )
    CResource::NotifyOnChanged(this, 5LL, 0LL);
}
