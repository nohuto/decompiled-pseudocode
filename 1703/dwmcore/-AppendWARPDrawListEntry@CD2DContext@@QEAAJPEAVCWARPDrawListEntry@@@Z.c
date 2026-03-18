/*
 * XREFs of ?AppendWARPDrawListEntry@CD2DContext@@QEAAJPEAVCWARPDrawListEntry@@@Z @ 0x180197CD8
 * Callers:
 *     ?Render@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x18015EB80 (-Render@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x1800AC7C4 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x1800AC894 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?AppendDrawListEntryToCallbackRenderer@CCallbackRendererManager@@QEAAJPEAVCDrawListEntry@@PEAUID2D1PrivateCompositorRenderer@@@Z @ 0x1801338D4 (-AppendDrawListEntryToCallbackRenderer@CCallbackRendererManager@@QEAAJPEAVCDrawListEntry@@PEAUID.c)
 *     ?GetNextWARPCallbackRenderer@CCallbackRendererManager@@IEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCWARPCallbackRenderer@@@Z @ 0x1801BB7CC (-GetNextWARPCallbackRenderer@CCallbackRendererManager@@IEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCWARPCa.c)
 */

__int64 __fastcall CD2DContext::AppendWARPDrawListEntry(
        struct CWARPCallbackRenderer **this,
        struct CWARPDrawListEntry *a2)
{
  struct ID2D1PrivateCompositorRenderer *v4; // r8
  char *v5; // rdi
  struct CD3DDeviceLevel1 *v6; // rax
  int NextWARPCallbackRenderer; // eax
  int v8; // ebx
  int appended; // eax

  if ( this[58] )
    CD2DContext::FlushDrawList((CD2DContext *)this);
  CD2DContext::EnsureBeginDraw((CD2DContext *)this);
  v5 = (char *)(this + 59);
  if ( this[59]
    || (v6 = (struct CD3DDeviceLevel1 *)(*((__int64 (__fastcall **)(struct CWARPCallbackRenderer **))*this + 22))(this),
        NextWARPCallbackRenderer = CCallbackRendererManager::GetNextWARPCallbackRenderer(
                                     (CCallbackRendererManager *)(this + 1),
                                     v6,
                                     this + 59),
        v8 = NextWARPCallbackRenderer,
        NextWARPCallbackRenderer >= 0) )
  {
    appended = CCallbackRendererManager::AppendDrawListEntryToCallbackRenderer(
                 (CCallbackRendererManager *)(*(_QWORD *)(*(_QWORD *)v5 + 24LL) + 8LL),
                 a2,
                 v4);
    v8 = appended;
    if ( appended < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, appended, 0x13Du);
    else
      _InterlockedExchangeAdd((volatile signed __int32 *)CCounterManager::s_pGlobalPerFrameCounterManager + 9, 1u);
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x3C9u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, NextWARPCallbackRenderer, 0x3C6u);
  }
  return (unsigned int)v8;
}
