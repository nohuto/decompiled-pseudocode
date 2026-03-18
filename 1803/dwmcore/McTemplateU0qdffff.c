/*
 * XREFs of McTemplateU0qdffff @ 0x180159018
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180060FC0 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009E3A0 (-_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTree@@PEBVCDirtyRegion@@IIPEAVIRenderTargetBitmap@@PEAVCDrawingContext@@@Z @ 0x1801FE024 (-RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTr.c)
 * Callees:
 *     McGenEventWriteUM @ 0x1800CF9CC (McGenEventWriteUM.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0qdffff(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        int a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8)
{
  int v9; // [rsp+20h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+30h] [rbp-49h] BYREF
  int *v11; // [rsp+40h] [rbp-39h]
  __int64 v12; // [rsp+48h] [rbp-31h]
  int *v13; // [rsp+50h] [rbp-29h]
  __int64 v14; // [rsp+58h] [rbp-21h]
  char *v15; // [rsp+60h] [rbp-19h]
  __int64 v16; // [rsp+68h] [rbp-11h]
  char *v17; // [rsp+70h] [rbp-9h]
  __int64 v18; // [rsp+78h] [rbp-1h]
  char *v19; // [rsp+80h] [rbp+7h]
  __int64 v20; // [rsp+88h] [rbp+Fh]
  char *v21; // [rsp+90h] [rbp+17h]
  __int64 v22; // [rsp+98h] [rbp+1Fh]
  int v23; // [rsp+D0h] [rbp+57h] BYREF

  v23 = a3;
  v12 = 4LL;
  v9 = 0;
  v11 = &v23;
  v14 = 4LL;
  v13 = &v9;
  v16 = 4LL;
  v15 = &a5;
  v18 = 4LL;
  v17 = &a6;
  v19 = &a7;
  v21 = &a8;
  v20 = 4LL;
  v22 = 4LL;
  return McGenEventWriteUM(Microsoft_Windows_Dwm_Core_Provider_Context, a2, 7u, &v10);
}
