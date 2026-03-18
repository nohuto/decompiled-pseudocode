/*
 * XREFs of ?ProcessSetSource@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NINEGRIDBRUSH_SETSOURCE@@@Z @ 0x180029C98
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18002D108 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18005122C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsValidSourceResource@CNineGridBrush@@CA_NPEBVCResource@@@Z @ 0x1800C5958 (-IsValidSourceResource@CNineGridBrush@@CA_NPEBVCResource@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CNineGridBrush::ProcessSetSource(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct MILCMD_NINEGRIDBRUSH_SETSOURCE *a3)
{
  const struct CResource *ResourceWithoutType; // rax
  struct CResource *v5; // rsi
  int v6; // eax
  unsigned int v7; // ebx
  struct CResource *v8; // rax
  void (__fastcall *v9)(struct CResource **, __int64); // rax

  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 2));
  v5 = ResourceWithoutType;
  if ( ResourceWithoutType != this[9] )
  {
    if ( ResourceWithoutType )
    {
      if ( !CNineGridBrush::IsValidSourceResource(ResourceWithoutType) )
      {
        v7 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x117u);
        return v7;
      }
      v6 = CResource::RegisterNotifier((CResource *)this, v5);
      v7 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x11Au);
        return v7;
      }
    }
    CResource::UnRegisterNotifierInternal((CResource *)this, this[9]);
    v8 = *this;
    this[9] = v5;
    v9 = (void (__fastcall *)(struct CResource **, __int64))*((_QWORD *)v8 + 8);
    if ( (char *)v9 == (char *)CResource::NotifyOnChanged )
      CResource::NotifyOnChanged(this, 14LL, 0LL);
    else
      v9(this, 14LL);
  }
  return 0;
}
