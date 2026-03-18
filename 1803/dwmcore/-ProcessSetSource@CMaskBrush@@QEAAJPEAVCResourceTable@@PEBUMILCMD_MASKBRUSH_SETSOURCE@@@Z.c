/*
 * XREFs of ?ProcessSetSource@CMaskBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MASKBRUSH_SETSOURCE@@@Z @ 0x180099324
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18002D108 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18005122C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsValidSourceResource@CMaskBrush@@CA_NPEBVCResource@@@Z @ 0x1800C2ED8 (-IsValidSourceResource@CMaskBrush@@CA_NPEBVCResource@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMaskBrush::ProcessSetSource(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct MILCMD_MASKBRUSH_SETSOURCE *a3)
{
  const struct CResource *ResourceWithoutType; // rax
  struct CResource *v5; // rsi
  int v6; // eax
  unsigned int v7; // ebx
  struct CResource *v8; // rax
  __int64 (__fastcall *v9)(CVisual *, struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden), CCompositionSurfaceBitmap *); // rax

  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 2));
  v5 = ResourceWithoutType;
  if ( ResourceWithoutType != this[10] )
  {
    if ( ResourceWithoutType )
    {
      if ( !CMaskBrush::IsValidSourceResource(ResourceWithoutType) )
      {
        v7 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0xAFu);
        return v7;
      }
      v6 = CResource::RegisterNotifier((CResource *)this, v5);
      v7 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xB2u);
        return v7;
      }
    }
    CResource::UnRegisterNotifierInternal((CResource *)this, this[10]);
    v8 = *this;
    this[10] = v5;
    v9 = (__int64 (__fastcall *)(CVisual *, struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden), CCompositionSurfaceBitmap *))*((_QWORD *)v8 + 8);
    if ( v9 == CResource::NotifyOnChanged )
      CResource::NotifyOnChanged(
        (CVisual *)this,
        (struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden))0xE,
        0LL);
    else
      ((void (__fastcall *)(struct CResource **, __int64))v9)(this, 14LL);
  }
  return 0;
}
