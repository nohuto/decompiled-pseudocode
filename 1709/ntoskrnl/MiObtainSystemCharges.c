/*
 * XREFs of MiObtainSystemCharges @ 0x1401227CC
 * Callers:
 *     MiGetPageTablePages @ 0x140027ECC (MiGetPageTablePages.c)
 * Callees:
 *     MiChargeResident @ 0x14002ADAC (MiChargeResident.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x14003AB20 (MiChargeCommit.c)
 */

__int64 __fastcall MiObtainSystemCharges(ULONG_PTR *a1, unsigned __int64 a2, int a3, __int64 a4)
{
  unsigned __int64 v8; // r8

  if ( !(unsigned int)MiChargeCommit((__int64)a1, a2, 1LL, a4) )
    return 0LL;
  if ( !(unsigned int)MiChargeResident(a1, a2) )
  {
    MiReturnCommit((__int64)a1, a2);
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
    _InterlockedExchangeAdd64(&qword_1403893E8, a2);
  }
  return 1LL;
}
