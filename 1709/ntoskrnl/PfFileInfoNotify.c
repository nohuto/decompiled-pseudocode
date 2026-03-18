/*
 * XREFs of PfFileInfoNotify @ 0x140011F60
 * Callers:
 *     <none>
 * Callees:
 *     PfLogDeleteHelper @ 0x140011E58 (PfLogDeleteHelper.c)
 *     PfSnReferenceProcessTrace @ 0x140012760 (PfSnReferenceProcessTrace.c)
 *     PfSnLogPageFaultCommon @ 0x140012A2C (PfSnLogPageFaultCommon.c)
 *     PfFbLogEntryComplete @ 0x140012FE8 (PfFbLogEntryComplete.c)
 *     PfSnCheckLoggingForThread @ 0x14001313C (PfSnCheckLoggingForThread.c)
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x1400A9850 (ExWaitForRundownProtectionRelease.c)
 *     ExRundownCompleted @ 0x1400ADB30 (ExRundownCompleted.c)
 *     PfLogEvent @ 0x1400B9904 (PfLogEvent.c)
 *     PfFbLogEntryReserve @ 0x1400B99F0 (PfFbLogEntryReserve.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     _wcsupr @ 0x14015EE20 (_wcsupr.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140188F70 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140188FB0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     PfSnLogVolumeCreate @ 0x1404547D4 (PfSnLogVolumeCreate.c)
 *     PfSnLogStreamCreate @ 0x140456004 (PfSnLogStreamCreate.c)
 *     PfpRpFileKeyUpdate @ 0x140456360 (PfpRpFileKeyUpdate.c)
 *     PfSnNameRemoveAll @ 0x140456814 (PfSnNameRemoveAll.c)
 */

