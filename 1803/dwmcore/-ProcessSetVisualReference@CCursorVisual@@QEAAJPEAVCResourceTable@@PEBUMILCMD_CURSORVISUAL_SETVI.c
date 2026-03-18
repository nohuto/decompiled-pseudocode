/*
 * XREFs of ?ProcessSetVisualReference@CCursorVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CURSORVISUAL_SETVISUALREFERENCE@@@Z @ 0x180188710
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18002D230 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18005122C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetDesktopId@CCursorVisual@@AEAAIPEAVCVisual@@@Z @ 0x180188604 (-GetDesktopId@CCursorVisual@@AEAAIPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CCursorVisual::ProcessSetVisualReference(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct MILCMD_CURSORVISUAL_SETVISUALREFERENCE *a3)
{
  unsigned int v6; // edi
  unsigned int v7; // edx
  struct CResource *Resource; // rax
  struct CResource *v9; // rcx
  struct CVisual *v10; // rax
  CCursorVisual *v11; // rcx

  CResource::UnRegisterNotifierInternal((CResource *)this, this[68]);
  v6 = 0;
  this[68] = 0LL;
  v7 = *((_DWORD *)a3 + 2);
  if ( v7 )
  {
    Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v7, 0x9Au);
    if ( Resource )
    {
      this[68] = Resource;
      CResource::RegisterNotifier((CResource *)this, Resource);
      v9 = this[68];
      if ( v9 )
      {
        v10 = (struct CVisual *)(*(__int64 (__fastcall **)(struct CResource *))(*(_QWORD *)v9 + 152LL))(v9);
        if ( v10 )
          *((_DWORD *)this + 133) = CCursorVisual::GetDesktopId(v11, v10);
      }
    }
    else
    {
      v6 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x6Fu);
    }
  }
  return v6;
}
