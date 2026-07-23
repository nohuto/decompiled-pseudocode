/*
 * XREFs of PfFileInfoNotify @ 0x14008D1A0
 * Callers:
 *     <none>
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140040D50 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     ExRundownCompleted @ 0x14008AE10 (ExRundownCompleted.c)
 *     PfLogDeleteHelper @ 0x14008B66C (PfLogDeleteHelper.c)
 *     PfLogEvent @ 0x14008B980 (PfLogEvent.c)
 *     PfFbLogEntryReserve @ 0x14008BA6C (PfFbLogEntryReserve.c)
 *     PfFbLogEntryComplete @ 0x14008BB44 (PfFbLogEntryComplete.c)
 *     PfSnReferenceProcessTrace @ 0x14008DE70 (PfSnReferenceProcessTrace.c)
 *     PfSnLogPageFaultCommon @ 0x14008DFB4 (PfSnLogPageFaultCommon.c)
 *     PfSnCheckLoggingForThread @ 0x14008E8B0 (PfSnCheckLoggingForThread.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     _wcsupr @ 0x140188B80 (_wcsupr.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401B2BD0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401B2C10 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     PfpRpFileKeyUpdate @ 0x1404A9210 (PfpRpFileKeyUpdate.c)
 *     PfSnNameRemoveAll @ 0x140537C08 (PfSnNameRemoveAll.c)
 *     PfSnLogStreamCreate @ 0x140538EA8 (PfSnLogStreamCreate.c)
 *     PfSnLogVolumeCreate @ 0x140576F74 (PfSnLogVolumeCreate.c)
 */

