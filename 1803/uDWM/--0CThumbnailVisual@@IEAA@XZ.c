/*
 * XREFs of ??0CThumbnailVisual@@IEAA@XZ @ 0x1800139D4
 * Callers:
 *     ?EnsureThumbnailVisual@CThumbnailData@@UEAAJXZ @ 0x1800367A0 (-EnsureThumbnailVisual@CThumbnailData@@UEAAJXZ.c)
 * Callees:
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x180017CA4 (--0CRenderDataVisual@@IEAA@XZ.c)
 *     memset_0 @ 0x18004B360 (memset_0.c)
 */

CThumbnailVisual *__fastcall CThumbnailVisual::CThumbnailVisual(CThumbnailVisual *this)
{
  __int64 v2; // rcx
  CThumbnailVisual *result; // rax

  CRenderDataVisual::CRenderDataVisual(this);
  memset_0((void *)(v2 + 288), 0, 0x20uLL);
  *((_QWORD *)this + 40) = 0LL;
  *((_DWORD *)this + 82) = 0;
  *((_QWORD *)this + 42) = 0LL;
  *((_BYTE *)this + 344) = 0;
  *(_QWORD *)((char *)this + 348) = 0LL;
  *(_QWORD *)this = &CThumbnailVisual::`vftable'{for `CRenderDataVisual'};
  *((_QWORD *)this + 35) = &CThumbnailVisual::`vftable'{for `IAnimatedVisual'};
  *((_QWORD *)this + 45) = &CThumbnailVisual::`vftable';
  result = this;
  *((_BYTE *)this + 356) = 0;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_BYTE *)this + 472) = 1;
  *((_DWORD *)this + 124) = 0;
  return result;
}
