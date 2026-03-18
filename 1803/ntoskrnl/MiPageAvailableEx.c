/*
 * XREFs of MiPageAvailableEx @ 0x1400E7708
 * Callers:
 *     MmAccessFault @ 0x14001B320 (MmAccessFault.c)
 *     MiDecreaseAvailablePages @ 0x1400D5664 (MiDecreaseAvailablePages.c)
 *     MiDemoteLocalLargePage @ 0x1400E6D90 (MiDemoteLocalLargePage.c)
 *     MiPageAvailable @ 0x14026B798 (MiPageAvailable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPageAvailableEx(__int64 a1, unsigned __int64 a2, __int16 a3)
{
  int v5; // ecx

  if ( a2 >= 0x9F )
    return 1LL;
  if ( (a3 & 0x2000) != 0 )
    return 1LL;
  v5 = *((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3);
  if ( (v5 & 0xC) == 8 )
    return 1LL;
  if ( a2 < 0x20 && (ULONG_PTR *)a1 == &MiSystemPartition )
    return 0LL;
  if ( (a3 & 4) != 0 || (v5 & 2) != 0 && a2 >= 0x21 )
    return 1LL;
  return (*(unsigned __int8 *)(a1 + 4) >> 3) & 1;
}
