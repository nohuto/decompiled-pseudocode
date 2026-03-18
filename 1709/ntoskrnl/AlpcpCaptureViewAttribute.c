/*
 * XREFs of AlpcpCaptureViewAttribute @ 0x14046134C
 * Callers:
 *     AlpcpCaptureAttributes @ 0x1404A1A00 (AlpcpCaptureAttributes.c)
 * Callees:
 *     AlpcpCaptureViewAttributeInternal @ 0x140461390 (AlpcpCaptureViewAttributeInternal.c)
 */

__int64 __fastcall AlpcpCaptureViewAttribute(__int64 a1, _OWORD *a2, __int64 a3, __int64 a4)
{
  _OWORD v5[2]; // [rsp+20h] [rbp-28h] BYREF

  if ( KeGetCurrentThread()->PreviousMode )
  {
    v5[0] = *a2;
    v5[1] = a2[1];
    a2 = v5;
  }
  return AlpcpCaptureViewAttributeInternal(a1, a2, a3, a4);
}
