/*
 * XREFs of ?ProcessSetInput@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETINPUT@@@Z @ 0x18001107C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x180005BBC (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034728 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180034FA4 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18005B2C0 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ @ 0x18008D4C4 (-ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEffectBrush::ProcessSetInput(
        CEffectBrush *this,
        struct CResourceTable *a2,
        const struct MILCMD_EFFECTBRUSH_SETINPUT *a3)
{
  unsigned int v3; // ebx
  struct CResource *ResourceWithoutType; // rax
  struct CResource *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rbp
  unsigned int v12; // [rsp+20h] [rbp-28h]

  v3 = 0;
  if ( !*((_QWORD *)this + 11) )
    return v3;
  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 3));
  v8 = ResourceWithoutType;
  if ( ResourceWithoutType
    && !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL))(
          ResourceWithoutType,
          84LL)
    && !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)v8 + 48LL))(v8, 82LL)
    && !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)v8 + 48LL))(v8, 83LL)
    && !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)v8 + 48LL))(v8, 89LL)
    && !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)v8 + 48LL))(v8, 88LL) )
  {
    v12 = 295;
LABEL_17:
    v3 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, v12);
    return v3;
  }
  v9 = *((unsigned int *)a3 + 2);
  if ( (unsigned int)v9 >= *((_DWORD *)this + 34) )
  {
    v12 = 300;
    goto LABEL_17;
  }
  v10 = *((_QWORD *)this + 14);
  v11 = (unsigned int)v9;
  if ( *(_QWORD *)(v10 + 8 * v9) )
  {
    CResource::UnRegisterNotifierInternal(this, *(struct CResource **)(v10 + 8 * v9));
    *(_QWORD *)(v10 + 8 * v11) = 0LL;
  }
  if ( v8 )
  {
    *(_QWORD *)(*((_QWORD *)this + 14) + 8LL * *((unsigned int *)a3 + 2)) = v8;
    CResource::RegisterNotifier(this, v8);
  }
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)this + 8);
  CSpriteVisualContent::ReleasePrimitiveCaches(this);
  return v3;
}
