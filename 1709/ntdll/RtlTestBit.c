/*
 * XREFs of RtlTestBit @ 0x1800EA0A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall RtlTestBit(__int64 a1, unsigned int a2)
{
  return _bittest(*(const signed __int32 **)(a1 + 8), a2);
}
