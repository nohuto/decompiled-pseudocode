/*
 * XREFs of SendCaptureStateNotificationsWorker @ 0x14074FA80
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     ExSetTimer @ 0x1400E0EB0 (ExSetTimer.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x14048E508 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpUnreferenceGuidEntry @ 0x140491D2C (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x140491E20 (EtwpFindGuidEntryByGuid.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1404921A4 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x14049227C (EtwpReleaseLoggerContext.c)
 *     EtwpBuildNotificationPacket @ 0x1404EE23C (EtwpBuildNotificationPacket.c)
 *     EtwpSendDataBlock @ 0x1404EF6A0 (EtwpSendDataBlock.c)
 *     EtwpUnreferenceDataBlock @ 0x1404EFD38 (EtwpUnreferenceDataBlock.c)
 */

void __fastcall SendCaptureStateNotificationsWorker(_QWORD *P)
{
  char v2; // r13
  __int64 v3; // rax
  __int64 v4; // rdi
  volatile signed __int64 *v5; // rsi
  unsigned __int16 v6; // r15
  _DWORD *PoolWithTag; // rax
  _DWORD *v8; // rsi
  __int64 *GuidEntryByGuid; // rax
  __int64 *v10; // r13
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v12; // r15
  int v13; // edi
  _WORD *v14; // r12
  __int64 v15; // r8
  bool v16; // zf
  unsigned __int8 v17; // [rsp+28h] [rbp-89h]
  __int16 v18; // [rsp+2Ah] [rbp-87h]
  volatile signed __int32 *v19; // [rsp+30h] [rbp-81h] BYREF
  _DWORD *v20; // [rsp+38h] [rbp-79h]
  __int64 v21; // [rsp+40h] [rbp-71h]
  __int64 v22; // [rsp+48h] [rbp-69h]
  _BYTE v23[120]; // [rsp+50h] [rbp-61h] BYREF
  _QWORD v24[2]; // [rsp+C8h] [rbp+17h] BYREF

  v19 = 0LL;
  memset(v23, 0, sizeof(v23));
  v2 = 0;
  if ( P )
  {
    v3 = EtwpAcquireLoggerContextByLoggerId(P[4], *((unsigned __int16 *)P + 20), 0);
    v22 = v3;
    v4 = v3;
    if ( v3 )
    {
      v5 = (volatile signed __int64 *)(v3 + 704);
      ExAcquirePushLockExclusiveEx(v3 + 704, 0LL);
      *(_DWORD *)(v4 + 2240) = 0;
      if ( *(_DWORD *)(v4 + 336) )
      {
        v6 = *(_WORD *)(v4 + 2216);
        if ( v6 )
        {
          v21 = v6;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16LL * v6, 0x74777445u);
          v20 = PoolWithTag;
          if ( PoolWithTag )
          {
            memmove(PoolWithTag, *(const void **)(v4 + 2224), 16LL * v6);
            if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v5);
            KeAbPostRelease((ULONG_PTR)v5);
            *(_DWORD *)v23 = 3;
            *(_DWORD *)&v23[4] = 120;
            v8 = v20;
            do
            {
              GuidEntryByGuid = EtwpFindGuidEntryByGuid(P[4], v8, 0);
              v10 = GuidEntryByGuid;
              if ( GuidEntryByGuid )
              {
                CurrentThread = KeGetCurrentThread();
                --CurrentThread->KernelApcDisable;
                ExAcquirePushLockExclusiveEx((ULONG_PTR)(GuidEntryByGuid + 48), 0LL);
                v12 = v10[5];
                v10[49] = (__int64)KeGetCurrentThread();
                *(_OWORD *)&v23[40] = *(_OWORD *)v8;
                if ( (__int64 *)v12 != v10 + 5 )
                {
                  do
                  {
                    if ( (*(_BYTE *)(v12 + 98) & 1) == 0 )
                    {
                      v13 = 0;
                      v14 = (_WORD *)v10 + 59;
                      do
                      {
                        v17 = *(_BYTE *)(v12 + 100);
                        if ( ((unsigned __int8)(1 << v13) & v17) != 0 )
                        {
                          if ( *(_DWORD *)(v14 - 3) )
                          {
                            v18 = *((_WORD *)P + 20);
                            if ( *v14 == v18 )
                            {
                              EtwpComputeRegEntryEnableInfo(v12, &v23[72]);
                              *(_WORD *)&v23[78] = v18;
                              *(_DWORD *)&v23[72] = 2;
                              if ( (int)EtwpBuildNotificationPacket((__int64)v10, v23, v17, &v19) >= 0 )
                              {
                                EtwpSendDataBlock(v12, (__int64)v19, v15);
                                EtwpUnreferenceDataBlock(v19);
                              }
                            }
                          }
                        }
                        ++v13;
                        v14 += 16;
                      }
                      while ( v13 < 8 );
                    }
                    v12 = *(_QWORD *)v12;
                  }
                  while ( (__int64 *)v12 != v10 + 5 );
                  v8 = v20;
                }
                v10[49] = 0LL;
                ExReleasePushLockEx((ULONG_PTR)(v10 + 48), 0LL);
                KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
                EtwpUnreferenceGuidEntry(v10);
              }
              v8 += 4;
              v16 = v21-- == 1;
              v20 = v8;
            }
            while ( !v16 );
            v4 = v22;
            v2 = 0;
            v5 = (volatile signed __int64 *)(v22 + 704);
            if ( !*(_DWORD *)(v22 + 336) )
            {
LABEL_30:
              EtwpReleaseLoggerContext((unsigned int *)v4, 0);
              if ( v2 )
                return;
              goto LABEL_31;
            }
            v24[1] = -1LL;
            v24[0] = 0LL;
            ExAcquirePushLockExclusiveEx((ULONG_PTR)v5, 0LL);
            if ( *(_WORD *)(v4 + 2216) && !*(_DWORD *)(v4 + 2240) )
            {
              ExSetTimer(*(_QWORD *)(v4 + 2232), *(_QWORD *)(v4 + 2208), 0LL, (__int64)v24);
              *(_DWORD *)(v4 + 2240) = 1;
              v2 = 1;
            }
          }
        }
      }
      if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v5);
      KeAbPostRelease((ULONG_PTR)v5);
      goto LABEL_30;
    }
  }
LABEL_31:
  ExFreePoolWithTag(P, 0);
}
