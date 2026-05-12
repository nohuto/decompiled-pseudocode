/*
 * XREFs of StorPortWriteRegisterBufferUshort @ 0x1C00314C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_UNKNOWN **__fastcall StorPortWriteRegisterBufferUshort(__int64 a1, _WORD *a2, _WORD *a3, unsigned int a4)
{
  _UNKNOWN **result; // rax
  __int64 i; // rcx
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  result = &retaddr;
  for ( i = a4; i; --i )
    *a2++ = *a3++;
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  return result;
}
