/*
 * XREFs of ?Release@CHolographicInteropTaskQueue@@UEAAKXZ @ 0x180035060
 * Callers:
 *     ??1CDrawingContext@@MEAA@XZ @ 0x1800A9A7C (--1CDrawingContext@@MEAA@XZ.c)
 *     ??1CAnimation@@UEAA@XZ @ 0x1800BD358 (--1CAnimation@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CHolographicInteropTaskQueue::Release(CHolographicInteropTaskQueue *this)
{
  return CMILRefCountBase::Release(this);
}
