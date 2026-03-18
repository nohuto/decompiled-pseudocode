/*
 * XREFs of ?AppendWARPDrawListEntry@CD2DContext@@QEAAJPEAVCWARPDrawListEntry@@@Z @ 0x1801A94FC
 * Callers:
 *     ?Render@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x180154CD0 (-Render@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode.c)
 * Callees:
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180043ED0 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180043FB4 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?AppendDrawListEntryToCallbackRenderer@CCallbackRendererManager@@QEAAJPEAVCDrawListEntry@@PEAUID2D1PrivateCompositorRenderer@@@Z @ 0x18011CBD4 (-AppendDrawListEntryToCallbackRenderer@CCallbackRendererManager@@QEAAJPEAVCDrawListEntry@@PEAUID.c)
 *     ?GetNextWARPCallbackRenderer@CCallbackRendererManager@@IEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCWARPCallbackRenderer@@@Z @ 0x1801D55A4 (-GetNextWARPCallbackRenderer@CCallbackRendererManager@@IEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCWARPCa.c)
 */

__int64 __fastcall CD2DContext::AppendWARPDrawListEntry(
        struct CWARPCallbackRenderer **this,
        struct CWARPDrawListEntry *a2)
{
  struct ID2D1PrivateCompositorRenderer *v4; // r8
  char *v5; // rdi
  struct CD3DDeviceLevel1 *v6; // rax
  signed int NextWARPCallbackRenderer; // eax
  signed int v8; // ebx
  signed int appended; // eax

  if ( this[56] )
    CD2DContext::FlushDrawList((CD2DContext *)this);
  CD2DContext::EnsureBeginDraw((CD2DContext *)this);
  v5 = (char *)(this + 57);
  if ( this[57]
    || (v6 = (struct CD3DDeviceLevel1 *)(*((__int64 (__fastcall **)(struct CWARPCallbackRenderer **))*this + 19))(this),
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
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, appended, 0x13Au);
    else
      ++dword_18026EE18;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x301u);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, NextWARPCallbackRenderer, 0x2FEu);
  }
  return (unsigned int)v8;
}
