/*
 * XREFs of ?ProcessSetTransform@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SURFACEBRUSH_SETTRANSFORM@@@Z @ 0x1800392D8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034728 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180034FA4 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18005B2C0 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ @ 0x18008D4C4 (-ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ.c)
 *     ?IsOfType@CComponentTransform2D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AC2B0 (-IsOfType@CComponentTransform2D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::ProcessSetTransform(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct MILCMD_SURFACEBRUSH_SETTRANSFORM *a3)
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
  if ( ResourceWithoutType != this[14] )
  {
    if ( ResourceWithoutType )
    {
      v7 = *(__int64 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL);
      if ( (char *)v7 == (char *)CComponentTransform2D::IsOfType )
        v8 = CComponentTransform2D::IsOfType(v6, 28LL);
      else
        v8 = v7(v6, 28LL);
      if ( !v8 )
      {
        v4 = -2003303421;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xD4u);
        return v4;
      }
      v9 = CResource::RegisterNotifier((CResource *)this, v6);
      v4 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xD7u);
        return v4;
      }
      CResource::UnRegisterNotifierInternal((CResource *)this, this[14]);
      this[14] = v6;
    }
    else
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[14]);
      this[14] = 0LL;
    }
    CSpriteVisualContent::ReleasePrimitiveCaches((CSpriteVisualContent *)this);
  }
  return v4;
}
