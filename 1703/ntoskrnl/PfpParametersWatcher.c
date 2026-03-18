/*
 * XREFs of PfpParametersWatcher @ 0x1406C4F40
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwCreateKey @ 0x14017E2E0 (ZwCreateKey.c)
 *     ZwNotifyChangeKey @ 0x140180100 (ZwNotifyChangeKey.c)
 *     PfpParametersRead @ 0x1405C845C (PfpParametersRead.c)
 *     PfSnParametersRead @ 0x1405C8650 (PfSnParametersRead.c)
 *     PfSnDetermineEnablePrefetcher @ 0x1405D65C4 (PfSnDetermineEnablePrefetcher.c)
 *     PfpParametersPropagate @ 0x1406C4E1C (PfpParametersPropagate.c)
 */

void __fastcall PfpParametersWatcher(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v3; // rsi
  void *v4; // rcx
  NTSTATUS v5; // eax
  void *v6; // rcx
  char v7; // bp
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-58h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-48h] BYREF
  HANDLE KeyHandle; // [rsp+B0h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = (volatile signed __int64 *)(a1 + 504);
  ExAcquirePushLockExclusiveEx(a1 + 504, 0LL);
  v4 = *(void **)(a1 + 8);
  if ( v4 )
  {
    v5 = ZwNotifyChangeKey(
           v4,
           0LL,
           (PIO_APC_ROUTINE)(a1 + 32),
           (PVOID)1,
           (PIO_STATUS_BLOCK)(a1 + 16),
           0x1000000Fu,
           0,
           (PVOID)(a1 + 64),
           4u,
           1u);
    if ( v5 >= 0 )
      goto LABEL_8;
    if ( v5 == -1073741444 )
    {
      RtlInitUnicodeString(
        &DestinationString,
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management\\PrefetchParameters");
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ObjectAttributes.Attributes = 576;
      if ( ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, 0LL) >= 0 )
      {
        v6 = *(void **)(a1 + 8);
        *(_QWORD *)(a1 + 8) = KeyHandle;
        if ( v6 )
          ZwClose(v6);
        if ( ZwNotifyChangeKey(
               *(HANDLE *)(a1 + 8),
               0LL,
               (PIO_APC_ROUTINE)(a1 + 32),
               (PVOID)1,
               (PIO_STATUS_BLOCK)(a1 + 16),
               0x1000000Fu,
               0,
               (PVOID)(a1 + 64),
               4u,
               1u) >= 0 )
        {
LABEL_8:
          v7 = 0;
          if ( (int)PfpParametersRead(a1) >= 0 )
          {
            PfpParametersPropagate((_DWORD *)a1);
            v7 = 1;
          }
          if ( (int)PfSnParametersRead(a1) >= 0 )
          {
            PfSnDetermineEnablePrefetcher();
            v7 = 1;
          }
          if ( v7 && *(_QWORD *)a1 )
            KeSetEvent(*(PRKEVENT *)a1, 0, 0);
        }
      }
    }
  }
  if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveCriticalRegion();
}
