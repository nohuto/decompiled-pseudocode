/*
 * XREFs of ?ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LAYERVISUAL_SETEFFECT@@@Z @ 0x1800140B0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?SetTreeEffectInternal@CVisual@@QEAAXPEAVCTreeEffect@@@Z @ 0x1800130C8 (-SetTreeEffectInternal@CVisual@@QEAAXPEAVCTreeEffect@@@Z.c)
 *     ?GetTreeEffectInternal@CVisual@@QEBAPEAVCTreeEffect@@XZ @ 0x1800136BC (-GetTreeEffectInternal@CVisual@@QEBAPEAVCTreeEffect@@XZ.c)
 *     ?ClearTreeEffect@CLayerVisual@@AEAAXXZ @ 0x180013ECC (-ClearTreeEffect@CLayerVisual@@AEAAXXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034728 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180034FA4 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800576D8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18005B2F0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z @ 0x180083880 (-PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLayerVisual::ProcessSetEffect(
        CLayerVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_LAYERVISUAL_SETEFFECT *a3)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  struct CResource *Resource; // rsi
  struct CTreeEffect *v8; // rax
  struct CResource **TreeEffectInternal; // r14
  int v10; // eax
  struct CResource *v11; // rcx
  int v13; // r9d
  unsigned int v14; // [rsp+20h] [rbp-28h]

  v4 = 0;
  v5 = *((unsigned int *)a3 + 2);
  if ( (_DWORD)v5 )
  {
    Resource = (struct CResource *)CResourceTable::GetResource(a2, v5, 85LL);
    if ( Resource )
    {
      if ( (*(_DWORD *)(*((_QWORD *)this + 26) + 4LL) & 0x10000) != 0 )
      {
LABEL_6:
        TreeEffectInternal = (struct CResource **)CVisual::GetTreeEffectInternal(this);
        if ( *TreeEffectInternal == Resource )
          return v4;
        v10 = CResource::RegisterNotifier(this, Resource);
        v4 = v10;
        if ( v10 >= 0 )
        {
          CResource::UnRegisterNotifierInternal(this, *TreeEffectInternal);
          if ( *TreeEffectInternal != Resource )
          {
            (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)Resource + 8LL))(Resource);
            v11 = *TreeEffectInternal;
            *TreeEffectInternal = Resource;
            if ( v11 )
              (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v11 + 16LL))(v11);
          }
          CVisual::PropagateFlags(this, 1, 1, 0, 0, 0, 0, 0);
          return v4;
        }
        v14 = 60;
        v13 = v10;
LABEL_19:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, v14);
        return v4;
      }
      v8 = (struct CTreeEffect *)WPF::ProcessHeapImpl::AllocClear(0x10uLL);
      if ( v8 )
      {
        *(_QWORD *)v8 = 0LL;
        *((_QWORD *)v8 + 1) = 0LL;
        *(_QWORD *)v8 = 0LL;
        CVisual::SetTreeEffectInternal(this, v8);
        goto LABEL_6;
      }
      v4 = -2147024882;
      v14 = 50;
    }
    else
    {
      v4 = -2003303421;
      v14 = 44;
    }
    v13 = v4;
    goto LABEL_19;
  }
  if ( (*(_DWORD *)(*((_QWORD *)this + 26) + 4LL) & 0x10000) != 0 )
  {
    CLayerVisual::ClearTreeEffect(this);
    CVisual::PropagateFlags(this, 1, 1, 0, 0, 0, 0, 0);
  }
  return v4;
}
