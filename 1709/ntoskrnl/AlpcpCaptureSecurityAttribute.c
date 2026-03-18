/*
 * XREFs of AlpcpCaptureSecurityAttribute @ 0x140461FBC
 * Callers:
 *     AlpcpCaptureAttributes @ 0x1404A1A00 (AlpcpCaptureAttributes.c)
 * Callees:
 *     AlpcpCaptureSecurityAttributeInternal @ 0x140462094 (AlpcpCaptureSecurityAttributeInternal.c)
 */

__int64 __fastcall AlpcpCaptureSecurityAttribute(void *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  PVOID Object; // [rsp+38h] [rbp-30h]

  if ( !KeGetCurrentThread()->PreviousMode )
    return AlpcpCaptureSecurityAttributeInternal(a1, a3);
  Object = *(PVOID *)(a2 + 16);
  result = AlpcpCaptureSecurityAttributeInternal(a1, a3);
  if ( (int)result >= 0 )
    *(_QWORD *)(a2 + 16) = Object;
  return result;
}
