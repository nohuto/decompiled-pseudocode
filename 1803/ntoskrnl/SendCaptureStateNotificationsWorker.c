/*
 * XREFs of SendCaptureStateNotificationsWorker @ 0x1407B0900
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     ExSetTimer @ 0x140085490 (ExSetTimer.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     EtwpBuildNotificationPacket @ 0x14058B92C (EtwpBuildNotificationPacket.c)
 *     EtwpUnreferenceDataBlock @ 0x14058DCB4 (EtwpUnreferenceDataBlock.c)
 *     EtwpSendDataBlock @ 0x14058DED0 (EtwpSendDataBlock.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405906D4 (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x1405907D0 (EtwpFindGuidEntryByGuid.c)
 *     EtwpReleaseLoggerContext @ 0x140590D4C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140590D94 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x140591660 (EtwpComputeRegEntryEnableInfo.c)
 */

void __fastcall SendCaptureStateNotificationsWorker(_QWORD *P)
{
  char v2; // r13
  unsigned int *v3; // rax
  unsigned int *v4; // rdi
  volatile signed __int64 *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int16 v9; // r15
  _DWORD *PoolWithTag; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  _DWORD *v14; // rsi
  _QWORD *GuidEntryByGuid; // rax
  __int64 v16; // r13
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r15
  int v21; // edi
  _WORD *v22; // r12
  bool v23; // zf
  char v24; // [rsp+28h] [rbp-89h]
  __int16 v25; // [rsp+2Ah] [rbp-87h]
  volatile signed __int32 *v26; // [rsp+30h] [rbp-81h] BYREF
  _DWORD *v27; // [rsp+38h] [rbp-79h]
  __int64 v28; // [rsp+40h] [rbp-71h]
  unsigned int *v29; // [rsp+48h] [rbp-69h]
  _BYTE v30[120]; // [rsp+50h] [rbp-61h] BYREF
  _QWORD v31[2]; // [rsp+C8h] [rbp+17h] BYREF

  v26 = 0LL;
  memset(v30, 0, sizeof(v30));
  v2 = 0;
  if ( P )
  {
    v3 = EtwpAcquireLoggerContextByLoggerId(P[4], *((unsigned __int16 *)P + 20), 0);
    v29 = v3;
    v4 = v3;
    if ( v3 )
    {
      v5 = (volatile signed __int64 *)(v3 + 176);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v3 + 176), 0LL);
      v4[274] = 0;
      if ( v4[84] )
      {
        v9 = *((_WORD *)v4 + 536);
        if ( v9 )
        {
          v28 = v9;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16LL * v9, 0x74777445u);
          v27 = PoolWithTag;
          if ( PoolWithTag )
          {
            memmove(PoolWithTag, *((const void **)v4 + 135), 16LL * v9);
            if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v5, v11, v12, v13);
            KeAbPostRelease((ULONG_PTR)v5);
            *(_DWORD *)v30 = 3;
            *(_DWORD *)&v30[4] = 120;
            v14 = v27;
            do
            {
              GuidEntryByGuid = EtwpFindGuidEntryByGuid(P[4], v14, 0);
              v16 = (__int64)GuidEntryByGuid;
              if ( GuidEntryByGuid )
              {
                CurrentThread = KeGetCurrentThread();
                --CurrentThread->KernelApcDisable;
                ExAcquirePushLockExclusiveEx((ULONG_PTR)(GuidEntryByGuid + 48), 0LL);
                v20 = *(_QWORD *)(v16 + 40);
                *(_QWORD *)(v16 + 392) = KeGetCurrentThread();
                *(_OWORD *)&v30[40] = *(_OWORD *)v14;
                if ( v20 != v16 + 40 )
                {
                  do
                  {
                    if ( (*(_BYTE *)(v20 + 98) & 1) == 0 )
                    {
                      v21 = 0;
                      v22 = (_WORD *)(v16 + 118);
                      do
                      {
                        v24 = *(_BYTE *)(v20 + 100);
                        if ( ((unsigned __int8)(1 << v21) & (unsigned __int8)v24) != 0 )
                        {
                          if ( *(_DWORD *)(v22 - 3) )
                          {
                            v25 = *((_WORD *)P + 20);
                            if ( *v22 == v25 )
                            {
                              EtwpComputeRegEntryEnableInfo(v20, &v30[72]);
                              *(_WORD *)&v30[78] = v25;
                              *(_DWORD *)&v30[72] = 2;
                              if ( (int)EtwpBuildNotificationPacket(v16, v30, v24, &v26) >= 0 )
                              {
                                EtwpSendDataBlock(v20, (__int64)v26, v18);
                                EtwpUnreferenceDataBlock(v26);
                              }
                            }
                          }
                        }
                        ++v21;
                        v22 += 16;
                      }
                      while ( v21 < 8 );
                    }
                    v20 = *(_QWORD *)v20;
                  }
                  while ( v20 != v16 + 40 );
                  v14 = v27;
                }
                *(_QWORD *)(v16 + 392) = 0LL;
                ExReleasePushLockEx(v16 + 384, 0LL, v18, v19);
                KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
                EtwpUnreferenceGuidEntry((volatile signed __int64 *)v16);
              }
              v14 += 4;
              v23 = v28-- == 1;
              v27 = v14;
            }
            while ( !v23 );
            v4 = v29;
            v2 = 0;
            v5 = (volatile signed __int64 *)(v29 + 176);
            if ( !v29[84] )
            {
LABEL_30:
              EtwpReleaseLoggerContext(v4, 0);
              if ( v2 )
                return;
              goto LABEL_31;
            }
            v31[1] = -1LL;
            v31[0] = 0LL;
            ExAcquirePushLockExclusiveEx((ULONG_PTR)v5, 0LL);
            if ( *((_WORD *)v4 + 536) && !v4[274] )
            {
              ExSetTimer(*((_QWORD *)v4 + 136), *((_QWORD *)v4 + 133), 0LL, (__int64)v31);
              v4[274] = 1;
              v2 = 1;
            }
          }
        }
      }
      if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v5, v6, v7, v8);
      KeAbPostRelease((ULONG_PTR)v5);
      goto LABEL_30;
    }
  }
LABEL_31:
  ExFreePoolWithTag(P, 0);
}
