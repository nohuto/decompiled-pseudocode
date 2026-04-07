/*
 * XREFs of ??0CDCompVirtualDesktopThumbnailData@@QEAA@XZ @ 0x18008205C
 * Callers:
 *     ?RegisterSharedVirtualDesktopVisual@CWindowList@@UEAAJPEAUHWND__@@T_LARGE_INTEGER@@PEAX@Z @ 0x180084910 (-RegisterSharedVirtualDesktopVisual@CWindowList@@UEAAJPEAUHWND__@@T_LARGE_INTEGER@@PEAX@Z.c)
 * Callees:
 *     memset_0 @ 0x18004DE90 (memset_0.c)
 */

CDCompVirtualDesktopThumbnailData *__fastcall CDCompVirtualDesktopThumbnailData::CDCompVirtualDesktopThumbnailData(
        CDCompVirtualDesktopThumbnailData *this)
{
  CDCompVirtualDesktopThumbnailData *result; // rax

  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  memset_0((char *)this + 36, 0, 0x2DuLL);
  *((_QWORD *)this + 11) = 0LL;
  *(_QWORD *)this = &CDCompVirtualDesktopThumbnailData::`vftable';
  result = this;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 38) = 0;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_DWORD *)this + 46) = 0;
  return result;
}
