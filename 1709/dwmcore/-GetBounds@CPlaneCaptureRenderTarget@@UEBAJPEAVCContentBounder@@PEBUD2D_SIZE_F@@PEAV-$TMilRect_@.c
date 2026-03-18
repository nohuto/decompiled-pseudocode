/*
 * XREFs of ?GetBounds@CPlaneCaptureRenderTarget@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C1560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPlaneCaptureRenderTarget::GetBounds(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  *(_DWORD *)a4 = 0;
  *(_DWORD *)(a4 + 4) = 0;
  *(float *)(a4 + 8) = (float)*(int *)(a1 + 360);
  result = 0LL;
  *(float *)(a4 + 12) = (float)*(int *)(a1 + 364);
  return result;
}
