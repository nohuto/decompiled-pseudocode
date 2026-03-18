/*
 * XREFs of HvpViewMapCOWAndUnsealRange @ 0x140513B34
 * Callers:
 *     HvpSetRangeProtection @ 0x140513D48 (HvpSetRangeProtection.c)
 *     HvpAddBin @ 0x140566210 (HvpAddBin.c)
 * Callees:
 *     HvpViewMapFindViewForFileOffset @ 0x1404E366C (HvpViewMapFindViewForFileOffset.c)
 *     HvpViewMapMakeViewRangeCOWByCaller @ 0x140513BA8 (HvpViewMapMakeViewRangeCOWByCaller.c)
 */

__int64 __fastcall HvpViewMapCOWAndUnsealRange(__int64 a1, int a2, unsigned int a3)
{
  unsigned __int64 v3; // r10
  signed __int64 v4; // rbx
  unsigned __int64 ViewForFileOffset; // rax
  __int64 v7; // r10
  signed __int64 v8; // rdi
  __int64 result; // rax

  v3 = (unsigned int)(a2 + 4096);
  v4 = v3 + a3;
  if ( v3 >= v4 )
    return 0LL;
  while ( 1 )
  {
    ViewForFileOffset = HvpViewMapFindViewForFileOffset(a1, v3);
    v8 = v4;
    if ( v4 >= *(_QWORD *)(ViewForFileOffset + 48) )
      v8 = *(_QWORD *)(ViewForFileOffset + 48);
    result = HvpViewMapMakeViewRangeCOWByCaller(a1, ViewForFileOffset, v7, v8);
    if ( (int)result < 0 )
      break;
    v3 = v8;
    if ( v8 >= v4 )
      return 0LL;
  }
  return result;
}