__int64 __fastcall PfFileInfoNotify(__int64 a1)
{
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
  PSLIST_ENTRY j; // rcx
  signed int v20; // r14d
  unsigned __int64 v21; // rax
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  _SLIST_ENTRY *Next; // rdi
  __int64 v26; // r14
  unsigned __int64 v27; // r12
  __int64 v28; // r15
  __int64 v29; // r13
  __int64 v30; // rax
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
  __int64 v44; // rdx
  int v45; // r15d
  int v46; // eax
  __int64 v47; // r8
  __int16 v48; // cx
  _QWORD *v49; // r8
  unsigned __int64 v50; // rdx
  __int64 v51; // rcx
  unsigned int v52; // r13d
  unsigned int *v53; // rdi
  __int16 v54; // cx
  _QWORD *v55; // rcx
  int v56; // ecx
  int v57; // ecx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v59; // r12d
  struct _KTHREAD *v60; // rax
  __int64 i; // r14
  struct _KTHREAD *v62; // r14
  __int64 SessionId; // r8
  __int64 v64; // rdx
  __int64 v65; // rcx
  int v66; // eax
  __int64 v67; // rcx
  _KLOCK_ENTRY *v68; // r15
  __int64 v69; // rdx
  struct _KTHREAD *v70; // rbx
  unsigned __int64 v71; // r8
  __int64 v72; // rdx
  __int64 v73; // rcx
  int v74; // eax
  __int64 v75; // rcx
  _KLOCK_ENTRY *v76; // r15
  __int64 v77; // rdx
  struct _KTHREAD *v78; // rax
  unsigned int v79; // r12d
  struct _KTHREAD *v80; // rax
  struct _KTHREAD *v81; // r14
  __int64 v82; // r8
  __int64 v83; // rdx
  __int64 v84; // rcx
  int v85; // eax
  __int64 v86; // rcx
  _KLOCK_ENTRY *v87; // r15
  __int64 v88; // rdx
  struct _KTHREAD *v89; // rbx
  unsigned __int64 v90; // r8
  __int64 v91; // rdx
  __int64 v92; // rcx
  int v93; // eax
  __int64 v94; // rcx
  _KLOCK_ENTRY *v95; // r15
  __int64 v96; // rdx
  int v97; // [rsp+30h] [rbp-69h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+38h] [rbp-61h]
  unsigned int *v99; // [rsp+40h] [rbp-59h]
  int v100; // [rsp+48h] [rbp-51h]
  int v101; // [rsp+4Ch] [rbp-4Dh]
  int v102; // [rsp+50h] [rbp-49h]
  int v103; // [rsp+54h] [rbp-45h]
  _QWORD v104[3]; // [rsp+58h] [rbp-41h] BYREF
  _QWORD v105[3]; // [rsp+70h] [rbp-29h] BYREF
  __int128 v106; // [rsp+88h] [rbp-11h]
  __int128 v107; // [rsp+98h] [rbp-1h]
  __int64 v108; // [rsp+A8h] [rbp+Fh]
  __int64 v109; // [rsp+100h] [rbp+67h]
  unsigned __int8 AbAllocationRegionCount; // [rsp+100h] [rbp+67h]
  unsigned __int8 v111; // [rsp+100h] [rbp+67h]
  unsigned __int8 v112; // [rsp+100h] [rbp+67h]
  unsigned __int8 v113; // [rsp+100h] [rbp+67h]
  int v114; // [rsp+108h] [rbp+6Fh] BYREF
  int v115; // [rsp+110h] [rbp+77h] BYREF
  int v116; // [rsp+118h] [rbp+7Fh] BYREF

  v2 = *(_DWORD *)a1 == 13;
  ListEntry = 0LL;
  v99 = 0LL;
  if ( !v2 )
  {
    v20 = -1073741811;
    goto LABEL_63;
  }
  v3 = *(_DWORD *)(a1 + 8);
  if ( (v3 & 8) != 0 )
  {
    v32 = *(_DWORD *)(a1 + 4);
    if ( v32 != 7 )
    {
      v56 = v32 - 10;
      if ( v56 )
      {
        v57 = v56 - 1;
        if ( v57 )
        {
          if ( v57 != 1 )
          {
LABEL_69:
            v20 = -1073741637;
            goto LABEL_63;
          }
          v20 = (dword_140389E10 & 2) != 0 ? 0xC0000189 : 0;
        }
        else
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14038D3E8, 0LL);
          v59 = -1;
          if ( qword_14038D3D8 )
          {
            v60 = KeGetCurrentThread();
            --v60->KernelApcDisable;
            ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14038D3F0, 0LL);
            dword_14038D408 |= 1u;
            for ( i = qword_14038D3F8; (__int64 *)i != &qword_14038D3F8; i = *(_QWORD *)i )
            {
              *(_DWORD *)(i + 68) |= 4u;
              KeSetEvent((PRKEVENT)(i + 88), 0, 0);
            }
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14038D3F0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(&qword_14038D3F0);
            v114 = 0;
            v62 = KeGetCurrentThread();
            if ( (unsigned int)MiGetSystemRegionType(&qword_14038D3F0) == 1 )
              SessionId = (unsigned int)MmGetSessionIdEx(v62->ApcState.Process);
            else
              SessionId = 0xFFFFFFFFLL;
            --v62->SpecialApcDisable;
            ++v62->AbAllocationRegionCount;
            LODWORD(v64) = ((char)v62->AbEntrySummary | (char)v62->AbOrphanedEntrySummary) ^ 0x3F;
            AbAllocationRegionCount = v62->AbAllocationRegionCount;
            v2 = !_BitScanReverse((unsigned int *)&v65, v64);
            v100 = v65;
            if ( v2 )
              goto LABEL_94;
            while ( 1 )
            {
              v66 = 1 << v65;
              v67 = v65;
              v68 = &v62->LockEntries[v67];
              v64 = ~v66 & (unsigned int)v64;
              if ( (v68->AcquiredByte & 1) != 0
                && (*(_DWORD *)&v68->LockState.0 & 1) == 0
                && (*(_QWORD *)&v68->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_14038D3F0 & 0x7FFFFFFFFFFFFFFCLL)
                && v68->LockState.SessionId == (_DWORD)SessionId )
              {
                v68->AcquiredByte &= ~1u;
                if ( v68->LockState.0 )
                  break;
              }
              v2 = !_BitScanReverse((unsigned int *)&v65, v64);
              v100 = v65;
              if ( v2 )
                goto LABEL_94;
            }
            if ( !v68 )
            {
LABEL_94:
              if ( (*((_DWORD *)&v62->0 + 1) & 0x10000) == 0 )
                KeBugCheckEx(0x162u, (ULONG_PTR)v62, (ULONG_PTR)&qword_14038D3F0, (unsigned int)SessionId, 0LL);
            }
            else
            {
              v68->CrossThreadReleasableAndBusyByte |= 2u;
              if ( (__int64)v68->LockState.LockState < 0 )
                KiAbEntryRemoveFromTree(&v62->LockEntries[v67], v64, SessionId);
              v114 = 0;
              v114 = v68->BoostBitmap.AllFields & 0x1FFFF;
              v68->BoostBitmap.AllFields &= 0xFFFE0000;
              v68->ThreadLocalFlags &= ~1u;
              v68->LockState.0 = 0LL;
              v69 = ((char *)v68 - (char *)v62 - 800) / 96;
              if ( AbAllocationRegionCount == 1 )
                v62->AbEntrySummary |= 1 << v69;
              else
                _InterlockedOr8((volatile signed __int8 *)&v62->AbOrphanedEntrySummary, 1 << v69);
            }
            --v62->AbAllocationRegionCount;
            KiAbThreadRemoveBoosts(v62, &qword_14038D3F0, &v114);
            v2 = v62->SpecialApcDisable++ == -1;
            if ( v2 && ($B476B70DB57F76B110DA5B9238C3E934 *)v62->ApcState.ApcListHead[0].Flink != &v62->152 )
              KiCheckForKernelApcDelivery();
            KeLeaveCriticalRegion();
            ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&stru_14038D3E0);
            ExRundownCompleted((PEX_RUNDOWN_REF)&stru_14038D3E0);
            qword_14038D3D8 = 0LL;
            v20 = 0;
          }
          else
          {
            v20 = -1073741275;
          }
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14038D3E8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(&qword_14038D3E8);
          v115 = 0;
          v70 = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType(&qword_14038D3E8) == 1 )
            v59 = MmGetSessionIdEx(v70->ApcState.Process);
          --v70->SpecialApcDisable;
          ++v70->AbAllocationRegionCount;
          v71 = (unsigned __int64)&qword_14038D3E8 & 0x7FFFFFFFFFFFFFFCLL;
          LODWORD(v72) = ((char)v70->AbEntrySummary | (char)v70->AbOrphanedEntrySummary) ^ 0x3F;
          v111 = v70->AbAllocationRegionCount;
          v2 = !_BitScanReverse((unsigned int *)&v73, v72);
          v101 = v73;
          if ( v2 )
            goto LABEL_118;
          while ( 1 )
          {
            v74 = 1 << v73;
            v75 = v73;
            v76 = &v70->LockEntries[v75];
            v72 = ~v74 & (unsigned int)v72;
            if ( (v76->AcquiredByte & 1) != 0
              && (*(_DWORD *)&v76->LockState.0 & 1) == 0
              && (*(_QWORD *)&v76->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == v71
              && v76->LockState.SessionId == v59 )
            {
              v76->AcquiredByte &= ~1u;
              if ( v76->LockState.0 )
                break;
            }
            v2 = !_BitScanReverse((unsigned int *)&v73, v72);
            v101 = v73;
            if ( v2 )
              goto LABEL_118;
          }
          if ( !v76 )
          {
LABEL_118:
            if ( (*((_DWORD *)&v70->0 + 1) & 0x10000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)v70, (ULONG_PTR)&qword_14038D3E8, v59, 0LL);
          }
          else
          {
            v76->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v76->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree(&v70->LockEntries[v75], v72, v71);
            v115 = 0;
            v115 = v76->BoostBitmap.AllFields & 0x1FFFF;
            v76->BoostBitmap.AllFields &= 0xFFFE0000;
            v76->ThreadLocalFlags &= ~1u;
            v76->LockState.0 = 0LL;
            v77 = ((char *)v76 - (char *)v70 - 800) / 96;
            if ( v111 == 1 )
              v70->AbEntrySummary |= 1 << v77;
            else
              _InterlockedOr8((volatile signed __int8 *)&v70->AbOrphanedEntrySummary, 1 << v77);
          }
          --v70->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts(v70, &qword_14038D3E8, &v115);
          v2 = v70->SpecialApcDisable++ == -1;
          if ( v2 && ($B476B70DB57F76B110DA5B9238C3E934 *)v70->ApcState.ApcListHead[0].Flink != &v70->152 )
            KiCheckForKernelApcDelivery();
          KeLeaveCriticalRegion();
        }
      }
      else
      {
        v78 = KeGetCurrentThread();
        --v78->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14038D3E8, 0LL);
        v79 = -1;
        if ( qword_14038D3D8 )
        {
          v20 = -1073741791;
        }
        else
        {
          v80 = KeGetCurrentThread();
          --v80->KernelApcDisable;
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14038D3F0, 0LL);
          dword_14038D408 &= ~1u;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14038D3F0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(&qword_14038D3F0);
          v116 = 0;
          v81 = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType(&qword_14038D3F0) == 1 )
            v82 = (unsigned int)MmGetSessionIdEx(v81->ApcState.Process);
          else
            v82 = 0xFFFFFFFFLL;
          --v81->SpecialApcDisable;
          ++v81->AbAllocationRegionCount;
          LODWORD(v83) = ((char)v81->AbEntrySummary | (char)v81->AbOrphanedEntrySummary) ^ 0x3F;
          v112 = v81->AbAllocationRegionCount;
          v2 = !_BitScanReverse((unsigned int *)&v84, v83);
          v102 = v84;
          if ( v2 )
            goto LABEL_143;
          while ( 1 )
          {
            v85 = 1 << v84;
            v86 = v84;
            v87 = &v81->LockEntries[v86];
            v83 = ~v85 & (unsigned int)v83;
            if ( (v87->AcquiredByte & 1) != 0
              && (*(_DWORD *)&v87->LockState.0 & 1) == 0
              && (*(_QWORD *)&v87->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_14038D3F0 & 0x7FFFFFFFFFFFFFFCLL)
              && v87->LockState.SessionId == (_DWORD)v82 )
            {
              v87->AcquiredByte &= ~1u;
              if ( v87->LockState.0 )
                break;
            }
            v2 = !_BitScanReverse((unsigned int *)&v84, v83);
            v102 = v84;
            if ( v2 )
              goto LABEL_143;
          }
          if ( !v87 )
          {
LABEL_143:
            if ( (*((_DWORD *)&v81->0 + 1) & 0x10000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)v81, (ULONG_PTR)&qword_14038D3F0, (unsigned int)v82, 0LL);
          }
          else
          {
            v87->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v87->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree(&v81->LockEntries[v86], v83, v82);
            v116 = 0;
            v116 = v87->BoostBitmap.AllFields & 0x1FFFF;
            v87->BoostBitmap.AllFields &= 0xFFFE0000;
            v87->ThreadLocalFlags &= ~1u;
            v87->LockState.0 = 0LL;
            v88 = ((char *)v87 - (char *)v81 - 800) / 96;
            if ( v112 == 1 )
              v81->AbEntrySummary |= 1 << v88;
            else
              _InterlockedOr8((volatile signed __int8 *)&v81->AbOrphanedEntrySummary, 1 << v88);
          }
          --v81->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts(v81, &qword_14038D3F0, &v116);
          v2 = v81->SpecialApcDisable++ == -1;
          if ( v2 && ($B476B70DB57F76B110DA5B9238C3E934 *)v81->ApcState.ApcListHead[0].Flink != &v81->152 )
            KiCheckForKernelApcDelivery();
          KeLeaveCriticalRegion();
          (*(void (__fastcall **)(__int64 (__fastcall *)(ULONG_PTR)))(*(_QWORD *)(a1 + 16) + 32LL))(PfpPrefetchSharedConflictNotifyStart);
          v20 = 0;
          qword_14038D3D8 = *(_QWORD *)(a1 + 16);
          _InterlockedExchange64((volatile __int64 *)&stru_14038D3E0, 0LL);
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14038D3E8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(&qword_14038D3E8);
        v97 = 0;
        v89 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(&qword_14038D3E8) == 1 )
          v79 = MmGetSessionIdEx(v89->ApcState.Process);
        --v89->SpecialApcDisable;
        ++v89->AbAllocationRegionCount;
        v90 = (unsigned __int64)&qword_14038D3E8 & 0x7FFFFFFFFFFFFFFCLL;
        LODWORD(v91) = ((char)v89->AbEntrySummary | (char)v89->AbOrphanedEntrySummary) ^ 0x3F;
        v113 = v89->AbAllocationRegionCount;
        v2 = !_BitScanReverse((unsigned int *)&v92, v91);
        v103 = v92;
        if ( v2 )
          goto LABEL_167;
        while ( 1 )
        {
          v93 = 1 << v92;
          v94 = v92;
          v95 = &v89->LockEntries[v94];
          v91 = ~v93 & (unsigned int)v91;
          if ( (v95->AcquiredByte & 1) != 0
            && (*(_DWORD *)&v95->LockState.0 & 1) == 0
            && (*(_QWORD *)&v95->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == v90
            && v95->LockState.SessionId == v79 )
          {
            v95->AcquiredByte &= ~1u;
            if ( v95->LockState.0 )
              break;
          }
          v2 = !_BitScanReverse((unsigned int *)&v92, v91);
          v103 = v92;
          if ( v2 )
            goto LABEL_167;
        }
        if ( !v95 )
        {
LABEL_167:
          if ( (*((_DWORD *)&v89->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v89, (ULONG_PTR)&qword_14038D3E8, v79, 0LL);
        }
        else
        {
          v95->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v95->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v89->LockEntries[v94], v91, v90);
          v97 = 0;
          v97 = v95->BoostBitmap.AllFields & 0x1FFFF;
          v95->BoostBitmap.AllFields &= 0xFFFE0000;
          v95->ThreadLocalFlags &= ~1u;
          v95->LockState.0 = 0LL;
          v96 = ((char *)v95 - (char *)v89 - 800) / 96;
          if ( v113 == 1 )
            v89->AbEntrySummary |= 1 << v96;
          else
            _InterlockedOr8((volatile signed __int8 *)&v89->AbOrphanedEntrySummary, 1 << v96);
        }
        --v89->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts(v89, &qword_14038D3E8, &v97);
        v2 = v89->SpecialApcDisable++ == -1;
        if ( v2 && ($B476B70DB57F76B110DA5B9238C3E934 *)v89->ApcState.ApcListHead[0].Flink != &v89->152 )
          KiCheckForKernelApcDelivery();
        KeLeaveCriticalRegion();
      }
      goto LABEL_19;
    }
    *(_DWORD *)(a1 + 16) = _InterlockedIncrement(&dword_14039E910);
    return 0;
  }
  if ( (v3 & 4) != 0 )
  {
    v42 = *(_DWORD *)(a1 + 4);
    if ( v42 )
    {
      v43 = v42 - 2;
      if ( v43 )
      {
        if ( v43 == 1 )
          PfSnNameRemoveAll(*(_QWORD *)(a1 + 16));
      }
      else
      {
        PfSnLogStreamCreate(*(_QWORD *)(a1 + 16));
      }
    }
    else
    {
      PfSnLogVolumeCreate(*(_QWORD *)(a1 + 16));
    }
  }
  if ( (*(_DWORD *)(a1 + 8) & 1) == 0 )
    return 0;
  if ( dword_140387AA0 >= (unsigned int)dword_140387AA4 && (unsigned int)(*(_DWORD *)(a1 + 4) - 2) > 2 )
  {
    v20 = -1073741697;
    goto LABEL_63;
  }
  v4 = *(_DWORD *)(a1 + 4);
  if ( v4 == 4 )
  {
    v5 = *(__int64 **)(a1 + 16);
    v6 = *((unsigned int *)v5 + 4) + 4095LL;
    v7 = (v6 + (unsigned __int64)(v5[1] & 0xFFF)) >> 12;
    if ( PfSnNumActiveTraces )
    {
      v26 = v5[4];
      v27 = (v6 + (unsigned __int64)(v5[1] & 0xFFF)) >> 12;
      v28 = v5[1];
      v29 = v5[3];
      v109 = *v5;
      v30 = PfSnReferenceProcessTrace(*(_QWORD *)(v26 + 544));
      v31 = (struct _EX_RUNDOWN_REF *)v30;
      if ( v30 )
      {
        if ( (unsigned int)PfSnCheckLoggingForThread(v26, v30, 0LL) )
        {
          v45 = v28 & 0xFFFFF000;
          if ( v7 )
          {
            do
            {
              if ( (int)PfSnLogPageFaultCommon((_DWORD)v31, v109, v29, v45, 0) < 0 )
                break;
              v45 += 4096;
              --v27;
            }
            while ( v27 );
          }
        }
        ExReleaseRundownProtection_0(v31 + 45);
      }
    }
    if ( dword_140387AA0 >= (unsigned int)dword_140387AA4 )
    {
      v20 = -1073741697;
LABEL_63:
      if ( *(int *)(a1 + 4) <= 3 )
        ++dword_140387BA4;
      return (unsigned int)v20;
    }
    v8 = *(_QWORD *)(a1 + 16);
    v9 = *(_QWORD *)(v8 + 32);
    v10 = *(int *)(v8 + 20);
    v11 = *(_QWORD *)(v8 + 8);
    v12 = *(_QWORD *)(v8 + 24);
    v13 = *(_QWORD *)(v9 + 544);
    v14 = (*(_DWORD *)(v9 + 1744) >> 12) & 7;
    if ( (*(_DWORD *)(v13 + 772) & 0x100000) != 0 )
    {
      v46 = 2;
      if ( v14 < 2 )
        v46 = (*(_DWORD *)(v9 + 1744) >> 12) & 7;
      v14 = v46;
    }
    if ( v14 < dword_140388C6C )
    {
      v20 = 0;
      goto LABEL_19;
    }
    *(_QWORD *)&v106 = v12;
    *(_QWORD *)&v107 = v7 | (v10 << 63);
    v15 = 0LL;
    v16 = 0LL;
    v17 = v13 ^ *(_QWORD *)(v13 + 776);
    *((_QWORD *)&v106 + 1) = v11 >> 12;
    *((_QWORD *)&v107 + 1) = v17 & 0x1FFFFFFFFFFFFFFFLL;
    LODWORD(v108) = dword_14039E910;
    HIDWORD(v108) = *(_DWORD *)(v13 + 736);
    v18 = dword_14038D2BC
        + ((((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
          + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)) >> 10);
    if ( ExAcquireRundownProtection_0(&stru_1403879E0) )
    {
      while ( 1 )
      {
        for ( j = RtlpInterlockedPopEntrySList(&stru_140387A00); !j; j = RtlpInterlockedPopEntrySList(&stru_140387A00) )
        {
          j = RtlpInterlockedPopEntrySList(&stru_1403879F0);
          if ( j )
            break;
          v20 = ((__int64 (__fastcall *)(struct _EX_RUNDOWN_REF *))qword_140387A38)(&stru_1403879E0);
          if ( v20 < 0 )
            goto LABEL_183;
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
        ((void (*)(void))qword_140387A40)();
        if ( !ExAcquireRundownProtection_0(&stru_1403879E0) )
          goto LABEL_179;
      }
      RtlpInterlockedPushEntrySList(&stru_1403879F0, j);
      v20 = -1073741789;
LABEL_183:
      ++dword_140387A4C;
      dword_140387A50 += 64;
      ExReleaseRundownProtection_0(&stru_1403879E0);
LABEL_15:
      if ( v20 >= 0 )
      {
        v21 = *v16;
        v22 = v106;
        *((_DWORD *)v16 + 2) = v18;
        v23 = v107;
        *v16 = v21 & 0xFFFFFFFFFFFC0000uLL | 0x2A013;
        *((_OWORD *)v16 + 1) = v22;
        *(_QWORD *)&v22 = v108;
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
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Next);
        }
        v20 = 0;
        goto LABEL_19;
      }
    }
    else
    {
LABEL_179:
      v20 = -1073741431;
    }
    _InterlockedExchangeAdd((_DWORD *)&xmmword_140387B90 + 1, 1u);
    if ( v15 )
      PfFbLogEntryComplete(v15);
LABEL_19:
    if ( v20 >= 0 )
      return (unsigned int)v20;
    goto LABEL_63;
  }
  switch ( v4 )
  {
    case 0:
      v52 = 2 * *(unsigned __int16 *)(*(_QWORD *)(a1 + 16) + 30LL);
      v20 = PfFbLogEntryReserve(&stru_140387960);
      if ( v20 < 0 )
        goto LABEL_19;
      v53 = v99;
      *v99 = (8 * ((v52 + 65) & 0xFFFFFFF8)) | *v99 & 0x80000002 | 2;
      v53[1] = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 52LL);
      v53[2] = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 56LL);
      *((_QWORD *)v53 + 3) = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL);
      v53[9] ^= (v53[9] ^ *(_DWORD *)(*(_QWORD *)(a1 + 16) + 48LL)) & 0xF;
      v53[9] ^= ((unsigned __int8)v53[9] ^ (unsigned __int8)*(_DWORD *)(*(_QWORD *)(a1 + 16) + 48LL)) & 0xF0;
      *((_QWORD *)v53 + 2) = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL);
      v53[8] = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 24LL);
      v54 = 2 * *(_WORD *)(*(_QWORD *)(a1 + 16) + 30LL);
      *((_WORD *)v53 + 20) = v54;
      *((_WORD *)v53 + 21) = v54;
      memmove(v53 + 14, *(const void **)(*(_QWORD *)(a1 + 16) + 40LL), v52);
      v41 = (wchar_t *)(v53 + 14);
      *((_WORD *)v53 + *(unsigned __int16 *)(*(_QWORD *)(a1 + 16) + 30LL) + 28) = 0;
      goto LABEL_31;
    case 1:
      PfLogDeleteHelper(2, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL), *(_DWORD *)(*(_QWORD *)(a1 + 16) + 56LL), 0);
      return 0;
    case 2:
      v33 = *(_QWORD *)(a1 + 16);
      if ( *(unsigned __int16 *)(v33 + 34) <= (unsigned int)(unsigned __int16)*(_DWORD *)(v33 + 32) )
        return 0;
      PfpRpFileKeyUpdate(&unk_14038D338, v33, 1LL);
      if ( dword_140387AA0 >= (unsigned int)dword_140387AA4 )
      {
        v20 = -1073741697;
        goto LABEL_63;
      }
      v34 = *(_QWORD *)(a1 + 16);
      v35 = *(_DWORD *)(v34 + 32);
      v36 = (const void *)(*(_QWORD *)(v34 + 24) + 2LL * (unsigned __int16)v35);
      v37 = *(unsigned __int16 *)(v34 + 34) - (unsigned __int16)v35;
      v38 = 2 * v37;
      v20 = PfFbLogEntryReserve(&stru_140387960);
      if ( v20 < 0 )
        goto LABEL_19;
      v39 = v99;
      *v99 = *v99 & 0x80000000 | (8 * ((v38 + 53) & 0xFFFFFF8));
      v39[1] = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 40LL);
      v39[2] = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 44LL);
      *((_QWORD *)v39 + 3) = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL);
      v39[8] = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 48LL);
      *((_QWORD *)v39 + 2) = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL);
      v39[10] ^= (v39[10] ^ *(_DWORD *)(*(_QWORD *)(a1 + 16) + 36LL)) & 1;
      v40 = v39[10] ^ ((unsigned __int8)v39[10] ^ (unsigned __int8)(*(_DWORD *)(*(_QWORD *)(a1 + 16) + 36LL) >> 3)) & 2;
      v39[10] = v40;
      v39[10] = v40 ^ ((unsigned __int8)v40 ^ (unsigned __int8)(2 * *(_DWORD *)(*(_QWORD *)(a1 + 16) + 36LL))) & 4;
      *((_WORD *)v39 + 21) = v37;
      memmove(v39 + 11, v36, v38);
      v41 = (wchar_t *)(v39 + 11);
      *((_WORD *)v39 + *((unsigned __int16 *)v39 + 21) + 22) = 0;
