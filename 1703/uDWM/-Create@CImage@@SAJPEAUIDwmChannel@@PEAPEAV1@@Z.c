/*
 * XREFs of ?Create@CImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180019310
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x1800293B0 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x18003DBAC (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?Initialize@CDirectTouchVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180040FB0 (-Initialize@CDirectTouchVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z @ 0x18007C6F0 (-Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z.c)
 *     ?Initialize@CRippleEffect@@IEAAJPEAUIDwmChannel@@PEAPEAVCBitmapSource@@@Z @ 0x1800879EC (-Initialize@CRippleEffect@@IEAAJPEAUIDwmChannel@@PEAPEAVCBitmapSource@@@Z.c)
 *     ?Initialize@CContactStationaryVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18008B640 (-Initialize@CContactStationaryVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Initialize@CTextTetherVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18008BD90 (-Initialize@CTextTetherVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Initialize@CPenBarrelKeyVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18008D800 (-Initialize@CPenBarrelKeyVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Initialize@CFlickVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18008DD40 (-Initialize@CFlickVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Initialize@CPenPressHoldVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18008E440 (-Initialize@CPenPressHoldVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Initialize@CPressTapVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18008E840 (-Initialize@CPressTapVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Initialize@CIndirectTouchVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180095540 (-Initialize@CIndirectTouchVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 * Callees:
 *     ?Initialize@CImage@@EEAAJPEAUIDwmChannel@@@Z @ 0x180019630 (-Initialize@CImage@@EEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x18001F050 (--0CRenderDataVisual@@IEAA@XZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002C850 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x18004DE90 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImage::Create(struct IDwmChannel *a1, struct CImage **a2)
{
  void *(*v4)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  CRenderDataVisual *v5; // rax
  CRenderDataVisual *v6; // rbx
  int v7; // eax
  unsigned int v8; // edi

  if ( !a2 )
  {
    v8 = -2147024809;
LABEL_14:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xCu);
    return v8;
  }
  v4 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v4 == WPF::ProcessHeapImpl::AllocClear )
    v5 = (CRenderDataVisual *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x158uLL);
  else
    v5 = (CRenderDataVisual *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v4)(WPF::g_pProcessHeap, 344LL);
  v6 = v5;
  if ( v5 )
  {
    memset_0(v5, 0, 0x158uLL);
    CRenderDataVisual::CRenderDataVisual(v6);
    *((_QWORD *)v6 + 35) = 0LL;
    *((_QWORD *)v6 + 36) = 0LL;
    *((_QWORD *)v6 + 37) = 0LL;
    *((_QWORD *)v6 + 38) = 0LL;
    *((_QWORD *)v6 + 39) = 0LL;
    *(_QWORD *)v6 = &CImage::`vftable';
    *((_QWORD *)v6 + 40) = 0LL;
    *((_QWORD *)v6 + 41) = 0LL;
  }
  if ( !v6 )
  {
    v8 = -2147024882;
    goto LABEL_14;
  }
  v7 = CImage::Initialize(v6, a1);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xCu);
  }
  else
  {
    *a2 = v6;
    v6 = 0LL;
  }
  if ( v6 )
    CBaseObject::Release(v6);
  return v8;
}
