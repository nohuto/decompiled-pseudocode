/*
 * XREFs of PfFileInfoNotify @ 0x14005F400
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     PfSnCheckLoggingForThread @ 0x14004AF54 (PfSnCheckLoggingForThread.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PfLogEvent @ 0x14005F30C (PfLogEvent.c)
 *     PfFbLogEntryComplete @ 0x140060424 (PfFbLogEntryComplete.c)
 *     PfFbLogEntryReserve @ 0x140060480 (PfFbLogEntryReserve.c)
 *     PfLogDeleteHelper @ 0x140060558 (PfLogDeleteHelper.c)
 *     ExAcquireRundownProtectionEx @ 0x140061C00 (ExAcquireRundownProtectionEx.c)
 *     PfSnLogPageFaultCommon @ 0x1400B5710 (PfSnLogPageFaultCommon.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     ExWaitForRundownProtectionRelease @ 0x14010EFC0 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     ExRundownCompleted @ 0x1401161E0 (ExRundownCompleted.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     _wcsupr @ 0x14016A3E0 (_wcsupr.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140189470 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     PfSnLogVolumeCreate @ 0x14044DC00 (PfSnLogVolumeCreate.c)
 *     PfSnNameRemoveAll @ 0x14048BD50 (PfSnNameRemoveAll.c)
 *     PfSnLogStreamCreate @ 0x140496FC4 (PfSnLogStreamCreate.c)
 *     PfpRpFileKeyUpdate @ 0x140502050 (PfpRpFileKeyUpdate.c)
 */

