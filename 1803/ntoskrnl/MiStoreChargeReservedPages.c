/*
 * XREFs of MiStoreChargeReservedPages @ 0x14016FFA4
 * Callers:
 *     MiInitSystem @ 0x14089C128 (MiInitSystem.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x140119760 (MiChargeCommit.c)
 *     MiChargeResident @ 0x140131D0C (MiChargeResident.c)
 */

__int64 MiStoreChargeReservedPages()
{
  __int64 v0; // r9

  if ( (unsigned int)MiChargeCommit((__int64)&MiSystemPartition, 0x20uLL, 3u) )
  {
    if ( (unsigned int)MiChargeResident(&MiSystemPartition, 0x20uLL, 0LL, v0) )
    {
      dword_1403CDF44 |= 4u;
      return 1LL;
    }
    MiReturnCommit((__int64)&MiSystemPartition, 0x20uLL);
  }
  return 0LL;
}
