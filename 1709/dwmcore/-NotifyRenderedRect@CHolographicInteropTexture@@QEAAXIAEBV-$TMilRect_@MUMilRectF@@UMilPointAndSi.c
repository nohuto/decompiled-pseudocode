/*
 * XREFs of ?NotifyRenderedRect@CHolographicInteropTexture@@QEAAXIAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801BEA28
 * Callers:
 *     ?RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTree@@PEBVCDirtyRegion@@IPEAVIRenderTargetBitmap@@PEAVCDrawingContext@@@Z @ 0x1801C1C3C (-RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTr.c)
 * Callees:
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800894CC (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180089680 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x1800896B4 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

void __fastcall CHolographicInteropTexture::NotifyRenderedRect(__int64 a1, __int64 a2, float *a3)
{
  RTL_SRWLOCK *v3; // rbx
  int v6; // edx
  LONG v7; // eax
  int v8; // edx
  struct tagRECT v9; // [rsp+20h] [rbp-78h] BYREF
  void *v10[10]; // [rsp+30h] [rbp-68h] BYREF

  v3 = (RTL_SRWLOCK *)(a1 + 288);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 288));
  v6 = *(_DWORD *)(a1 + 140);
  v9.left = (int)*a3 - v6;
  v7 = (int)a3[2] - v6;
  v8 = *(_DWORD *)(a1 + 144);
  v9.right = v7;
  v9.top = (int)a3[1] - v8;
  v9.bottom = (int)a3[3] - v8;
  FastRegion::CRegion::CRegion((FastRegion::CRegion *)v10, &v9);
  FastRegion::CRegion::Union(
    (const struct FastRegion::Internal::CRgnData **)(*(_QWORD *)(a1 + 104) + 16LL),
    (const struct FastRegion::Internal::CRgnData **)v10);
  FastRegion::CRegion::FreeMemory(v10);
  ReleaseSRWLockExclusive(v3);
}
