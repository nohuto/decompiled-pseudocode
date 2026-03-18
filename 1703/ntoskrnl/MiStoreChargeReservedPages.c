/*
 * XREFs of MiStoreChargeReservedPages @ 0x140154858
 * Callers:
 *     MiInitSystem @ 0x1408032EC (MiInitSystem.c)
 * Callees:
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x1400D0C60 (MiChargeCommit.c)
 *     MiChargeResident @ 0x14010EE5C (MiChargeResident.c)
 */

__int64 MiStoreChargeReservedPages()
{
  if ( (unsigned int)MiChargeCommit((unsigned __int64)&MiSystemPartition, 0x20uLL, 3uLL) )
  {
    if ( (unsigned int)MiChargeResident(&MiSystemPartition, 0x20uLL, 0LL) )
    {
      dword_140380204 |= 8u;
      return 1LL;
    }
    MiReturnCommit((__int64)&MiSystemPartition, 0x20uLL);
  }
  return 0LL;
}
