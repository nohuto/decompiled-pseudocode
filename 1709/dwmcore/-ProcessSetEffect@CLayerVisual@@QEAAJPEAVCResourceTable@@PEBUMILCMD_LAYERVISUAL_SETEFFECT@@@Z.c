/*
 * XREFs of ?ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LAYERVISUAL_SETEFFECT@@@Z @ 0x180083320
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180051190 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ClearTreeEffect@CLayerVisual@@AEAAXXZ @ 0x180083498 (-ClearTreeEffect@CLayerVisual@@AEAAXXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800950C8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800A9E50 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800AA098 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AA2B0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLayerVisual::ProcessSetEffect(
        CLayerVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_LAYERVISUAL_SETEFFECT *a3)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  struct CResource *Resource; // rsi
  _QWORD *v8; // rax
  struct CResource **v9; // r14
  int v10; // eax
  struct CResource *v11; // rcx
  DWORD v13; // r9d
  unsigned int v14; // [rsp+20h] [rbp-18h]

  v4 = 0;
  v5 = *((unsigned int *)a3 + 2);
  if ( !(_DWORD)v5 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(CLayerVisual *))(*(_QWORD *)this + 176LL))(this) )
      return v4;
    CLayerVisual::ClearTreeEffect(this);
    goto LABEL_11;
  }
  Resource = (struct CResource *)CResourceTable::GetResource(a2, v5, 46LL);
  if ( !Resource )
  {
    v4 = -2003303421;
    v14 = 44;
LABEL_15:
    v13 = v4;
    goto LABEL_17;
  }
  if ( (*(unsigned __int8 (__fastcall **)(CLayerVisual *))(*(_QWORD *)this + 176LL))(this) )
    goto LABEL_6;
  v8 = WPF::ProcessHeapImpl::AllocClear(0x10uLL);
  if ( !v8 )
  {
    v4 = -2147024882;
    v14 = 50;
    goto LABEL_15;
  }
  *v8 = 0LL;
  v8[1] = 0LL;
  *v8 = 0LL;
  *((_QWORD *)this + 65) = v8;
LABEL_6:
  v9 = (struct CResource **)(*(__int64 (__fastcall **)(CLayerVisual *))(*(_QWORD *)this + 184LL))(this);
  if ( *v9 != Resource )
  {
    v10 = CResource::RegisterNotifier(this, Resource);
    v4 = v10;
    if ( v10 >= 0 )
    {
      CResource::UnRegisterNotifierInternal(this, *v9);
      if ( *v9 != Resource )
      {
        (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)Resource + 8LL))(Resource);
        v11 = *v9;
        *v9 = Resource;
        if ( v11 )
          (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v11 + 16LL))(v11);
      }
LABEL_11:
      CVisual::PropagateFlags((__int64)this, 5u, 0);
      return v4;
    }
    v14 = 60;
    v13 = v10;
LABEL_17:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, v14);
  }
  return v4;
}
