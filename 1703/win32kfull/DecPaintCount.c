/*
 * XREFs of DecPaintCount @ 0x1C001C338
 * Callers:
 *     ClrFTrueVis @ 0x1C001EBD4 (ClrFTrueVis.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C0049000 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     xxxDoPaint @ 0x1C004D4FC (xxxDoPaint.c)
 *     xxxFreeWindow @ 0x1C005DD44 (xxxFreeWindow.c)
 *     InternalInvalidate3 @ 0x1C0066B30 (InternalInvalidate3.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C00F11D0 (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DecPaintCount(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 16);
  if ( (*(_DWORD *)(v1 + 520))-- == 1 )
  {
    *(_WORD *)(*(_QWORD *)(v1 + 400) + 6LL) &= ~0x20u;
    result = *(_QWORD *)(v1 + 400);
    *(_WORD *)(result + 4) &= ~0x20u;
  }
  return result;
}
