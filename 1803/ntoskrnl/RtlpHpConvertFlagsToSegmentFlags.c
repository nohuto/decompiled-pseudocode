/*
 * XREFs of RtlpHpConvertFlagsToSegmentFlags @ 0x1400AC418
 * Callers:
 *     RtlpFreeHeapInternal @ 0x1400AB3B8 (RtlpFreeHeapInternal.c)
 *     RtlpAllocateHeapInternal @ 0x1400AB5EC (RtlpAllocateHeapInternal.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpHpConvertFlagsToSegmentFlags(__int16 a1)
{
  int v2; // r8d
  char v3; // al
  unsigned int v4; // ecx
  int v5; // edx
  int v6; // ecx
  int v7; // edx
  int result; // eax

  v2 = a1 & 1 | 2;
  v3 = a1;
  if ( (a1 & 8) == 0 )
    v2 = a1 & 1;
  v4 = v2 | 0x80000000;
  if ( (v3 & 4) == 0 )
    v4 = v2;
  v5 = v4 | 0x100;
  if ( (a1 & 0x100) == 0 )
    v5 = v4;
  v6 = a1 & 0xE00 | v5;
  if ( (a1 & 0xE00) == 0 )
    v6 = v5;
  v7 = v6 | 0x2000000;
  if ( (a1 & 0x10) == 0 )
    v7 = v6;
  result = v7 | 0x1000000;
  if ( (a1 & 2) == 0 )
    return v7;
  return result;
}
