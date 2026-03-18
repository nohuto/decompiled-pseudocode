/*
 * XREFs of CalcWindowRgn @ 0x1C00800C0
 * Callers:
 *     xxxInternalInvalidate @ 0x1C0069C80 (xxxInternalInvalidate.c)
 *     InternalInvalidate3 @ 0x1C006AFA4 (InternalInvalidate3.c)
 *     xxxBeginPaint @ 0x1C007F174 (xxxBeginPaint.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C007FA1C (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CalcWindowRgn(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // r8

  SetRectRgnIndirect(a2, a1 + 128 + (a3 != 0 ? 0x10 : 0));
  v5 = *(_QWORD *)(a1 + 216);
  if ( v5 )
    return GreCombineRgn(a2, a2, v5, 1LL);
  else
    return 2LL;
}