LABEL_31:
      wcsupr(v41);
      PfFbLogEntryComplete(ListEntry);
      return 0;
    case 3:
      v44 = *(_QWORD *)(a1 + 16);
      if ( *(unsigned __int16 *)(v44 + 34) <= (unsigned int)(unsigned __int16)*(_DWORD *)(v44 + 32) )
        return 0;
      PfpRpFileKeyUpdate(&unk_14038D338, v44, 0LL);
      if ( dword_140387AA0 < (unsigned int)dword_140387AA4 )
      {
        PfLogDeleteHelper(
          0,
          *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 16) + 44LL),
          (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 36LL) >> 3) & 1);
        return 0;
      }
      v20 = -1073741697;
      goto LABEL_63;
    case 8:
      v47 = *(_QWORD *)(a1 + 16);
      v105[0] = 0LL;
      v48 = (2 * (unsigned __int8)*(_DWORD *)v47) & 6 ^ (*(_QWORD *)(v47 + 16) - 1);
      LODWORD(v105[0]) = *(_DWORD *)(v47 + 4);
      v105[1] = *(_QWORD *)(v47 + 8);
      v105[2] = (*(_QWORD *)(v47 + 16) + 4095LL) ^ v48 & 0xFFF;
      v49 = v105;
      v50 = ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
          + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8);
      v51 = 24LL;
      goto LABEL_55;
    case 13:
      v55 = *(_QWORD **)(a1 + 16);
      if ( !v55[1] )
      {
        v20 = -1073741747;
        goto LABEL_63;
      }
      v104[1] = v55[1];
      v104[2] = (unsigned int)dword_14039E910;
      v104[0] = *v55;
      v49 = v104;
      v50 = ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
          + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8);
      v51 = 31LL;
LABEL_55:
      PfLogEvent(v51, dword_14038D2BC + (unsigned int)(v50 >> 10), v49);
      v20 = 0;
      break;
    default:
      goto LABEL_69;
  }
  return (unsigned int)v20;
}
