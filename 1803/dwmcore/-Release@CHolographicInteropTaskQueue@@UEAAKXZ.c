/*
 * XREFs of ?Release@CHolographicInteropTaskQueue@@UEAAKXZ @ 0x180025000
 * Callers:
 *     ??1CAnimation@@UEAA@XZ @ 0x1800403B0 (--1CAnimation@@UEAA@XZ.c)
 *     ?Release@CHwBitmapColorSource@@WHA@EAAKXZ @ 0x1800DE540 (-Release@CHwBitmapColorSource@@WHA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CHolographicInteropTaskQueue::Release(CHolographicInteropTaskQueue *this)
{
  return CMILRefCountBase::Release(this);
}
