/*
 * XREFs of ndisNicAutoPowerInsertIntoSortedArray @ 0x1C006E220
 * Callers:
 *     ndisTraceNicAutoPowerSaver @ 0x1C0071A88 (ndisTraceNicAutoPowerSaver.c)
 * Callees:
 *     memmove @ 0x1C0024F40 (memmove.c)
 */

__int64 __fastcall ndisNicAutoPowerInsertIntoSortedArray(unsigned __int16 *a1, __int64 a2, unsigned __int16 *a3)
{
  unsigned __int16 *v5; // r9
  unsigned int v6; // ebx
  __int64 result; // rax
  unsigned int v8; // edx

  v5 = a3;
  v6 = 0;
  while ( 1 )
  {
    result = v5[1];
    v8 = result + (*v5 << 16);
    if ( a1[1] + (*a1 << 16) > v8 )
      break;
    ++v6;
    v5 += 8;
    if ( v6 >= 8 )
      return result;
  }
  if ( v8 || v6 < 7 )
    memmove(&a3[8 * v6 + 8], &a3[8 * v6], 7 - v6);
  result = 2LL * v6;
  *(_OWORD *)&a3[8 * v6] = *(_OWORD *)a1;
  return result;
}
