/*
 * XREFs of MagpInverseMagnificationTransformFromPoint @ 0x1C01030C0
 * Callers:
 *     AddMagnificationOutputTransform @ 0x1C0103050 (AddMagnificationOutputTransform.c)
 *     ?GetMagClientToScreenTransform@@YAXPEAUtagDESKTOP@@PEAUtagPOINT@@PEAUtagINPUT_TRANSFORM@@@Z @ 0x1C019C490 (-GetMagClientToScreenTransform@@YAXPEAUtagDESKTOP@@PEAUtagPOINT@@PEAUtagINPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     PtInRect @ 0x1C0062B38 (PtInRect.c)
 *     AcquireMagInputLock @ 0x1C0103100 (AcquireMagInputLock.c)
 *     MagnificationInverseTransformPoint @ 0x1C01D3978 (MagnificationInverseTransformPoint.c)
 */

__int64 __fastcall MagpInverseMagnificationTransformFromPoint(__int64 a1, unsigned __int64 *a2)
{
  __int64 result; // rax
  _DWORD *v5; // rcx
  __int64 v6; // rcx

  result = AcquireMagInputLock();
  v5 = *(_DWORD **)(a1 + 216);
  if ( v5 )
  {
    result = PtInRect(v5, *a2);
    if ( (_DWORD)result )
      result = MagnificationInverseTransformPoint(v6, a2);
  }
  _InterlockedExchange64(&gpMagInputLock, 0LL);
  return result;
}
