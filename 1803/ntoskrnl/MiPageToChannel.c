/*
 * XREFs of MiPageToChannel @ 0x140122B2C
 * Callers:
 *     MiInsertLargePageInNodeListHelper @ 0x140122680 (MiInsertLargePageInNodeListHelper.c)
 *     MiDescribePageRun @ 0x14016F8B4 (MiDescribePageRun.c)
 *     MiInitializeUnusablePfns @ 0x14016F97C (MiInitializeUnusablePfns.c)
 *     MiSwitchToPfns @ 0x140899CB8 (MiSwitchToPfns.c)
 *     MxCreateFreePfns @ 0x14089A028 (MxCreateFreePfns.c)
 *     MxCreatePfn @ 0x14089B5E0 (MxCreatePfn.c)
 *     MiFreeBootPageTable @ 0x1408BC09C (MiFreeBootPageTable.c)
 *     MiInitializeSystemChannelOrdering @ 0x1408E0E38 (MiInitializeSystemChannelOrdering.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPageToChannel(unsigned __int64 a1)
{
  unsigned int v2; // edx
  unsigned int i; // r9d

  if ( !qword_1403CB6B8 )
    return 0LL;
  v2 = MiChannelLastRangeIndex;
  if ( a1 < *(_QWORD *)(qword_1403CB6B8 + 16LL * (unsigned int)MiChannelLastRangeIndex) )
  {
    do
      --v2;
    while ( a1 < *(_QWORD *)(qword_1403CB6B8 + 16LL * v2) );
  }
  else
  {
    for ( i = MiChannelLastRangeIndex + 1; a1 >= *(_QWORD *)(qword_1403CB6B8 + 16LL * i); ++i )
      ++v2;
  }
  MiChannelLastRangeIndex = v2;
  return *(unsigned __int16 *)(qword_1403CB6B8 + 16LL * v2 + 12);
}
