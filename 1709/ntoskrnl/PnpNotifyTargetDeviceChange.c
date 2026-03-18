/*
 * XREFs of PnpNotifyTargetDeviceChange @ 0x14054C0B0
 * Callers:
 *     PnpProcessCustomDeviceEvent @ 0x14054AD9C (PnpProcessCustomDeviceEvent.c)
 *     PipSendTargetDeviceQueryRemoveNotification @ 0x14055BB28 (PipSendTargetDeviceQueryRemoveNotification.c)
 *     PiSendTargetDeviceRemoveCompleteNotification @ 0x14055D964 (PiSendTargetDeviceRemoveCompleteNotification.c)
 *     PnpCancelRemoveOnHungDevices @ 0x1406C1A88 (PnpCancelRemoveOnHungDevices.c)
 *     PiSendTargetDeviceRemoveCanceledNotification @ 0x1406D5448 (PiSendTargetDeviceRemoveCanceledNotification.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     PsGetServerSiloServiceSessionId @ 0x1400DF800 (PsGetServerSiloServiceSessionId.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x140189600 (RtlCompareMemory.c)
 *     IopGetSessionIdFromPDO @ 0x14055203C (IopGetSessionIdFromPDO.c)
 *     PnpDereferenceNotify @ 0x140585F14 (PnpDereferenceNotify.c)
 *     PnpNotifyDriverCallback @ 0x140586518 (PnpNotifyDriverCallback.c)
 */

__int64 __fastcall PnpNotifyTargetDeviceChange(GUID *Source1, PVOID Object, __int64 a3, _QWORD *a4)
{
  unsigned int v7; // esi
  __int64 v8; // rbx
  _QWORD *v9; // rdi
  _QWORD *v10; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  int *v13; // rdx
  int v14; // ebx
  int v15; // ecx
  GUID v16; // xmm0
  void *v17; // r15
  int v18; // ebx
  void *v19; // r12
  struct _KTHREAD *v20; // rcx
  char v21; // [rsp+20h] [rbp-58h]
  int v22; // [rsp+24h] [rbp-54h] BYREF
  int SessionIdFromPDO; // [rsp+28h] [rbp-50h]
  _QWORD *v24; // [rsp+30h] [rbp-48h]
  PVOID P; // [rsp+38h] [rbp-40h]
  _QWORD *v26; // [rsp+40h] [rbp-38h]
  int v27; // [rsp+48h] [rbp-30h] BYREF
  GUID v28; // [rsp+4Ch] [rbp-2Ch]
  __int64 v29; // [rsp+60h] [rbp-18h]

  v26 = a4;
  SessionIdFromPDO = -1;
  ObfReferenceObjectWithTag(Object, 0x4E706E50u);
  v7 = 0;
  v8 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
  if ( a3 )
  {
    *(_WORD *)a3 = 1;
  }
  else
  {
    v16 = *Source1;
    v27 = 2097153;
    v28 = v16;
  }
  ExAcquireFastMutex(&PnpTargetDeviceNotifyLock);
  if ( Source1 == &GUID_TARGET_DEVICE_REMOVE_CANCELLED
    || RtlCompareMemory(Source1, &GUID_TARGET_DEVICE_REMOVE_CANCELLED, 0x10uLL) == 16 )
  {
    v9 = *(_QWORD **)(v8 + 480);
    v21 = 1;
  }
  else
  {
    v9 = *(_QWORD **)(v8 + 472);
    v21 = 0;
  }
  v10 = (_QWORD *)(v8 + 472);
  v24 = v10;
  while ( v9 != v10 )
  {
    P = v9;
    if ( *((_DWORD *)v9 + 5) != (unsigned int)PsGetServerSiloServiceSessionId(-1LL) )
      SessionIdFromPDO = IopGetSessionIdFromPDO(Object);
    ++*((_WORD *)v9 + 28);
    KeReleaseGuardedMutex(&PnpTargetDeviceNotifyLock);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)v9[9], 1u);
    if ( (SessionIdFromPDO == -1 || *((_DWORD *)v9 + 5) == SessionIdFromPDO) && !*((_BYTE *)v9 + 58) )
    {
      if ( a3 )
      {
        *(_QWORD *)(a3 + 24) = v9[10];
        v13 = (int *)a3;
      }
      else
      {
        v29 = v9[10];
        v13 = &v27;
      }
      v14 = PnpNotifyDriverCallback(v9, v13, &v22);
      ExReleaseResourceLite((PERESOURCE)v9[9]);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v15 = v22;
      if ( v14 < 0 )
        v15 = 0;
      v22 = v15;
      if ( v15 < 0
        && (Source1 == &GUID_TARGET_DEVICE_QUERY_REMOVE
         || RtlCompareMemory(Source1, &GUID_TARGET_DEVICE_QUERY_REMOVE, 0x10uLL) == 16) )
      {
        if ( v26 )
          *v26 = v9[6];
        v17 = v9;
        v28 = GUID_TARGET_DEVICE_REMOVE_CANCELLED;
        ExAcquireFastMutex(&PnpTargetDeviceNotifyLock);
        do
        {
          v18 = -1;
          v19 = v9;
          if ( *((_DWORD *)v9 + 5) != (unsigned int)PsGetServerSiloServiceSessionId(-1LL) )
            v18 = IopGetSessionIdFromPDO(Object);
          ++*((_WORD *)v9 + 28);
          KeReleaseGuardedMutex(&PnpTargetDeviceNotifyLock);
          v20 = KeGetCurrentThread();
          --v20->KernelApcDisable;
          ExAcquireResourceExclusiveLite((PERESOURCE)v9[9], 1u);
          if ( (v18 == -1 || *((_DWORD *)v9 + 5) == v18) && !*((_BYTE *)v9 + 58) )
          {
            v29 = v9[10];
            PnpNotifyDriverCallback(v9, &v27, 0LL);
          }
          ExReleaseResourceLite((PERESOURCE)v9[9]);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          ExAcquireFastMutex(&PnpTargetDeviceNotifyLock);
          v9 = (_QWORD *)v9[1];
          PnpDereferenceNotify(v19);
          if ( v19 == v17 )
            PnpDereferenceNotify(v17);
        }
        while ( v9 != v24 );
        v7 = v22;
        break;
      }
      v10 = v24;
    }
    else
    {
      ExReleaseResourceLite((PERESOURCE)v9[9]);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
    ExAcquireFastMutex(&PnpTargetDeviceNotifyLock);
    if ( v21 )
      v9 = (_QWORD *)v9[1];
    else
      v9 = (_QWORD *)*v9;
    PnpDereferenceNotify(P);
  }
  KeReleaseGuardedMutex(&PnpTargetDeviceNotifyLock);
  ObfDereferenceObjectWithTag(Object, 0x4E706E50u);
  return v7;
}
