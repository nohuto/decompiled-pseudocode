/*
 * XREFs of ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x180026AD4
 * Callers:
 *     ?ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ @ 0x180025FD0 (-ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ProcessAddColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDCOLORRESOURCES@@PEBXI@Z @ 0x18002759C (-ProcessAddColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_AD.c)
 *     ??1CPrimitiveGroup@@MEAA@XZ @ 0x180028288 (--1CPrimitiveGroup@@MEAA@XZ.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?NotifyInvalidResource@CPrimitiveGroup@@UEAAXPEBVIDeviceResource@@@Z @ 0x180175070 (-NotifyInvalidResource@CPrimitiveGroup@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x180046690 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CPrimitiveGroup::ReleasePrimitiveCaches(CPrimitiveGroup *this, char a2)
{
  __int64 v4; // r14
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rcx

  if ( *((_DWORD *)this + 34) )
  {
    v4 = 0LL;
    v5 = *((unsigned int *)this + 34);
    do
    {
      v6 = *(_QWORD *)(v4 + *((_QWORD *)this + 14));
      CD2DResource::RemoveResourceNotifier((CD2DResource *)(v6 + 16), (CPrimitiveGroup *)((char *)this + 56));
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      v4 += 8LL;
      --v5;
    }
    while ( v5 );
  }
  *((_DWORD *)this + 34) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 112, 8LL);
  if ( *((_QWORD *)this + 20) )
  {
    v7 = *((_QWORD *)this + 20);
    if ( v7 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      *((_QWORD *)this + 20) = 0LL;
    }
    if ( a2 )
      (*(void (__fastcall **)(CPrimitiveGroup *, __int64))(*(_QWORD *)this + 64LL))(this, 5LL);
  }
}