__int64 __fastcall PfFileInfoNotify(int *a1)
{
  int *v1; // rsi
  bool v2; // zf
  int v3; // eax
  int v4; // eax
  __int64 *v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r10
  unsigned __int64 v11; // r9
  __int64 v12; // r11
  __int64 v13; // r8
  unsigned int v14; // edx
  PSLIST_ENTRY v15; // rbx
  unsigned __int64 *v16; // rdi
  __int64 v17; // rax
  int v18; // r15d
  PSLIST_ENTRY j; // rdx
  int v20; // r14d
  unsigned __int64 v21; // rax
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  _SLIST_ENTRY *Next; // rdi
  unsigned __int64 v26; // r13
  __int64 v27; // r15
  __int64 v28; // r12
  __int64 v29; // r14
  signed __int64 v30; // rdx
  struct _EX_RUNDOWN_REF *v31; // rdi
  int v32; // ecx
  __int64 v33; // rdx
  __int64 v34; // rdx
  int v35; // r8d
  const void *v36; // r12
  int v37; // ebx
  unsigned int v38; // r13d
  unsigned int *v39; // rdi
  int v40; // r9d
  wchar_t *v41; // rcx
  int v42; // ecx
  int v43; // ecx
  unsigned int v44; // edx
  int v45; // r12d
  signed __int64 v46; // rax
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // r8
  __int16 v50; // cx
  _QWORD *v51; // r8
  unsigned __int64 v52; // rdx
  int v53; // ecx
  signed __int64 v54; // rax
  signed __int64 v55; // rtt
  unsigned int v56; // r13d
  unsigned int *v57; // rdi
  __int16 v58; // cx
  _QWORD *v59; // rcx
  int v60; // ecx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v62; // r12d
  struct _KTHREAD *v63; // rax
  struct _KTHREAD *v64; // r14
  __int64 SessionId; // r8
  __int64 v66; // rdx
  __int64 v67; // rcx
  int v68; // eax
  __int64 v69; // rcx
  _KLOCK_ENTRY *v70; // r15
  __int16 v71; // ax
  struct _KTHREAD *v72; // rbx
  __int64 v73; // rdx
  unsigned __int64 v74; // r8
  __int64 v75; // rcx
  int v76; // eax
  __int64 v77; // rcx
  _KLOCK_ENTRY *v78; // r15
  __int16 v79; // ax
  __int64 v80; // rdx
  __int64 v81; // rdx
  int v82; // ecx
  struct _KTHREAD *v83; // rax
  unsigned int v84; // r12d
  struct _KTHREAD *v85; // rax
  __int64 i; // r14
  struct _KTHREAD *v87; // r14
  __int64 v88; // r8
  __int64 v89; // rdx
  __int64 v90; // rcx
  int v91; // eax
  __int64 v92; // rcx
  _KLOCK_ENTRY *v93; // r15
  __int64 v94; // rdx
  __int16 v95; // ax
  struct _KTHREAD *v96; // rbx
  unsigned __int64 v97; // r8
  __int64 v98; // rdx
  __int64 v99; // rcx
  int v100; // eax
  __int64 v101; // rcx
  _KLOCK_ENTRY *v102; // r15
  __int64 v103; // rdx
  __int16 v104; // ax
  signed __int64 Count; // rdx
  signed __int64 v106; // rax
  unsigned __int64 v107; // rdx
  int v108; // [rsp+30h] [rbp-89h] BYREF
  int v109; // [rsp+34h] [rbp-85h] BYREF
  int v110; // [rsp+38h] [rbp-81h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+40h] [rbp-79h]
  unsigned int *v112; // [rsp+48h] [rbp-71h]
  int v113; // [rsp+50h] [rbp-69h]
  int v114; // [rsp+54h] [rbp-65h]
  int v115; // [rsp+58h] [rbp-61h]
  int v116; // [rsp+5Ch] [rbp-5Dh]
  _QWORD v117[3]; // [rsp+60h] [rbp-59h] BYREF
  __int64 v118; // [rsp+78h] [rbp-41h]
  __int64 v119; // [rsp+80h] [rbp-39h]
  _QWORD v120[3]; // [rsp+88h] [rbp-31h] BYREF
  __int128 v121; // [rsp+A0h] [rbp-19h]
  __int128 v122; // [rsp+B0h] [rbp-9h]
  __int64 v123; // [rsp+C0h] [rbp+7h]
  BOOL v125; // [rsp+120h] [rbp+67h]
  BOOL v126; // [rsp+120h] [rbp+67h]
  unsigned __int8 AbAllocationRegionCount; // [rsp+120h] [rbp+67h]
  unsigned __int8 v128; // [rsp+120h] [rbp+67h]
  BOOLEAN v129; // [rsp+128h] [rbp+6Fh]
  KIRQL v130; // [rsp+130h] [rbp+77h]
  int v131; // [rsp+138h] [rbp+7Fh] BYREF

  v1 = a1;
  v2 = *a1 == 13;
  ListEntry = 0LL;
  v112 = 0LL;
  if ( !v2 )
  {
    v20 = -1073741811;
    goto LABEL_53;
  }
  v3 = a1[2];
  if ( (v3 & 8) != 0 )
  {
    v32 = a1[1];
    if ( v32 == 7 )
    {
      v1[4] = _InterlockedIncrement(&dword_140382C10);
      return 0;
    }
    v60 = v32 - 10;
    if ( !v60 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14036DF88, 0LL);
      v62 = -1;
      if ( qword_14036DF78 )
      {
        v20 = -1073741791;
      }
      else
      {
        v63 = KeGetCurrentThread();
        --v63->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14036DF90, 0LL);
        dword_14036DFA8 &= ~1u;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14036DF90, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(&qword_14036DF90);
        v109 = 0;
        v64 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(&qword_14036DF90) == 1 )
          SessionId = (unsigned int)MmGetSessionIdEx(v64->ApcState.Process);
        else
          SessionId = 0xFFFFFFFFLL;
        --v64->SpecialApcDisable;
        ++v64->AbAllocationRegionCount;
        LODWORD(v66) = ((char)v64->AbEntrySummary | (char)v64->AbOrphanedEntrySummary) ^ 0x3F;
        v125 = v64->AbAllocationRegionCount == 1;
        v2 = !_BitScanReverse((unsigned int *)&v67, v66);
        v115 = v67;
        if ( v2 )
          goto LABEL_101;
        while ( 1 )
        {
          v68 = 1 << v67;
          v69 = v67;
          v70 = &v64->LockEntries[v69];
          v66 = ~v68 & (unsigned int)v66;
          if ( (v70->AcquiredByte & 1) != 0
            && (*(_DWORD *)&v70->LockState.0 & 1) == 0
            && (*(_QWORD *)&v70->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_14036DF90 & 0x7FFFFFFFFFFFFFFCLL)
            && v70->LockState.SessionId == (_DWORD)SessionId )
          {
            v70->AcquiredByte &= ~1u;
            if ( v70->LockState.0 )
              break;
          }
          v2 = !_BitScanReverse((unsigned int *)&v67, v66);
          v115 = v67;
          if ( v2 )
            goto LABEL_101;
        }
        if ( !v70 )
        {
LABEL_101:
          if ( (*((_DWORD *)&v64->0 + 1) & 0x8000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v64, (ULONG_PTR)&qword_14036DF90, (unsigned int)SessionId, 0LL);
        }
        else
        {
          v70->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v70->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree((__int64)&v64->LockEntries[v69], v66, SessionId);
          v109 = 0;
          v109 = v70->BoostBitmap.AllFields & 0x1FFFF;
          v70->BoostBitmap.AllFields &= 0xFFFE0000;
          v70->ThreadLocalFlags &= ~1u;
          v70->LockState.0 = 0LL;
          v80 = ((char *)v70 - (char *)v64 - 800) / 96;
          if ( v125 )
            v64->AbEntrySummary |= 1 << v80;
          else
            _InterlockedOr8((volatile signed __int8 *)&v64->AbOrphanedEntrySummary, 1 << v80);
        }
        --v64->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts(v64, &qword_14036DF90, &v109);
        v71 = v64->SpecialApcDisable + 1;
        v64->SpecialApcDisable = v71;
        if ( !v71 && ($69CD3F157F9F39B6F7113F2231989901 *)v64->ApcState.ApcListHead[0].Flink != &v64->152 )
          KiCheckForKernelApcDelivery();
        KeLeaveCriticalRegion();
        (*(void (__fastcall **)(__int64 (__fastcall *)(ULONG_PTR)))(*((_QWORD *)v1 + 2) + 32LL))(PfpPrefetchSharedConflictNotifyStart);
        qword_14036DF78 = *((_QWORD *)v1 + 2);
        v20 = 0;
        _InterlockedExchange64((volatile __int64 *)&stru_14036DF80, 0LL);
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14036DF88, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&qword_14036DF88);
      v110 = 0;
      v72 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(&qword_14036DF88) == 1 )
        v62 = MmGetSessionIdEx(v72->ApcState.Process);
      --v72->SpecialApcDisable;
      ++v72->AbAllocationRegionCount;
      LODWORD(v73) = ((char)v72->AbEntrySummary | (char)v72->AbOrphanedEntrySummary) ^ 0x3F;
      v126 = v72->AbAllocationRegionCount == 1;
      v74 = (unsigned __int64)&qword_14036DF88 & 0x7FFFFFFFFFFFFFFCLL;
      v2 = !_BitScanReverse((unsigned int *)&v75, v73);
      v116 = v75;
      if ( v2 )
        goto LABEL_113;
      while ( 1 )
      {
        v76 = 1 << v75;
        v77 = v75;
        v78 = &v72->LockEntries[v77];
        v73 = ~v76 & (unsigned int)v73;
        if ( (v78->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v78->LockState.0 & 1) == 0
          && (*(_QWORD *)&v78->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == v74
          && v78->LockState.SessionId == v62 )
        {
          v78->AcquiredByte &= ~1u;
          if ( v78->LockState.0 )
            break;
        }
        v2 = !_BitScanReverse((unsigned int *)&v75, v73);
        v116 = v75;
        if ( v2 )
          goto LABEL_113;
      }
      if ( !v78 )
      {
LABEL_113:
        if ( (*((_DWORD *)&v72->0 + 1) & 0x8000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v72, (ULONG_PTR)&qword_14036DF88, v62, 0LL);
      }
      else
      {
        v78->CrossThreadReleasableAndBusyByte |= 2u;
        if ( (__int64)v78->LockState.LockState < 0 )
          KiAbEntryRemoveFromTree((__int64)&v72->LockEntries[v77], v73, v74);
        v110 = 0;
        v110 = v78->BoostBitmap.AllFields & 0x1FFFF;
        v78->BoostBitmap.AllFields &= 0xFFFE0000;
        v78->ThreadLocalFlags &= ~1u;
        v78->LockState.0 = 0LL;
        v81 = ((char *)v78 - (char *)v72 - 800) / 96;
        if ( v126 )
          v72->AbEntrySummary |= 1 << v81;
        else
          _InterlockedOr8((volatile signed __int8 *)&v72->AbOrphanedEntrySummary, 1 << v81);
      }
      --v72->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts(v72, &qword_14036DF88, &v110);
      v79 = v72->SpecialApcDisable + 1;
      v72->SpecialApcDisable = v79;
      if ( !v79 && ($69CD3F157F9F39B6F7113F2231989901 *)v72->ApcState.ApcListHead[0].Flink != &v72->152 )
        KiCheckForKernelApcDelivery();
      KeLeaveCriticalRegion();
      goto LABEL_19;
    }
    v82 = v60 - 1;
    if ( !v82 )
    {
      v83 = KeGetCurrentThread();
      --v83->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14036DF88, 0LL);
      v84 = -1;
      if ( qword_14036DF78 )
      {
        v85 = KeGetCurrentThread();
        --v85->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14036DF90, 0LL);
        dword_14036DFA8 |= 1u;
        for ( i = qword_14036DF98; (__int64 *)i != &qword_14036DF98; i = *(_QWORD *)i )
        {
          *(_DWORD *)(i + 68) |= 4u;
          KeSetEvent((PRKEVENT)(i + 88), 0, 0);
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14036DF90, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(&qword_14036DF90);
        v131 = 0;
        v87 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(&qword_14036DF90) == 1 )
          v88 = (unsigned int)MmGetSessionIdEx(v87->ApcState.Process);
        else
          v88 = 0xFFFFFFFFLL;
        --v87->SpecialApcDisable;
        ++v87->AbAllocationRegionCount;
        LODWORD(v89) = ((char)v87->AbEntrySummary | (char)v87->AbOrphanedEntrySummary) ^ 0x3F;
        AbAllocationRegionCount = v87->AbAllocationRegionCount;
        v2 = !_BitScanReverse((unsigned int *)&v90, v89);
        v113 = v90;
        if ( v2 )
          goto LABEL_164;
        while ( 1 )
        {
          v91 = 1 << v90;
          v92 = v90;
          v93 = &v87->LockEntries[v92];
          v89 = ~v91 & (unsigned int)v89;
          if ( (v93->AcquiredByte & 1) != 0
            && (*(_DWORD *)&v93->LockState.0 & 1) == 0
            && (*(_QWORD *)&v93->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_14036DF90 & 0x7FFFFFFFFFFFFFFCLL)
            && v93->LockState.SessionId == (_DWORD)v88 )
          {
            v93->AcquiredByte &= ~1u;
            if ( v93->LockState.0 )
              break;
          }
          v2 = !_BitScanReverse((unsigned int *)&v90, v89);
          v113 = v90;
          if ( v2 )
            goto LABEL_164;
        }
        if ( !v93 )
        {
LABEL_164:
          if ( (*((_DWORD *)&v87->0 + 1) & 0x8000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v87, (ULONG_PTR)&qword_14036DF90, (unsigned int)v88, 0LL);
        }
        else
        {
          v93->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v93->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree((__int64)&v87->LockEntries[v92], v89, v88);
          v131 = 0;
          v131 = v93->BoostBitmap.AllFields & 0x1FFFF;
          v93->BoostBitmap.AllFields &= 0xFFFE0000;
          v93->ThreadLocalFlags &= ~1u;
          v93->LockState.0 = 0LL;
          v94 = ((char *)v93 - (char *)v87 - 800) / 96;
          if ( AbAllocationRegionCount == 1 )
            v87->AbEntrySummary |= 1 << v94;
          else
            _InterlockedOr8((volatile signed __int8 *)&v87->AbOrphanedEntrySummary, 1 << v94);
        }
        --v87->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts(v87, &qword_14036DF90, &v131);
        v95 = v87->SpecialApcDisable + 1;
        v87->SpecialApcDisable = v95;
        if ( !v95 && ($69CD3F157F9F39B6F7113F2231989901 *)v87->ApcState.ApcListHead[0].Flink != &v87->152 )
          KiCheckForKernelApcDelivery();
        KeLeaveCriticalRegion();
        ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&stru_14036DF80);
        ExRundownCompleted((PEX_RUNDOWN_REF)&stru_14036DF80);
        qword_14036DF78 = 0LL;
        v20 = 0;
      }
      else
      {
        v20 = -1073741275;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14036DF88, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&qword_14036DF88);
      v108 = 0;
      v96 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(&qword_14036DF88) == 1 )
        v84 = MmGetSessionIdEx(v96->ApcState.Process);
      --v96->SpecialApcDisable;
      ++v96->AbAllocationRegionCount;
      v97 = (unsigned __int64)&qword_14036DF88 & 0x7FFFFFFFFFFFFFFCLL;
      LODWORD(v98) = ((char)v96->AbEntrySummary | (char)v96->AbOrphanedEntrySummary) ^ 0x3F;
      v128 = v96->AbAllocationRegionCount;
      v2 = !_BitScanReverse((unsigned int *)&v99, v98);
      v114 = v99;
      if ( v2 )
        goto LABEL_188;
      while ( 1 )
      {
        v100 = 1 << v99;
        v101 = v99;
        v102 = &v96->LockEntries[v101];
        v98 = ~v100 & (unsigned int)v98;
        if ( (v102->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v102->LockState.0 & 1) == 0
          && (*(_QWORD *)&v102->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == v97
          && v102->LockState.SessionId == v84 )
        {
          v102->AcquiredByte &= ~1u;
          if ( v102->LockState.0 )
            break;
        }
        v2 = !_BitScanReverse((unsigned int *)&v99, v98);
        v114 = v99;
        if ( v2 )
          goto LABEL_188;
      }
      if ( !v102 )
      {
LABEL_188:
        if ( (*((_DWORD *)&v96->0 + 1) & 0x8000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v96, (ULONG_PTR)&qword_14036DF88, v84, 0LL);
      }
      else
      {
        v102->CrossThreadReleasableAndBusyByte |= 2u;
        if ( (__int64)v102->LockState.LockState < 0 )
          KiAbEntryRemoveFromTree((__int64)&v96->LockEntries[v101], v98, v97);
        v108 = 0;
        v108 = v102->BoostBitmap.AllFields & 0x1FFFF;
        v102->BoostBitmap.AllFields &= 0xFFFE0000;
        v102->ThreadLocalFlags &= ~1u;
        v102->LockState.0 = 0LL;
        v103 = ((char *)v102 - (char *)v96 - 800) / 96;
        if ( v128 == 1 )
          v96->AbEntrySummary |= 1 << v103;
        else
          _InterlockedOr8((volatile signed __int8 *)&v96->AbOrphanedEntrySummary, 1 << v103);
      }
      --v96->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts(v96, &qword_14036DF88, &v108);
      v104 = v96->SpecialApcDisable + 1;
      v96->SpecialApcDisable = v104;
      if ( !v104 && ($69CD3F157F9F39B6F7113F2231989901 *)v96->ApcState.ApcListHead[0].Flink != &v96->152 )
        KiCheckForKernelApcDelivery();
      KeLeaveCriticalRegion();
      goto LABEL_19;
    }
    if ( v82 == 1 )
    {
      if ( (dword_14036E0D0 & 2) == 0 )
        return 0;
      v20 = -1073741431;
    }
    else
    {
LABEL_139:
      v20 = -1073741637;
    }
LABEL_53:
    if ( v1[1] <= 3 )
      ++dword_14036DC24;
    return (unsigned int)v20;
  }
  if ( (v3 & 4) != 0 )
  {
    v42 = a1[1];
    if ( v42 )
    {
      v43 = v42 - 2;
      if ( v43 )
      {
        if ( v43 == 1 )
          PfSnNameRemoveAll(*((_QWORD *)v1 + 2));
      }
      else
      {
        PfSnLogStreamCreate(*((_QWORD *)v1 + 2));
      }
    }
    else
    {
      PfSnLogVolumeCreate(*((_QWORD *)v1 + 2));
    }
  }
  if ( (v1[2] & 1) == 0 )
    return 0;
  if ( dword_14036DB20 >= (unsigned int)dword_14036DB24 && (unsigned int)(v1[1] - 2) > 2 )
  {
    v20 = -1073741697;
    goto LABEL_53;
  }
  v4 = v1[1];
  if ( v4 == 4 )
  {
    v5 = (__int64 *)*((_QWORD *)v1 + 2);
    v6 = *((unsigned int *)v5 + 4) + 4095LL;
    v7 = (v6 + (unsigned __int64)(v5[1] & 0xFFF)) >> 12;
    if ( !PfSnNumActiveTraces )
      goto LABEL_8;
    v26 = (v6 + (unsigned __int64)(v5[1] & 0xFFF)) >> 12;
    v27 = v5[4];
    v28 = v5[1];
    v118 = v5[3];
    v29 = *(_QWORD *)(v27 + 544);
    v119 = *v5;
    _m_prefetchw((const void *)(v29 + 1192));
    v30 = *(_QWORD *)(v29 + 1192);
    if ( (v30 & 0xF) != 0 )
    {
      do
      {
        v46 = _InterlockedCompareExchange64((volatile signed __int64 *)(v29 + 1192), v30 - 1, v30);
        if ( v30 == v46 )
          break;
        v30 = v46;
      }
      while ( (v46 & 0xF) != 0 );
    }
    v31 = (struct _EX_RUNDOWN_REF *)(v30 & 0xFFFFFFFFFFFFFFF0uLL);
    if ( (v30 & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
      goto LABEL_8;
    v44 = v30 & 0xF;
    if ( v44 <= 1 )
    {
      if ( v44 )
      {
        if ( ExAcquireRundownProtectionEx(v31 + 45, 0xFu) )
        {
          _m_prefetchw((const void *)(v29 + 1192));
          v54 = *(_QWORD *)(v29 + 1192);
          while ( (v54 & 0xF) == 0 )
          {
            if ( v31 != (struct _EX_RUNDOWN_REF *)(v54 & 0xFFFFFFFFFFFFFFF0uLL) )
              break;
            v55 = v54;
            v54 = _InterlockedCompareExchange64((volatile signed __int64 *)(v29 + 1192), v54 + 15, v54);
            if ( v55 == v54 )
              goto LABEL_42;
          }
          _m_prefetchw(&v31[45]);
          Count = v31[45].Count;
          if ( (Count & 1) != 0 )
          {
LABEL_202:
            v107 = Count & 0xFFFFFFFFFFFFFFFEuLL;
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v107, 0xFFFFFFFFFFFFFFF1uLL) == 15
              && !_interlockedbittestandreset((volatile signed __int32 *)(v107 + 32), 0) )
            {
              KeSetEvent((PRKEVENT)(v107 + 8), 0, 0);
            }
          }
          else
          {
            while ( 1 )
            {
              v106 = _InterlockedCompareExchange64((volatile signed __int64 *)&v31[45], Count - 30, Count);
              v2 = Count == v106;
              Count = v106;
              if ( v2 )
                break;
              if ( (v106 & 1) != 0 )
                goto LABEL_202;
            }
          }
        }
      }
      else
      {
        v129 = 1;
        v130 = KeAcquireSpinLockRaiseToDpc(&qword_14036DFD0);
        v31 = (struct _EX_RUNDOWN_REF *)(*(_QWORD *)(v29 + 1192) & 0xFFFFFFFFFFFFFFF0uLL);
        if ( v31 )
          v129 = ExAcquireRundownProtection(v31 + 45);
        KxReleaseSpinLock(&qword_14036DFD0);
        __writecr8(v130);
        if ( !v129 )
          goto LABEL_8;
      }
    }
LABEL_42:
    if ( v31 )
    {
      if ( (unsigned int)PfSnCheckLoggingForThread(v27, (__int64)v31, 0) )
      {
        v45 = v28 & 0xFFFFF000;
        if ( v7 )
        {
          do
          {
            if ( (int)PfSnLogPageFaultCommon((_DWORD)v31, v119, v118, v45, 0) < 0 )
              break;
            v45 += 4096;
            --v26;
          }
          while ( v26 );
          v1 = a1;
        }
      }
      ExReleaseRundownProtection(v31 + 45);
    }
LABEL_8:
    if ( dword_14036DB20 >= (unsigned int)dword_14036DB24 )
    {
      v20 = -1073741697;
      goto LABEL_53;
    }
    v8 = *((_QWORD *)v1 + 2);
    v9 = *(_QWORD *)(v8 + 32);
    v10 = *(int *)(v8 + 20);
    v11 = *(_QWORD *)(v8 + 8);
    v12 = *(_QWORD *)(v8 + 24);
    v13 = *(_QWORD *)(v9 + 544);
    v14 = (*(_DWORD *)(v9 + 1736) >> 12) & 7;
    if ( (*(_DWORD *)(v13 + 772) & 0x100000) != 0 )
    {
      v47 = 2;
      if ( v14 < 2 )
        v47 = (*(_DWORD *)(v9 + 1736) >> 12) & 7;
      v14 = v47;
    }
    if ( v14 < dword_14036CA6C )
    {
      v20 = 0;
      goto LABEL_19;
    }
    *(_QWORD *)&v121 = v12;
    *(_QWORD *)&v122 = v7 | (v10 << 63);
    v15 = 0LL;
    v16 = 0LL;
    v17 = v13 ^ *(_QWORD *)(v13 + 776);
    *((_QWORD *)&v121 + 1) = v11 >> 12;
    *((_QWORD *)&v122 + 1) = v17 & 0x1FFFFFFFFFFFFFFFLL;
    LODWORD(v123) = dword_140382C10;
    HIDWORD(v123) = *(_DWORD *)(v13 + 736);
    v18 = dword_14036DE5C
        + ((((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
          + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)) >> 10);
    if ( ExAcquireRundownProtection(&stru_14036DA60) )
    {
      while ( 1 )
      {
        for ( j = RtlpInterlockedPopEntrySList(&stru_14036DA80); !j; j = RtlpInterlockedPopEntrySList(&stru_14036DA80) )
        {
          j = RtlpInterlockedPopEntrySList(&stru_14036DA70);
          if ( j )
            break;
          v20 = ((__int64 (__fastcall *)(struct _EX_RUNDOWN_REF *))qword_14036DAB8)(&stru_14036DA60);
          if ( v20 < 0 )
            goto LABEL_30;
        }
        if ( (__int64)j[2].Next - *((_QWORD *)&j[1].Next + 1) >= 64 )
        {
          v16 = (unsigned __int64 *)*((_QWORD *)&j[1].Next + 1);
          v15 = j;
          v20 = 0;
          goto LABEL_15;
        }
        if ( !*((_DWORD *)&j[2].Next + 2) )
          break;
        ((void (__fastcall *)(PSLIST_ENTRY))qword_14036DAC0)(j);
        if ( !ExAcquireRundownProtection(&stru_14036DA60) )
          goto LABEL_207;
      }
      RtlpInterlockedPushEntrySList(&stru_14036DA70, j);
      v20 = -1073741789;
LABEL_30:
      ++dword_14036DACC;
      dword_14036DAD0 += 64;
      ExReleaseRundownProtection(&stru_14036DA60);
LABEL_15:
      if ( v20 >= 0 )
      {
        v21 = *v16;
        v22 = v121;
        *((_DWORD *)v16 + 2) = v18;
        v23 = v122;
        *v16 = v21 & 0xFFFFFFFFFFFC0000uLL | 0x2A013;
        *((_OWORD *)v16 + 1) = v22;
        *(_QWORD *)&v22 = v123;
        *((_OWORD *)v16 + 2) = v23;
        v16[6] = v22;
        *((_QWORD *)&v15[1].Next + 1) += 64LL;
        ++*((_DWORD *)&v15[2].Next + 2);
        Next = v15[1].Next;
        if ( (__int64)v15[2].Next - *((_QWORD *)&v15[1].Next + 1) < SLODWORD(Next[5].Next) )
        {
          ((void (__fastcall *)(PSLIST_ENTRY))Next[6].Next)(v15);
        }
        else
        {
          RtlpInterlockedPushEntrySList((PSLIST_HEADER)&Next[2], v15);
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)Next);
        }
        v20 = 0;
        goto LABEL_19;
      }
    }
    else
    {
LABEL_207:
      v20 = -1073741431;
    }
    _InterlockedExchangeAdd((_DWORD *)&xmmword_14036DC10 + 1, 1u);
    if ( v15 )
      PfFbLogEntryComplete(v15);
