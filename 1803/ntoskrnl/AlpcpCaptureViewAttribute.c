/*
 * XREFs of AlpcpCaptureViewAttribute @ 0x1404D9AAC
 * Callers:
 *     AlpcpCaptureAttributes @ 0x1404CDA80 (AlpcpCaptureAttributes.c)
 * Callees:
 *     AlpcpCaptureViewAttributeInternal @ 0x1404D9AEC (AlpcpCaptureViewAttributeInternal.c)
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
