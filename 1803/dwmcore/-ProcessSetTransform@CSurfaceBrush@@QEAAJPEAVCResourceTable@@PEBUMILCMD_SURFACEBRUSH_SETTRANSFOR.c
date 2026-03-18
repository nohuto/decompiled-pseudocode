/*
 * XREFs of ?ProcessSetTransform@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SURFACEBRUSH_SETTRANSFORM@@@Z @ 0x18009AB34
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18002D108 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18005122C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsOfType@CComponentTransform2D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180096F30 (-IsOfType@CComponentTransform2D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::ProcessSetTransform(
        CSurfaceBrush *this,
        struct CResourceTable *a2,
        const struct MILCMD_SURFACEBRUSH_SETTRANSFORM *a3)
{
  unsigned int v4; // esi
  struct CResource *ResourceWithoutType; // rax
  struct CResource *v6; // rdx
  struct CResource *v7; // rdi
  char (__fastcall *v8)(__int64, int); // rax
  char v9; // al
  int v10; // eax
  __int64 (__fastcall *v11)(CVisual *, struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden), CCompositionSurfaceBitmap *); // rax

  v4 = 0;
  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 2));
  v6 = (struct CResource *)*((_QWORD *)this + 13);
  v7 = ResourceWithoutType;
  if ( ResourceWithoutType != v6 )
  {
    if ( ResourceWithoutType )
    {
      v8 = *(char (__fastcall **)(__int64, int))(*(_QWORD *)ResourceWithoutType + 48LL);
      if ( v8 == CComponentTransform2D::IsOfType )
        v9 = CComponentTransform2D::IsOfType((__int64)v7, 25);
      else
        v9 = v8((__int64)v7, 25);
      if ( !v9 )
      {
        v4 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0xC0u);
        return v4;
      }
      v10 = CResource::RegisterNotifier(this, v7);
      v4 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xC3u);
        return v4;
      }
      CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 13));
      *((_QWORD *)this + 13) = 0LL;
    }
    else
    {
      CResource::UnRegisterNotifierInternal(this, v6);
      v7 = 0LL;
    }
    *((_QWORD *)this + 13) = v7;
    v11 = *(__int64 (__fastcall **)(CVisual *, struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden), CCompositionSurfaceBitmap *))(*(_QWORD *)this + 64LL);
    if ( v11 == CResource::NotifyOnChanged )
      CResource::NotifyOnChanged(this, 0LL, this);
    else
      v11(this, 0LL, this);
  }
  return v4;
}
