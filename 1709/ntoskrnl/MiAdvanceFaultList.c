/*
 * XREFs of MiAdvanceFaultList @ 0x14010A0F4
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x140027210 (MiCopyDataPageToImagePage.c)
 *     MiBuildMdlForMappedFileFault @ 0x140028510 (MiBuildMdlForMappedFileFault.c)
 *     MiResolveSharedZeroFault @ 0x140040630 (MiResolveSharedZeroFault.c)
 *     MiResolvePageTablePage @ 0x1400422D0 (MiResolvePageTablePage.c)
 *     MiResolvePrivateZeroFault @ 0x1400464C0 (MiResolvePrivateZeroFault.c)
 *     MiCompletePrivateZeroFault @ 0x140046F90 (MiCompletePrivateZeroFault.c)
 *     MiCreateSharedZeroPages @ 0x14004BDB0 (MiCreateSharedZeroPages.c)
 *     MiComputeFaultCluster @ 0x140109A10 (MiComputeFaultCluster.c)
 *     MiPrefetchVirtualMemory @ 0x140109C80 (MiPrefetchVirtualMemory.c)
 *     MiResolvePageFileFault @ 0x140234CE8 (MiResolvePageFileFault.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiAdvanceFaultList(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // r10
  __int64 v5; // r8
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx

  v2 = a1[3];
  result = 2 * v2;
  v4 = a1[1];
  v5 = *(_QWORD *)(v4 + 16 * v2 + 8);
  v6 = *(_DWORD *)(v4 + 16 * v2) & 0xFFF;
  if ( ++a1[4] == (unsigned __int64)(v6 + v5 + 4095) >> 12 )
  {
    a1[4] = 0LL;
    v7 = v2 + 1;
    v8 = a1[2];
    a1[3] = v7;
    if ( v7 < v8 )
    {
      result = 2 * v7;
      if ( !*(_QWORD *)(v4 + 16 * v7 + 8) )
        v7 = v8;
      a1[3] = v7;
    }
  }
  return result;
}
