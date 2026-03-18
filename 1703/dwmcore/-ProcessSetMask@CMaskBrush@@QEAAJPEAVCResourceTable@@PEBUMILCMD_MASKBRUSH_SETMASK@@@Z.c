/*
 * XREFs of ?ProcessSetMask@CMaskBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MASKBRUSH_SETMASK@@@Z @ 0x180039AA8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x180005BBC (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034728 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180034FA4 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180037F70 (-IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18005B2C0 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ @ 0x18008D4C4 (-ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMaskBrush::ProcessSetMask(
        CMaskBrush *this,
        struct CResourceTable *a2,
        const struct MILCMD_MASKBRUSH_SETMASK *a3)
{
  struct CResource *ResourceWithoutType; // rax
  struct CResource *v5; // rbx
  _BOOL8 (__fastcall *v6)(__int64, int); // rax
  bool v7; // al
  int v8; // eax
  unsigned int v9; // esi

  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 2));
  v5 = ResourceWithoutType;
  if ( ResourceWithoutType != *((struct CResource **)this + 10) )
  {
    if ( ResourceWithoutType )
    {
      v6 = *(_BOOL8 (__fastcall **)(__int64, int))(*(_QWORD *)ResourceWithoutType + 48LL);
      if ( v6 == CSurfaceBrush::IsOfType )
        v7 = CSurfaceBrush::IsOfType((__int64)v5, 84);
      else
        v7 = v6((__int64)v5, 84);
      if ( !v7 && !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)v5 + 48LL))(v5, 88LL) )
      {
        v9 = -2003303421;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x10Eu);
        return v9;
      }
      v8 = CResource::RegisterNotifier(this, v5);
      v9 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x111u);
        return v9;
      }
    }
    if ( !*((_QWORD *)this + 10) || !v5 )
      Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)this + 8);
    CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 10));
    *((_QWORD *)this + 10) = v5;
    CSpriteVisualContent::ReleasePrimitiveCaches(this);
  }
  return 0;
}
