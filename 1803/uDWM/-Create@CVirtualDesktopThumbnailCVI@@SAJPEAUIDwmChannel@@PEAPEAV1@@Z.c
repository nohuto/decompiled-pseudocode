/*
 * XREFs of ?Create@CVirtualDesktopThumbnailCVI@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180083788
 * Callers:
 *     ?EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ @ 0x180084260 (-EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualDesktopThumbnailCVI::Create(struct IDwmChannel *a1, struct CVirtualDesktopThumbnailCVI **a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rax

  v2 = 0;
  if ( a2 )
  {
    v5 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
           WPF::g_pProcessHeap,
           88LL);
    if ( v5 )
    {
      *(_DWORD *)(v5 + 8) = 1;
      *(_QWORD *)v5 = &CVirtualDesktopThumbnailCVI::`vftable';
      *(_QWORD *)(v5 + 32) = 0LL;
      *(_QWORD *)(v5 + 64) = 0LL;
      *(_QWORD *)(v5 + 72) = 0LL;
    }
    else
    {
      v5 = 0LL;
    }
    if ( v5 )
    {
      *(_QWORD *)(v5 + 16) = a1;
      *a2 = (struct CVirtualDesktopThumbnailCVI *)v5;
      return v2;
    }
    v2 = -2147024882;
  }
  else
  {
    v2 = -2147024809;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x8Eu);
  return v2;
}
