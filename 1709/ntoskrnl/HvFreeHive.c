/*
 * XREFs of HvFreeHive @ 0x140479C44
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400AF5E8 (CmpLoadKeyCommon.c)
 *     CmpCompleteUnloadKey @ 0x14046FBB4 (CmpCompleteUnloadKey.c)
 *     CmpInitializeHive @ 0x140470188 (CmpInitializeHive.c)
 *     HvInitializeHive @ 0x140470A40 (HvInitializeHive.c)
 *     CmpDoReconcileNextHive @ 0x1404E3D10 (CmpDoReconcileNextHive.c)
 *     CmLoadKey @ 0x140596790 (CmLoadKey.c)
 *     CmpFreeAllMemory @ 0x14068C138 (CmpFreeAllMemory.c)
 *     CmReplaceKey @ 0x14068D9FC (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x1406951B8 (CmpFlushBackupHive.c)
 *     HvRefreshHive @ 0x140696DF0 (HvRefreshHive.c)
 *     CmpDestroyTemporaryHive @ 0x14069DC04 (CmpDestroyTemporaryHive.c)
 * Callees:
 *     HvpMapEntryGetFreeBin @ 0x140016924 (HvpMapEntryGetFreeBin.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     CmpFreeBootRegistry @ 0x1401E5D58 (CmpFreeBootRegistry.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     HvpFreeBin @ 0x140479E34 (HvpFreeBin.c)
 *     CmpReleaseGlobalQuota @ 0x140479EB8 (CmpReleaseGlobalQuota.c)
 *     HvpGetCellMap @ 0x14047D620 (HvpGetCellMap.c)
 *     HvpFreeMap @ 0x1405657DC (HvpFreeMap.c)
 *     HvpFreeHiveFreeDisplay @ 0x140584AD8 (HvpFreeHiveFreeDisplay.c)
 *     HvViewMapCleanup @ 0x14059CCA8 (HvViewMapCleanup.c)
 */

__int64 __fastcall HvFreeHive(__int64 a1, char a2, __int64 a3)
{
  _QWORD *v3; // rsi
  unsigned int v5; // ebp
  unsigned int v6; // r15d
  unsigned int v7; // r14d
  int v8; // r13d
  unsigned int v9; // ebx
  __int64 CellMap; // r15
  __int64 FreeBin; // rax
  __int64 v12; // rcx
  unsigned int v13; // r12d
  unsigned int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  void *v17; // rbx
  void *v18; // rbx
  void *v20; // rbx
  unsigned int v21; // [rsp+80h] [rbp+8h]
  unsigned int v23; // [rsp+90h] [rbp+18h]
  __int64 v24; // [rsp+98h] [rbp+20h]

  v3 = (_QWORD *)(a1 + 1408);
  v5 = 0;
  v6 = a2 != 0;
  v7 = 0;
  *(_DWORD *)(a1 + 144) &= ~1u;
  v8 = *(_DWORD *)(a1 + 144) & 0x10;
  v21 = (unsigned __int8)v6;
  do
  {
    v9 = v7;
    if ( *v3 )
    {
      v23 = v7 + *((_DWORD *)v3 - 2);
      if ( v23 > v7 )
      {
        do
        {
          if ( v8 )
            break;
          CellMap = HvpGetCellMap(a1, v9);
          FreeBin = HvpMapEntryGetFreeBin((_BYTE *)CellMap);
          v24 = FreeBin;
          if ( FreeBin )
          {
            v13 = *(_DWORD *)(FreeBin + 16);
            if ( (*(_DWORD *)(FreeBin + 24) & 1) != 0 )
              HvpFreeBin(
                a1,
                v13,
                v5,
                *(_QWORD *)(CellMap + 8) & 0xFFFFFFF0,
                *(_QWORD *)(CellMap + 16) & 0xFFFFFFFFFFFFFFF0uLL);
            else
              CmpReleaseGlobalQuota(v13);
            (*(void (__fastcall **)(__int64, __int64))(a1 + 32))(v24, 32LL);
          }
          else
          {
            HvpFreeBin(
              a1,
              *(_DWORD *)(v12 + 32),
              v5,
              *(_DWORD *)(v12 + 8) & 0xFFFFFFF0,
              *(_QWORD *)(v12 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
            v13 = *(_DWORD *)(CellMap + 32);
          }
          v9 += v13;
        }
        while ( v9 < v23 );
        v14 = (unsigned int)((*((_DWORD *)v3 - 2) >> 12) - 1) >> 9;
        HvpFreeMap(a1, *v3, 0LL, v14);
        if ( v14 )
        {
          v20 = (void *)*v3;
          CmpReleaseGlobalQuota(0x2000LL);
          ExFreePoolWithTag(v20, 0);
          *v3 = 0LL;
        }
        v6 = v21;
      }
    }
    *((_DWORD *)v3 - 2) = 0;
    ++v5;
    v3 += 79;
    v7 += 0x80000000;
  }
  while ( v5 <= v6 );
  *(_BYTE *)(a1 + 124) &= ~4u;
  LOBYTE(a3) = 1;
  HvViewMapCleanup(a1 + 200, a1, a3);
  if ( v8 && _InterlockedExchangeAdd(&CmpPreloadedHivesCount, 0xFFFFFFFF) == 1 )
    CmpFreeBootRegistry();
  v16 = *(_QWORD *)(a1 + 64);
  if ( v16 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(a1 + 32))(v16, *(unsigned int *)(a1 + 116));
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  v17 = *(void **)(a1 + 80);
  if ( v17 )
  {
    CmpReleaseGlobalQuota(*(unsigned int *)(a1 + 92));
    ExFreePoolWithTag(v17, 0);
    *(_QWORD *)(a1 + 80) = 0LL;
  }
  v18 = *(void **)(a1 + 104);
  if ( v18 )
  {
    CmpReleaseGlobalQuota(*(unsigned int *)(a1 + 92));
    ExFreePoolWithTag(v18, 0);
    *(_QWORD *)(a1 + 104) = 0LL;
  }
  LOBYTE(v15) = a2;
  return HvpFreeHiveFreeDisplay(a1, v15);
}
