/*
 * XREFs of ?GetAccumulatedBounds@CSwRenderTargetGetBounds@@UEBAJPEAUMilRectF@@@Z @ 0x1800CC990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSwRenderTargetGetBounds::GetAccumulatedBounds(CSwRenderTargetGetBounds *this, struct MilRectF *a2)
{
  __int64 result; // rax

  result = 0LL;
  *(_OWORD *)a2 = *(_OWORD *)((char *)this + 36);
  return result;
}
