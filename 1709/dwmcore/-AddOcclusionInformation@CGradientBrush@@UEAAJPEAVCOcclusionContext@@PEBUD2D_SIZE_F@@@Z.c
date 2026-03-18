/*
 * XREFs of ?AddOcclusionInformation@CGradientBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180167420
 * Callers:
 *     <none>
 * Callees:
 *     ?DrawOcclusionRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18005D830 (-DrawOcclusionRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGradientBrush::AddOcclusionInformation(
        CGradientBrush *this,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  unsigned int v6; // ebx
  FLOAT width; // xmm1_4
  FLOAT height; // xmm0_4
  signed int v9; // eax
  float v11[4]; // [rsp+30h] [rbp-38h] BYREF

  v6 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(CGradientBrush *))(*(_QWORD *)this + 192LL))(this) )
  {
    if ( *((_BYTE *)this + 168) )
    {
      if ( a3 )
      {
        width = a3->width;
        height = a3->height;
        v11[0] = 0.0;
        v11[1] = 0.0;
        v11[2] = width;
        v11[3] = height;
        v9 = COcclusionContext::DrawOcclusionRectangle((__int64)a2, v11, 0);
        v6 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x109u);
      }
    }
  }
  return v6;
}
