/*
 * XREFs of ?ProcessSetGeometry@CSpriteVectorShape@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPRITEVECTORSHAPE_SETGEOMETRY@@@Z @ 0x1801A4F18
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18002D108 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18005122C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSpriteVectorShape::ProcessSetGeometry(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct MILCMD_SPRITEVECTORSHAPE_SETGEOMETRY *a3)
{
  unsigned int v4; // ebx
  struct CResource *ResourceWithoutType; // rax
  struct CResource *v6; // rdi
  int v7; // eax

  v4 = 0;
  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 2));
  v6 = ResourceWithoutType;
  if ( ResourceWithoutType != this[13] )
  {
    if ( !ResourceWithoutType
      || (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL))(
           ResourceWithoutType,
           60LL) )
    {
      v7 = CResource::RegisterNotifier((CResource *)this, v6);
      v4 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xA0u);
      }
      else
      {
        CResource::UnRegisterNotifierInternal((CResource *)this, this[13]);
        this[13] = v6;
        CResource::NotifyOnChanged((CVisual *)this, 0LL, 0LL);
      }
    }
    else
    {
      v4 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x9Du);
    }
  }
  return v4;
}
