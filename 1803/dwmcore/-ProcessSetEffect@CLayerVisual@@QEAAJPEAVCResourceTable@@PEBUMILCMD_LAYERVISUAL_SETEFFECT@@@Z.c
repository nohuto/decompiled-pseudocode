/*
 * XREFs of ?ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LAYERVISUAL_SETEFFECT@@@Z @ 0x18000A1B0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?ClearTreeEffect@CLayerVisual@@AEAAXXZ @ 0x180009DF8 (-ClearTreeEffect@CLayerVisual@@AEAAXXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18002B3E4 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18002D230 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18004FFC0 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18005122C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
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
  int v13; // r9d
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
  Resource = (struct CResource *)CResourceTable::GetResource(a2, v5, 51LL);
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
  *((_QWORD *)this + 66) = v8;
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
      CVisual::PropagateFlags(this, 5LL);
      return v4;
    }
    v14 = 60;
    v13 = v10;
LABEL_17:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, v14);
  }
  return v4;
}
