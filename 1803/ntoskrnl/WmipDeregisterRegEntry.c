/*
 * XREFs of WmipDeregisterRegEntry @ 0x140162060
 * Callers:
 *     WmipDeregisterDevice @ 0x1406007DC (WmipDeregisterDevice.c)
 *     WmipRegisterDevice @ 0x140600958 (WmipRegisterDevice.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     ExFreeToNPagedLookasideList @ 0x140060D7C (ExFreeToNPagedLookasideList.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     WmipUnreferenceRegEntry @ 0x1400739AC (WmipUnreferenceRegEntry.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1400FD530 (KeReleaseMutex.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     WmipRemoveDS @ 0x140600D04 (WmipRemoveDS.c)
 */

void __fastcall WmipDeregisterRegEntry(char *Entry)
{
  KIRQL v2; // si
  signed __int32 v3; // edi
  KIRQL v4; // al
  char **v5; // r8
  KIRQL v6; // si
  PVOID *v7; // rdx
  void *v8; // rcx
  __int16 Object; // [rsp+30h] [rbp-28h] BYREF
  char v10; // [rsp+32h] [rbp-26h]
  int v11; // [rsp+34h] [rbp-24h]
  _QWORD v12[4]; // [rsp+38h] [rbp-20h] BYREF

  v11 = 0;
  Object = 1;
  v10 = 6;
  v12[1] = v12;
  v12[0] = v12;
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v2 = KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
  *((_QWORD *)Entry + 5) = &Object;
  _m_prefetchw(Entry + 48);
  v3 = _InterlockedOr((volatile signed __int32 *)Entry + 12, 0xA0000000);
  KxReleaseSpinLock(&WmipRegistrationSpinLock);
  __writecr8(v2);
  KeReleaseMutex(&WmipSMMutex, 0);
  WmipUnreferenceRegEntry((__int64)Entry);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v4 = KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
  v5 = *(char ***)Entry;
  v6 = v4;
  --WmipInUseRegEntryCount;
  if ( v5[1] != Entry || (v7 = (PVOID *)*((_QWORD *)Entry + 1), *v7 != Entry) )
    __fastfail(3u);
  *v7 = v5;
  v5[1] = (char *)v7;
  KxReleaseSpinLock(&WmipRegistrationSpinLock);
  __writecr8(v6);
  KeReleaseMutex(&WmipSMMutex, 0);
  if ( (v3 & 0x10000000) == 0 )
    ObfDereferenceObjectWithTag(*((PVOID *)Entry + 2), 0x746C6644u);
  v8 = (void *)*((_QWORD *)Entry + 3);
  if ( v8 )
    ObfDereferenceObjectWithTag(v8, 0x746C6644u);
  WmipRemoveDS(Entry);
  ExFreeToNPagedLookasideList(&WmipRegLookaside, Entry);
}
