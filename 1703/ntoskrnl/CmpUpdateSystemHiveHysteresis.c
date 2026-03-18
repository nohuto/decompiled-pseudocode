/*
 * XREFs of CmpUpdateSystemHiveHysteresis @ 0x14043B514
 * Callers:
 *     HvpAddBin @ 0x14043A920 (HvpAddBin.c)
 *     HvFreeHivePartial @ 0x1404B7EDC (HvFreeHivePartial.c)
 * Callees:
 *     CmpDoQueueSystemHiveHysteresis @ 0x1406624D0 (CmpDoQueueSystemHiveHysteresis.c)
 */

void __fastcall CmpUpdateSystemHiveHysteresis(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // eax
  unsigned int v5; // eax
  __int64 v6; // rdx

  if ( a1 == qword_14033BE70 && CmpSystemHiveHysteresisCallback )
  {
    v4 = a2 + 4096;
    v6 = 100 * (a2 + 4096) % CmSystemHiveLimitSize;
    v5 = 100 * v4 / CmSystemHiveLimitSize;
    if ( a2 <= a3 )
    {
      if ( CmpSystemHiveHysteresisLowSeen )
        return;
      if ( v5 >= CmpSystemHiveHysteresisLow )
        return;
      CmpSystemHiveHysteresisLowSeen = 1;
      if ( CmpSystemHiveHysteresisHighSeen != 1 )
        return;
      if ( (unsigned __int8)CmpDoQueueSystemHiveHysteresis(v5, v6) != 1 )
      {
LABEL_9:
        CmpSystemHiveHysteresisLowSeen = 0;
        return;
      }
    }
    else
    {
      if ( v5 <= CmpSystemHiveHysteresisHigh )
        return;
      if ( CmpSystemHiveHysteresisHighSeen )
        return;
      CmpSystemHiveHysteresisHighSeen = 1;
      if ( CmpSystemHiveHysteresisLowSeen != 1 )
        return;
      if ( (unsigned __int8)CmpDoQueueSystemHiveHysteresis(v5, v6) == 1 )
        goto LABEL_9;
    }
    CmpSystemHiveHysteresisHighSeen = 0;
  }
}
