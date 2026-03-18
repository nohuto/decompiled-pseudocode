/*
 * XREFs of AlpcpCaptureViewAttribute @ 0x14047A588
 * Callers:
 *     AlpcpCaptureAttributes @ 0x140525C00 (AlpcpCaptureAttributes.c)
 * Callees:
 *     AlpcpCaptureViewAttributeInternal @ 0x14047A5CC (AlpcpCaptureViewAttributeInternal.c)
 */

__int64 __fastcall AlpcpCaptureViewAttribute(__int64 a1, _OWORD *a2)
{
  _OWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF

  if ( KeGetCurrentThread()->PreviousMode )
  {
    v3[0] = *a2;
    v3[1] = a2[1];
    a2 = v3;
  }
  return AlpcpCaptureViewAttributeInternal(a1, a2);
}
