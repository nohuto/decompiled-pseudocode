/*
 * XREFs of ?ProcessSetInput@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETINPUT@@@Z @ 0x180082F64
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ @ 0x180022644 (-ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x180070244 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800A9E50 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800AA098 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800AA228 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEffectBrush::ProcessSetInput(
        CEffectBrush *this,
        struct CResourceTable *a2,
        const struct MILCMD_EFFECTBRUSH_SETINPUT *a3)
{
  unsigned int v3; // ebx
  struct CResource *ResourceWithoutType; // rax
  struct CResource *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rbp
  unsigned int v12; // [rsp+20h] [rbp-28h]

  v3 = 0;
  if ( *((_QWORD *)this + 11) )
  {
    ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 3));
    v7 = ResourceWithoutType;
    if ( ResourceWithoutType
      && !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL))(
            ResourceWithoutType,
            124LL)
      && !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)v7 + 48LL))(v7, 59LL)
      && !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)v7 + 48LL))(v7, 16LL)
      && !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)v7 + 48LL))(v7, 8LL)
      && !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)v7 + 48LL))(v7, 138LL)
      && !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)v7 + 48LL))(v7, 93LL) )
    {
      v12 = 296;
LABEL_18:
      v3 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88980403, v12);
      return v3;
    }
    v8 = *((unsigned int *)a3 + 2);
    if ( (unsigned int)v8 >= *((_DWORD *)this + 34) )
    {
      v12 = 301;
      goto LABEL_18;
    }
    v9 = *((_QWORD *)this + 14);
    v10 = (unsigned int)v8;
    if ( *(_QWORD *)(v9 + 8 * v8) )
    {
      CResource::UnRegisterNotifierInternal(this, *(struct CResource **)(v9 + 8 * v8));
      *(_QWORD *)(v9 + 8 * v10) = 0LL;
    }
    if ( v7 )
    {
      *(_QWORD *)(*((_QWORD *)this + 14) + 8LL * *((unsigned int *)a3 + 2)) = v7;
      CResource::RegisterNotifier(this, v7);
    }
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((CMILRefCountBase **)this + 8);
    CSpriteVisualContent::ReleasePrimitiveCaches(this);
  }
  return v3;
}
