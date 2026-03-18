/*
 * XREFs of EtwpCoverageEnsureContext @ 0x1405E714C
 * Callers:
 *     EtwTelemetryCoverageReport @ 0x14011E500 (EtwTelemetryCoverageReport.c)
 *     EtwSetProcessTelemetryCoverage @ 0x140579114 (EtwSetProcessTelemetryCoverage.c)
 * Callees:
 *     KeSetTimer2 @ 0x1400605A0 (KeSetTimer2.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KeInitializeTimer2 @ 0x1400B2730 (KeInitializeTimer2.c)
 *     EtwTelemetryCoverageReport @ 0x14011E500 (EtwTelemetryCoverageReport.c)
 *     TelemetryCoverageStringHashInternal @ 0x14011E7C8 (TelemetryCoverageStringHashInternal.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MmCreateSection @ 0x14049B260 (MmCreateSection.c)
 *     MmMapViewInSystemSpace @ 0x1404F6020 (MmMapViewInSystemSpace.c)
 *     MmUnmapViewInSystemSpace @ 0x1404F75B0 (MmUnmapViewInSystemSpace.c)
 *     EtwpCoverageEnsureStringBuffer @ 0x1405E7544 (EtwpCoverageEnsureStringBuffer.c)
 *     EtwpCoverageFreeStringBuffers @ 0x140744FC8 (EtwpCoverageFreeStringBuffers.c)
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
  __int64 v17; // rcx
  __int64 v18; // rax
  char v20; // cl
  PVOID v21; // rcx
  PVOID v22; // rcx
  _QWORD v23[9]; // [rsp+40h] [rbp-48h] BYREF
  int v24; // [rsp+90h] [rbp+8h] BYREF
  int v25; // [rsp+98h] [rbp+10h] BYREF
  __int64 v26; // [rsp+A0h] [rbp+18h] BYREF
  ULONG_PTR ViewSize; // [rsp+A8h] [rbp+20h] BYREF

  if ( EtwpInitialized && (v0 = EtwpCoverageEntryCount) != 0 )
  {
    if ( (unsigned int)EtwpCoverageEntryCount >= 0x80000 )
      v0 = 0x80000;
    if ( v0 <= 0x40 )
      v0 = 64;
    if ( ((v0 - 1) & v0) != 0 )
    {
      v20 = -1;
      do
      {
        ++v20;
        v0 >>= 1;
      }
      while ( v0 );
      v0 = 1 << v20;
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
          v26 = 4LL * (unsigned int)EtwpCoverageEntryCount;
          Section = MmCreateSection((int)v2 + 8, 983071LL, 0, (int)&v26, 4, 0x8000000, 0LL, 0LL);
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
              v13 = (unsigned int)(v26 - 52) >> 2;
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
                v17 = (__int64)v2;
                v18 = (__int64)*v2;
                v2 = 0LL;
                EtwpCoverageContext = v17;
                EtwpCoverageNonPagedContext = v18;
                if ( EtwpCoverageCoreTracingEnabled )
                {
                  *(_WORD *)(*(_QWORD *)(v17 + 16) + 2LL) |= 1u;
                  MEMORY[0xFFFFF7800000037C] = -256;
                }
                v23[1] = -1LL;
                v23[0] = 0LL;
                KeSetTimer2(
                  *(_QWORD *)EtwpCoverageContext + 104LL,
                  -10000LL * (unsigned int)EtwpCoverageResetPeriod,
                  10000LL * (unsigned int)EtwpCoverageResetPeriod,
                  (__int64)v23);
              }
              EtwpCoverageLockOwner = 0LL;
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCoverageLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCoverageLock);
              KeAbPostRelease((ULONG_PTR)&EtwpCoverageLock);
              KeLeaveCriticalRegion();
              if ( (unsigned int)dword_14035566C < MEMORY[0xFFFFF7800000037C] )
              {
                if ( !dword_140355668 )
                  dword_140355668 = TelemetryCoverageStringHashInternal(off_140355660, &v24);
                EtwTelemetryCoverageReport(&off_140355660);
              }
              if ( EtwpCoverageCoreTracingEnabled && (unsigned int)dword_140356524 < MEMORY[0xFFFFF7800000037C] )
              {
                if ( !dword_140356520 )
                  dword_140356520 = TelemetryCoverageStringHashInternal(off_140356518, &v25);
                EtwTelemetryCoverageReport(&off_140356518);
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
        v21 = v2[2];
        if ( v21 )
        {
          MmUnmapViewInSystemSpace(v21);
          v2[2] = 0LL;
        }
        v22 = v2[1];
        if ( v22 )
        {
          ObfDereferenceObject(v22);
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
