/*
 * XREFs of ExpWnfAllocateNextPersistentNameSequence @ 0x1407CA2E0
 * Callers:
 *     ExpWnfGenerateStateName @ 0x1404F4B24 (ExpWnfGenerateStateName.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140008AF0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     PsDetachSiloFromCurrentThread @ 0x140073540 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x140073560 (PsAttachSiloToCurrentThread.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400A5690 (PsGetCurrentServerSiloGlobals.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1401A77A0 (ZwQueryValueKey.c)
 *     ZwSetValueKey @ 0x1401A80C0 (ZwSetValueKey.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x140517AAC (ExpWnfGetNameStoreRegistryRoot.c)
 */

__int64 __fastcall ExpWnfAllocateNextPersistentNameSequence(__int64 a1, unsigned __int64 *a2)
{
  int v2; // r14d
  NTSTATUS NameStoreRegistryRoot; // edi
  __int64 v5; // r12
  _QWORD *CurrentServerSiloGlobals; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  char *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rsi
  NTSTATUS v13; // eax
  unsigned __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // r14
  unsigned __int64 v17; // r8
  unsigned __int64 Data; // [rsp+30h] [rbp-40h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-38h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-30h] BYREF
  _BYTE KeyValueInformation[8]; // [rsp+48h] [rbp-28h] BYREF
  int v23; // [rsp+50h] [rbp-20h]
  unsigned __int64 v24; // [rsp+54h] [rbp-1Ch]

  v2 = 0;
  KeyHandle = 0LL;
  NameStoreRegistryRoot = 0;
  v5 = PsAttachSiloToCurrentThread(a1);
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v10 = (char *)(CurrentServerSiloGlobals + 113);
  Data = CurrentServerSiloGlobals[118];
  if ( Data )
    goto LABEL_13;
  NameStoreRegistryRoot = ExpWnfGetNameStoreRegistryRoot(1, (volatile signed __int64 *)&KeyHandle);
  if ( NameStoreRegistryRoot < 0 )
    goto LABEL_33;
  v11 = KeAbPreAcquire((ULONG_PTR)(v10 + 32), 0LL, 0);
  v12 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v10 + 8, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v10 + 4, v11, (ULONG_PTR)(v10 + 32));
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  v2 = 1;
  if ( *((_QWORD *)v10 + 5) )
    goto LABEL_13;
  v13 = ZwQueryValueKey(
          KeyHandle,
          (PUNICODE_STRING)&ExpWnfPermanentNameSequenceNumberValueName,
          KeyValuePartialInformation,
          KeyValueInformation,
          0x18u,
          &ResultLength);
  NameStoreRegistryRoot = v13;
  if ( v13 < 0 )
  {
    if ( v13 != -1073741772 )
      goto LABEL_30;
    do
LABEL_13:
      v14 = _InterlockedIncrement64((volatile signed __int64 *)v10 + 3);
    while ( !v14 );
    Data = *((_QWORD *)v10 + 5);
    if ( v14 > Data )
    {
      if ( !KeyHandle )
      {
        NameStoreRegistryRoot = ExpWnfGetNameStoreRegistryRoot(1, (volatile signed __int64 *)&KeyHandle);
        if ( NameStoreRegistryRoot < 0 )
          goto LABEL_29;
      }
      if ( !v2 )
      {
        v15 = KeAbPreAcquire((ULONG_PTR)(v10 + 32), 0LL, 0);
        v16 = v15;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v10 + 8, 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v10 + 4, v15, (ULONG_PTR)(v10 + 32));
        if ( v16 )
          *(_BYTE *)(v16 + 26) |= 1u;
        v2 = 1;
      }
      if ( v14 <= *((_QWORD *)v10 + 5) )
        goto LABEL_28;
      v17 = *((_QWORD *)v10 + 5) + 100LL;
      Data = v17;
      if ( v17 < v14 )
        Data = v17 + 100 * ((v14 - v17 - 1) / 0x64 + 1);
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
      _InterlockedExchange64((volatile __int64 *)v10 + 5, Data);
    }
LABEL_28:
    *a2 = v14;
    goto LABEL_29;
  }
  if ( v23 == 8 )
  {
    Data = v24;
    _InterlockedExchange64((volatile __int64 *)v10 + 3, v24);
    _InterlockedExchange64((volatile __int64 *)v10 + 5, Data);
    goto LABEL_13;
  }
  NameStoreRegistryRoot = -1073741823;
LABEL_30:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10 + 4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v10 + 4, v7, v8, v9);
  KeAbPostRelease((ULONG_PTR)(v10 + 32));
LABEL_33:
  PsDetachSiloFromCurrentThread(v5);
  return (unsigned int)NameStoreRegistryRoot;
}
