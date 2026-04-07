/*
 * XREFs of ?Create@CDesktopThumbnailCVIVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180082640
 * Callers:
 *     ?EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ @ 0x18003C3E0 (-EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ.c)
 *     ?DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z @ 0x180083060 (-DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z.c)
 *     ?EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ @ 0x180083400 (-EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ.c)
 *     ?CloneVisualTree@CDesktopThumbnailCVIVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x18009CFE0 (-CloneVisualTree@CDesktopThumbnailCVIVisual@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x18001F050 (--0CRenderDataVisual@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?Initialize@CDesktopThumbnailCVIVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18009DAA0 (-Initialize@CDesktopThumbnailCVIVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 */

__int64 __fastcall CDesktopThumbnailCVIVisual::Create(struct IDwmChannel *a1, struct CDesktopThumbnailCVIVisual **a2)
{
  unsigned int v4; // edi
  CRenderDataVisual *v5; // rax
  CRenderDataVisual *v6; // rbx
  int v7; // eax

  if ( !a2 )
  {
    v4 = -2147024809;
LABEL_3:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0xA4u);
    return v4;
  }
  v5 = (CRenderDataVisual *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 16LL))(
                              WPF::g_pProcessHeap,
                              344LL);
  v6 = v5;
  if ( v5 )
  {
    CRenderDataVisual::CRenderDataVisual(v5);
    *((_QWORD *)v6 + 35) = 0LL;
    *((_QWORD *)v6 + 37) = 0LL;
    *((_QWORD *)v6 + 38) = 0LL;
    *(_WORD *)((char *)v6 + 337) = 0;
    *(_QWORD *)v6 = &CDesktopThumbnailCVIVisual::`vftable';
  }
  else
  {
    v6 = 0LL;
  }
  if ( !v6 )
  {
    v4 = -2147024882;
    goto LABEL_3;
  }
  v7 = CDesktopThumbnailCVIVisual::Initialize(v6, a1);
  v4 = v7;
  if ( v7 >= 0 )
  {
    *a2 = v6;
    v6 = 0LL;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0xA4u);
  }
  if ( v6 )
    CBaseObject::Release(v6);
  return v4;
}
