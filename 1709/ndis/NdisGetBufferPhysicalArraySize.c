/*
 * XREFs of NdisGetBufferPhysicalArraySize @ 0x1C005A890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall NdisGetBufferPhysicalArraySize(_DWORD *a1, _DWORD *a2)
{
  __int64 v2; // r8
  _DWORD *result; // rax

  v2 = (unsigned int)a1[10];
  result = a1;
  if ( (_DWORD)v2 )
  {
    result = (_DWORD *)(v2 + 4095);
    *a2 = (v2 + 4095 + (unsigned __int64)((a1[8] + a1[11]) & 0xFFF)) >> 12;
  }
  else
  {
    *a2 = 1;
  }
  return result;
}
