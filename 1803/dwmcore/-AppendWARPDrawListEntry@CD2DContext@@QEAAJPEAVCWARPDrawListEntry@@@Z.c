/*
 * XREFs of ?AppendWARPDrawListEntry@CD2DContext@@QEAAJPEAVCWARPDrawListEntry@@@Z @ 0x1801E1870
 * Callers:
 *     ?Render@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x18017E1B0 (-Render@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180095C2C (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180096E20 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?AppendDrawListEntryToCallbackRenderer@CCallbackRendererManager@@QEAAJPEAVCDrawListEntry@@PEAUID2D1PrivateCompositorRenderer@@@Z @ 0x18013F90C (-AppendDrawListEntryToCallbackRenderer@CCallbackRendererManager@@QEAAJPEAVCDrawListEntry@@PEAUID.c)
 *     ?GetNextWARPCallbackRenderer@CCallbackRendererManager@@IEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCWARPCallbackRenderer@@@Z @ 0x1802186E4 (-GetNextWARPCallbackRenderer@CCallbackRendererManager@@IEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCWARPCa.c)
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

  if ( this[56] )
    CD2DContext::FlushDrawList((CD2DContext *)this);
  CD2DContext::EnsureBeginDraw((CD2DContext *)this);
  v5 = (char *)(this + 57);
  if ( this[57]
    || (v6 = (struct CD3DDeviceLevel1 *)(*((__int64 (__fastcall **)(struct CWARPCallbackRenderer **))*this + 20))(this),
        NextWARPCallbackRenderer = CCallbackRendererManager::GetNextWARPCallbackRenderer(
                                     (CCallbackRendererManager *)(this + 1),
                                     v6,
                                     this + 57),
        v8 = NextWARPCallbackRenderer,
        NextWARPCallbackRenderer >= 0) )
  {
    appended = CCallbackRendererManager::AppendDrawListEntryToCallbackRenderer(
                 (CCallbackRendererManager *)(*(_QWORD *)(*(_QWORD *)v5 + 24LL) + 8LL),
                 a2,
                 v4);
    v8 = appended;
    if ( appended < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, appended, 0x134u);
    else
      ++dword_1802D6358;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x30Eu);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, NextWARPCallbackRenderer, 0x30Bu);
  }
  return (unsigned int)v8;
}
