/*
 * XREFs of MiStoreChargeReservedPages @ 0x140137414
 * Callers:
 *     MiInitSystem @ 0x140828E58 (MiInitSystem.c)
 * Callees:
 *     MiChargeResident @ 0x14002ADAC (MiChargeResident.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x14003AB20 (MiChargeCommit.c)
 */

__int64 __fastcall MiStoreChargeReservedPages(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( (unsigned int)MiChargeCommit((__int64)&MiSystemPartition, 0x20uLL, 3LL, a4) )
  {
    if ( (unsigned int)MiChargeResident(&MiSystemPartition, 0x20uLL) )
    {
      dword_14038A0C4 |= 4u;
      return 1LL;
    }
    MiReturnCommit((__int64)&MiSystemPartition, 0x20uLL);
  }
  return 0LL;
}
