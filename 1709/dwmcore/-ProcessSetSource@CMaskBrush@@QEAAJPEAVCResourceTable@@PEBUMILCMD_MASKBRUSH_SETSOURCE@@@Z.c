/*
 * XREFs of ?ProcessSetSource@CMaskBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MASKBRUSH_SETSOURCE@@@Z @ 0x180024560
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ @ 0x180022644 (-ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x180070244 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180070CF0 (-IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CLinearGradientBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180070F60 (-IsOfType@CLinearGradientBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsOfType@CEffectBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800825B0 (-IsOfType@CEffectBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800A9E50 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800AA098 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800AA228 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMaskBrush::ProcessSetSource(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct MILCMD_MASKBRUSH_SETSOURCE *a3)
{
  struct CResource *ResourceWithoutType; // rax
  struct CResource *v5; // rbx
  __int64 (__fastcall *v6)(struct CResource *, __int64); // rax
  char v7; // al
  int v8; // eax
  unsigned int v9; // edi
  __int64 (__fastcall *v11)(struct CResource *, __int64); // rax
  char v12; // al
  __int64 (__fastcall *v13)(struct CResource *, __int64); // rax
  char v14; // al
  __int64 (__fastcall *v15)(struct CResource *, __int64); // rax
  char v16; // al

  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 2));
  v5 = ResourceWithoutType;
  if ( ResourceWithoutType != this[11] )
  {
    if ( ResourceWithoutType )
    {
      v6 = *(__int64 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL);
      if ( (char *)v6 == (char *)CColorBrush::IsOfType )
      {
        v7 = CColorBrush::IsOfType(v5, 16LL);
      }
      else if ( (char *)v6 == (char *)CLinearGradientBrush::IsOfType )
      {
        v7 = CLinearGradientBrush::IsOfType(v5, 16LL);
      }
      else if ( (char *)v6 == (char *)CEffectBrush::IsOfType )
      {
        v7 = CEffectBrush::IsOfType(v5, 16LL);
      }
      else
      {
        v7 = v6(v5, 16LL);
      }
      if ( !v7 )
      {
        v11 = *(__int64 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)v5 + 48LL);
        if ( (char *)v11 == (char *)CLinearGradientBrush::IsOfType )
          v12 = CLinearGradientBrush::IsOfType(v5, 124LL);
        else
          v12 = (char *)v11 == (char *)CEffectBrush::IsOfType ? CEffectBrush::IsOfType(v5, 124LL) : v11(v5, 124LL);
        if ( !v12 )
        {
          v13 = *(__int64 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)v5 + 48LL);
          if ( (char *)v13 == (char *)CLinearGradientBrush::IsOfType )
            v14 = CLinearGradientBrush::IsOfType(v5, 59LL);
          else
            v14 = (char *)v13 == (char *)CEffectBrush::IsOfType ? CEffectBrush::IsOfType(v5, 59LL) : v13(v5, 59LL);
          if ( !v14 )
          {
            v15 = *(__int64 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)v5 + 48LL);
            v16 = (char *)v15 == (char *)CEffectBrush::IsOfType ? CEffectBrush::IsOfType(v5, 46LL) : v15(v5, 46LL);
            if ( !v16
              && !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)v5 + 48LL))(v5, 93LL) )
            {
              v9 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0xE3u);
              return v9;
            }
          }
        }
      }
      v8 = CResource::RegisterNotifier((CResource *)this, v5);
      v9 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xE6u);
        return v9;
      }
    }
    CResource::UnRegisterNotifierInternal((CResource *)this, this[11]);
    this[11] = v5;
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(this + 8);
    CSpriteVisualContent::ReleasePrimitiveCaches((CSpriteVisualContent *)this);
  }
  return 0;
}
