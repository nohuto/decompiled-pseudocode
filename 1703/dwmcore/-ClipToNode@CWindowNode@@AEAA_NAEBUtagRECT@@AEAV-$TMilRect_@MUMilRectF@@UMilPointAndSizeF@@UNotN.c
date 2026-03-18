/*
 * XREFs of ?ClipToNode@CWindowNode@@AEAA_NAEBUtagRECT@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18012A758
 * Callers:
 *     ?ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDATE@@@Z @ 0x1800D0650 (-ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDAT.c)
 *     ?ProcessNotifyDxImmediateUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXIMMEDIATEUPDATE@@@Z @ 0x18012AB4C (-ProcessNotifyDxImmediateUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTI.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FBC0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

bool __fastcall CWindowNode::ClipToNode(__int64 a1, const RECT *a2, __int64 a3)
{
  float top; // xmm1_4
  __m128i v6; // xmm0
  float bottom; // xmm1_4
  struct tagRECT rcDst; // [rsp+20h] [rbp-28h] BYREF

  CopyRect(&rcDst, (const RECT *)(a1 + 604));
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
