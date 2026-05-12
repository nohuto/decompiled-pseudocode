/*
 * XREFs of PortpPassThroughZeroUnusedBuffers @ 0x1C004831C
 * Callers:
 *     PortPassThroughExValidate @ 0x1C0047CFC (PortPassThroughExValidate.c)
 *     PortPassThroughValidate @ 0x1C006A420 (PortPassThroughValidate.c)
 * Callees:
 *     memset @ 0x1C001F680 (memset.c)
 */

_DWORD *__fastcall PortpPassThroughZeroUnusedBuffers(__int64 a1)
{
  _DWORD *result; // rax
  unsigned int v2; // r9d
  unsigned int v3; // edx

  result = *(_DWORD **)(a1 + 184);
  v2 = result[4];
  v3 = result[2];
  if ( v3 > v2 )
    return memset((void *)(*(_QWORD *)(a1 + 24) + v2), 0, v3 - v2);
  return result;
}
