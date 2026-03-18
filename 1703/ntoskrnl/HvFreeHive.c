/*
 * XREFs of HvFreeHive @ 0x1404D2664
 * Callers:
 *     CmpLoadKeyCommon @ 0x14007EF3C (CmpLoadKeyCommon.c)
 *     CmpInitializeHive @ 0x1404395AC (CmpInitializeHive.c)
 *     HvInitializeHive @ 0x140439E6C (HvInitializeHive.c)
 *     CmLoadKey @ 0x1404CBC54 (CmLoadKey.c)
 *     CmpCompleteUnloadKey @ 0x1404CD454 (CmpCompleteUnloadKey.c)
 *     CmpDoReconcileNextHive @ 0x1404D89C0 (CmpDoReconcileNextHive.c)
 *     CmpFreeAllMemory @ 0x140662C0C (CmpFreeAllMemory.c)
 *     CmReplaceKey @ 0x14066430C (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x14066AB34 (CmpFlushBackupHive.c)
 *     HvRefreshHive @ 0x14066C778 (HvRefreshHive.c)
 *     CmpDestroyTemporaryHive @ 0x140672B30 (CmpDestroyTemporaryHive.c)
 * Callees:
 *     HvpMapEntryGetFreeBin @ 0x1400A80DC (HvpMapEntryGetFreeBin.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     CmpFreeBootRegistry @ 0x1401E1C54 (CmpFreeBootRegistry.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     HvpFreeMap @ 0x140459130 (HvpFreeMap.c)
 *     HvViewMapCleanup @ 0x14045C15C (HvViewMapCleanup.c)
 *     HvpFreeBin @ 0x1404D289C (HvpFreeBin.c)
 *     CmpReleaseGlobalQuota @ 0x1404D2918 (CmpReleaseGlobalQuota.c)
 *     HvpGetCellMap @ 0x140515540 (HvpGetCellMap.c)
 */

__int64 __fastcall HvFreeHive(__int64 a1, char a2)
{
  __int64 *v2; // rsi
  unsigned int v4; // r12d
  unsigned int v5; // ebp
  int v6; // r13d
  unsigned int v7; // r14d
  unsigned int v8; // r15d
  __int64 CellMap; // rbx
  __int64 FreeBin; // rax
  __int64 v11; // rcx
  unsigned int v12; // r12d
  unsigned int v13; // ebx
  __int64 v14; // rcx
  void *v15; // rbx
  void *v16; // rbx
  void *v18; // rbx
  unsigned int v19; // [rsp+80h] [rbp+8h]
  unsigned int v21; // [rsp+90h] [rbp+18h]
  __int64 v22; // [rsp+98h] [rbp+20h]

  v2 = (__int64 *)(a1 + 1408);
  v4 = a2 != 0;
  *(_DWORD *)(a1 + 144) &= ~1u;
  v5 = 0;
  v6 = *(_DWORD *)(a1 + 144) & 0x10;
  v19 = (unsigned __int8)v4;
  v7 = 0;
  do
  {
    v8 = v7;
    v21 = v7 + *((_DWORD *)v2 - 2);
    if ( *v2 && v7 + *((_DWORD *)v2 - 2) > v7 )
    {
      do
      {
        if ( v6 )
          break;
        CellMap = HvpGetCellMap(a1, v8);
        FreeBin = HvpMapEntryGetFreeBin((_BYTE *)CellMap);
        v22 = FreeBin;
        if ( FreeBin )
        {
          v12 = *(_DWORD *)(FreeBin + 16);
          if ( (*(_DWORD *)(FreeBin + 24) & 1) != 0 )
            HvpFreeBin(
              a1,
              v12,
              v5,
              *(_QWORD *)(CellMap + 8) & 0xFFFFFFF0,
              *(_QWORD *)(CellMap + 16) & 0xFFFFFFFFFFFFFFF0uLL);
          else
            CmpReleaseGlobalQuota(v12);
          (*(void (__fastcall **)(__int64, __int64))(a1 + 32))(v22, 32LL);
        }
        else
        {
          HvpFreeBin(
            a1,
            *(_DWORD *)(v11 + 32),
            v5,
            *(_DWORD *)(v11 + 8) & 0xFFFFFFF0,
            *(_QWORD *)(v11 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
          v12 = *(_DWORD *)(CellMap + 32);
        }
        v8 += v12;
      }
      while ( v8 < v21 );
      v13 = (unsigned int)((*((_DWORD *)v2 - 2) >> 12) - 1) >> 9;
      HvpFreeMap(a1, *v2, 0, v13);
      if ( v13 )
      {
        v18 = (void *)*v2;
        CmpReleaseGlobalQuota(0x2000LL);
        ExFreePoolWithTag(v18, 0);
        *v2 = 0LL;
      }
      v4 = v19;
    }
    *((_DWORD *)v2 - 2) = 0;
    ++v5;
    v2 += 79;
    v7 += 0x80000000;
  }
  while ( v5 <= v4 );
  *(_BYTE *)(a1 + 124) &= ~4u;
  HvViewMapCleanup(a1 + 200, a1, 1);
  if ( v6 && _InterlockedExchangeAdd(&CmpPreloadedHivesCount, 0xFFFFFFFF) == 1 )
    CmpFreeBootRegistry();
  v14 = *(_QWORD *)(a1 + 64);
  if ( v14 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(a1 + 32))(v14, *(unsigned int *)(a1 + 116));
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  v15 = *(void **)(a1 + 80);
  if ( v15 )
  {
    CmpReleaseGlobalQuota(*(unsigned int *)(a1 + 92));
    ExFreePoolWithTag(v15, 0);
    *(_QWORD *)(a1 + 80) = 0LL;
  }
  v16 = *(void **)(a1 + 104);
  if ( v16 )
  {
    CmpReleaseGlobalQuota(*(unsigned int *)(a1 + 92));
    ExFreePoolWithTag(v16, 0);
    *(_QWORD *)(a1 + 104) = 0LL;
  }
  return HvpFreeHiveFreeDisplay(a1, a2);
}
