/*
 * XREFs of PfpOpenHandleClose @ 0x140442EA0
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x14043FA98 (PfpPrefetchRequestPerform.c)
 *     PfpVolumeOpenAndVerify @ 0x14043FDE4 (PfpVolumeOpenAndVerify.c)
 *     PfpPrefetchVolumesCleanup @ 0x140440158 (PfpPrefetchVolumesCleanup.c)
 *     PfpPrefetchDirectoryStream @ 0x140440598 (PfpPrefetchDirectoryStream.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1404412FC (PfSnOpenVolumesForPrefetch.c)
 *     PfSnQueryVolumeInfo @ 0x1404418EC (PfSnQueryVolumeInfo.c)
 *     PfpFileBuildReadSupport @ 0x140441A30 (PfpFileBuildReadSupport.c)
 *     PfpPrefetchEntireDirectory @ 0x140441FDC (PfpPrefetchEntireDirectory.c)
 *     PfSnGetSectionObject @ 0x140442728 (PfSnGetSectionObject.c)
 *     PfSnCleanupPrefetchHeader @ 0x140442B6C (PfSnCleanupPrefetchHeader.c)
 *     PfSnCleanupPrefetchSectionInfo @ 0x140442C74 (PfSnCleanupPrefetchSectionInfo.c)
 *     PfpReadSupportCleanup @ 0x1404433C8 (PfpReadSupportCleanup.c)
 *     PfpQueryFileExtentsRequest @ 0x1406F2EF8 (PfpQueryFileExtentsRequest.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall PfpOpenHandleClose(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( (a1[3] & 0x1000000000LL) == 0 )
  {
    memset(v5, 0, 0x20uLL);
    v5[1] = *a1;
    v5[2] = a1[1];
    v5[3] = a1[2];
    v5[0] = a2 + 40;
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 84));
    (*(void (__fastcall **)(_QWORD *))(qword_14038D3D8 + 8))(v5);
  }
  result = 0x800000000LL;
  a1[3] |= 0x800000000uLL;
  return result;
}
