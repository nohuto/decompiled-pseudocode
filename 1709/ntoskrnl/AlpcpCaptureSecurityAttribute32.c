/*
 * XREFs of AlpcpCaptureSecurityAttribute32 @ 0x14044A118
 * Callers:
 *     AlpcpCaptureAttributes @ 0x1404A1A00 (AlpcpCaptureAttributes.c)
 * Callees:
 *     AlpcpCaptureSecurityAttributeInternal @ 0x140462094 (AlpcpCaptureSecurityAttributeInternal.c)
 */

__int64 __fastcall AlpcpCaptureSecurityAttribute32(void *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v5; // [rsp+38h] [rbp-20h]

  v5 = *(_DWORD *)(a2 + 8);
  result = AlpcpCaptureSecurityAttributeInternal(a1, a3);
  if ( (int)result >= 0 )
    *(_DWORD *)(a2 + 8) = v5;
  return result;
}
