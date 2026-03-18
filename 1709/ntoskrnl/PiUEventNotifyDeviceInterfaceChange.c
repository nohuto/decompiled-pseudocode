/*
 * XREFs of PiUEventNotifyDeviceInterfaceChange @ 0x140555318
 * Callers:
 *     PiUEventProcessEventWorker @ 0x14054AE00 (PiUEventProcessEventWorker.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     PiUEventHashGuidIntoBucket @ 0x14012B5E8 (PiUEventHashGuidIntoBucket.c)
 *     PiUEventNotifyClient @ 0x14054D5CC (PiUEventNotifyClient.c)
 *     PiUEventApplyAdditionalFilters @ 0x14054D7E8 (PiUEventApplyAdditionalFilters.c)
 */

__int64 __fastcall PiUEventNotifyDeviceInterfaceChange(__int64 a1)
{
  unsigned int v1; // r12d
  __int64 v3; // rax
  char **v4; // r15
  unsigned int v5; // esi
  char *v6; // r14
  char *v7; // rdi
  __int64 v8; // rbp
  __int64 v9; // rcx
  __int64 v11; // rax
  char *v12; // [rsp+20h] [rbp-38h] BYREF
  void *v13; // [rsp+28h] [rbp-30h]

  v1 = 0;
  v12 = 0LL;
  v13 = 0LL;
  v3 = *(_QWORD *)(a1 + 72) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
  if ( !v3 )
    v3 = *(_QWORD *)(a1 + 80) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
  if ( !v3 )
    goto LABEL_4;
  v11 = *(_QWORD *)(a1 + 72) - *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1;
  if ( !v11 )
    v11 = *(_QWORD *)(a1 + 80) - *(_QWORD *)GUID_DEVICE_INTERFACE_REMOVAL.Data4;
  if ( !v11 )
  {
LABEL_4:
    ExAcquireFastMutex(&PiUEventClientRegistrationListLock);
    v4 = &v12;
    v13 = &unk_140384270;
    v5 = 0;
    v12 = (char *)&PiUEventDevInterfaceClientList
        + 16 * (unsigned int)PiUEventHashGuidIntoBucket((unsigned __int8 *)(a1 + 120));
    do
    {
      v6 = *v4;
      v7 = *(char **)*v4;
      while ( v7 != v6 )
      {
        v8 = (__int64)v7;
        v7 = *(char **)v7;
        if ( !v5 )
        {
          v9 = *(_QWORD *)(a1 + 120) - *(_QWORD *)(v8 + 24);
          if ( !v9 )
            v9 = *(_QWORD *)(a1 + 128) - *(_QWORD *)(v8 + 32);
          if ( v9 )
            continue;
        }
        if ( PiUEventApplyAdditionalFilters(a1, v8) )
          v1 = PiUEventNotifyClient(a1, v8);
      }
      ++v5;
      ++v4;
    }
    while ( v5 < 2 );
    KeReleaseGuardedMutex(&PiUEventClientRegistrationListLock);
  }
  return v1;
}
