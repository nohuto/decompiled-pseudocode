/*
 * XREFs of AlpcpCaptureViewAttribute32 @ 0x140457FC4
 * Callers:
 *     AlpcpCaptureAttributes @ 0x140525C00 (AlpcpCaptureAttributes.c)
 * Callees:
 *     AlpcpCaptureViewAttributeInternal @ 0x14047A5CC (AlpcpCaptureViewAttributeInternal.c)
 */

__int64 __fastcall AlpcpCaptureViewAttribute32(__int64 a1, int *a2)
{
  int v3; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+28h] [rbp-20h]
  __int64 v5; // [rsp+30h] [rbp-18h]
  __int64 v6; // [rsp+38h] [rbp-10h]

  v3 = *a2;
  v4 = (unsigned int)a2[1];
  v5 = (unsigned int)a2[2];
  v6 = (unsigned int)a2[3];
  return AlpcpCaptureViewAttributeInternal(a1, &v3);
}
