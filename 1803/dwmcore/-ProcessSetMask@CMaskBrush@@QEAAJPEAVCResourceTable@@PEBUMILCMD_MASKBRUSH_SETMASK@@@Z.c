/*
 * XREFs of ?ProcessSetMask@CMaskBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MASKBRUSH_SETMASK@@@Z @ 0x180099270
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18002D108 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18005122C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsValidMaskResource@CMaskBrush@@CA_NPEBVCResource@@@Z @ 0x1800C35B0 (-IsValidMaskResource@CMaskBrush@@CA_NPEBVCResource@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMaskBrush::ProcessSetMask(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct MILCMD_MASKBRUSH_SETMASK *a3)
{
  const struct CResource *ResourceWithoutType; // rax
  struct CResource *v5; // rsi
  int v6; // eax
  unsigned int v7; // ebx
  struct CResource *v8; // rdx
  unsigned int v9; // ebx
  __int64 (__fastcall *v10)(CVisual *, struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden), CCompositionSurfaceBitmap *); // rax

  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 2));
  v5 = ResourceWithoutType;
  if ( ResourceWithoutType != this[9] )
  {
    if ( ResourceWithoutType )
    {
      if ( !CMaskBrush::IsValidMaskResource(ResourceWithoutType) )
      {
        v7 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0xD9u);
        return v7;
      }
      v6 = CResource::RegisterNotifier((CResource *)this, v5);
      v7 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xDCu);
        return v7;
      }
    }
    v8 = this[9];
    if ( v8 && v5 )
      v9 = 0;
    else
      v9 = 14;
    CResource::UnRegisterNotifierInternal((CResource *)this, v8);
    this[9] = v5;
    v10 = (__int64 (__fastcall *)(CVisual *, struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden), CCompositionSurfaceBitmap *))*((_QWORD *)*this + 8);
    if ( v10 == CResource::NotifyOnChanged )
      CResource::NotifyOnChanged(
        (CVisual *)this,
        (struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden))v9,
        (CCompositionSurfaceBitmap *)this);
    else
      v10(
        (CVisual *)this,
        (struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden))v9,
        (CCompositionSurfaceBitmap *)this);
  }
  return 0;
}
