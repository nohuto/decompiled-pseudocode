/*
 * XREFs of ExpWnfAllocateNextPersistentNameSequence @ 0x1407627FC
 * Callers:
 *     ExpWnfGenerateStateName @ 0x1405035C4 (ExpWnfGenerateStateName.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14005D890 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     PsDetachSiloFromCurrentThread @ 0x1400AF180 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1400AF1A0 (PsAttachSiloToCurrentThread.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400D2E30 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x14017DBA0 (ZwQueryValueKey.c)
 *     ZwSetValueKey @ 0x14017E4C0 (ZwSetValueKey.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x1404E1054 (ExpWnfGetNameStoreRegistryRoot.c)
 */

__int64 __fastcall ExpWnfAllocateNextPersistentNameSequence(__int64 a1, unsigned __int64 *a2)
{
  int v2; // r14d
  NTSTATUS NameStoreRegistryRoot; // edi
  __int64 v5; // r12
  _QWORD *CurrentServerSiloGlobals; // rax
  char *v7; // rbx
  PRTL_BALANCED_NODE v8; // rax
  PRTL_BALANCED_NODE v9; // rsi
  NTSTATUS v10; // eax
  unsigned __int64 v11; // rsi
  PRTL_BALANCED_NODE v12; // rax
  PRTL_BALANCED_NODE v13; // r14
  unsigned __int64 v14; // r8
  unsigned __int64 Data; // [rsp+30h] [rbp-40h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-38h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-30h] BYREF
  _BYTE KeyValueInformation[8]; // [rsp+48h] [rbp-28h] BYREF
  int v20; // [rsp+50h] [rbp-20h]
  unsigned __int64 v21; // [rsp+54h] [rbp-1Ch]

  v2 = 0;
  KeyHandle = 0LL;
  NameStoreRegistryRoot = 0;
  v5 = PsAttachSiloToCurrentThread(a1);
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v7 = (char *)(CurrentServerSiloGlobals + 113);
  Data = CurrentServerSiloGlobals[118];
  if ( Data )
    goto LABEL_13;
  NameStoreRegistryRoot = ExpWnfGetNameStoreRegistryRoot(1, (volatile signed __int64 *)&KeyHandle);
  if ( NameStoreRegistryRoot < 0 )
    goto LABEL_33;
  v8 = KeAbPreAcquire((ULONG_PTR)(v7 + 32), 0LL, 0);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v7 + 8, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v7 + 4, (__int64)v8, (__int16 *)v7 + 16);
  if ( v9 )
    BYTE2(v9[1].Left) |= 1u;
  v2 = 1;
  if ( *((_QWORD *)v7 + 5) )
    goto LABEL_13;
  v10 = ZwQueryValueKey(
          KeyHandle,
          (PUNICODE_STRING)&ExpWnfPermanentNameSequenceNumberValueName,
          KeyValuePartialInformation,
          KeyValueInformation,
          0x18u,
          &ResultLength);
  NameStoreRegistryRoot = v10;
  if ( v10 < 0 )
  {
    if ( v10 != -1073741772 )
      goto LABEL_30;
    do
LABEL_13:
      v11 = _InterlockedIncrement64((volatile signed __int64 *)v7 + 3);
    while ( !v11 );
    Data = *((_QWORD *)v7 + 5);
    if ( v11 > Data )
    {
      if ( !KeyHandle )
      {
        NameStoreRegistryRoot = ExpWnfGetNameStoreRegistryRoot(1, (volatile signed __int64 *)&KeyHandle);
        if ( NameStoreRegistryRoot < 0 )
          goto LABEL_29;
      }
      if ( !v2 )
      {
        v12 = KeAbPreAcquire((ULONG_PTR)(v7 + 32), 0LL, 0);
        v13 = v12;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v7 + 8, 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v7 + 4, (__int64)v12, (__int16 *)v7 + 16);
        if ( v13 )
          BYTE2(v13[1].Left) |= 1u;
        v2 = 1;
      }
      if ( v11 <= *((_QWORD *)v7 + 5) )
        goto LABEL_28;
      v14 = *((_QWORD *)v7 + 5) + 100LL;
      Data = v14;
      if ( v14 < v11 )
        Data = v14 + 100 * ((v11 - v14 - 1) / 0x64) + 100;
      NameStoreRegistryRoot = ZwSetValueKey(
                                KeyHandle,
                                (PUNICODE_STRING)&ExpWnfPermanentNameSequenceNumberValueName,
                                0,
                                3u,
                                &Data,
                                8u);
      if ( NameStoreRegistryRoot < 0 )
      {
LABEL_29:
        if ( !v2 )
          goto LABEL_33;
        goto LABEL_30;
      }
      _InterlockedExchange64((volatile __int64 *)v7 + 5, Data);
    }
LABEL_28:
    *a2 = v11;
    goto LABEL_29;
  }
  if ( v20 == 8 )
  {
    Data = v21;
    _InterlockedExchange64((volatile __int64 *)v7 + 3, v21);
    _InterlockedExchange64((volatile __int64 *)v7 + 5, Data);
    goto LABEL_13;
  }
  NameStoreRegistryRoot = -1073741823;
LABEL_30:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7 + 4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v7 + 4);
  KeAbPostRelease((ULONG_PTR)(v7 + 32));
LABEL_33:
  PsDetachSiloFromCurrentThread(v5);
  return (unsigned int)NameStoreRegistryRoot;
}
