/*
 * XREFs of EtwpCoverageEnsureContext @ 0x14064D564
 * Callers:
 *     EtwTelemetryCoverageReport @ 0x14014D4B0 (EtwTelemetryCoverageReport.c)
 *     EtwSetProcessTelemetryCoverage @ 0x14056F324 (EtwSetProcessTelemetryCoverage.c)
 * Callees:
 *     KeSetTimer2 @ 0x140037E50 (KeSetTimer2.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeInitializeTimer2 @ 0x140086040 (KeInitializeTimer2.c)
 *     TelemetryCoverageStringHashInternal @ 0x1400C31C0 (TelemetryCoverageStringHashInternal.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     EtwTelemetryCoverageReport @ 0x14014D4B0 (EtwTelemetryCoverageReport.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MmUnmapViewInSystemSpace @ 0x1404BB5B0 (MmUnmapViewInSystemSpace.c)
 *     MmCreateSection @ 0x1404C1C80 (MmCreateSection.c)
 *     MmMapViewInSystemSpace @ 0x14054B620 (MmMapViewInSystemSpace.c)
 *     EtwpCoverageEnsureStringBuffer @ 0x14064D958 (EtwpCoverageEnsureStringBuffer.c)
 *     EtwpCoverageFreeStringBuffers @ 0x1407A6CDC (EtwpCoverageFreeStringBuffers.c)
 */

