/*
 * XREFs of HvpMarkDirty @ 0x14047D1F0
 * Callers:
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x140471198 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14047C538 (HvpRemapAndEnlistHiveBins.c)
 *     HvpEnlistFreeCell @ 0x14047CC5C (HvpEnlistFreeCell.c)
 *     HvpMarkCellDirty @ 0x14047D0F4 (HvpMarkCellDirty.c)
 *     CmpFlushHive @ 0x1404DD950 (CmpFlushHive.c)
 *     HvpAddBin @ 0x1404E4EF8 (HvpAddBin.c)
 *     CmpTransMgrPrepare @ 0x1405A5024 (CmpTransMgrPrepare.c)
 *     CmpTransMgrSyncHive @ 0x1405A6BC4 (CmpTransMgrSyncHive.c)
 *     HvFoldBackDirtyData @ 0x140696CC0 (HvFoldBackDirtyData.c)
 *     HvSyncHive @ 0x140697218 (HvSyncHive.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x140016954 (CmpArmLazyWriter.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140016D50 (KiQueryUnbiasedInterruptTime.c)
 *     RtlSetBits @ 0x1400A1A30 (RtlSetBits.c)
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     CmpIssueNewDirtyCallback @ 0x14046F484 (CmpIssueNewDirtyCallback.c)
 *     HvpSetRangeProtection @ 0x14047CF98 (HvpSetRangeProtection.c)
 *     CmpLogDirtyVectorUse @ 0x14051427C (CmpLogDirtyVectorUse.c)
 *     CmpForceFlushForCoalescing @ 0x14069453C (CmpForceFlushForCoalescing.c)
 */

char __fastcall HvpMarkDirty(ULONG_PTR BugCheckParameter2, int a2, unsigned int a3, int a4)
{
  int v8; // ebx
  unsigned int v9; // ecx
  unsigned int v10; // edx
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // edi
  unsigned int v14; // ebx
  ULONG v15; // edi
  unsigned int v16; // eax
  unsigned int v17; // ebp
  ULONG v18; // eax
  unsigned int v20; // ebx
  int v21; // r14d
  __int64 v22; // rcx
  unsigned int v23; // edx
  __int64 v24; // rax
  unsigned int v25; // edx
  __int64 v26; // rax
  __int16 v27; // [rsp+30h] [rbp-A8h] BYREF
  int v28; // [rsp+34h] [rbp-A4h] BYREF
  ULONG_PTR v29; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+40h] [rbp-98h] BYREF
  ULONG_PTR *v31; // [rsp+50h] [rbp-88h] BYREF
  _QWORD v32[2]; // [rsp+58h] [rbp-80h]
  int v33; // [rsp+68h] [rbp-70h]
  int v34; // [rsp+6Ch] [rbp-6Ch]

  if ( (*(_DWORD *)(BugCheckParameter2 + 144) & 1) != 0 || a2 < 0 )
    return 1;
  v8 = a2 - 1;
  v9 = (unsigned int)a2 >> 9;
  v10 = *(_DWORD *)(BugCheckParameter2 + 120);
  v11 = (a3 + v8) >> 9;
  if ( v10 <= 1 )
  {
    v13 = v9;
  }
  else
  {
    v12 = ~(v10 - 1);
    v13 = v9 & v12;
    v11 = (v12 & (v10 + v11)) - 1;
  }
  v14 = ((v11 + 16) & 0xFFFFFFF8) - 9;
  v15 = (v13 + 8) & 0xFFFFFFF8;
  if ( v15 )
    v15 -= 8;
  v16 = *(_DWORD *)(BugCheckParameter2 + 1400) >> 9;
  if ( v14 >= v16 )
    v14 = v16 - 1;
  v17 = 0;
  v18 = v15;
  if ( v15 <= v14 )
  {
    do
    {
      if ( !_bittest64(*(const signed __int64 **)(BugCheckParameter2 + 80), v18) )
        ++v17;
      ++v18;
    }
    while ( v18 <= v14 );
    if ( v17 )
    {
      v20 = v14 - v15;
      if ( !HvpSetRangeProtection(BugCheckParameter2, v15 << 9, (v20 + 1) << 9, 4u) )
        return 0;
      v21 = *(_DWORD *)(BugCheckParameter2 + 88);
      *(_DWORD *)(BugCheckParameter2 + 88) = v21 + v17;
      RtlSetBits((PRTL_BITMAP)(BugCheckParameter2 + 72), v15, v20 + 1);
      CmpLogDirtyVectorUse(BugCheckParameter2, 0LL, (unsigned int)a2, a3);
      v29 = BugCheckParameter2;
      if ( (DWORD2(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        v28 = a4;
        v27 = 0;
        v31 = &v29;
        v32[0] = 8LL;
        v22 = *(_QWORD *)(BugCheckParameter2 + 3032);
        v23 = 1;
        if ( v22 )
        {
          v23 = 2;
          v33 = *(unsigned __int16 *)(BugCheckParameter2 + 3024);
          v32[1] = v22;
          v34 = 0;
        }
        v24 = 2LL * v23;
        v25 = v23 + 1;
        v32[v24 - 1] = &v27;
        v32[v24] = 2LL;
        v26 = 2LL * v25;
        v32[v26 - 1] = &v28;
        v32[v26] = 4LL;
        EtwTraceKernelEvent((__int64)&v31, v25 + 1, 0x41000000u, 0x928u, 0x501902u);
      }
      if ( !v21 )
      {
        *(_QWORD *)(BugCheckParameter2 + 5384) = KiQueryUnbiasedInterruptTime();
        CmpIssueNewDirtyCallback();
      }
      if ( (int)(v17 + _InterlockedExchangeAdd(&CmpDirtySectorCount, v17)) >= 0x8000 )
        CmpForceFlushForCoalescing();
    }
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 144) & 2) == 0 )
  {
    v30 = *(_QWORD *)(BugCheckParameter2 + 5384) + 10000000LL * (unsigned int)CmpLazyFlushIntervalInSeconds;
    CmpArmLazyWriter(0LL, (__int64)&v30, 0);
  }
  return 1;
}
