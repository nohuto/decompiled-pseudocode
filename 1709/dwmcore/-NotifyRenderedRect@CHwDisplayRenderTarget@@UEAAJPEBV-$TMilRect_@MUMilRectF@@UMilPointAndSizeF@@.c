/*
 * XREFs of ?NotifyRenderedRect@CHwDisplayRenderTarget@@UEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002C140
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180018A80 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 * Callees:
 *     ?RectToSurfaceRect@CHwDisplayRenderTarget@@IEBA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x18002BA64 (-RectToSurfaceRect@CHwDisplayRenderTarget@@IEBA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?IsValid@CHwDisplayRenderTarget@@UEBA_NXZ @ 0x18002BBF0 (-IsValid@CHwDisplayRenderTarget@@UEBA_NXZ.c)
 *     ?AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z @ 0x18002F200 (-AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::NotifyRenderedRect(__int64 a1, float *a2)
{
  CHwFullScreenRenderTarget *v2; // rbx
  unsigned int v3; // edi
  __int64 v4; // rax
  int v6; // esi
  char (__fastcall *v7)(CHwDisplayRenderTarget *); // rax
  CHwDisplayRenderTarget *v8; // rcx
  char IsValid; // al
  __int64 (__fastcall *v10)(CHwFullScreenRenderTarget *__hidden, const struct CRegion *); // rax
  int v11; // eax
  int v13; // [rsp+30h] [rbp-29h] BYREF
  int v14; // [rsp+34h] [rbp-25h]
  int v15; // [rsp+38h] [rbp-21h]
  int v16; // [rsp+3Ch] [rbp-1Dh]
  void *lpMem; // [rsp+40h] [rbp-19h] BYREF
  _DWORD v18[3]; // [rsp+48h] [rbp-11h] BYREF
  int v19; // [rsp+54h] [rbp-5h] BYREF
  unsigned int v20; // [rsp+58h] [rbp-1h] BYREF
  _DWORD v21[13]; // [rsp+5Ch] [rbp+3h] BYREF

  v2 = (CHwFullScreenRenderTarget *)(a1 - 192);
  v3 = 0;
  v4 = *(_QWORD *)(a1 - 192 + 200);
  if ( v4 )
  {
    v6 = *(_DWORD *)(v4 + 888);
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D00, 2u, v6, 0x374u);
    }
    else
    {
      v7 = *(char (__fastcall **)(CHwDisplayRenderTarget *))(*(_QWORD *)v2 + 32LL);
      v8 = (CHwDisplayRenderTarget *)(a1 - 192);
      if ( v7 == CHwDisplayRenderTarget::IsValid )
        IsValid = CHwDisplayRenderTarget::IsValid(v8);
      else
        IsValid = v7(v8);
      if ( !IsValid )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D00, 2u, -2003304442, 0x37Eu);
        return v3;
      }
    }
  }
  else
  {
    v6 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D00, 2u, -2003304307, 0x378u);
  }
  if ( v6 >= 0 && CHwDisplayRenderTarget::RectToSurfaceRect(v2, a2, (__int64)&v13) )
  {
    lpMem = v18;
    if ( v13 >= v15 || v14 >= v16 )
    {
      v18[0] = 0;
    }
    else
    {
      v19 = v14;
      v18[0] = 2;
      v18[1] = v13;
      v18[2] = v15;
      v20 = (unsigned int)&v20 + 1 + 11 - (unsigned int)&v19;
      v21[2] = v13;
      v21[3] = v15;
      v21[1] = (unsigned int)&v20 + 1 + 11 - (unsigned int)v21 + 8;
      v21[0] = v16;
    }
    v10 = *(__int64 (__fastcall **)(CHwFullScreenRenderTarget *__hidden, const struct CRegion *))(*(_QWORD *)v2 + 248LL);
    if ( v10 == CHwFullScreenRenderTarget::AddToCurrentFrameInvalidRegion )
      v11 = CHwFullScreenRenderTarget::AddToCurrentFrameInvalidRegion(v2, (const struct CRegion *)&lpMem);
    else
      v11 = v10(v2, (const struct CRegion *)&lpMem);
    v3 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x210u);
    if ( v18 != lpMem )
      WPF::ProcessHeapImpl::Free(lpMem);
  }
  return v3;
}
