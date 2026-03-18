/*
 * XREFs of MiObtainSystemCharges @ 0x1400717C0
 * Callers:
 *     MiGetPageTablePages @ 0x1400716C0 (MiGetPageTablePages.c)
 *     MiGetLargePagesForSystemMapping @ 0x14074D840 (MiGetLargePagesForSystemMapping.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x140119760 (MiChargeCommit.c)
 *     MiChargeResident @ 0x140131D0C (MiChargeResident.c)
 */

__int64 __fastcall MiObtainSystemCharges(__int64 a1, unsigned __int64 a2, int a3, __int64 a4)
{
  __int64 v7; // r8
  unsigned __int64 v9; // r8

  if ( !(unsigned int)MiChargeCommit(a1, a2, 1LL, a4) )
    return 0LL;
  v7 = 128LL;
  if ( a3 != 2 )
    v7 = 0LL;
  if ( !(unsigned int)MiChargeResident(a1, a2, v7) )
  {
    MiReturnCommit(a1, a2);
    return 0LL;
  }
  if ( a3 == 1 || a3 == 11 )
  {
    v9 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 48), a2);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 40), a2);
  }
  else if ( a3 != 2 )
  {
    if ( a3 == 4 )
      _InterlockedExchangeAdd64(&qword_1403CC680, a2);
    else
      _InterlockedExchangeAdd64(&qword_1403CC660, a2);
  }
  return 1LL;
}
