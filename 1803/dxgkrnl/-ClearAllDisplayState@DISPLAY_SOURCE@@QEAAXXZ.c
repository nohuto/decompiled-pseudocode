/*
 * XREFs of ?ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C0150E84
 * Callers:
 *     ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C00E1694 (-SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C01528D0 (-Destroy@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     ?Reset@DISPLAY_SOURCE@@AEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0157384 (-Reset@DISPLAY_SOURCE@@AEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAXXZ @ 0x1C00C3DF8 (-InvalidateCache@QDC_CACHE@@QEAAXXZ.c)
 *     ?ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C010DEE4 (-ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?IsDisplayPlaneConfigQueueEmpty@@YAEPEAU_DISPLAY_PLANE_CONFIG_QUEUE@@@Z @ 0x1C010DFF0 (-IsDisplayPlaneConfigQueueEmpty@@YAEPEAU_DISPLAY_PLANE_CONFIG_QUEUE@@@Z.c)
 *     ?IsPostCompositionConfigQueueEmpty@@YAEPEAU_POST_COMPOSITION_CONFIG_QUEUE@@@Z @ 0x1C010F320 (-IsPostCompositionConfigQueueEmpty@@YAEPEAU_POST_COMPOSITION_CONFIG_QUEUE@@@Z.c)
 *     ?RemovePlaneConfig@@YAXPEAU_DISPLAY_PLANE_CONFIG_QUEUE@@H@Z @ 0x1C0156880 (-RemovePlaneConfig@@YAXPEAU_DISPLAY_PLANE_CONFIG_QUEUE@@H@Z.c)
 *     ?RemovePostCompositionConfig@@YAXPEAU_POST_COMPOSITION_CONFIG_QUEUE@@H@Z @ 0x1C0156924 (-RemovePostCompositionConfig@@YAXPEAU_POST_COMPOSITION_CONFIG_QUEUE@@H@Z.c)
 */

void __fastcall DISPLAY_SOURCE::ClearAllDisplayState(DISPLAY_SOURCE *this)
{
  unsigned int i; // edi
  __int64 v3; // rsi
  __int64 v4; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  for ( i = 0; i < *((_DWORD *)this + 934); ++i )
  {
    while ( 1 )
    {
      v3 = 168LL * i;
      if ( IsDisplayPlaneConfigQueueEmpty((DISPLAY_SOURCE *)((char *)this + v3 + 1120)) )
        break;
      RemovePlaneConfig((DISPLAY_SOURCE *)((char *)this + v3 + 1120), *(_DWORD *)((char *)this + v3 + 1120));
    }
  }
  *((_DWORD *)this + 934) = 0;
  *((_BYTE *)this + 3744) = 0;
  while ( !IsPostCompositionConfigQueueEmpty((DISPLAY_SOURCE *)((char *)this + 2800)) )
    RemovePostCompositionConfig((DISPLAY_SOURCE *)((char *)this + 2800), *((_DWORD *)this + 700));
  DISPLAY_SOURCE::ClearAllQueryStateUnsafe(this);
  Global = DXGGLOBAL::GetGlobal(v4);
  QDC_CACHE::InvalidateCache(*((struct DXGFASTMUTEX *const **)Global + 127), v6, v7, v8);
}
