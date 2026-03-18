/*
 * XREFs of ?SetCompositionMode@CCompositionSurfaceInfo@@QEAAXW4BufferCompositionMode@@_N@Z @ 0x18000A6C8
 * Callers:
 *     ?DrawWorker@CCompositionSurfaceBitmap@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18000AE6C (-DrawWorker@CCompositionSurfaceBitmap@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TM.c)
 *     ?ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0PEAW4Enum@DirectFlipMode@@@Z @ 0x180072420 (-ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0PEAW4Enum@DirectFlipMode@@@Z.c)
 *     ?SetCompositionMode@CCompositionSurfaceBitmap@@UEAAXW4BufferCompositionMode@@_N@Z @ 0x18012DB90 (-SetCompositionMode@CCompositionSurfaceBitmap@@UEAAXW4BufferCompositionMode@@_N@Z.c)
 * Callees:
 *     ?AddCompSurfInfoUpdate@CComposition@@QEAAJPEAVCCompositionSurfaceInfo@@@Z @ 0x180004A5C (-AddCompSurfInfoUpdate@CComposition@@QEAAJPEAVCCompositionSurfaceInfo@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?SetIndependentFlipNotifyMode@CRenderTargetManager@@QEAAJU_LUID@@@Z @ 0x180144F68 (-SetIndependentFlipNotifyMode@CRenderTargetManager@@QEAAJU_LUID@@@Z.c)
 */

void __fastcall CCompositionSurfaceInfo::SetCompositionMode(__int64 a1, int a2, char a3)
{
  __int64 v6; // rcx
  CComposition *v7; // rax
  __int64 v8; // rax

  if ( !a2 && *(_BYTE *)(a1 + 68) )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 8LL))(*(_QWORD *)(a1 + 24));
    CRenderTargetManager::SetIndependentFlipNotifyMode(*(CRenderTargetManager **)(v8 + 32), *(struct _LUID *)(a1 + 40));
  }
  if ( a3 )
  {
    if ( a2 != *(_DWORD *)(a1 + 136) )
    {
      v6 = *(_QWORD *)(a1 + 24);
      *(_DWORD *)(a1 + 136) = a2;
      v7 = (CComposition *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      CComposition::AddCompSurfInfoUpdate(v7, (struct CCompositionSurfaceInfo *)a1);
    }
  }
}
