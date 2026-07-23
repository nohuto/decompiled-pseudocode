/*
 * XREFs of ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x1400CC294
 * Callers:
 *     ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400CC190 (-SmHighMemPriorityWatchdogWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x14009740C (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x140097528 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x1401A7920 (ZwQueryVirtualMemory.c)
 *     MmSetPriorityVaRanges @ 0x14074D118 (MmSetPriorityVaRanges.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStPrioritizeRegionsStore(__int64 a1, __int64 *a2)
{
  __int64 *v2; // r15
  unsigned int v4; // r14d
  unsigned int v5; // ebx
  unsigned int v7; // r12d
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v9; // rsi
  __int64 v10; // r9
  unsigned int v11; // r8d
  unsigned int v12; // r13d
  int v13; // ecx
  char *v14; // r14
  char *v15; // rcx
  __int64 v16; // r15
  char *v17; // r12
  char *v18; // rax
  char *v19; // r8
  char *v20; // r10
  unsigned int v21; // r9d
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  struct _KTHREAD *v25; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  unsigned __int64 *v29; // rdx
  unsigned __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  SIZE_T MemoryInformationLength; // [rsp+20h] [rbp-E0h]
  unsigned int v36; // [rsp+30h] [rbp-D0h]
  unsigned int v37; // [rsp+34h] [rbp-CCh]
  unsigned int v38; // [rsp+38h] [rbp-C8h]
  _BYTE v40[48]; // [rsp+50h] [rbp-B0h] BYREF
  char *v41; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v42[63]; // [rsp+88h] [rbp-78h]
  char MemoryInformation[8]; // [rsp+280h] [rbp+180h] BYREF
  char v44; // [rsp+288h] [rbp+188h] BYREF

  v2 = a2;
  if ( (*(_BYTE *)(a1 + 6021) & 4) == 0 )
    return (unsigned int)-1073741637;
  v4 = *(_DWORD *)(a1 + 1952);
  v5 = 0;
  v37 = v4;
  if ( v4 )
  {
    v7 = *(_DWORD *)(a1 + 6208) >> 12;
    v36 = v7;
    KiStackAttachProcess(*(_KPROCESS **)(a1 + 6568), 0, (__int64)v40);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v9 = (volatile signed __int64 *)(a1 + 6024);
    ExAcquirePushLockSharedEx(a1 + 6024, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 6580));
    v11 = 0;
    v12 = 0;
    if ( !*(_DWORD *)(a1 + 6212) )
      goto LABEL_29;
    while ( 1 )
    {
      if ( v11 >= v4 )
        goto LABEL_29;
      if ( (*(_QWORD *)(*(_QWORD *)(a1 + 6216) + 8LL * v12) & 0x7FFFFFFFFFFF0000LL) == 0 )
        goto LABEL_28;
      v13 = *(_BYTE *)(a1 + 856) ? 0 : *(unsigned __int16 *)(*(_QWORD *)(a1 + 1112) + 2LL * v12) >> 13;
      if ( v13 != 6 )
        goto LABEL_28;
      v38 = v11 + 1;
      v14 = (char *)SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(a1, v12, 0, v10, 0);
      if ( (unsigned __int64)v14 <= 3 )
        goto LABEL_27;
      if ( _InterlockedCompareExchange64(v9, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 6024));
      KeAbPostRelease(a1 + 6024);
      KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
      if ( !*v2 )
      {
        v28 = *(unsigned int *)(a1 + 6208);
        v41 = v14;
        v42[0] = v28;
        MmSetPriorityVaRanges(1LL, &v41);
        goto LABEL_26;
      }
      v15 = v14;
      v16 = v7 << 12;
      v17 = &v14[v16];
      v18 = MemoryInformation;
      if ( v14 < &v14[v16] )
      {
        do
        {
          *(_QWORD *)v18 = v15;
          v15 += 4096;
          v18 += 16;
        }
        while ( v15 < v17 );
      }
      if ( ZwQueryVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             v14,
             MemoryWorkingSetExInformation,
             MemoryInformation,
             16LL * v36,
             0LL) < 0
        && v14 < v17 )
      {
        v29 = (unsigned __int64 *)&v44;
        v30 = ((unsigned __int64)(v16 - 1) >> 12) + 1;
        do
        {
          *v29 = *v29 & 0xFFFFFFFFF8FFFFFEuLL | 0x6000001;
          v29 += 2;
          --v30;
        }
        while ( v30 );
      }
      v19 = MemoryInformation;
      v20 = v14;
      v21 = 0;
      if ( v14 >= v17 )
      {
        v2 = a2;
        goto LABEL_25;
      }
      do
      {
        v22 = *((_QWORD *)v19 + 1);
        if ( (v22 & 1) != 0 || (*((_QWORD *)v19 + 1) & 0xC00000LL) == 0x400000 )
        {
          v2 = a2;
          v23 = (v22 >> 24) & 7;
          if ( v23 == 6 )
          {
            if ( !*a2 )
            {
              v33 = *(unsigned int *)(a1 + 6208);
              v41 = v14;
              v42[0] = v33;
              v34 = 1LL;
              goto LABEL_46;
            }
            v24 = *a2 - 1;
            goto LABEL_22;
          }
          if ( v23 < 6 )
          {
            v31 = *a2;
            if ( *a2 )
            {
              v32 = 2LL * v21++;
              v42[v32 - 1] = *(_QWORD *)v19;
              v24 = v31 - 1;
              v42[v32] = 4096LL;
LABEL_22:
              *a2 = v24;
            }
          }
        }
        else
        {
          v2 = a2;
        }
        v20 += 4096;
        v19 += 16;
      }
      while ( v20 < v17 );
      if ( !v21 )
        goto LABEL_25;
      v34 = v21;
LABEL_46:
      MmSetPriorityVaRanges(v34, &v41);
LABEL_25:
      v7 = v36;
LABEL_26:
      v25 = KeGetCurrentThread();
      --v25->SpecialApcDisable;
      ExAcquirePushLockSharedEx(a1 + 6024, 0LL);
      SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(a1, v12, v26, v27, MemoryInformationLength, 0);
LABEL_27:
      v11 = v38;
      v4 = v37;
LABEL_28:
      if ( ++v12 >= *(_DWORD *)(a1 + 6212) )
      {
LABEL_29:
        if ( _InterlockedCompareExchange64(v9, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(a1 + 6024));
        KeAbPostRelease(a1 + 6024);
        KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
        _InterlockedAdd((volatile signed __int32 *)(a1 + 6580), 0xFFFFFFFF);
        KiUnstackDetachProcess((__int64)v40, 0LL);
        return v5;
      }
    }
  }
  return v5;
}
