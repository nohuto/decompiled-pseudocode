/*
 * XREFs of CmpUpdatePhaseAccessBit @ 0x14065063C
 * Callers:
 *     CmpAcceptBoot @ 0x14061378C (CmpAcceptBoot.c)
 * Callees:
 *     CmpTrimHive @ 0x140495A18 (CmpTrimHive.c)
 *     CmpGetNextActiveHive @ 0x14049BA70 (CmpGetNextActiveHive.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x14065068C (CmpUpdateReorganizeRegistryValues.c)
 */

void CmpUpdatePhaseAccessBit()
{
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 *NextActiveHive; // rax
  struct _EX_RUNDOWN_REF *v2; // rbx

  if ( CmpAccessBitForPhase != 2 )
  {
    CmpAccessBitForPhase = 2;
    for ( i = 0LL; ; i = v2 )
    {
      NextActiveHive = CmpGetNextActiveHive(i);
      v2 = (struct _EX_RUNDOWN_REF *)NextActiveHive;
      if ( !NextActiveHive )
        break;
      if ( (NextActiveHive[20] & 0x10) == 0 )
        CmpTrimHive((__int64)NextActiveHive);
    }
    CmpUpdateReorganizeRegistryValues();
  }
}
