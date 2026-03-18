/*
 * XREFs of RtlpUpdateHeapRates @ 0x140254474
 * Callers:
 *     RtlpDeCommitFreeBlock @ 0x14010CD3C (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x14010E9A0 (RtlpFindAndCommitPages.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlpUpdateHeapRates(_DWORD *a1, int a2)
{
  int v2; // edx
  int v3; // edx

  v2 = a2 - 1;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 == 1 )
        ++a1[149];
    }
    else
    {
      ++a1[148];
    }
  }
  else
  {
    ++a1[146];
    ++a1[147];
  }
}
