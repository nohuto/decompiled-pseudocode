/*
 * XREFs of DbgkRegisterErrorPort @ 0x140710660
 * Callers:
 *     NtSetSystemInformation @ 0x14048D108 (NtSetSystemInformation.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     PsGetServerSiloGlobals @ 0x14006CD90 (PsGetServerSiloGlobals.c)
 *     PsGetProcessServerSilo @ 0x14006CFF0 (PsGetProcessServerSilo.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400EF190 (ExAllocatePoolWithQuotaTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     PsIsHostSilo @ 0x140108640 (PsIsHostSilo.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwAlpcConnectPort @ 0x1401A83A0 (ZwAlpcConnectPort.c)
 *     ZwAlpcDisconnectPort @ 0x1401A8500 (ZwAlpcDisconnectPort.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     DbgkpDeleteErrorPort @ 0x14048BED4 (DbgkpDeleteErrorPort.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 */

__int64 __fastcall DbgkRegisterErrorPort(void *Src, size_t Size)
{
  unsigned __int16 v2; // di
  size_t v4; // rsi
  wchar_t *PoolWithQuotaTag; // rax
  _DWORD *v7; // r15
  int v8; // edi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 Process; // r13
  __int64 ProcessServerSilo; // r12
  char *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r14
  __int64 v17; // r8
  UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-F8h] BYREF
  __int64 v19; // [rsp+70h] [rbp-E8h]
  int v20; // [rsp+78h] [rbp-E0h] BYREF
  __int64 v21; // [rsp+80h] [rbp-D8h]
  __int64 v22; // [rsp+88h] [rbp-D0h]
  int v23; // [rsp+90h] [rbp-C8h]
  __int128 v24; // [rsp+98h] [rbp-C0h]
  _QWORD v25[14]; // [rsp+A8h] [rbp-B0h] BYREF

  v2 = Size;
  if ( !(_DWORD)Size || (Size & 1) != 0 || (unsigned int)Size > 0xFFFF )
    return 3221225485LL;
  v4 = (unsigned int)Size;
  PoolWithQuotaTag = (wchar_t *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, (unsigned int)Size, 0x50676244u);
  UnicodeString.Buffer = PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
    return 3221225626LL;
  UnicodeString.MaximumLength = v2;
  UnicodeString.Length = v2;
  memmove(PoolWithQuotaTag, Src, v4);
  v7 = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x10uLL, 0x50676244u);
  if ( v7 )
  {
    memset(v25, 0, sizeof(v25));
    *(_DWORD *)((char *)v25 + 2) = -2147483608;
    v19 = 40LL;
    v25[7] = 272LL;
    v25[9] = 8704LL;
    LODWORD(v25[5]) = 0x100000;
    v20 = 48;
    v21 = 0LL;
    v23 = 512;
    v22 = 0LL;
    v24 = 0LL;
    v8 = ZwAlpcConnectPort((__int64)(v7 + 2), (__int64)&UnicodeString, (__int64)&v20);
    if ( v8 >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      *v7 = 1;
      v7[1] = 0;
      Process = (__int64)CurrentThread->ApcState.Process;
      ProcessServerSilo = PsGetProcessServerSilo(Process);
      v12 = (char *)PsGetServerSiloGlobals(ProcessServerSilo) + 960;
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v12, 0LL);
      v16 = *((_QWORD *)v12 + 1);
      if ( !v16 && PsIsHostSilo(ProcessServerSilo) )
        _interlockedbittestandset((volatile signed __int32 *)0xFFFFF780000002F0LL, 0);
      *((_QWORD *)v12 + 1) = v7;
      *((_QWORD *)v12 + 2) = Process;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v12, v13, v14, v15);
      KeAbPostRelease((ULONG_PTR)v12);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      v8 = 0;
      v7 = 0LL;
      if ( v16 )
      {
        if ( !_interlockedbittestandset((volatile signed __int32 *)(v16 + 4), 0) )
          ZwAlpcDisconnectPort(*(_QWORD *)(v16 + 8), 0LL, v17);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v16, 0xFFFFFFFF) == 1 )
          DbgkpDeleteErrorPort((HANDLE *)v16);
      }
      KeSetEvent(*((PRKEVENT *)v12 + 3), 0, 0);
    }
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
  }
  else
  {
    v8 = -1073741670;
  }
  RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)v8;
}
