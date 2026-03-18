/*
 * XREFs of KxSetTimeStampBusy @ 0x140144260
 * Callers:
 *     KeInvalidateAllCaches @ 0x140137470 (KeInvalidateAllCaches.c)
 *     KiFlushAddressSpaceTb @ 0x1401410A4 (KiFlushAddressSpaceTb.c)
 *     KxFlushEntireTb @ 0x140143A74 (KxFlushEntireTb.c)
 *     KiSetTbFlushTimeStampBusy @ 0x140207568 (KiSetTbFlushTimeStampBusy.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 */

char __fastcall KxSetTimeStampBusy(int *a1)
{
  int v2; // ecx
  int v3; // edi
  int v5; // eax
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0;
  _m_prefetchw(a1);
  v2 = *a1;
  v3 = v2;
  do
  {
    if ( (v2 & 1) == 0 && !_interlockedbittestandset(a1, 0) )
      return 1;
    KeYieldProcessorEx(&v6);
    v2 = *a1;
    v5 = *a1 - v3;
  }
  while ( v5 < 3 && (v5 < 2 || (v3 & 1) != 0) );
  return 0;
}
