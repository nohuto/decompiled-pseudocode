/*
 * XREFs of ?ProcessSetTransform@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GRADIENTBRUSH_SETTRANSFORM@@@Z @ 0x18007164C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ @ 0x180022644 (-ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsOfType@CComponentTransform2D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180095160 (-IsOfType@CComponentTransform2D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800A9E50 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800AA098 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800AA228 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGradientBrush::ProcessSetTransform(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct MILCMD_GRADIENTBRUSH_SETTRANSFORM *a3)
{
  unsigned int v4; // edi
  struct CResource *ResourceWithoutType; // rax
  struct CResource *v6; // rsi
  __int64 (__fastcall *v7)(struct CResource *, __int64); // rax
  char v8; // al
  int v9; // eax

  v4 = 0;
  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 2));
  v6 = ResourceWithoutType;
  if ( ResourceWithoutType != this[20] )
  {
    if ( ResourceWithoutType )
    {
      v7 = *(__int64 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL);
      if ( (char *)v7 == (char *)CComponentTransform2D::IsOfType )
        v8 = CComponentTransform2D::IsOfType(v6, 23LL);
      else
        v8 = v7(v6, 23LL);
      if ( !v8 )
      {
        v4 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x9Du);
        return v4;
      }
      v9 = CResource::RegisterNotifier((CResource *)this, v6);
      v4 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xA0u);
        return v4;
      }
      CResource::UnRegisterNotifierInternal((CResource *)this, this[20]);
      this[20] = v6;
    }
    else
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[20]);
      this[20] = 0LL;
    }
    CSpriteVisualContent::ReleasePrimitiveCaches((CSpriteVisualContent *)this);
  }
  return v4;
}
