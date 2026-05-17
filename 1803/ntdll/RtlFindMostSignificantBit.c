/*
 * XREFs of RtlFindMostSignificantBit @ 0x1800836A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindMostSignificantBit(unsigned __int64 a1)
{
  bool v1; // zf
  __int64 v2; // rdx
  __int64 result; // rax

  v1 = !_BitScanReverse64((unsigned __int64 *)&v2, a1);
  result = 0xFFFFFFFFLL;
  if ( !v1 )
    return (unsigned __int8)v2;
  return result;
}
