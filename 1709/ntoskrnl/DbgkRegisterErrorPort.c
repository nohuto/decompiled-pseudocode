/*
 * XREFs of DbgkRegisterErrorPort @ 0x1405EBA80
 * Callers:
 *     NtSetSystemInformation @ 0x140469CA0 (NtSetSystemInformation.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140060B70 (ExAllocatePoolWithQuotaTag.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     PsIsHostSilo @ 0x1400859F0 (PsIsHostSilo.c)
 *     PsGetServerSiloGlobals @ 0x140089394 (PsGetServerSiloGlobals.c)
 *     PsGetProcessServerSilo @ 0x1400893E0 (PsGetProcessServerSilo.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwAlpcConnectPort @ 0x14017E780 (ZwAlpcConnectPort.c)
 *     ZwAlpcDisconnectPort @ 0x14017E8E0 (ZwAlpcDisconnectPort.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     DbgkpDeleteErrorPort @ 0x1406AC1D0 (DbgkpDeleteErrorPort.c)
 */

__int64 __fastcall DbgkRegisterErrorPort(void *Src, size_t Size)
{
  unsigned __int16 v2; // di
  unsigned int v4; // esi
  wchar_t *PoolWithQuotaTag; // rax
  _DWORD *v6; // r15
  int v7; // edi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 Process; // r13
  __int64 ProcessServerSilo; // r12
  char *v11; // rsi
  __int64 v12; // r14
  char v13; // al
  __int64 v14; // r8
  UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-F8h] BYREF
  __int64 v17; // [rsp+70h] [rbp-E8h]
  _WORD v18[20]; // [rsp+78h] [rbp-E0h] BYREF
  int v19; // [rsp+A0h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+A8h] [rbp-B0h]
  __int64 v21; // [rsp+B0h] [rbp-A8h]
  int v22; // [rsp+B8h] [rbp-A0h]
  __int128 v23; // [rsp+C0h] [rbp-98h]
  _QWORD v24[9]; // [rsp+D0h] [rbp-88h] BYREF

  v2 = Size;
  if ( !(_DWORD)Size || (Size & 1) != 0 || (unsigned int)Size > 0xFFFF )
    return 3221225485LL;
  v4 = Size;
  PoolWithQuotaTag = (wchar_t *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, (unsigned int)Size, 0x50676244u);
  UnicodeString.Buffer = PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
    return 3221225626LL;
  UnicodeString.MaximumLength = v2;
  UnicodeString.Length = v2;
  memmove(PoolWithQuotaTag, Src, v4);
  v6 = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x10uLL, 0x50676244u);
  if ( v6 )
  {
    memset(v18, 0, sizeof(v18));
    v18[2] |= 0x8000u;
    v18[1] = 40;
    v17 = 40LL;
    memset(v24, 0, sizeof(v24));
    v24[2] = 272LL;
    v24[4] = 8704LL;
    LODWORD(v24[0]) = 0x100000;
    v19 = 48;
    v20 = 0LL;
    v22 = 512;
    v21 = 0LL;
    v23 = 0LL;
    v7 = ZwAlpcConnectPort((__int64)(v6 + 2), (__int64)&UnicodeString, (__int64)&v19);
    if ( v7 >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      *v6 = 1;
      v6[1] = 0;
      Process = (__int64)CurrentThread->ApcState.Process;
      ProcessServerSilo = PsGetProcessServerSilo(Process);
      v11 = (char *)PsGetServerSiloGlobals(ProcessServerSilo) + 960;
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v11, 0LL);
      v12 = *((_QWORD *)v11 + 1);
      if ( !v12 && PsIsHostSilo(ProcessServerSilo) )
        _interlockedbittestandset((volatile signed __int32 *)0xFFFFF780000002F0LL, 0);
      *((_QWORD *)v11 + 1) = v6;
      *((_QWORD *)v11 + 2) = Process;
      v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v13 & 2) != 0 && (v13 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)v11);
      KeAbPostRelease((ULONG_PTR)v11);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      v7 = 0;
      v6 = 0LL;
      if ( v12 )
      {
        if ( !_interlockedbittestandset((volatile signed __int32 *)(v12 + 4), 0) )
          ZwAlpcDisconnectPort(*(_QWORD *)(v12 + 8), 0LL, v14);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v12, 0xFFFFFFFF) == 1 )
          DbgkpDeleteErrorPort((PVOID)v12);
      }
      KeSetEvent(*((PRKEVENT *)v11 + 3), 0, 0);
    }
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
  }
  else
  {
    v7 = -1073741670;
  }
  RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)v7;
}
