/*
 * XREFs of MiPageToChannel @ 0x1400B7220
 * Callers:
 *     MiAttemptHugePageCoalesce @ 0x1400B58B0 (MiAttemptHugePageCoalesce.c)
 *     MiInsertLargePageInNodeListHelper @ 0x1400B7240 (MiInsertLargePageInNodeListHelper.c)
 *     MiDescribePageRun @ 0x140154454 (MiDescribePageRun.c)
 *     MiInitializeUnusablePfns @ 0x14015451C (MiInitializeUnusablePfns.c)
 *     MiSwitchToPfns @ 0x14080053C (MiSwitchToPfns.c)
 *     MxCreateFreePfns @ 0x140800A20 (MxCreateFreePfns.c)
 *     MxCreatePfns @ 0x140801D90 (MxCreatePfns.c)
 *     MxCreatePfn @ 0x1408021CC (MxCreatePfn.c)
 *     MiFreeBootPageTable @ 0x140813674 (MiFreeBootPageTable.c)
 *     MiInitializeSystemChannelOrdering @ 0x140834F78 (MiInitializeSystemChannelOrdering.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPageToChannel(unsigned __int64 a1)
{
  unsigned int v2; // edx
  unsigned int i; // r9d

  if ( !qword_14036C1D8 )
    return 0LL;
  v2 = MiChannelLastRangeIndex;
  if ( a1 < *(_QWORD *)(qword_14036C1D8 + 16LL * (unsigned int)MiChannelLastRangeIndex) )
  {
    do
      --v2;
    while ( a1 < *(_QWORD *)(qword_14036C1D8 + 16LL * v2) );
  }
  else
  {
    for ( i = MiChannelLastRangeIndex + 1; a1 >= *(_QWORD *)(qword_14036C1D8 + 16LL * i); ++i )
      ++v2;
  }
  MiChannelLastRangeIndex = v2;
  return *(unsigned __int16 *)(qword_14036C1D8 + 16LL * v2 + 12);
}
