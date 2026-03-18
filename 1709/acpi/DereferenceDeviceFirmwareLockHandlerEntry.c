/*
 * XREFs of DereferenceDeviceFirmwareLockHandlerEntry @ 0x1C0047AA4
 * Callers:
 *     AcquireDeviceFirmwareLock @ 0x1C0047808 (AcquireDeviceFirmwareLock.c)
 *     ReleaseDeviceFirmwareLock @ 0x1C0047ED4 (ReleaseDeviceFirmwareLock.c)
 *     AcpiUnregisterDeviceFirmwareLockHandler @ 0x1C00A0B5C (AcpiUnregisterDeviceFirmwareLockHandler.c)
 * Callees:
 *     <none>
 */

void __fastcall DereferenceDeviceFirmwareLockHandlerEntry(PVOID **P, char a2)
{
  char v2; // bp
  char v3; // si
  KIRQL v6; // r8
  PVOID *v7; // rcx
  PVOID *v8; // rdx
  char *v9; // rax
  _QWORD *v10; // rcx
  __int64 v11; // rdx
  PVOID *v12; // rcx
  struct _KEVENT Object; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  v3 = 0;
  if ( a2 )
    KeInitializeEvent(&Object, SynchronizationEvent, 0);
  v6 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceFirmwareLockGlobalLock);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 16, 0xFFFFFFFF) == 1 )
  {
    v7 = *P;
    if ( (*P)[1] != P || (v8 = P[1], *v8 != P) )
      __fastfail(3u);
    *v8 = v7;
    v9 = (char *)(P + 2);
    v7[1] = v8;
    while ( *(char **)v9 == v9 )
    {
      v10 = *(_QWORD **)v9;
      if ( *(char **)(*(_QWORD *)v9 + 8LL) != v9 || (v11 = *v10, *(_QWORD **)(*v10 + 8LL) != v10) )
        __fastfail(3u);
      *(_QWORD *)v9 = v11;
      *(_QWORD *)(v11 + 8) = v9;
      v10[2] = 0LL;
    }
    v3 = 1;
  }
  else if ( a2 )
  {
    *((_BYTE *)P + 68) = 1;
    P[9] = (PVOID *)&Object;
    v2 = 1;
  }
  KeReleaseSpinLock(&AcpiDeviceFirmwareLockGlobalLock, v6);
  if ( v3 )
  {
    if ( *((_BYTE *)P + 68) )
      KeSetEvent((PRKEVENT)P[9], 0, 0);
    v12 = P[4];
    if ( v12 )
      ObfDereferenceObjectWithTag(v12, 0x4F706341u);
    ExFreePoolWithTag(P, 0x4F706341u);
  }
  else if ( v2 )
  {
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  }
}
