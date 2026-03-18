/*
 * XREFs of PfpOpenHandleClose @ 0x14053E6CC
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x1404636DC (PfpPrefetchRequestPerform.c)
 *     PfpPrefetchDirectoryStream @ 0x140463E10 (PfpPrefetchDirectoryStream.c)
 *     PfpVolumeOpenAndVerify @ 0x140464084 (PfpVolumeOpenAndVerify.c)
 *     PfpPrefetchVolumesCleanup @ 0x140464524 (PfpPrefetchVolumesCleanup.c)
 *     PfpPrefetchEntireDirectory @ 0x140465B88 (PfpPrefetchEntireDirectory.c)
 *     PfSnOpenVolumesForPrefetch @ 0x140465F50 (PfSnOpenVolumesForPrefetch.c)
 *     PfSnQueryVolumeInfo @ 0x140466584 (PfSnQueryVolumeInfo.c)
 *     PfSnGetSectionObject @ 0x14053DFD0 (PfSnGetSectionObject.c)
 *     PfSnCleanupPrefetchHeader @ 0x14053E398 (PfSnCleanupPrefetchHeader.c)
 *     PfSnCleanupPrefetchSectionInfo @ 0x14053E4A0 (PfSnCleanupPrefetchSectionInfo.c)
 *     PfpReadSupportCleanup @ 0x14053E940 (PfpReadSupportCleanup.c)
 *     PfpFileBuildReadSupport @ 0x14053E99C (PfpFileBuildReadSupport.c)
 *     PfpQueryFileExtentsRequest @ 0x1406C3FD8 (PfpQueryFileExtentsRequest.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
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
    (*(void (__fastcall **)(_QWORD *))(qword_14036DF78 + 8))(v5);
  }
  result = 0x800000000LL;
  a1[3] |= 0x800000000uLL;
  return result;
}