__int64 EtwpCoverageEnsureContext()
{
  unsigned int v0; // edx
  PVOID *PoolWithTag; // rax
  PVOID *v2; // rdi
  PVOID v3; // rax
  _QWORD *v4; // rcx
  unsigned __int64 v5; // rbp
  PVOID v6; // r8
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  int Section; // ebx
  PVOID v10; // rcx
  PVOID *v11; // rsi
  __int64 v12; // rdx
  unsigned int v13; // ecx
  int v14; // eax
  _DWORD *v15; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rax
  char v23; // cl
  PVOID v24; // rcx
  PVOID v25; // rcx
  _QWORD v26[9]; // [rsp+40h] [rbp-48h] BYREF
  int v27; // [rsp+90h] [rbp+8h] BYREF
  int v28; // [rsp+98h] [rbp+10h] BYREF
  __int64 v29; // [rsp+A0h] [rbp+18h] BYREF
  ULONG_PTR ViewSize; // [rsp+A8h] [rbp+20h] BYREF

  if ( EtwpInitialized && (v0 = EtwpCoverageEntryCount) != 0 )
  {
    if ( (unsigned int)EtwpCoverageEntryCount >= 0x80000 )
      v0 = 0x80000;
    if ( v0 <= 0x40 )
      v0 = 64;
    if ( ((v0 - 1) & v0) != 0 )
    {
      v23 = -1;
      do
      {
        ++v23;
        v0 >>= 1;
      }
      while ( v0 );
      v0 = 1 << v23;
    }
    EtwpCoverageEntryCount = v0;
    if ( (unsigned int)EtwpCoverageFlushPeriod <= 0x3E8 )
      EtwpCoverageFlushPeriod = 1000;
    if ( (unsigned int)EtwpCoverageResetPeriod <= 0x36EE80 )
      EtwpCoverageResetPeriod = 3600000;
    PoolWithTag = (PVOID *)ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x56777445u);
    v2 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x48uLL);
      v3 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1B8uLL, 0x56777445u);
      *v2 = v3;
      if ( v3 )
      {
        memset(v3, 0, 0x1B8uLL);
        v4 = *v2;
        v4[3] = 0LL;
        v4[6] = v4 + 5;
        v4[5] = v4 + 5;
        v4[9] = EtwpCoverageHighIrqlCPWorkItemCallback;
        v4[10] = v2;
        v4[7] = 0LL;
        v2[7] = v2 + 6;
        v2[6] = v2 + 6;
        *((_DWORD *)v2 + 7) = EtwpCoverageFlushPeriod;
        v5 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        *((_DWORD *)*v2 + 4) = v5;
        v6 = *v2;
        *((_DWORD *)v2 + 6) = v5;
        KeInitializeTimer2((__int64)v6 + 104);
        KeInitializeTimer2((__int64)*v2 + 240);
        v7 = *v2;
        v7[53] = EtwpCoverageResetWorkItemCallback;
        v7[54] = v2;
        v7[51] = 0LL;
        v8 = *v2;
        v8[49] = EtwpCoverageFlushWorkItemCallback;
        v8[50] = v2;
        v8[47] = 0LL;
        Section = EtwpCoverageEnsureStringBuffer(v2);
        if ( Section >= 0 )
        {
          v29 = 4LL * (unsigned int)EtwpCoverageEntryCount;
          Section = MmCreateSection((int)v2 + 8, 983071LL, 0, (int)&v29, 4, 0x8000000, 0LL, 0LL);
          if ( Section >= 0 )
          {
            v10 = v2[1];
            v11 = v2 + 2;
            ViewSize = 0LL;
            Section = MmMapViewInSystemSpace(v10, v2 + 2, &ViewSize);
            if ( Section >= 0 )
            {
              v12 = 2LL;
              *(_BYTE *)*v11 = 2;
              *((_BYTE *)*v11 + 1) = 1;
              *((_DWORD *)*v11 + 6) = 1;
              *(_DWORD *)*v2 = *((_DWORD *)*v11 + 6);
              MEMORY[0xFFFFF7800000037C] = *((_DWORD *)*v11 + 6);
              *((_DWORD *)*v11 + 5) = v5;
              *((_DWORD *)*v2 + 5) = *((_DWORD *)*v11 + 5);
              *((_DWORD *)*v11 + 2) = EtwpCoverageEntryCount - 1;
              v13 = (unsigned int)(v29 - 52) >> 2;
              do
              {
                *((_DWORD *)*v11 + 1) = v13;
                --v12;
              }
              while ( v12 );
              v14 = 3 * (v13 >> 2);
              v15 = *v11;
              *((_DWORD *)v2 + 8) = v14;
              v15[4] = 4 * v15[1] + 52;
              CurrentThread = KeGetCurrentThread();
              --CurrentThread->KernelApcDisable;
              ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCoverageLock, 0LL);
              EtwpCoverageLockOwner = (__int64)KeGetCurrentThread();
              if ( !EtwpCoverageContext )
              {
                v20 = (__int64)v2;
                v21 = (__int64)*v2;
                v2 = 0LL;
                EtwpCoverageContext = v20;
                EtwpCoverageNonPagedContext = v21;
                if ( EtwpCoverageCoreTracingEnabled )
                {
                  *(_WORD *)(*(_QWORD *)(v20 + 16) + 2LL) |= 1u;
                  MEMORY[0xFFFFF7800000037C] = -256;
                }
                v26[1] = -1LL;
                v26[0] = 0LL;
                KeSetTimer2(
                  *(_QWORD *)EtwpCoverageContext + 104LL,
                  -10000LL * (unsigned int)EtwpCoverageResetPeriod,
                  10000LL * (unsigned int)EtwpCoverageResetPeriod,
                  (__int64)v26);
              }
              EtwpCoverageLockOwner = 0LL;
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCoverageLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCoverageLock, v17, v18, v19);
              KeAbPostRelease((ULONG_PTR)&EtwpCoverageLock);
              KeLeaveCriticalRegion();
              if ( (unsigned int)dword_1403985DC < MEMORY[0xFFFFF7800000037C] )
              {
                if ( !dword_1403985D8 )
                  dword_1403985D8 = TelemetryCoverageStringHashInternal(off_1403985D0, &v27);
                EtwTelemetryCoverageReport((__int64)&off_1403985D0);
              }
              if ( EtwpCoverageCoreTracingEnabled && (unsigned int)dword_140399B24 < MEMORY[0xFFFFF7800000037C] )
              {
                if ( !dword_140399B20 )
                  dword_140399B20 = TelemetryCoverageStringHashInternal(off_140399B18, &v28);
                EtwTelemetryCoverageReport((__int64)&off_140399B18);
              }
              Section = 0;
            }
          }
        }
      }
      else
      {
        Section = -1073741670;
      }
      if ( v2 )
      {
        v24 = v2[2];
        if ( v24 )
        {
          MmUnmapViewInSystemSpace(v24);
          v2[2] = 0LL;
        }
        v25 = v2[1];
        if ( v25 )
        {
          ObfDereferenceObject(v25);
          v2[1] = 0LL;
        }
        if ( *v2 )
          ExFreePoolWithTag(*v2, 0x56777445u);
        EtwpCoverageFreeStringBuffers(v2, 0LL);
        ExFreePoolWithTag(v2, 0x56777445u);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)Section;
}
