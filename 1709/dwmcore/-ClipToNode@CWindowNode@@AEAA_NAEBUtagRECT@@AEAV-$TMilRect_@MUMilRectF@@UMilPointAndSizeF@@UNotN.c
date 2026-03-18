/*
 * XREFs of ?ClipToNode@CWindowNode@@AEAA_NAEBUtagRECT@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009BAAC
 * Callers:
 *     ?NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z @ 0x180098B00 (-NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z.c)
 *     ?ProcessNotifyDxImmediateUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXIMMEDIATEUPDATE@@@Z @ 0x180179058 (-ProcessNotifyDxImmediateUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTI.c)
 *     ?ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDATE@@@Z @ 0x180179234 (-ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDAT.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036770 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

bool __fastcall CWindowNode::ClipToNode(__int64 a1, const RECT *a2, __int64 a3)
{
  float top; // xmm1_4
  __m128i v6; // xmm0
  float bottom; // xmm1_4
  struct tagRECT rcDst; // [rsp+20h] [rbp-28h] BYREF

  CopyRect(&rcDst, (const RECT *)(a1 + 632));
  OffsetRect(&rcDst, -rcDst.left, -rcDst.top);
  IntersectRect(&rcDst, a2, &rcDst);
  top = (float)rcDst.top;
  *(float *)a3 = (float)rcDst.left;
  v6 = _mm_cvtsi32_si128(rcDst.right);
  *(float *)(a3 + 4) = top;
  bottom = (float)rcDst.bottom;
  *(_DWORD *)(a3 + 8) = _mm_cvtepi32_ps(v6).m128_u32[0];
  *(float *)(a3 + 12) = bottom;
  return !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)a3);
}
