/*
 * XREFs of ?Create@CRenderTargetBitmap@@SAJPEAVIRenderTargetBitmap@@PEAPEAV1@@Z @ 0x1800C6A10
 * Callers:
 *     ?CreateNewRenderTarget@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x180047B70 (-CreateNewRenderTarget@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIAEBV-$TMilRect_@MUMilRectF.c)
 * Callees:
 *     ??0CRenderTargetBitmap@@IEAA@AEBU_GUID@@_N@Z @ 0x1800470B8 (--0CRenderTargetBitmap@@IEAA@AEBU_GUID@@_N@Z.c)
 *     ?Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetBitmap@@@Z @ 0x180047224 (-Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetBitmap::Create(
        __int64 (__fastcall ***a1)(struct IRenderTargetBitmap *, GUID *, CHwTextureRenderTarget **),
        struct CRenderTargetBitmap **a2)
{
  int v4; // eax
  unsigned int v5; // edi
  CRenderTargetBitmap *v6; // rax
  CRenderTargetBitmap *v7; // rbx
  int v8; // eax
  _BYTE v10[8]; // [rsp+30h] [rbp-38h] BYREF
  struct _GUID v11; // [rsp+38h] [rbp-30h] BYREF

  v4 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(struct IRenderTargetBitmap *, GUID *, CHwTextureRenderTarget **), _BYTE *, _QWORD, struct _GUID *))(*a1)[13])(
         a1,
         v10,
         0LL,
         &v11);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x17u);
  }
  else
  {
    v6 = (CRenderTargetBitmap *)HeapAlloc(WPF::g_processHeap, 0, 0xD0uLL);
    if ( v6 )
      v7 = CRenderTargetBitmap::CRenderTargetBitmap(v6, &v11, 0);
    else
      v7 = 0LL;
    if ( v7 )
    {
      (*(void (__fastcall **)(CRenderTargetBitmap *))(*(_QWORD *)v7 + 8LL))(v7);
      v8 = CRenderTargetBitmap::Initialize(v7, a1);
      v5 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x1Eu);
        (*(void (__fastcall **)(CRenderTargetBitmap *))(*(_QWORD *)v7 + 16LL))(v7);
      }
      else
      {
        *a2 = v7;
      }
    }
    else
    {
      v5 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1Cu);
    }
  }
  return v5;
}
