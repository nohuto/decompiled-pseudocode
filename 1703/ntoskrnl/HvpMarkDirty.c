/*
 * XREFs of HvpMarkDirty @ 0x140515690
 * Callers:
 *     CmpTransMgrPrepare @ 0x14042E724 (CmpTransMgrPrepare.c)
 *     CmpTransMgrSyncHive @ 0x14042E8D4 (CmpTransMgrSyncHive.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x14043A5F4 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvpAddBin @ 0x14043A920 (HvpAddBin.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14048D724 (HvpRemapAndEnlistHiveBins.c)
 *     HvpEnlistFreeCell @ 0x14048DE38 (HvpEnlistFreeCell.c)
 *     CmpFlushHive @ 0x1404D6DE0 (CmpFlushHive.c)
 *     HvpMarkCellDirty @ 0x14051559C (HvpMarkCellDirty.c)
 *     HvFoldBackDirtyData @ 0x14066C64C (HvFoldBackDirtyData.c)
 *     HvSyncHive @ 0x14066CBA0 (HvSyncHive.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x14008AB1C (KiQueryUnbiasedInterruptTime.c)
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     RtlSetBits @ 0x14009ABF0 (RtlSetBits.c)
 *     CmpArmLazyWriter @ 0x1400A8190 (CmpArmLazyWriter.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     CmpIssueNewDirtyCallback @ 0x14045B5F8 (CmpIssueNewDirtyCallback.c)
 *     CmpLogDirtyVectorUse @ 0x1404B7DAC (CmpLogDirtyVectorUse.c)
 *     HvpSetRangeProtection @ 0x1405151A8 (HvpSetRangeProtection.c)
 *     CmpForceFlushForCoalescing @ 0x14066971C (CmpForceFlushForCoalescing.c)
 */

char __fastcall HvpMarkDirty(ULONG_PTR BugCheckParameter2, unsigned int a2, int a3, int a4)
{
  unsigned int v8; // ebx
  unsigned int v9; // r8d
  int v10; // ebx
  int v11; // edx
  unsigned int v12; // ebx
  ULONG v13; // edi
  unsigned int v14; // eax
  unsigned int v15; // ebp
  ULONG v16; // eax
  int v18; // eax
  unsigned int v19; // ebx
  int v20; // r14d
  __int64 v21; // rcx
  unsigned int v22; // edx
  __int64 v23; // rax
  unsigned int v24; // edx
  __int64 v25; // rax
  __int16 v26; // [rsp+30h] [rbp-A8h] BYREF
  int v27; // [rsp+34h] [rbp-A4h] BYREF
  ULONG_PTR v28; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+40h] [rbp-98h] BYREF
  ULONG_PTR *v30; // [rsp+50h] [rbp-88h] BYREF
  _QWORD v31[2]; // [rsp+58h] [rbp-80h]
  int v32; // [rsp+68h] [rbp-70h]
  int v33; // [rsp+6Ch] [rbp-6Ch]

  if ( (*(_DWORD *)(BugCheckParameter2 + 144) & 1) != 0 || a2 >= 0x80000000 )
    return 1;
  v8 = a3 + a2 - 1;
  v9 = *(_DWORD *)(BugCheckParameter2 + 120);
  v10 = v8 >> 9;
  if ( v9 > 1 )
  {
    v18 = ~(v9 - 1);
    v11 = (a2 >> 9) & v18;
    v10 = (v18 & (v9 + v10)) - 1;
  }
  else
  {
    v11 = a2 >> 9;
  }
  v12 = ((v10 + 16) & 0xFFFFFFF8) - 9;
  v13 = (v11 + 8) & 0xFFFFFFF8;
  if ( v13 )
    v13 -= 8;
  v14 = *(_DWORD *)(BugCheckParameter2 + 1400) >> 9;
  if ( v12 >= v14 )
    v12 = v14 - 1;
  v15 = 0;
  v16 = v13;
  if ( v13 <= v12 )
  {
    do
    {
      if ( !_bittest64(*(const signed __int64 **)(BugCheckParameter2 + 80), v16) )
        ++v15;
      ++v16;
    }
    while ( v16 <= v12 );
    if ( v15 )
    {
      v19 = v12 - v13;
      if ( !HvpSetRangeProtection(BugCheckParameter2, v13 << 9, (v19 + 1) << 9, 4u) )
        return 0;
      v20 = *(_DWORD *)(BugCheckParameter2 + 88);
      *(_DWORD *)(BugCheckParameter2 + 88) = v20 + v15;
      RtlSetBits((PRTL_BITMAP)(BugCheckParameter2 + 72), v13, v19 + 1);
      CmpLogDirtyVectorUse(BugCheckParameter2, 0, a2, a3);
      v28 = BugCheckParameter2;
      if ( (DWORD2(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        v27 = a4;
        v26 = 0;
        v30 = &v28;
        v31[0] = 8LL;
        v21 = *(_QWORD *)(BugCheckParameter2 + 3032);
        v22 = 1;
        if ( v21 )
        {
          v22 = 2;
          v32 = *(unsigned __int16 *)(BugCheckParameter2 + 3024);
          v31[1] = v21;
          v33 = 0;
        }
        v23 = 2LL * v22;
        v24 = v22 + 1;
        v31[v23 - 1] = &v26;
        v31[v23] = 2LL;
        v25 = 2LL * v24;
        v31[v25 - 1] = &v27;
        v31[v25] = 4LL;
        EtwTraceKernelEvent((int)&v30, v24 + 1, 0x41000000u, 2344, 5249282);
      }
      if ( !v20 )
      {
        *(_QWORD *)(BugCheckParameter2 + 5384) = KiQueryUnbiasedInterruptTime();
        CmpIssueNewDirtyCallback();
      }
      if ( (int)(v15 + _InterlockedExchangeAdd(&CmpDirtySectorCount, v15)) >= 0x8000 )
        CmpForceFlushForCoalescing();
    }
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 144) & 2) == 0 )
  {
    v29 = *(_QWORD *)(BugCheckParameter2 + 5384) + 10000000LL * (unsigned int)CmpLazyFlushIntervalInSeconds;
    CmpArmLazyWriter(0, (__int64)&v29, 0);
  }
  return 1;
}
