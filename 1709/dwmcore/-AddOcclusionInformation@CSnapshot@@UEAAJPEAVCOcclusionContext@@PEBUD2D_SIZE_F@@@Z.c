/*
 * XREFs of ?AddOcclusionInformation@CSnapshot@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180175DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?DrawOcclusionRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18005D830 (-DrawOcclusionRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?GetBounds@CSnapshot@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180175F90 (-GetBounds@CSnapshot@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil.c)
 */

__int64 __fastcall CSnapshot::AddOcclusionInformation(
        CSnapshot *this,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  float v5[4]; // [rsp+20h] [rbp-28h] BYREF

  if ( *((_BYTE *)this + 64) )
  {
    CSnapshot::GetBounds(this, 0LL, a3, v5);
    COcclusionContext::DrawOcclusionRectangle((__int64)a2, v5, 0);
  }
  return 0LL;
}
