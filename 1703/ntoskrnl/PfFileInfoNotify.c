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
  unsigned int SessionId; // r8d
  __int64 v66; // rdx
  __int64 v67; // rcx
  int v68; // eax
  __int64 v69; // rcx
  _KLOCK_ENTRY *v70; // r15
  __int16 v71; // ax
  struct _KTHREAD *v72; // rbx
  __int64 v73; // rdx
  __int64 v74; // rcx
  int v75; // eax
  __int64 v76; // rcx
  _KLOCK_ENTRY *v77; // r15
  __int16 v78; // ax
  __int64 v79; // rdx
  __int64 v80; // rdx
  int v81; // ecx
  struct _KTHREAD *v82; // rax
  unsigned int v83; // r12d
  struct _KTHREAD *v84; // rax
  __int64 i; // r14
  struct _KTHREAD *v86; // r14
  unsigned int v87; // r8d
  __int64 v88; // rdx
  __int64 v89; // rcx
  int v90; // eax
  __int64 v91; // rcx
  _KLOCK_ENTRY *v92; // r15
  __int64 v93; // rdx
  __int16 v94; // ax
  struct _KTHREAD *v95; // rbx
  __int64 v96; // rdx
  __int64 v97; // rcx
  int v98; // eax
  __int64 v99; // rcx
  _KLOCK_ENTRY *v100; // r15
  __int64 v101; // rdx
  __int16 v102; // ax
  signed __int64 Count; // rdx
  signed __int64 v104; // rax
  unsigned __int64 v105; // rdx
  int v106; // [rsp+30h] [rbp-89h] BYREF
  int v107; // [rsp+34h] [rbp-85h] BYREF
  int v108; // [rsp+38h] [rbp-81h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+40h] [rbp-79h]
  unsigned int *v110; // [rsp+48h] [rbp-71h]
  int v111; // [rsp+50h] [rbp-69h]
  int v112; // [rsp+54h] [rbp-65h]
  int v113; // [rsp+58h] [rbp-61h]
  int v114; // [rsp+5Ch] [rbp-5Dh]
  _QWORD v115[3]; // [rsp+60h] [rbp-59h] BYREF
  __int64 v116; // [rsp+78h] [rbp-41h]
  __int64 v117; // [rsp+80h] [rbp-39h]
  _QWORD v118[3]; // [rsp+88h] [rbp-31h] BYREF
  __int128 v119; // [rsp+A0h] [rbp-19h]
  __int128 v120; // [rsp+B0h] [rbp-9h]
  __int64 v121; // [rsp+C0h] [rbp+7h]
  BOOL v123; // [rsp+120h] [rbp+67h]
  BOOL v124; // [rsp+120h] [rbp+67h]
  unsigned __int8 AbAllocationRegionCount; // [rsp+120h] [rbp+67h]
  unsigned __int8 v126; // [rsp+120h] [rbp+67h]
  BOOLEAN v127; // [rsp+128h] [rbp+6Fh]
  KIRQL v128; // [rsp+130h] [rbp+77h]
  int v129; // [rsp+138h] [rbp+7Fh] BYREF

  v1 = a1;
  v2 = *a1 == 13;
  ListEntry = 0LL;
  v110 = 0LL;
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
        v107 = 0;
        v64 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(&qword_14036DF90) == 1 )
          SessionId = MmGetSessionIdEx(v64->ApcState.Process);
        else
          SessionId = -1;
        --v64->SpecialApcDisable;
        ++v64->AbAllocationRegionCount;
        LODWORD(v66) = ((char)v64->AbEntrySummary | (char)v64->AbOrphanedEntrySummary) ^ 0x3F;
        v123 = v64->AbAllocationRegionCount == 1;
        v2 = !_BitScanReverse((unsigned int *)&v67, v66);
        v113 = v67;
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
            && v70->LockState.SessionId == SessionId )
          {
            v70->AcquiredByte &= ~1u;
            if ( v70->LockState.0 )
              break;
          }
          v2 = !_BitScanReverse((unsigned int *)&v67, v66);
          v113 = v67;
          if ( v2 )
            goto LABEL_101;
        }
        if ( !v70 )
        {
LABEL_101:
          if ( (*((_DWORD *)&v64->0 + 1) & 0x8000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v64, (ULONG_PTR)&qword_14036DF90, SessionId, 0LL);
        }
        else
        {
          v70->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v70->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v64->LockEntries[v69].TreeNode, v66);
          v107 = 0;
          v107 = v70->BoostBitmap.AllFields & 0x1FFFF;
          v70->BoostBitmap.AllFields &= 0xFFFE0000;
          v70->ThreadLocalFlags &= ~1u;
          v70->LockState.0 = 0LL;
          v79 = ((char *)v70 - (char *)v64 - 800) / 96;
          if ( v123 )
            v64->AbEntrySummary |= 1 << v79;
          else
            _InterlockedOr8((volatile signed __int8 *)&v64->AbOrphanedEntrySummary, 1 << v79);
        }
        --v64->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts(v64, &qword_14036DF90, &v107);
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
      v108 = 0;
      v72 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(&qword_14036DF88) == 1 )
        v62 = MmGetSessionIdEx(v72->ApcState.Process);
      --v72->SpecialApcDisable;
      ++v72->AbAllocationRegionCount;
      LODWORD(v73) = ((char)v72->AbEntrySummary | (char)v72->AbOrphanedEntrySummary) ^ 0x3F;
      v124 = v72->AbAllocationRegionCount == 1;
      v2 = !_BitScanReverse((unsigned int *)&v74, v73);
      v114 = v74;
      if ( v2 )
        goto LABEL_113;
      while ( 1 )
      {
        v75 = 1 << v74;
        v76 = v74;
        v77 = &v72->LockEntries[v76];
        v73 = ~v75 & (unsigned int)v73;
        if ( (v77->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v77->LockState.0 & 1) == 0
          && (*(_QWORD *)&v77->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_14036DF88 & 0x7FFFFFFFFFFFFFFCLL)
          && v77->LockState.SessionId == v62 )
        {
          v77->AcquiredByte &= ~1u;
          if ( v77->LockState.0 )
            break;
        }
        v2 = !_BitScanReverse((unsigned int *)&v74, v73);
        v114 = v74;
        if ( v2 )
          goto LABEL_113;
      }
      if ( !v77 )
      {
LABEL_113:
        if ( (*((_DWORD *)&v72->0 + 1) & 0x8000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v72, (ULONG_PTR)&qword_14036DF88, v62, 0LL);
      }
      else
      {
        v77->CrossThreadReleasableAndBusyByte |= 2u;
        if ( (__int64)v77->LockState.LockState < 0 )
          KiAbEntryRemoveFromTree(&v72->LockEntries[v76].TreeNode, v73);
        v108 = 0;
        v108 = v77->BoostBitmap.AllFields & 0x1FFFF;
        v77->BoostBitmap.AllFields &= 0xFFFE0000;
        v77->ThreadLocalFlags &= ~1u;
        v77->LockState.0 = 0LL;
        v80 = ((char *)v77 - (char *)v72 - 800) / 96;
        if ( v124 )
          v72->AbEntrySummary |= 1 << v80;
        else
          _InterlockedOr8((volatile signed __int8 *)&v72->AbOrphanedEntrySummary, 1 << v80);
      }
      --v72->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts(v72, &qword_14036DF88, &v108);
      v78 = v72->SpecialApcDisable + 1;
      v72->SpecialApcDisable = v78;
      if ( !v78 && ($69CD3F157F9F39B6F7113F2231989901 *)v72->ApcState.ApcListHead[0].Flink != &v72->152 )
        KiCheckForKernelApcDelivery();
      KeLeaveCriticalRegion();
      goto LABEL_19;
    }
    v81 = v60 - 1;
    if ( !v81 )
    {
      v82 = KeGetCurrentThread();
      --v82->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14036DF88, 0LL);
      v83 = -1;
      if ( qword_14036DF78 )
      {
        v84 = KeGetCurrentThread();
        --v84->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14036DF90, 0LL);
        dword_14036DFA8 |= 1u;
        for ( i = qword_14036DF98; (__int64 *)i != &qword_14036DF98; i = *(_QWORD *)i )
        {
          *(_DWORD *)(i + 68) |= 4u;
          KeSetEvent((PRKEVENT)(i + 88), 0, 0);
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14036DF90, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(&qword_14036DF90);
        v129 = 0;
        v86 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(&qword_14036DF90) == 1 )
          v87 = MmGetSessionIdEx(v86->ApcState.Process);
        else
          v87 = -1;
        --v86->SpecialApcDisable;
        ++v86->AbAllocationRegionCount;
        LODWORD(v88) = ((char)v86->AbEntrySummary | (char)v86->AbOrphanedEntrySummary) ^ 0x3F;
        AbAllocationRegionCount = v86->AbAllocationRegionCount;
        v2 = !_BitScanReverse((unsigned int *)&v89, v88);
        v111 = v89;
        if ( v2 )
          goto LABEL_164;
        while ( 1 )
        {
          v90 = 1 << v89;
          v91 = v89;
          v92 = &v86->LockEntries[v91];
          v88 = ~v90 & (unsigned int)v88;
          if ( (v92->AcquiredByte & 1) != 0
            && (*(_DWORD *)&v92->LockState.0 & 1) == 0
            && (*(_QWORD *)&v92->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_14036DF90 & 0x7FFFFFFFFFFFFFFCLL)
            && v92->LockState.SessionId == v87 )
          {
            v92->AcquiredByte &= ~1u;
            if ( v92->LockState.0 )
              break;
          }
          v2 = !_BitScanReverse((unsigned int *)&v89, v88);
          v111 = v89;
          if ( v2 )
            goto LABEL_164;
        }
        if ( !v92 )
        {
LABEL_164:
          if ( (*((_DWORD *)&v86->0 + 1) & 0x8000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v86, (ULONG_PTR)&qword_14036DF90, v87, 0LL);
        }
        else
        {
          v92->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v92->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v86->LockEntries[v91].TreeNode, v88);
          v129 = 0;
          v129 = v92->BoostBitmap.AllFields & 0x1FFFF;
          v92->BoostBitmap.AllFields &= 0xFFFE0000;
          v92->ThreadLocalFlags &= ~1u;
          v92->LockState.0 = 0LL;
          v93 = ((char *)v92 - (char *)v86 - 800) / 96;
          if ( AbAllocationRegionCount == 1 )
            v86->AbEntrySummary |= 1 << v93;
          else
            _InterlockedOr8((volatile signed __int8 *)&v86->AbOrphanedEntrySummary, 1 << v93);
        }
        --v86->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts(v86, &qword_14036DF90, &v129);
        v94 = v86->SpecialApcDisable + 1;
        v86->SpecialApcDisable = v94;
        if ( !v94 && ($69CD3F157F9F39B6F7113F2231989901 *)v86->ApcState.ApcListHead[0].Flink != &v86->152 )
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
      v106 = 0;
      v95 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(&qword_14036DF88) == 1 )
        v83 = MmGetSessionIdEx(v95->ApcState.Process);
      --v95->SpecialApcDisable;
      ++v95->AbAllocationRegionCount;
      LODWORD(v96) = ((char)v95->AbEntrySummary | (char)v95->AbOrphanedEntrySummary) ^ 0x3F;
      v126 = v95->AbAllocationRegionCount;
      v2 = !_BitScanReverse((unsigned int *)&v97, v96);
      v112 = v97;
      if ( v2 )
        goto LABEL_188;
      while ( 1 )
      {
        v98 = 1 << v97;
        v99 = v97;
        v100 = &v95->LockEntries[v99];
        v96 = ~v98 & (unsigned int)v96;
        if ( (v100->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v100->LockState.0 & 1) == 0
          && (*(_QWORD *)&v100->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_14036DF88 & 0x7FFFFFFFFFFFFFFCLL)
          && v100->LockState.SessionId == v83 )
        {
          v100->AcquiredByte &= ~1u;
          if ( v100->LockState.0 )
            break;
        }
        v2 = !_BitScanReverse((unsigned int *)&v97, v96);
        v112 = v97;
        if ( v2 )
          goto LABEL_188;
      }
      if ( !v100 )
      {
LABEL_188:
        if ( (*((_DWORD *)&v95->0 + 1) & 0x8000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v95, (ULONG_PTR)&qword_14036DF88, v83, 0LL);
      }
      else
      {
        v100->CrossThreadReleasableAndBusyByte |= 2u;
        if ( (__int64)v100->LockState.LockState < 0 )
          KiAbEntryRemoveFromTree(&v95->LockEntries[v99].TreeNode, v96);
        v106 = 0;
        v106 = v100->BoostBitmap.AllFields & 0x1FFFF;
        v100->BoostBitmap.AllFields &= 0xFFFE0000;
        v100->ThreadLocalFlags &= ~1u;
        v100->LockState.0 = 0LL;
        v101 = ((char *)v100 - (char *)v95 - 800) / 96;
        if ( v126 == 1 )
          v95->AbEntrySummary |= 1 << v101;
        else
          _InterlockedOr8((volatile signed __int8 *)&v95->AbOrphanedEntrySummary, 1 << v101);
      }
      --v95->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts(v95, &qword_14036DF88, &v106);
      v102 = v95->SpecialApcDisable + 1;
      v95->SpecialApcDisable = v102;
      if ( !v102 && ($69CD3F157F9F39B6F7113F2231989901 *)v95->ApcState.ApcListHead[0].Flink != &v95->152 )
        KiCheckForKernelApcDelivery();
      KeLeaveCriticalRegion();
      goto LABEL_19;
    }
    if ( v81 == 1 )
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
    v116 = v5[3];
    v29 = *(_QWORD *)(v27 + 544);
    v117 = *v5;
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
            v105 = Count & 0xFFFFFFFFFFFFFFFEuLL;
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v105, 0xFFFFFFFFFFFFFFF1uLL) == 15
              && !_interlockedbittestandreset((volatile signed __int32 *)(v105 + 32), 0) )
            {
              KeSetEvent((PRKEVENT)(v105 + 8), 0, 0);
            }
          }
          else
          {
            while ( 1 )
            {
              v104 = _InterlockedCompareExchange64((volatile signed __int64 *)&v31[45], Count - 30, Count);
              v2 = Count == v104;
              Count = v104;
              if ( v2 )
                break;
              if ( (v104 & 1) != 0 )
                goto LABEL_202;
            }
          }
        }
      }
      else
      {
        v127 = 1;
        v128 = KeAcquireSpinLockRaiseToDpc(&qword_14036DFD0);
        v31 = (struct _EX_RUNDOWN_REF *)(*(_QWORD *)(v29 + 1192) & 0xFFFFFFFFFFFFFFF0uLL);
        if ( v31 )
          v127 = ExAcquireRundownProtection(v31 + 45);
        KxReleaseSpinLock(&qword_14036DFD0);
        __writecr8(v128);
        if ( !v127 )
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
            if ( (int)PfSnLogPageFaultCommon((_DWORD)v31, v117, v116, v45, 0) < 0 )
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
    *(_QWORD *)&v119 = v12;
    *(_QWORD *)&v120 = v7 | (v10 << 63);
    v15 = 0LL;
    v16 = 0LL;
    v17 = v13 ^ *(_QWORD *)(v13 + 776);
    *((_QWORD *)&v119 + 1) = v11 >> 12;
    *((_QWORD *)&v120 + 1) = v17 & 0x1FFFFFFFFFFFFFFFLL;
    LODWORD(v121) = dword_140382C10;
    HIDWORD(v121) = *(_DWORD *)(v13 + 736);
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
        v22 = v119;
        *((_DWORD *)v16 + 2) = v18;
        v23 = v120;
        *v16 = v21 & 0xFFFFFFFFFFFC0000uLL | 0x2A013;
        *((_OWORD *)v16 + 1) = v22;
        *(_QWORD *)&v22 = v121;
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
      v57 = v110;
      *v110 = *v110 & 0x80000002 | (8 * ((v56 + 65) & 0xFFFFFF8)) | 2;
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
      v39 = v110;
      *v110 = *v110 & 0x80000000 | (8 * ((v38 + 53) & 0xFFFFFF8));
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
      v118[0] = 0LL;
      v50 = (2 * (unsigned __int8)*(_DWORD *)v49) & 6 ^ (*(_QWORD *)(v49 + 16) - 1);
      LODWORD(v118[0]) = *(_DWORD *)(v49 + 4);
      v118[1] = *(_QWORD *)(v49 + 8);
      v118[2] = (*(_QWORD *)(v49 + 16) + 4095LL) ^ v50 & 0xFFF;
      v51 = v118;
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
      v115[1] = v59[1];
      v115[2] = (unsigned int)dword_140382C10;
      v115[0] = *v59;
      v51 = v115;
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
