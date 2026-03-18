/*
 * XREFs of SendCaptureStateNotificationsWorker @ 0x140711F20
 * Callers:
 *     <none>
 * Callees:
 *     ExSetTimer @ 0x14004B440 (ExSetTimer.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     EtwpUnreferenceGuidEntry @ 0x140480BE4 (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x140480CD0 (EtwpFindGuidEntryByGuid.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x1404F218C (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpReleaseLoggerContext @ 0x1404F2B5C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1404F2C44 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpSendDataBlock @ 0x1405535DC (EtwpSendDataBlock.c)
 *     EtwpUnreferenceDataBlock @ 0x140553DE0 (EtwpUnreferenceDataBlock.c)
 *     EtwpBuildNotificationPacket @ 0x140554118 (EtwpBuildNotificationPacket.c)
 */

void __fastcall SendCaptureStateNotificationsWorker(_QWORD *P)
{
  char v2; // r13
  unsigned int *v3; // rax
  unsigned int *v4; // rdi
  volatile signed __int64 *v5; // rsi
  unsigned __int16 v6; // r15
  _DWORD *PoolWithTag; // rax
  _DWORD *v8; // rsi
  _QWORD *GuidEntryByGuid; // rax
  _QWORD *v10; // r13
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
  unsigned int *v22; // [rsp+48h] [rbp-69h]
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
      v5 = (volatile signed __int64 *)(v3 + 172);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v3 + 172), 0LL);
      v4[232] = 0;
      if ( v4[80] )
      {
        v6 = *((_WORD *)v4 + 452);
        if ( v6 )
        {
          v21 = v6;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16LL * v6, 0x74777445u);
          v20 = PoolWithTag;
          if ( PoolWithTag )
          {
            memmove(PoolWithTag, *((const void **)v4 + 114), 16LL * v6);
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
                v10[49] = KeGetCurrentThread();
                *(_OWORD *)&v23[40] = *(_OWORD *)v8;
                if ( (_QWORD *)v12 != v10 + 5 )
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
                  while ( (_QWORD *)v12 != v10 + 5 );
                  v8 = v20;
                }
                v10[49] = 0LL;
                ExReleasePushLockEx((ULONG_PTR)(v10 + 48), 0LL);
                KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
                EtwpUnreferenceGuidEntry(v10);
              }
              v8 += 4;
              v16 = v21-- == 1;
              v20 = v8;
            }
            while ( !v16 );
            v4 = v22;
            v2 = 0;
            v5 = (volatile signed __int64 *)(v22 + 172);
            if ( !v22[80] )
            {
LABEL_30:
              EtwpReleaseLoggerContext(v4, 0);
              if ( v2 )
                return;
              goto LABEL_31;
            }
            v24[1] = -1LL;
            v24[0] = 0LL;
            ExAcquirePushLockExclusiveEx((ULONG_PTR)v5, 0LL);
            if ( *((_WORD *)v4 + 452) && !v4[232] )
            {
              ExSetTimer(*((_QWORD *)v4 + 115), *((_QWORD *)v4 + 112), 0LL, (ULONG_PTR)v24);
              v4[232] = 1;
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
