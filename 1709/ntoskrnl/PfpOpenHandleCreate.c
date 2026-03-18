/*
 * XREFs of PfpOpenHandleCreate @ 0x140442D3C
 * Callers:
 *     PfpVolumeOpenAndVerify @ 0x14043FDE4 (PfpVolumeOpenAndVerify.c)
 *     PfpPrefetchDirectoryStream @ 0x140440598 (PfpPrefetchDirectoryStream.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1404412FC (PfSnOpenVolumesForPrefetch.c)
 *     PfSnQueryVolumeInfo @ 0x1404418EC (PfSnQueryVolumeInfo.c)
 *     PfpFileBuildReadSupport @ 0x140441A30 (PfpFileBuildReadSupport.c)
 *     PfpPrefetchEntireDirectory @ 0x140441FDC (PfpPrefetchEntireDirectory.c)
 *     PfSnGetSectionObject @ 0x140442728 (PfSnGetSectionObject.c)
 *     PfpQueryFileExtentsRequest @ 0x1406F2EF8 (PfpQueryFileExtentsRequest.c)
 * Callees:
 *     PfpCheckPrefetchAbort @ 0x1400020BC (PfpCheckPrefetchAbort.c)
 *     KeDelayExecutionThread @ 0x1400818C0 (KeDelayExecutionThread.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall PfpOpenHandleCreate(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        unsigned int a7,
        __int64 a8)
{
  unsigned int v8; // esi
  int v9; // eax
  __int64 v12; // r14
  unsigned int v13; // r15d
  unsigned int v14; // r12d
  int v15; // r13d
  _QWORD *v16; // rcx
  unsigned int v17; // ecx
  _OWORD v19[10]; // [rsp+28h] [rbp-69h] BYREF
  LARGE_INTEGER Interval; // [rsp+E0h] [rbp+4Fh] BYREF
  __int64 v21; // [rsp+E8h] [rbp+57h]
  __int64 v22; // [rsp+F0h] [rbp+5Fh]

  v22 = a4;
  v21 = a3;
  v8 = 0;
  v9 = *(_DWORD *)(a2 + 68);
  Interval.QuadPart = -10000LL * *(unsigned int *)(a2 + 56);
  if ( (v9 & 4) != 0 )
  {
    return (unsigned int)-1073741431;
  }
  else
  {
    v12 = a8;
    v13 = a7;
    v14 = a6;
    v15 = a5;
    while ( 1 )
    {
      v16 = *(_QWORD **)(a2 + 24);
      if ( v16 && PfpCheckPrefetchAbort(v16) )
        return (unsigned int)-1073741248;
      memset(v19, 0, 0x70uLL);
      LODWORD(v19[1]) = 48;
      *(_QWORD *)&v19[0] = a2 + 40;
      *((_QWORD *)&v19[1] + 1) = v22;
      *(_QWORD *)&v19[2] = v21;
      DWORD2(v19[2]) = 576;
      v19[3] = 0LL;
      LODWORD(v19[4]) = v15;
      *(_QWORD *)((char *)&v19[4] + 4) = __PAIR64__(v14, v13);
      if ( v12 )
        *((_QWORD *)&v19[0] + 1) = *(_QWORD *)(v12 + 8);
      v17 = (*(__int64 (__fastcall **)(_OWORD *))qword_14038D3D8)(v19);
      if ( (v17 & 0x80000000) == 0 )
      {
        *(_OWORD *)a1 = v19[5];
        *(_QWORD *)(a1 + 16) = *(_QWORD *)&v19[6];
        *(_DWORD *)(a1 + 24) = HIDWORD(v19[6]);
        _InterlockedIncrement((volatile signed __int32 *)(a2 + 76));
        *(_QWORD *)(a1 + 24) |= 0x400000000uLL;
        return 0;
      }
      ++*(_DWORD *)(a2 + 80);
      if ( DWORD2(v19[6]) == 2 )
        break;
      if ( DWORD2(v19[6]) == 5 )
      {
        *(_DWORD *)(a2 + 72) = 1;
        return v17;
      }
      if ( SDWORD2(v19[6]) <= 10
        || SDWORD2(v19[6]) > 13 && DWORD2(v19[6]) != 16
        || DWORD2(v19[6]) == 16 && v8 > 1
        || *(_DWORD *)(a2 + 60) <= *(_DWORD *)(a2 + 64) )
      {
        return v17;
      }
      KeDelayExecutionThread(0, 0, &Interval);
      ++v8;
      *(_DWORD *)(a2 + 64) += *(_DWORD *)(a2 + 56);
      if ( (*(_DWORD *)(a2 + 68) & 4) != 0 )
        return (unsigned int)-1073741431;
    }
    if ( v17 != -1073741790 )
      *(_QWORD *)(a1 + 24) |= 0x100000000uLL;
  }
  return v17;
}
