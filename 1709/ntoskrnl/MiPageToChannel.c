/*
 * XREFs of MiPageToChannel @ 0x1400C7124
 * Callers:
 *     MiAttemptHugePageCoalesce @ 0x1400C59B0 (MiAttemptHugePageCoalesce.c)
 *     MiInsertLargePageInNodeListHelper @ 0x1400C6B30 (MiInsertLargePageInNodeListHelper.c)
 *     MiDescribePageRun @ 0x14013756C (MiDescribePageRun.c)
 *     MiInitializeUnusablePfns @ 0x140137634 (MiInitializeUnusablePfns.c)
 *     MiSwitchToPfns @ 0x14082A50C (MiSwitchToPfns.c)
 *     MxCreateFreePfns @ 0x14082A9F8 (MxCreateFreePfns.c)
 *     MxCreatePfn @ 0x14082C120 (MxCreatePfn.c)
 *     MiFreeBootPageTable @ 0x14084A574 (MiFreeBootPageTable.c)
 *     MiInitializeSystemChannelOrdering @ 0x14086C118 (MiInitializeSystemChannelOrdering.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPageToChannel(unsigned __int64 a1)
{
  unsigned int v2; // edx
  unsigned int i; // r9d

  if ( !qword_140388520 )
    return 0LL;
  v2 = MiChannelLastRangeIndex;
  if ( a1 < *(_QWORD *)(qword_140388520 + 16LL * (unsigned int)MiChannelLastRangeIndex) )
  {
    do
      --v2;
    while ( a1 < *(_QWORD *)(qword_140388520 + 16LL * v2) );
  }
  else
  {
    for ( i = MiChannelLastRangeIndex + 1; a1 >= *(_QWORD *)(qword_140388520 + 16LL * i); ++i )
      ++v2;
  }
  MiChannelLastRangeIndex = v2;
  return *(unsigned __int16 *)(qword_140388520 + 16LL * v2 + 12);
}