__int64 __fastcall PfFileInfoNotify(_DWORD *a1)
{
  _DWORD *v1; // rsi
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
  __int64 v19; // rdx
  PSLIST_ENTRY j; // rcx
  int v21; // r14d
  unsigned __int64 v22; // rax
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  _SLIST_ENTRY *Next; // rdi
  __int64 v27; // r14
  unsigned __int64 v28; // r12
  __int64 v29; // r15
  __int64 v30; // r13
  __int64 v31; // rcx
  __int64 v32; // rax
  struct _EX_RUNDOWN_REF *v33; // rdi
  int v34; // ecx
  __int64 v35; // rdx
  __int64 v36; // rax
  unsigned int v37; // edx
  const void *v38; // r12
  int v39; // ebx
  unsigned int v40; // r13d
  unsigned int v41; // r15d
  unsigned int *v42; // rdi
  int v43; // r9d
  wchar_t *v44; // rcx
  __int64 v45; // rdx
  int v46; // ecx
  int v47; // ecx
  int v48; // r15d
  int v49; // r14d
  __int64 v50; // rdx
  int v51; // eax
  int v52; // ecx
  __int64 v53; // rcx
  __int64 v54; // rdx
  _QWORD *v55; // r8
  unsigned __int64 v56; // rdx
  int v57; // ecx
  unsigned int v58; // r13d
  unsigned int *v59; // rdi
  __int16 v60; // cx
  _QWORD *v61; // rcx
  int v62; // ecx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // r9
  unsigned int v67; // r12d
  struct _KTHREAD *v68; // rax
  __int64 v69; // rdx
  __int64 v70; // r8
  __int64 v71; // r9
  struct _KTHREAD *v72; // r14
  unsigned int SessionId; // r8d
  unsigned int v74; // edx
  __int64 v75; // rcx
  int v76; // eax
  __int64 v77; // rcx
  _KLOCK_ENTRY *v78; // r15
  struct _KTHREAD *v79; // rbx
  unsigned int v80; // edx
  __int64 v81; // rcx
  int v82; // eax
  __int64 v83; // rcx
  _KLOCK_ENTRY *v84; // r15
  __int64 v85; // rdx
  __int64 v86; // rdx
  int v87; // ecx
  struct _KTHREAD *v88; // rax
  __int64 v89; // rdx
  __int64 v90; // r8
  __int64 v91; // r9
  unsigned int v92; // r12d
  struct _KTHREAD *v93; // rax
  __int64 v94; // rdx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 i; // r14
  struct _KTHREAD *v98; // r14
  unsigned int v99; // r8d
  unsigned int v100; // edx
  __int64 v101; // rcx
  int v102; // eax
  __int64 v103; // rcx
  _KLOCK_ENTRY *v104; // r15
  __int64 v105; // rdx
  struct _KTHREAD *v106; // rbx
  unsigned int v107; // edx
  __int64 v108; // rcx
  int v109; // eax
  __int64 v110; // rcx
  _KLOCK_ENTRY *v111; // r15
  __int64 v112; // rdx
  _SLIST_ENTRY *v113; // rcx
  int v114; // [rsp+30h] [rbp-69h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+38h] [rbp-61h] BYREF
  unsigned int *v116; // [rsp+40h] [rbp-59h] BYREF
  int v117; // [rsp+48h] [rbp-51h]
  int v118; // [rsp+4Ch] [rbp-4Dh]
  int v119; // [rsp+50h] [rbp-49h]
  int v120; // [rsp+54h] [rbp-45h]
  _QWORD v121[3]; // [rsp+58h] [rbp-41h] BYREF
  _QWORD v122[3]; // [rsp+70h] [rbp-29h] BYREF
  __int128 v123; // [rsp+88h] [rbp-11h]
  __int128 v124; // [rsp+98h] [rbp-1h]
  __int64 v125; // [rsp+A8h] [rbp+Fh]
  BOOL v127; // [rsp+100h] [rbp+67h]
  BOOL v128; // [rsp+100h] [rbp+67h]
  unsigned __int8 AbAllocationRegionCount; // [rsp+100h] [rbp+67h]
  unsigned __int8 v130; // [rsp+100h] [rbp+67h]
  __int64 v131; // [rsp+108h] [rbp+6Fh] BYREF
  int v132; // [rsp+110h] [rbp+77h] BYREF
  int v133; // [rsp+118h] [rbp+7Fh] BYREF

  v1 = a1;
  v2 = *a1 == 13;
  ListEntry = 0LL;
  v116 = 0LL;
  if ( !v2 )
  {
    v21 = -1073741811;
    goto LABEL_64;
  }
  v3 = a1[2];
  if ( (v3 & 8) != 0 )
  {
    v34 = a1[1];
    if ( v34 == 7 )
    {
      v1[6] = _InterlockedIncrement(&dword_1403E27D0);
    }
    else
    {
      v62 = v34 - 10;
      if ( !v62 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403CD808, 0LL);
        v67 = -1;
        if ( qword_1403CD7F8 )
        {
          v21 = -1073741791;
        }
        else
        {
          v68 = KeGetCurrentThread();
          --v68->KernelApcDisable;
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403CD810, 0LL);
          dword_1403CD828 &= ~1u;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403CD810, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403CD810, v69, v70, v71);
          v133 = 0;
          v72 = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType(&qword_1403CD810) == 1 )
            SessionId = MmGetSessionIdEx(v72->ApcState.Process);
          else
            SessionId = -1;
          --v72->SpecialApcDisable;
          ++v72->AbAllocationRegionCount;
          v74 = ((char)v72->AbEntrySummary | (char)v72->AbOrphanedEntrySummary) ^ 0x3F;
          v127 = v72->AbAllocationRegionCount == 1;
          v2 = !_BitScanReverse((unsigned int *)&v75, v74);
          v119 = v75;
          if ( v2 )
            goto LABEL_85;
          while ( 1 )
          {
            v76 = 1 << v75;
            v77 = v75;
            v78 = &v72->LockEntries[v77];
            v74 &= ~v76;
            if ( (v78->AcquiredByte & 1) != 0
              && (*(_DWORD *)&v78->LockState.0 & 1) == 0
              && (*(_QWORD *)&v78->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_1403CD810 & 0x7FFFFFFFFFFFFFFCLL)
              && v78->LockState.SessionId == SessionId )
            {
              v78->AcquiredByte &= ~1u;
              if ( v78->LockState.0 )
                break;
            }
            v2 = !_BitScanReverse((unsigned int *)&v75, v74);
            v119 = v75;
            if ( v2 )
              goto LABEL_85;
          }
          if ( !v78 )
          {
LABEL_85:
            if ( (*((_DWORD *)&v72->0 + 1) & 0x10000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)v72, (ULONG_PTR)&qword_1403CD810, SessionId, 0LL);
          }
          else
          {
            v78->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v78->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree(&v72->LockEntries[v77].TreeNode);
            v133 = 0;
            v133 = v78->BoostBitmap.AllFields & 0x1FFFF;
            v78->BoostBitmap.AllFields &= 0xFFFE0000;
            v78->ThreadLocalFlags &= ~1u;
            v78->LockState.0 = 0LL;
            v85 = ((char *)v78 - (char *)v72 - 800) / 96;
            if ( v127 )
              v72->AbEntrySummary |= 1 << v85;
            else
              _InterlockedOr8((volatile signed __int8 *)&v72->AbOrphanedEntrySummary, 1 << v85);
          }
          --v72->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts(v72, &qword_1403CD810, &v133);
          v2 = v72->SpecialApcDisable++ == -1;
          if ( v2 && ($005F0E83B22994B61E86C72E0CE43C71 *)v72->ApcState.ApcListHead[0].Flink != &v72->152 )
            KiCheckForKernelApcDelivery();
          KeLeaveCriticalRegion();
          (*(void (__fastcall **)(__int64 (__fastcall *)(ULONG_PTR)))(*((_QWORD *)v1 + 3) + 32LL))(PfpPrefetchSharedConflictNotifyStart);
          qword_1403CD7F8 = *((_QWORD *)v1 + 3);
          v21 = 0;
          _InterlockedExchange64((volatile __int64 *)&RunRef, 0LL);
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403CD808, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403CD808, v64, v65, v66);
        v114 = 0;
        v79 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(&qword_1403CD808) == 1 )
          v67 = MmGetSessionIdEx(v79->ApcState.Process);
        --v79->SpecialApcDisable;
        ++v79->AbAllocationRegionCount;
        v80 = ((char)v79->AbEntrySummary | (char)v79->AbOrphanedEntrySummary) ^ 0x3F;
        v128 = v79->AbAllocationRegionCount == 1;
        v2 = !_BitScanReverse((unsigned int *)&v81, v80);
        v120 = v81;
        if ( v2 )
          goto LABEL_97;
        while ( 1 )
        {
          v82 = 1 << v81;
          v83 = v81;
          v84 = &v79->LockEntries[v83];
          v80 &= ~v82;
          if ( (v84->AcquiredByte & 1) != 0
            && (*(_DWORD *)&v84->LockState.0 & 1) == 0
            && (*(_QWORD *)&v84->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_1403CD808 & 0x7FFFFFFFFFFFFFFCLL)
            && v84->LockState.SessionId == v67 )
          {
            v84->AcquiredByte &= ~1u;
            if ( v84->LockState.0 )
              break;
          }
          v2 = !_BitScanReverse((unsigned int *)&v81, v80);
          v120 = v81;
          if ( v2 )
            goto LABEL_97;
        }
        if ( !v84 )
        {
LABEL_97:
          if ( (*((_DWORD *)&v79->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v79, (ULONG_PTR)&qword_1403CD808, v67, 0LL);
        }
        else
        {
          v84->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v84->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v79->LockEntries[v83].TreeNode);
          v114 = 0;
          v114 = v84->BoostBitmap.AllFields & 0x1FFFF;
          v84->BoostBitmap.AllFields &= 0xFFFE0000;
          v84->ThreadLocalFlags &= ~1u;
          v84->LockState.0 = 0LL;
          v86 = ((char *)v84 - (char *)v79 - 800) / 96;
          if ( v128 )
            v79->AbEntrySummary |= 1 << v86;
          else
            _InterlockedOr8((volatile signed __int8 *)&v79->AbOrphanedEntrySummary, 1 << v86);
        }
        --v79->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts(v79, &qword_1403CD808, &v114);
        v2 = v79->SpecialApcDisable++ == -1;
        if ( v2 && ($005F0E83B22994B61E86C72E0CE43C71 *)v79->ApcState.ApcListHead[0].Flink != &v79->152 )
          KiCheckForKernelApcDelivery();
        KeLeaveCriticalRegion();
        goto LABEL_20;
      }
      v87 = v62 - 1;
      if ( !v87 )
      {
        v88 = KeGetCurrentThread();
        --v88->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403CD808, 0LL);
        v92 = -1;
        if ( qword_1403CD7F8 )
        {
          v93 = KeGetCurrentThread();
          --v93->KernelApcDisable;
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403CD810, 0LL);
          dword_1403CD828 |= 1u;
          for ( i = qword_1403CD818; (__int64 *)i != &qword_1403CD818; i = *(_QWORD *)i )
          {
            *(_DWORD *)(i + 68) |= 4u;
            KeSetEvent((PRKEVENT)(i + 88), 0, 0);
          }
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403CD810, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403CD810, v94, v95, v96);
          LODWORD(v131) = 0;
          v98 = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType(&qword_1403CD810) == 1 )
            v99 = MmGetSessionIdEx(v98->ApcState.Process);
          else
            v99 = -1;
          --v98->SpecialApcDisable;
          ++v98->AbAllocationRegionCount;
          v100 = ((char)v98->AbEntrySummary | (char)v98->AbOrphanedEntrySummary) ^ 0x3F;
          AbAllocationRegionCount = v98->AbAllocationRegionCount;
          v2 = !_BitScanReverse((unsigned int *)&v101, v100);
          v117 = v101;
          if ( v2 )
            goto LABEL_149;
          while ( 1 )
          {
            v102 = 1 << v101;
            v103 = v101;
            v104 = &v98->LockEntries[v103];
            v100 &= ~v102;
            if ( (v104->AcquiredByte & 1) != 0
              && (*(_DWORD *)&v104->LockState.0 & 1) == 0
              && (*(_QWORD *)&v104->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_1403CD810 & 0x7FFFFFFFFFFFFFFCLL)
              && v104->LockState.SessionId == v99 )
            {
              v104->AcquiredByte &= ~1u;
              if ( v104->LockState.0 )
                break;
            }
            v2 = !_BitScanReverse((unsigned int *)&v101, v100);
            v117 = v101;
            if ( v2 )
              goto LABEL_149;
          }
          if ( !v104 )
          {
LABEL_149:
            if ( (*((_DWORD *)&v98->0 + 1) & 0x10000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)v98, (ULONG_PTR)&qword_1403CD810, v99, 0LL);
          }
          else
          {
            v104->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v104->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree(&v98->LockEntries[v103].TreeNode);
            LODWORD(v131) = 0;
            LODWORD(v131) = v104->BoostBitmap.AllFields & 0x1FFFF;
            v104->BoostBitmap.AllFields &= 0xFFFE0000;
            v104->ThreadLocalFlags &= ~1u;
            v104->LockState.0 = 0LL;
            v105 = ((char *)v104 - (char *)v98 - 800) / 96;
            if ( AbAllocationRegionCount == 1 )
              v98->AbEntrySummary |= 1 << v105;
            else
              _InterlockedOr8((volatile signed __int8 *)&v98->AbOrphanedEntrySummary, 1 << v105);
          }
          --v98->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts(v98, &qword_1403CD810, &v131);
          v2 = v98->SpecialApcDisable++ == -1;
          if ( v2 && ($005F0E83B22994B61E86C72E0CE43C71 *)v98->ApcState.ApcListHead[0].Flink != &v98->152 )
            KiCheckForKernelApcDelivery();
          KeLeaveCriticalRegion();
          ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&RunRef);
          ExRundownCompleted((PEX_RUNDOWN_REF)&RunRef);
          qword_1403CD7F8 = 0LL;
          v21 = 0;
        }
        else
        {
          v21 = -1073741275;
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403CD808, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403CD808, v89, v90, v91);
        v132 = 0;
        v106 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(&qword_1403CD808) == 1 )
          v92 = MmGetSessionIdEx(v106->ApcState.Process);
        --v106->SpecialApcDisable;
        ++v106->AbAllocationRegionCount;
        v107 = ((char)v106->AbEntrySummary | (char)v106->AbOrphanedEntrySummary) ^ 0x3F;
        v130 = v106->AbAllocationRegionCount;
        v2 = !_BitScanReverse((unsigned int *)&v108, v107);
        v118 = v108;
        if ( v2 )
          goto LABEL_173;
        while ( 1 )
        {
          v109 = 1 << v108;
          v110 = v108;
          v111 = &v106->LockEntries[v110];
          v107 &= ~v109;
          if ( (v111->AcquiredByte & 1) != 0
            && (*(_DWORD *)&v111->LockState.0 & 1) == 0
            && (*(_QWORD *)&v111->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_1403CD808 & 0x7FFFFFFFFFFFFFFCLL)
            && v111->LockState.SessionId == v92 )
          {
            v111->AcquiredByte &= ~1u;
            if ( v111->LockState.0 )
              break;
          }
          v2 = !_BitScanReverse((unsigned int *)&v108, v107);
          v118 = v108;
          if ( v2 )
            goto LABEL_173;
        }
        if ( !v111 )
        {
LABEL_173:
          if ( (*((_DWORD *)&v106->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v106, (ULONG_PTR)&qword_1403CD808, v92, 0LL);
        }
        else
        {
          v111->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v111->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v106->LockEntries[v110].TreeNode);
          v132 = 0;
          v132 = v111->BoostBitmap.AllFields & 0x1FFFF;
          v111->BoostBitmap.AllFields &= 0xFFFE0000;
          v111->ThreadLocalFlags &= ~1u;
          v111->LockState.0 = 0LL;
          v112 = ((char *)v111 - (char *)v106 - 800) / 96;
          if ( v130 == 1 )
            v106->AbEntrySummary |= 1 << v112;
          else
            _InterlockedOr8((volatile signed __int8 *)&v106->AbOrphanedEntrySummary, 1 << v112);
        }
        --v106->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts(v106, &qword_1403CD808, &v132);
        v2 = v106->SpecialApcDisable++ == -1;
        if ( v2 && ($005F0E83B22994B61E86C72E0CE43C71 *)v106->ApcState.ApcListHead[0].Flink != &v106->152 )
          KiCheckForKernelApcDelivery();
        KeLeaveCriticalRegion();
        goto LABEL_20;
      }
      if ( v87 != 1 )
      {
LABEL_124:
        v21 = -1073741637;
        goto LABEL_64;
      }
      if ( (dword_1403CD950 & 2) != 0 )
      {
        v21 = -1073741431;
        goto LABEL_64;
      }
    }
    return 0;
  }
  if ( (v3 & 4) != 0 )
  {
    v46 = a1[1];
    if ( v46 )
    {
      v47 = v46 - 2;
      if ( v47 )
      {
        if ( v47 == 1 )
          PfSnNameRemoveAll(*((_QWORD *)v1 + 3));
      }
      else
      {
        PfSnLogStreamCreate(*((_QWORD *)v1 + 3));
      }
    }
    else
    {
      PfSnLogVolumeCreate(*((_QWORD *)v1 + 3));
    }
  }
  if ( (v1[2] & 1) == 0 )
    return 0;
  if ( dword_1403CD3A0 >= (unsigned int)dword_1403CD3A4 )
  {
    v52 = v1[1];
    v4 = v52;
    if ( v52 != 4 && v52 != 2 && v52 != 3 )
    {
      v21 = -1073741697;
      goto LABEL_64;
    }
  }
  else
  {
    v4 = v1[1];
  }
  if ( v4 == 4 )
  {
    v5 = (__int64 *)*((_QWORD *)v1 + 3);
    v6 = v5[1] & 0xFFF;
    v7 = (v6 + (unsigned __int64)*((unsigned int *)v5 + 4) + 4095) >> 12;
    if ( PfSnNumActiveTraces )
    {
      v27 = v5[4];
      v28 = (v6 + (unsigned __int64)*((unsigned int *)v5 + 4) + 4095) >> 12;
      v29 = v5[1];
      v30 = v5[3];
      v31 = *(_QWORD *)(v27 + 544);
      v131 = *v5;
      v32 = PfSnReferenceProcessTrace(v31);
      v33 = (struct _EX_RUNDOWN_REF *)v32;
      if ( v32 )
      {
        if ( (unsigned int)PfSnCheckLoggingForThread(v27, v32, 0LL) )
        {
          v48 = v29 & 0xFFFFF000;
          if ( v7 )
          {
            v49 = v131;
            do
            {
              if ( (int)PfSnLogPageFaultCommon((_DWORD)v33, v49, v30, v48, 0) < 0 )
                break;
              v48 += 4096;
              --v28;
            }
            while ( v28 );
            v1 = a1;
          }
        }
        ExReleaseRundownProtection(v33 + 45);
      }
    }
    if ( dword_1403CD3A0 < (unsigned int)dword_1403CD3A4 )
    {
      v8 = *((_QWORD *)v1 + 3);
      v9 = *(_QWORD *)(v8 + 32);
      v10 = *(int *)(v8 + 20);
      v11 = *(_QWORD *)(v8 + 8);
      v12 = *(_QWORD *)(v8 + 24);
      v13 = *(_QWORD *)(v9 + 544);
      v14 = (*(_DWORD *)(v9 + 1744) >> 12) & 7;
      if ( (*(_DWORD *)(v13 + 772) & 0x100000) != 0 )
      {
        v51 = 2;
        if ( v14 < 2 )
          v51 = (*(_DWORD *)(v9 + 1744) >> 12) & 7;
        v14 = v51;
      }
      if ( v14 < dword_1403CBF2C )
      {
        v21 = 0;
        goto LABEL_20;
      }
      *(_QWORD *)&v123 = v12;
      *(_QWORD *)&v124 = v7 | (v10 << 63);
      v15 = 0LL;
      v16 = 0LL;
      v17 = v13 ^ *(_QWORD *)(v13 + 776);
      *((_QWORD *)&v123 + 1) = v11 >> 12;
      *((_QWORD *)&v124 + 1) = v17 & 0x1FFFFFFFFFFFFFFFLL;
      LODWORD(v125) = dword_1403E27D0;
      HIDWORD(v125) = *(_DWORD *)(v13 + 736);
      v18 = dword_1403CD6DC
          + ((((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
            + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)) >> 10);
      if ( ExAcquireRundownProtection(&stru_1403CD2E0) )
      {
        while ( 1 )
        {
          for ( j = RtlpInterlockedPopEntrySList(&stru_1403CD300); !j; j = RtlpInterlockedPopEntrySList(&stru_1403CD300) )
          {
            j = RtlpInterlockedPopEntrySList(&stru_1403CD2F0);
            if ( j )
              break;
            v21 = ((__int64 (__fastcall *)(struct _EX_RUNDOWN_REF *))qword_1403CD338)(&stru_1403CD2E0);
            if ( v21 < 0 )
              goto LABEL_191;
          }
          v19 = *((_QWORD *)&j[1].Next + 1);
          if ( (__int64)j[2].Next - v19 >= 64 )
          {
            v16 = (unsigned __int64 *)*((_QWORD *)&j[1].Next + 1);
            v15 = j;
            v21 = 0;
            goto LABEL_16;
          }
          if ( !*((_DWORD *)&j[2].Next + 2) )
            break;
          ((void (*)(void))qword_1403CD340)();
          if ( !ExAcquireRundownProtection(&stru_1403CD2E0) )
            goto LABEL_186;
        }
        RtlpInterlockedPushEntrySList(&stru_1403CD2F0, j);
        v21 = -1073741789;
LABEL_191:
        ++dword_1403CD34C;
        dword_1403CD350 += 64;
        ExReleaseRundownProtection(&stru_1403CD2E0);
LABEL_16:
        if ( v21 >= 0 )
        {
          v22 = *v16;
          v23 = v123;
          *((_DWORD *)v16 + 2) = v18;
          v24 = v124;
          *v16 = v22 & 0xFFFFFFFFFFFC0000uLL | 0x2A013;
          *((_OWORD *)v16 + 1) = v23;
          *(_QWORD *)&v23 = v125;
          *((_OWORD *)v16 + 2) = v24;
          v16[6] = v23;
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
          v21 = 0;
          goto LABEL_20;
        }
      }
      else
      {
LABEL_186:
        v21 = -1073741431;
      }
      _InterlockedExchangeAdd((_DWORD *)&xmmword_1403CD490 + 1, 1u);
      if ( v15 )
      {
        v113 = v15;
LABEL_189:
        PfFbLogEntryComplete(v113, v19, 0LL);
      }
LABEL_20:
      if ( v21 >= 0 )
        return (unsigned int)v21;
      goto LABEL_64;
    }
    v21 = -1073741697;
LABEL_64:
    if ( (int)v1[1] <= 3 )
      ++dword_1403CD4A4;
    return (unsigned int)v21;
  }
  switch ( v4 )
  {
    case 0:
      v58 = 2 * *(unsigned __int16 *)(*((_QWORD *)v1 + 3) + 30LL);
      v41 = (v58 + 65) & 0xFFFFFFF8;
      v21 = PfFbLogEntryReserve(&stru_1403CD260, &ListEntry, &v116, v41);
      if ( v21 < 0 )
        goto LABEL_181;
      v59 = v116;
      *v116 = (8 * v41) | *v116 & 0x80000002 | 2;
      v59[1] = *(_DWORD *)(*((_QWORD *)v1 + 3) + 52LL);
      v59[2] = *(_DWORD *)(*((_QWORD *)v1 + 3) + 56LL);
      *((_QWORD *)v59 + 3) = *(_QWORD *)(*((_QWORD *)v1 + 3) + 8LL);
      v59[9] ^= (v59[9] ^ *(_DWORD *)(*((_QWORD *)v1 + 3) + 48LL)) & 0xF;
      v59[9] ^= ((unsigned __int8)v59[9] ^ (unsigned __int8)*(_DWORD *)(*((_QWORD *)v1 + 3) + 48LL)) & 0xF0;
      *((_QWORD *)v59 + 2) = *(_QWORD *)(*((_QWORD *)v1 + 3) + 16LL);
      v59[8] = *(_DWORD *)(*((_QWORD *)v1 + 3) + 24LL);
      v60 = 2 * *(_WORD *)(*((_QWORD *)v1 + 3) + 30LL);
      *((_WORD *)v59 + 20) = v60;
      *((_WORD *)v59 + 21) = v60;
      memmove(v59 + 14, *(const void **)(*((_QWORD *)v1 + 3) + 40LL), v58);
      v44 = (wchar_t *)(v59 + 14);
      *((_WORD *)v59 + *(unsigned __int16 *)(*((_QWORD *)v1 + 3) + 30LL) + 28) = 0;
      goto LABEL_33;
    case 1:
      PfLogDeleteHelper(2, *(_QWORD *)(*((_QWORD *)v1 + 3) + 8LL), *(_DWORD *)(*((_QWORD *)v1 + 3) + 56LL), 0);
      return 0;
    case 2:
      v35 = *((_QWORD *)v1 + 3);
      if ( HIWORD(*(_DWORD *)(v35 + 32)) <= (unsigned int)(unsigned __int16)*(_DWORD *)(v35 + 32) )
        return 0;
      PfpRpFileKeyUpdate(&unk_1403CD758, v35, 1LL);
      if ( dword_1403CD3A0 >= (unsigned int)dword_1403CD3A4 )
      {
        v21 = -1073741697;
        goto LABEL_64;
      }
      v36 = *((_QWORD *)v1 + 3);
      v37 = *(_DWORD *)(v36 + 32);
      v38 = (const void *)(*(_QWORD *)(v36 + 24) + 2LL * (unsigned __int16)v37);
      v39 = HIWORD(v37) - (unsigned __int16)v37;
      v40 = 2 * v39;
      v41 = (2 * v39 + 53) & 0xFFFFFFF8;
      v21 = PfFbLogEntryReserve(&stru_1403CD260, &ListEntry, &v116, v41);
      if ( v21 >= 0 )
      {
        v42 = v116;
        *v116 = *v116 & 0x80000000 | (8 * ((v40 + 53) & 0xFFFFFF8));
        v42[1] = *(_DWORD *)(*((_QWORD *)v1 + 3) + 40LL);
        v42[2] = *(_DWORD *)(*((_QWORD *)v1 + 3) + 44LL);
        *((_QWORD *)v42 + 3) = *(_QWORD *)(*((_QWORD *)v1 + 3) + 8LL);
        v42[8] = *(_DWORD *)(*((_QWORD *)v1 + 3) + 48LL);
        *((_QWORD *)v42 + 2) = *(_QWORD *)(*((_QWORD *)v1 + 3) + 16LL);
        v42[10] ^= (v42[10] ^ *(_DWORD *)(*((_QWORD *)v1 + 3) + 36LL)) & 1;
        v43 = v42[10] ^ ((unsigned __int8)v42[10] ^ (unsigned __int8)(*(_DWORD *)(*((_QWORD *)v1 + 3) + 36LL) >> 3)) & 2;
        v42[10] = v43;
        v42[10] = v43 ^ ((unsigned __int8)v43 ^ (unsigned __int8)(2 * *(_DWORD *)(*((_QWORD *)v1 + 3) + 36LL))) & 4;
        *((_WORD *)v42 + 21) = v39;
        memmove(v42 + 11, v38, v40);
        v44 = (wchar_t *)(v42 + 11);
        *((_WORD *)v42 + *((unsigned __int16 *)v42 + 21) + 22) = 0;
LABEL_33:
        wcsupr(v44);
        PfFbLogEntryComplete(ListEntry, v45, v41);
        return 0;
      }
LABEL_181:
      v113 = ListEntry;
      if ( !ListEntry )
        goto LABEL_20;
      goto LABEL_189;
    case 3:
      v50 = *((_QWORD *)v1 + 3);
      if ( HIWORD(*(_DWORD *)(v50 + 32)) <= (unsigned int)(unsigned __int16)*(_DWORD *)(v50 + 32) )
        return 0;
      PfpRpFileKeyUpdate(&unk_1403CD758, v50, 0LL);
      if ( dword_1403CD3A0 < (unsigned int)dword_1403CD3A4 )
      {
        PfLogDeleteHelper(
          0,
          *(_QWORD *)(*((_QWORD *)v1 + 3) + 16LL),
          *(_DWORD *)(*((_QWORD *)v1 + 3) + 44LL),
          (*(_DWORD *)(*((_QWORD *)v1 + 3) + 36LL) >> 3) & 1);
        return 0;
      }
      v21 = -1073741697;
      goto LABEL_64;
    case 8:
      v53 = *((_QWORD *)v1 + 3);
      v121[0] = 0LL;
      v54 = *(_QWORD *)(v53 + 16) + 4095LL;
      LODWORD(v121[0]) = *(_DWORD *)(v53 + 4);
      v121[1] = *(_QWORD *)(v53 + 8);
      v121[2] = (2LL * (*(_DWORD *)v53 & 3)) | v54 & 0xFFFFFFFFFFFFF000uLL;
      v55 = v121;
      v56 = ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
          + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8);
      v57 = 24;
      goto LABEL_62;
    case 13:
      v61 = (_QWORD *)*((_QWORD *)v1 + 3);
      if ( !v61[1] )
      {
        v21 = -1073741747;
        goto LABEL_64;
      }
      v122[1] = v61[1];
      v122[2] = (unsigned int)dword_1403E27D0;
      v122[0] = *v61;
      v55 = v122;
      v56 = ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
          + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8);
      v57 = 31;
LABEL_62:
      PfLogEvent(v57, dword_1403CD6DC + (v56 >> 10), v55, 0x18u);
      v21 = 0;
      break;
    default:
      goto LABEL_124;
  }
  return (unsigned int)v21;
}
