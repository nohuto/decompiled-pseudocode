/*
 * XREFs of ?DrawMesh2D@CSwRenderTargetGetBounds@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAVCGeometry2D@@PEAVIBitmapSource@@@Z @ 0x1801E5060
 * Callers:
 *     <none>
 * Callees:
 *     ?AddBounds@CSwRenderTargetGetBounds@@AEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCAliasedClip@@@Z @ 0x180042810 (-AddBounds@CSwRenderTargetGetBounds@@AEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSwRenderTargetGetBounds::DrawMesh2D(
        CSwRenderTargetGetBounds *this,
        struct ID2DContext *a2,
        const struct ID2DContextOwner *a3,
        struct CContextState *a4,
        struct CGeometry2D *a5)
{
  _BYTE v8[16]; // [rsp+20h] [rbp-28h] BYREF

  (*(void (__fastcall **)(struct CGeometry2D *, _BYTE *, const struct ID2DContextOwner *))(*(_QWORD *)a5 + 168LL))(
    a5,
    v8,
    a3);
  CSwRenderTargetGetBounds::AddBounds((__int64)this - 16, (__int64)v8, (__int64)a4 + 72);
  return 0LL;
}
