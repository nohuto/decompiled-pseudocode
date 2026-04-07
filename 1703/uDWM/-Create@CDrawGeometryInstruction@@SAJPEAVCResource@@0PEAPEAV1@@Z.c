/*
 * XREFs of ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x18003B27C
 * Callers:
 *     ?_ValidateDCompVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800072DC (-_ValidateDCompVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180007384 (-UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x18000AE30 (-UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x18000D00C (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?UpdateBitmap@CImage@@QEAAJXZ @ 0x180019464 (-UpdateBitmap@CImage@@QEAAJXZ.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x180027358 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x180027400 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180038AF0 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ @ 0x18003A858 (-UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ.c)
 *     ?ValidateVisual@CTransitionWindowSnapshot@@UEAAJXZ @ 0x18003CA10 (-ValidateVisual@CTransitionWindowSnapshot@@UEAAJXZ.c)
 *     ?_UpdateInstructions@CLivePreview@@AEAAJXZ @ 0x18006EAD4 (-_UpdateInstructions@CLivePreview@@AEAAJXZ.c)
 *     ?UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z @ 0x1800951C0 (-UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z.c)
 *     ?SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z @ 0x18009DCEC (-SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z.c)
 *     ?AddSolidBrushInstruction@CThumbnailAnimatedVisual@@QEAAJPEAVCResource@@KM@Z @ 0x18009EA50 (-AddSolidBrushInstruction@CThumbnailAnimatedVisual@@QEAAJPEAVCResource@@KM@Z.c)
 *     ?SetupInstructions@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800A0264 (-SetupInstructions@CIconicAnimatedVisual@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002C850 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawGeometryInstruction::Create(
        struct CResource *a1,
        struct CResource *a2,
        struct CDrawGeometryInstruction **a3)
{
  void *(__fastcall *v6)(WPF::ProcessHeapImpl *, size_t); // rax
  struct CDrawGeometryInstruction *v7; // rax
  struct CDrawGeometryInstruction *v8; // rdi
  unsigned int v9; // ebx
  CBaseObject *v10; // rcx
  CBaseObject *v11; // rcx

  v6 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v6 == WPF::ProcessHeapImpl::AllocClear )
    v7 = (struct CDrawGeometryInstruction *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x20uLL);
  else
    v7 = (struct CDrawGeometryInstruction *)v6(WPF::g_pProcessHeap, 32LL);
  v8 = v7;
  v9 = 0;
  if ( v7 )
  {
    *((_DWORD *)v7 + 2) = 1;
    *(_QWORD *)v7 = &CDrawGeometryInstruction::`vftable';
  }
  else
  {
    v8 = 0LL;
  }
  if ( v8 )
  {
    v10 = (CBaseObject *)*((_QWORD *)v8 + 2);
    if ( v10 )
      CBaseObject::Release(v10);
    *((_QWORD *)v8 + 2) = a1;
    if ( a1 )
      _InterlockedIncrement((volatile signed __int32 *)a1 + 2);
    v11 = (CBaseObject *)*((_QWORD *)v8 + 3);
    if ( v11 )
      CBaseObject::Release(v11);
    *((_QWORD *)v8 + 3) = a2;
    if ( a2 )
      _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
    *a3 = v8;
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x31u);
  }
  return v9;
}
