/*
 * XREFs of ?GetDestinationRect@COcclusionContext@@AEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV2@@Z @ 0x1800A918C
 * Callers:
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x1800A90A0 (-CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSi.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A9B10 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A4FF0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Clip@CBaseClipStack@@QEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV2@@Z @ 0x1800C0BF0 (-Clip@CBaseClipStack@@QEBA-AV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquenes.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

__int64 __fastcall COcclusionContext::GetDestinationRect(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // ecx
  CMILMatrix *v6; // rcx
  float v8[4]; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_DWORD *)(a1 + 8);
  if ( v4 )
    v6 = (CMILMatrix *)(*(_QWORD *)(a1 + 24) + 68LL * (unsigned int)(v4 - 1));
  else
    v6 = (CMILMatrix *)&CMILMatrix::Identity;
  CMILMatrix::Transform2DBoundsHelper<0>(v6, a3, v8);
  CBaseClipStack::Clip(a1 + 120, a2, v8);
  return a2;
}
