/*
 * XREFs of MiObtainSystemCharges @ 0x14002D65C
 * Callers:
 *     MiGetPageTablePages @ 0x14010E79C (MiGetPageTablePages.c)
 * Callees:
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x1400D0C60 (MiChargeCommit.c)
 *     MiChargeResident @ 0x14010EE5C (MiChargeResident.c)
 */

__int64 __fastcall MiObtainSystemCharges(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v6; // r8
  unsigned __int64 v8; // r8

  if ( !(unsigned int)MiChargeCommit(a1, a2, 1LL) )
    return 0LL;
  v6 = 128LL;
  if ( a3 != 2 )
    v6 = 0LL;
  if ( !(unsigned int)MiChargeResident(a1, a2, v6) )
  {
    MiReturnCommit(a1, a2);
    return 0LL;
  }
  if ( a3 == 1 || a3 == 11 )
  {
    v8 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 48), a2);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 40), a2);
  }
  else if ( a3 != 2 )
  {
    _InterlockedExchangeAdd64(&qword_14036D128, a2);
  }
  return 1LL;
}
