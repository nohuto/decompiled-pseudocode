/*
 * XREFs of ?Create@CVirtualDesktopThumbnail@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180082838
 * Callers:
 *     ?EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ @ 0x180083400 (-EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x18004DE90 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ??0CDesktopThumbnailBase@@IEAA@XZ @ 0x18009CD9C (--0CDesktopThumbnailBase@@IEAA@XZ.c)
 */

__int64 __fastcall CVirtualDesktopThumbnail::Create(struct IDwmChannel *a1, struct CVirtualDesktopThumbnail **a2)
{
  unsigned int v4; // edi
  CDesktopThumbnailBase *v5; // rax
  CDesktopThumbnailBase *v6; // rbx
  int v7; // eax

  if ( !a2 )
  {
    v4 = -2147024809;
LABEL_3:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0xF0u);
    return v4;
  }
  v5 = (CDesktopThumbnailBase *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                           + 16LL))(
                                  WPF::g_pProcessHeap,
                                  288LL);
  v6 = v5;
  if ( v5 )
  {
    memset_0(v5, 0, 0x120uLL);
    CDesktopThumbnailBase::CDesktopThumbnailBase(v6);
    *(_QWORD *)v6 = &CVirtualDesktopThumbnail::`vftable';
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
  v7 = (*(__int64 (__fastcall **)(CDesktopThumbnailBase *, struct IDwmChannel *))(*(_QWORD *)v6 + 8LL))(v6, a1);
  v4 = v7;
  if ( v7 >= 0 )
  {
    *a2 = v6;
    v6 = 0LL;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0xF0u);
  }
  if ( v6 )
    CBaseObject::Release(v6);
  return v4;
}
