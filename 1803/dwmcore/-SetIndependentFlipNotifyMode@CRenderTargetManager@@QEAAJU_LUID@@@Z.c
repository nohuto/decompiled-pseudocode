/*
 * XREFs of ?SetIndependentFlipNotifyMode@CRenderTargetManager@@QEAAJU_LUID@@@Z @ 0x1801525BC
 * Callers:
 *     ?SetCompositionMode@CCompositionSurfaceInfo@@QEAAXW4BufferCompositionMode@@_N@Z @ 0x180008F30 (-SetCompositionMode@CCompositionSurfaceInfo@@QEAAXW4BufferCompositionMode@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?SetIndependentFlipNotifyMode@COverlayContext@@QEAAJU_LUID@@@Z @ 0x180167868 (-SetIndependentFlipNotifyMode@COverlayContext@@QEAAJU_LUID@@@Z.c)
 */

__int64 __fastcall CRenderTargetManager::SetIndependentFlipNotifyMode(CRenderTargetManager *this, struct _LUID a2)
{
  unsigned int v2; // edi
  __int64 v3; // rsi
  __int64 v6; // rcx
  COverlayContext *v7; // rcx
  int v8; // eax

  v2 = 0;
  v3 = 0LL;
  if ( *((_DWORD *)this + 12) )
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v3);
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 48LL))(v6, 76LL) )
      {
        v7 = *(COverlayContext **)(*(_QWORD *)(*((_QWORD *)this + 3) + 8 * v3) + 840LL);
        if ( v7 )
        {
          v8 = COverlayContext::SetIndependentFlipNotifyMode(v7, a2);
          v2 = v8;
          if ( v8 < 0 )
            break;
        }
      }
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *((_DWORD *)this + 12) )
        return v2;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x392u);
  }
  return v2;
}