LABEL_19:
    if ( v20 >= 0 )
      return (unsigned int)v20;
    goto LABEL_53;
  }
  switch ( v4 )
  {
    case 0:
      v56 = 2 * *(unsigned __int16 *)(*((_QWORD *)v1 + 2) + 30LL);
      v20 = PfFbLogEntryReserve(&stru_14036D9E0);
      if ( v20 < 0 )
        goto LABEL_19;
      v57 = v112;
      *v112 = *v112 & 0x80000002 | (8 * ((v56 + 65) & 0xFFFFFF8)) | 2;
      v57[1] = *(_DWORD *)(*((_QWORD *)v1 + 2) + 52LL);
      v57[2] = *(_DWORD *)(*((_QWORD *)v1 + 2) + 56LL);
      *((_QWORD *)v57 + 3) = *(_QWORD *)(*((_QWORD *)v1 + 2) + 8LL);
      v57[9] ^= (v57[9] ^ *(_DWORD *)(*((_QWORD *)v1 + 2) + 48LL)) & 0xF;
      v57[9] ^= (v57[9] ^ *(_DWORD *)(*((_QWORD *)v1 + 2) + 48LL)) & 0xF0;
      *((_QWORD *)v57 + 2) = *(_QWORD *)(*((_QWORD *)v1 + 2) + 16LL);
      v57[8] = *(_DWORD *)(*((_QWORD *)v1 + 2) + 24LL);
      v58 = 2 * *(_WORD *)(*((_QWORD *)v1 + 2) + 30LL);
      *((_WORD *)v57 + 20) = v58;
      *((_WORD *)v57 + 21) = v58;
      memmove(v57 + 14, *(const void **)(*((_QWORD *)v1 + 2) + 40LL), v56);
      v41 = (wchar_t *)(v57 + 14);
      *((_WORD *)v57 + *(unsigned __int16 *)(*((_QWORD *)v1 + 2) + 30LL) + 28) = 0;
      goto LABEL_36;
    case 1:
      PfLogDeleteHelper(2LL, *(_QWORD *)(*((_QWORD *)v1 + 2) + 8LL), *(unsigned int *)(*((_QWORD *)v1 + 2) + 56LL));
      return 0;
    case 2:
      v33 = *((_QWORD *)v1 + 2);
      if ( *(unsigned __int16 *)(v33 + 34) <= (unsigned int)(unsigned __int16)*(_DWORD *)(v33 + 32) )
        return 0;
      PfpRpFileKeyUpdate(&unk_14036DED8, v33, 1LL);
      if ( dword_14036DB20 >= (unsigned int)dword_14036DB24 )
      {
        v20 = -1073741697;
        goto LABEL_53;
      }
      v34 = *((_QWORD *)v1 + 2);
      v35 = *(_DWORD *)(v34 + 32);
      v36 = (const void *)(*(_QWORD *)(v34 + 24) + 2LL * (unsigned __int16)v35);
      v37 = *(unsigned __int16 *)(v34 + 34) - (unsigned __int16)v35;
      v38 = 2 * v37;
      v20 = PfFbLogEntryReserve(&stru_14036D9E0);
      if ( v20 < 0 )
        goto LABEL_19;
      v39 = v112;
      *v112 = *v112 & 0x80000000 | (8 * ((v38 + 53) & 0xFFFFFF8));
      v39[1] = *(_DWORD *)(*((_QWORD *)v1 + 2) + 40LL);
      v39[2] = *(_DWORD *)(*((_QWORD *)v1 + 2) + 44LL);
      *((_QWORD *)v39 + 3) = *(_QWORD *)(*((_QWORD *)v1 + 2) + 8LL);
      v39[8] = *(_DWORD *)(*((_QWORD *)v1 + 2) + 48LL);
      *((_QWORD *)v39 + 2) = *(_QWORD *)(*((_QWORD *)v1 + 2) + 16LL);
      v39[10] ^= (v39[10] ^ *(_DWORD *)(*((_QWORD *)v1 + 2) + 36LL)) & 1;
      v40 = v39[10] ^ (v39[10] ^ (*(_DWORD *)(*((_QWORD *)v1 + 2) + 36LL) >> 3)) & 2;
      v39[10] = v40;
      v39[10] = v40 ^ ((unsigned __int8)v40 ^ (unsigned __int8)(2 * *(_DWORD *)(*((_QWORD *)v1 + 2) + 36LL))) & 4;
      *((_WORD *)v39 + 21) = v37;
      memmove(v39 + 11, v36, v38);
      v41 = (wchar_t *)(v39 + 11);
      *((_WORD *)v39 + *((unsigned __int16 *)v39 + 21) + 22) = 0;
LABEL_36:
      wcsupr(v41);
      PfFbLogEntryComplete(ListEntry);
      return 0;
    case 3:
      v48 = *((_QWORD *)v1 + 2);
      if ( *(unsigned __int16 *)(v48 + 34) <= (unsigned int)(unsigned __int16)*(_DWORD *)(v48 + 32) )
        return 0;
      PfpRpFileKeyUpdate(&unk_14036DED8, v48, 0LL);
      if ( dword_14036DB20 < (unsigned int)dword_14036DB24 )
      {
        PfLogDeleteHelper(0LL, *(_QWORD *)(*((_QWORD *)v1 + 2) + 16LL), *(unsigned int *)(*((_QWORD *)v1 + 2) + 44LL));
        return 0;
      }
      v20 = -1073741697;
      goto LABEL_53;
    case 8:
      v49 = *((_QWORD *)v1 + 2);
      v120[0] = 0LL;
      v50 = (2 * (unsigned __int8)*(_DWORD *)v49) & 6 ^ (*(_QWORD *)(v49 + 16) - 1);
      LODWORD(v120[0]) = *(_DWORD *)(v49 + 4);
      v120[1] = *(_QWORD *)(v49 + 8);
      v120[2] = (*(_QWORD *)(v49 + 16) + 4095LL) ^ v50 & 0xFFF;
      v51 = v120;
      v52 = ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
          + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8);
      v53 = 24;
      goto LABEL_68;
    case 13:
      v59 = (_QWORD *)*((_QWORD *)v1 + 2);
      if ( !v59[1] )
      {
        v20 = -1073741747;
        goto LABEL_53;
      }
      v117[1] = v59[1];
      v117[2] = (unsigned int)dword_140382C10;
      v117[0] = *v59;
      v51 = v117;
      v52 = ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
          + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8);
      v53 = 31;
LABEL_68:
      PfLogEvent(v53, dword_14036DE5C + (v52 >> 10), v51, 0x18u);
      v20 = 0;
      break;
    default:
      goto LABEL_139;
  }
  return (unsigned int)v20;
}
