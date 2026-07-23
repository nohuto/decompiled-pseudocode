/*
 * XREFs of PiUEventNotifyTargetDeviceChange @ 0x1404A6744
 * Callers:
 *     PiUEventProcessEventWorker @ 0x1404647D0 (PiUEventProcessEventWorker.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     PiUEventHashStringIntoBucket @ 0x14003DC1C (PiUEventHashStringIntoBucket.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     _wcsicmp @ 0x14016A0F0 (_wcsicmp.c)
 *     ZwUpdateWnfStateData @ 0x140181740 (ZwUpdateWnfStateData.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PiUEventNotifyClient @ 0x1404A69CC (PiUEventNotifyClient.c)
 *     PiUEventApplyAdditionalFilters @ 0x1404A6BE8 (PiUEventApplyAdditionalFilters.c)
 */

__int64 __fastcall PiUEventNotifyTargetDeviceChange(__int64 a1)
{
  _DWORD *v1; // rdi
  char v2; // si
  int v3; // r15d
  unsigned int v4; // ebp
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // ecx
  __int64 v12; // rax
  const WCHAR *v13; // r13
  _QWORD **v14; // r12
  _QWORD *v15; // r14
  char v16; // al
  _QWORD *v17; // rsi
  __int64 v19; // rdx
  _DWORD *PoolWithTag; // rax
  ULONG v21; // r8d
  char v22; // [rsp+80h] [rbp+8h]
  char v23; // [rsp+88h] [rbp+10h]

  v1 = 0LL;
  v2 = 0;
  v22 = 0;
  v3 = 0;
  v23 = 0;
  v4 = 0;
  v6 = *(_QWORD *)(a1 + 72) - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
  if ( !v6 )
    v6 = *(_QWORD *)(a1 + 80) - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
  if ( !v6 )
    goto LABEL_16;
  v7 = *(_QWORD *)(a1 + 72) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1;
  if ( !v7 )
    v7 = *(_QWORD *)(a1 + 80) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4;
  if ( !v7 )
    goto LABEL_16;
  v8 = *(_QWORD *)(a1 + 72) - *(_QWORD *)&GUID_DEVICE_REMOVE_PENDING.Data1;
  if ( !v8 )
    v8 = *(_QWORD *)(a1 + 80) - *(_QWORD *)GUID_DEVICE_REMOVE_PENDING.Data4;
  if ( !v8 )
    goto LABEL_16;
  v9 = *(_QWORD *)(a1 + 72) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
  if ( !v9 )
    v9 = *(_QWORD *)(a1 + 80) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
  if ( !v9 )
    goto LABEL_16;
  v10 = *(_QWORD *)(a1 + 72) - *(_QWORD *)&GUID_PNP_CUSTOM_NOTIFICATION.Data1;
  if ( !v10 )
    v10 = *(_QWORD *)(a1 + 80) - *(_QWORD *)GUID_PNP_CUSTOM_NOTIFICATION.Data4;
  if ( !v10 )
  {
LABEL_16:
    v11 = *(_DWORD *)(a1 + 88) - 1;
    if ( v11 )
    {
      if ( v11 != 2 )
        return (unsigned int)v3;
      v22 = 1;
      v12 = 128LL;
    }
    else
    {
      v12 = 120LL;
    }
    v13 = (const WCHAR *)(v12 + a1);
    if ( *(_BYTE *)(a1 + 68) )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x59706E50u);
      v1 = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741670;
      memset(PoolWithTag, 0, 0x1000uLL);
      v4 = 1;
    }
    ExAcquireFastMutex(&PiUEventClientRegistrationListLock);
    v14 = (_QWORD **)((char *)&PiUEventDevHandleClientList + 16 * (unsigned int)PiUEventHashStringIntoBucket(v13));
    v15 = *v14;
    if ( *v14 != v14 )
    {
      v16 = v22;
      do
      {
        v17 = v15;
        v15 = (_QWORD *)*v15;
        if ( !v16 || !*((_BYTE *)v17 + 40) )
        {
          if ( wcsicmp(v13, *(const wchar_t **)(v17[3] + 16LL))
            || !(unsigned __int8)PiUEventApplyAdditionalFilters(a1, v17)
            || (v3 = PiUEventNotifyClient(a1, v17), v3 < 0) )
          {
            v16 = v22;
          }
          else
          {
            v16 = v22;
            if ( v1 )
            {
              if ( v4 >= 0x400 )
              {
                v2 = 1;
                v23 = 1;
                continue;
              }
              v19 = v4++;
              v1[v19] = *((_DWORD *)v17 + 12);
            }
          }
        }
        v2 = v23;
      }
      while ( v15 != v14 );
    }
    if ( v1 && v4 > 1 )
    {
      if ( v2 )
      {
        memset(v1, 0, 0x1000uLL);
        *v1 = -1;
        v21 = 4;
      }
      else
      {
        v21 = 4096;
        *v1 = v4 - 1;
      }
      ZwUpdateWnfStateData(&WNF_PNPB_AWAITING_RESPONSE, v1, v21, 0LL, 0LL, 0, 0);
    }
    KeReleaseGuardedMutex(&PiUEventClientRegistrationListLock);
    if ( v1 )
      ExFreePoolWithTag(v1, 0x59706E50u);
  }
  return (unsigned int)v3;
}
