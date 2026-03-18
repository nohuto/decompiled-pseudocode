/*
 * XREFs of PiUEventNotifyDeviceInstanceChange @ 0x140597F48
 * Callers:
 *     PiUEventProcessEventWorker @ 0x14054AE00 (PiUEventProcessEventWorker.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     PiUEventHashStringIntoBucket @ 0x1400FB37C (PiUEventHashStringIntoBucket.c)
 *     _wcsicmp @ 0x14015EB30 (_wcsicmp.c)
 *     PiUEventNotifyClient @ 0x14054D5CC (PiUEventNotifyClient.c)
 *     PiUEventApplyAdditionalFilters @ 0x14054D7E8 (PiUEventApplyAdditionalFilters.c)
 */

__int64 __fastcall PiUEventNotifyDeviceInstanceChange(__int64 a1)
{
  int v1; // edx
  unsigned int v2; // r12d
  int v4; // edx
  char **v5; // r15
  unsigned int v6; // esi
  char *v7; // r14
  char *v8; // rbx
  __int64 v10; // rbp
  char *v11; // [rsp+20h] [rbp-38h] BYREF
  void *v12; // [rsp+28h] [rbp-30h]

  v1 = *(_DWORD *)(a1 + 88);
  v2 = 0;
  v11 = 0LL;
  v12 = 0LL;
  v4 = v1 - 4;
  if ( !v4 || (unsigned int)(v4 - 6) <= 1 )
  {
    ExAcquireFastMutex(&PiUEventClientRegistrationListLock);
    v5 = &v11;
    v11 = (char *)&PiUEventDevInstanceClientList + 16 * (unsigned int)PiUEventHashStringIntoBucket((PCWSTR)(a1 + 120));
    v6 = 0;
    v12 = &unk_140384350;
    do
    {
      v7 = *v5;
      v8 = *(char **)*v5;
      while ( v8 != v7 )
      {
        v10 = (__int64)v8;
        v8 = *(char **)v8;
        if ( v6 || !wcsicmp((const wchar_t *)(a1 + 120), *(const wchar_t **)(*(_QWORD *)(v10 + 24) + 16LL)) )
        {
          if ( PiUEventApplyAdditionalFilters(a1, v10) )
            v2 = PiUEventNotifyClient(a1, v10);
        }
      }
      ++v6;
      ++v5;
    }
    while ( v6 < 2 );
    KeReleaseGuardedMutex(&PiUEventClientRegistrationListLock);
  }
  return v2;
}
