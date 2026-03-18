/*
 * XREFs of RtlpHpLargeAllocGetMetadata @ 0x14029E588
 * Callers:
 *     RtlpHpLargeAllocSetExtraPresent @ 0x14029E5E4 (RtlpHpLargeAllocSetExtraPresent.c)
 *     RtlpHpLargeAllocSize @ 0x14029E67C (RtlpHpLargeAllocSize.c)
 *     RtlpHpLargeFree @ 0x14029E80C (RtlpHpLargeFree.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlpHpLargeAllocGetMetadata(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 *v2; // r8
  __int64 v4; // rcx
  unsigned __int64 result; // rax
  int v6; // edx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rcx

  v2 = (unsigned __int64 *)(a1 + 80);
  v4 = *(_QWORD *)(a1 + 88);
  result = *v2;
  if ( (v4 & 1) != 0 && result )
    result ^= (unsigned __int64)v2;
  v6 = v4 & 1;
  while ( result )
  {
    v7 = *(_QWORD *)(result + 24) & 0xFFFFFFFFFFFF0000uLL;
    if ( a2 < v7 )
    {
      v8 = *(_QWORD *)result;
    }
    else
    {
      if ( a2 <= v7 )
        return result;
      v8 = *(_QWORD *)(result + 8);
    }
    if ( v6 && v8 )
      result ^= v8;
    else
      result = v8;
  }
  return result;
}
