/*
 * XREFs of ?SetSurface@CSurfaceBrush@@IEAAJPEAVCResource@@@Z @ 0x180099478
 * Callers:
 *     ?ProcessSetSurface@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SURFACEBRUSH_SETSURFACE@@@Z @ 0x18009AA38 (-ProcessSetSurface@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SURFACEBRUSH_SETSURFACE@@@.c)
 * Callees:
 *     ?IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800479A0 (-IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18005122C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??4?$ComPtr@VIImageSource@@@WRL@Microsoft@@QEAAAEAV012@PEAVIImageSource@@@Z @ 0x180089E84 (--4-$ComPtr@VIImageSource@@@WRL@Microsoft@@QEAAAEAV012@PEAVIImageSource@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?SetForHwndBitmap@CCachedVisualImage@@QEAAX_N@Z @ 0x180182840 (-SetForHwndBitmap@CCachedVisualImage@@QEAAX_N@Z.c)
 */

__int64 __fastcall CSurfaceBrush::SetSurface(struct CResource **this, struct CResource *a2)
{
  unsigned int v2; // ebx
  CRenderTargetImageSource *v5; // rbp
  bool (__fastcall *v6)(__int64, int); // rax
  bool v7; // al
  int v8; // eax

  v2 = 0;
  if ( a2 != this[11] )
  {
    v5 = 0LL;
    if ( a2 )
    {
      v6 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)a2 + 48LL);
      if ( v6 == CCompositionSurfaceBitmap::IsOfType )
        v7 = CCompositionSurfaceBitmap::IsOfType((__int64)a2, 37);
      else
        v7 = v6((__int64)a2, 37);
      if ( v7 )
      {
        v5 = (struct CResource *)((char *)a2 + 64);
      }
      else if ( (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 15LL) )
      {
        *((_BYTE *)a2 + 361) = 1;
        CCachedVisualImage::SetForHwndBitmap((struct CResource *)((char *)a2 - 16), 0);
        v5 = (CRenderTargetImageSource *)(((unsigned __int64)a2 - 8) & -(__int64)(a2 != (struct CResource *)16));
      }
      else if ( !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 106LL) )
      {
        v2 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x380u);
        return v2;
      }
      v8 = CResource::RegisterNotifier((CResource *)this, a2);
      v2 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x383u);
        return v2;
      }
    }
    CResource::UnRegisterNotifierInternal((CResource *)this, this[11]);
    this[11] = a2;
    Microsoft::WRL::ComPtr<IImageSource>::operator=(this + 12, v5);
  }
  return v2;
}
