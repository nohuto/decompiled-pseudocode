/*
 * XREFs of ?AddOcclusionInformation@CLinearGradientBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x18001A960
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsEmptyDrawing@CSpriteVisualContent@@UEBA_NXZ @ 0x18008CA40 (-IsEmptyDrawing@CSpriteVisualContent@@UEBA_NXZ.c)
 *     ?DrawOcclusionRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18009B620 (-DrawOcclusionRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLinearGradientBrush::AddOcclusionInformation(
        CLinearGradientBrush *this,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  unsigned int v4; // ebx
  __int64 (*v7)(void); // rax
  char IsEmptyDrawing; // al
  FLOAT width; // xmm1_4
  FLOAT height; // xmm0_4
  int v12; // eax
  _DWORD v13[4]; // [rsp+30h] [rbp-38h] BYREF

  v4 = 0;
  v7 = *(__int64 (**)(void))(*(_QWORD *)this + 176LL);
  if ( (char *)v7 == (char *)CSpriteVisualContent::IsEmptyDrawing )
    IsEmptyDrawing = CSpriteVisualContent::IsEmptyDrawing(this);
  else
    IsEmptyDrawing = v7();
  if ( !IsEmptyDrawing )
  {
    if ( *((_BYTE *)this + 153) )
    {
      if ( a3 )
      {
        width = a3->width;
        height = a3->height;
        v13[0] = 0;
        v13[1] = 0;
        *(FLOAT *)&v13[2] = width;
        *(FLOAT *)&v13[3] = height;
        v12 = COcclusionContext::DrawOcclusionRectangle(a2, v13, 0LL);
        v4 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x9Du);
      }
    }
  }
  return v4;
}
