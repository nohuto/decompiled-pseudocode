/*
 * XREFs of ?GetMorePlaceholderClipPlanes@ClipPlaneIterator@@AEAAXPEAUD2D_VECTOR_4F@@PEAI@Z @ 0x18015692C
 * Callers:
 *     ?UpdateClippingPlanes@ClipPlaneIterator@@QEAAJXZ @ 0x18015711C (-UpdateClippingPlanes@ClipPlaneIterator@@QEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?CalculateClipPlanesFromLineSegments@ClipPlaneIterator@@AEAAXPEAULineSegment@1@IPEAUD2D_VECTOR_4F@@@Z @ 0x180156508 (-CalculateClipPlanesFromLineSegments@ClipPlaneIterator@@AEAAXPEAULineSegment@1@IPEAUD2D_VECTOR_4.c)
 */

void __fastcall ClipPlaneIterator::GetMorePlaceholderClipPlanes(
        ClipPlaneIterator *this,
        struct D2D_VECTOR_4F *a2,
        unsigned int *a3)
{
  unsigned int v5; // r11d
  __int64 v6; // rbx
  unsigned int v7; // r10d
  __int128 v8; // xmm0
  __int128 v9; // [rsp+20h] [rbp-58h] BYREF
  __int64 v10; // [rsp+30h] [rbp-48h]
  __int64 v11; // [rsp+38h] [rbp-40h]
  __int128 v12; // [rsp+40h] [rbp-38h]

  v5 = *((_DWORD *)this + 12);
  v6 = *((_QWORD *)this + 3);
  v7 = *(_DWORD *)(*((_QWORD *)this + 11) + 4LL * *((unsigned int *)this + 3));
  v8 = *(_OWORD *)(v6 + 16LL * ((v7 + v5 - 1) % v5));
  v11 = *(_QWORD *)(v6 + 16LL * v7);
  v9 = v8;
  v10 = *(_QWORD *)(v6 + 16LL * v7 + 8);
  v12 = *(_OWORD *)(v6 + 16LL * ((v7 + 1) % v5));
  ClipPlaneIterator::CalculateClipPlanesFromLineSegments(this, (struct ClipPlaneIterator::LineSegment *)&v9, 3u, a2);
  *a3 = 3;
  ++*((_DWORD *)this + 3);
}
