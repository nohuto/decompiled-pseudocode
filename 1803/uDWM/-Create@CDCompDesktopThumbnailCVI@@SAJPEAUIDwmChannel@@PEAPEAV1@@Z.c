/*
 * XREFs of ?Create@CDCompDesktopThumbnailCVI@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800833E8
 * Callers:
 *     ?EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ @ 0x180036740 (-EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x18004B360 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDCompDesktopThumbnailCVI::Create(struct IDwmChannel *a1, struct CDCompDesktopThumbnailCVI **a2)
{
  unsigned int v2; // ebx
  _DWORD *v5; // rax
  _DWORD *v6; // rdi

  v2 = 0;
  if ( a2 )
  {
    v5 = (_DWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                     WPF::g_pProcessHeap,
                     80LL);
    v6 = v5;
    if ( v5 )
    {
      memset_0(v5, 0, 0x50uLL);
      v6[2] = 1;
      *(_QWORD *)v6 = &CDCompDesktopThumbnailCVI::`vftable';
      *((_QWORD *)v6 + 4) = 0LL;
      *((_QWORD *)v6 + 8) = 0LL;
      *((_QWORD *)v6 + 9) = 0LL;
    }
    else
    {
      v6 = 0LL;
    }
    if ( v6 )
    {
      *((_QWORD *)v6 + 2) = a1;
      *a2 = (struct CDCompDesktopThumbnailCVI *)v6;
      return v2;
    }
    v2 = -2147024882;
  }
  else
  {
    v2 = -2147024809;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0xA3u);
  return v2;
}
