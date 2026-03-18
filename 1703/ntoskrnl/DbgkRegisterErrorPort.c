/*
 * XREFs of DbgkRegisterErrorPort @ 0x1405D1A50
 * Callers:
 *     NtSetSystemInformation @ 0x140562590 (NtSetSystemInformation.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x14004B900 (ExAllocatePoolWithQuotaTag.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwAlpcConnectPort @ 0x14017EE00 (ZwAlpcConnectPort.c)
 *     ZwAlpcDisconnectPort @ 0x14017EF60 (ZwAlpcDisconnectPort.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     DbgkpDeleteErrorPort @ 0x140681000 (DbgkpDeleteErrorPort.c)
 */

__int64 __fastcall DbgkRegisterErrorPort(void *Src, size_t Size)
{
  unsigned __int16 v2; // di
  unsigned int v4; // esi
  wchar_t *PoolWithQuotaTag; // rax
  _DWORD *v6; // r14
  int v7; // edi
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // r15
  __int64 v10; // rsi
  __int64 v11; // r8
  UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v14; // [rsp+70h] [rbp-D8h]
  _WORD v15[20]; // [rsp+78h] [rbp-D0h] BYREF
  int v16; // [rsp+A0h] [rbp-A8h] BYREF
  __int64 v17; // [rsp+A8h] [rbp-A0h]
  __int64 v18; // [rsp+B0h] [rbp-98h]
  int v19; // [rsp+B8h] [rbp-90h]
  __int128 v20; // [rsp+C0h] [rbp-88h]
  _QWORD v21[9]; // [rsp+D0h] [rbp-78h] BYREF

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
    memset(v15, 0, sizeof(v15));
    v15[2] |= 0x8000u;
    v15[1] = 40;
    v14 = 40LL;
    memset(v21, 0, sizeof(v21));
    v21[2] = 272LL;
    v21[4] = 8704LL;
    LODWORD(v21[0]) = 0x100000;
    v16 = 48;
    v17 = 0LL;
    v19 = 512;
    v18 = 0LL;
    v20 = 0LL;
    v7 = ZwAlpcConnectPort((__int64)(v6 + 2), (__int64)&UnicodeString, (__int64)&v16);
    if ( v7 >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      *v6 = 1;
      v6[1] = 0;
      Process = CurrentThread->ApcState.Process;
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&DbgkpErrorPortLock, 0LL);
      v10 = DbgkpErrorPort;
      if ( !DbgkpErrorPort )
        _interlockedbittestandset((volatile signed __int32 *)0xFFFFF780000002F0LL, 0);
      DbgkpErrorPort = (__int64)v6;
      DbgkpErrorProcess = Process;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&DbgkpErrorPortLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&DbgkpErrorPortLock);
      KeAbPostRelease((ULONG_PTR)&DbgkpErrorPortLock);
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
      v7 = 0;
      v6 = 0LL;
      if ( v10 )
      {
        if ( !_interlockedbittestandset((volatile signed __int32 *)(v10 + 4), 0) )
          ZwAlpcDisconnectPort(*(_QWORD *)(v10 + 8), 0LL, v11);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v10, 0xFFFFFFFF) == 1 )
          DbgkpDeleteErrorPort(v10);
      }
      KeSetEvent(DbgkErrorPortRegisteredEvent, 0, 0);
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
