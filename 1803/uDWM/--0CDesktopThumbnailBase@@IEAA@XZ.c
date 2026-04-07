/*
 * XREFs of ??0CDesktopThumbnailBase@@IEAA@XZ @ 0x1800A3318
 * Callers:
 *     ?Create@CDCompDesktopThumbnail@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180083300 (-Create@CDCompDesktopThumbnail@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CVirtualDesktopThumbnail@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800836A0 (-Create@CVirtualDesktopThumbnail@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CDesktopThumbnail@@KAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800A3694 (-Create@CDesktopThumbnail@@KAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CVisual@@IEAA@XZ @ 0x180025DA4 (--0CVisual@@IEAA@XZ.c)
 */

CDesktopThumbnailBase *__fastcall CDesktopThumbnailBase::CDesktopThumbnailBase(CDesktopThumbnailBase *this)
{
  __int64 v1; // rcx
  CDesktopThumbnailBase *result; // rax

  CVisual::CVisual(this);
  *(_QWORD *)v1 = &CDesktopThumbnailBase::`vftable';
  *(_QWORD *)(v1 + 240) = 0LL;
  *(_QWORD *)(v1 + 248) = 0LL;
  *(_QWORD *)(v1 + 256) = 0LL;
  *(_DWORD *)(v1 + 264) = 0;
  result = (CDesktopThumbnailBase *)v1;
  *(_QWORD *)(v1 + 272) = -1LL;
  return result;
}
