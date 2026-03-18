/*
 * XREFs of ?ProcessSetSource@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NINEGRIDBRUSH_SETSOURCE@@@Z @ 0x180070A00
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ @ 0x180022644 (-ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800A9E50 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800AA098 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800AA228 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CNineGridBrush::ProcessSetSource(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct MILCMD_NINEGRIDBRUSH_SETSOURCE *a3)
{
  struct CResource *ResourceWithoutType; // rax
  struct CResource *v5; // rsi
  int v6; // eax
  unsigned int v7; // ebx

  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 2));
  v5 = ResourceWithoutType;
  if ( ResourceWithoutType != this[10] )
  {
    if ( ResourceWithoutType )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL))(
              ResourceWithoutType,
              16LL)
        && !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)v5 + 48LL))(v5, 124LL) )
      {
        v7 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x140u);
        return v7;
      }
      v6 = CResource::RegisterNotifier((CResource *)this, v5);
      v7 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x143u);
        return v7;
      }
    }
    CResource::UnRegisterNotifierInternal((CResource *)this, this[10]);
    this[10] = v5;
    CSpriteVisualContent::ReleasePrimitiveCaches((CSpriteVisualContent *)this);
  }
  return 0;
}
