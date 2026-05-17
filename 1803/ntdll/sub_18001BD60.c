/*
 * XREFs of sub_18001BD60 @ 0x18001BD60
 * Callers:
 *     sub_180013D40 @ 0x180013D40 (sub_180013D40.c)
 *     RtlSizeHeap @ 0x18001B860 (RtlSizeHeap.c)
 *     RtlGetUserInfoHeap @ 0x1800634E0 (RtlGetUserInfoHeap.c)
 *     RtlSetUserValueHeap @ 0x180063860 (RtlSetUserValueHeap.c)
 *     RtlValidateHeap @ 0x1800723C0 (RtlValidateHeap.c)
 *     RtlSetUserFlagsHeap @ 0x1800EB820 (RtlSetUserFlagsHeap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001BD60(__int16 a1)
{
  int v1; // r8d
  int v2; // edx
  unsigned int v3; // r8d

  v1 = a1 & 1 | 2;
  if ( (a1 & 8) == 0 )
    v1 = a1 & 1;
  if ( (a1 & 4) != 0 )
    v1 |= 0x80000000;
  v2 = v1 | 0x100;
  if ( (a1 & 0x100) == 0 )
    v2 = v1;
  v3 = a1 & 0xE00 | v2;
  if ( (a1 & 0xE00) == 0 )
    v3 = v2;
  if ( (a1 & 0x10) != 0 )
    v3 |= 0x2000000u;
  if ( (a1 & 2) != 0 )
    v3 |= 0x1000000u;
  return v3;
}
