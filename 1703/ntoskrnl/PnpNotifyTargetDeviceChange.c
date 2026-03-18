/*
 * XREFs of PnpNotifyTargetDeviceChange @ 0x1404A6548
 * Callers:
 *     PnpProcessCustomDeviceEvent @ 0x140457A28 (PnpProcessCustomDeviceEvent.c)
 *     PiEventRemovalCompleteNotifyKernel @ 0x14056F260 (PiEventRemovalCompleteNotifyKernel.c)
 *     PiEventQueryRemoveNotifyKernel @ 0x14059B004 (PiEventQueryRemoveNotifyKernel.c)
 *     PnpCancelRemoveOnHungDevices @ 0x140695E4C (PnpCancelRemoveOnHungDevices.c)
 *     PiEventRemovalCanceledNotifyKernel @ 0x1406AA370 (PiEventRemovalCanceledNotifyKernel.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     PsGetServerSiloServiceSessionId @ 0x1400676A0 (PsGetServerSiloServiceSessionId.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x140189B00 (RtlCompareMemory.c)
 *     IopGetSessionIdFromPDO @ 0x1404A6410 (IopGetSessionIdFromPDO.c)
 *     PnpDereferenceNotify @ 0x1404A6E8C (PnpDereferenceNotify.c)
 *     PnpNotifyDriverCallback @ 0x140571900 (PnpNotifyDriverCallback.c)
 */

__int64 __fastcall PnpNotifyTargetDeviceChange(GUID *Source1, PVOID Object, __int64 a3, _QWORD *a4)
{
  unsigned int v7; // esi
  __int64 v8; // rbx
  __int64 *v9; // rdi
  char v10; // r13
  __int64 *v11; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  int *v14; // rdx
  int v15; // ebx
  int v16; // ecx
  GUID v17; // xmm0
  __int64 *v18; // r15
  __int64 *v19; // r13
  int v20; // ebx
  __int64 *v21; // r12
  struct _KTHREAD *v22; // rcx
  int v23; // [rsp+20h] [rbp-58h] BYREF
  int SessionIdFromPDO; // [rsp+24h] [rbp-54h]
  __int64 *v25; // [rsp+28h] [rbp-50h]
  PVOID Objecta; // [rsp+30h] [rbp-48h]
  __int64 *v27; // [rsp+38h] [rbp-40h]
  _QWORD *v28; // [rsp+40h] [rbp-38h]
  int v29; // [rsp+48h] [rbp-30h] BYREF
  GUID v30; // [rsp+4Ch] [rbp-2Ch]
  __int64 v31; // [rsp+60h] [rbp-18h]

  Objecta = Object;
  v28 = a4;
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
    v17 = *Source1;
    v29 = 2097153;
    v30 = v17;
  }
  ExAcquireFastMutex(&PnpTargetDeviceNotifyLock);
  if ( Source1 == &GUID_TARGET_DEVICE_REMOVE_CANCELLED
    || RtlCompareMemory(Source1, &GUID_TARGET_DEVICE_REMOVE_CANCELLED, 0x10uLL) == 16 )
  {
    v9 = *(__int64 **)(v8 + 480);
    v10 = 1;
  }
  else
  {
    v9 = *(__int64 **)(v8 + 472);
    v10 = 0;
  }
  v11 = (__int64 *)(v8 + 472);
  v25 = v11;
  while ( v9 != v11 )
  {
    v27 = v9;
    if ( *((_DWORD *)v9 + 5) != (unsigned int)PsGetServerSiloServiceSessionId(-1LL) )
      SessionIdFromPDO = IopGetSessionIdFromPDO((struct _DEVICE_OBJECT *)Objecta);
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
        v14 = (int *)a3;
      }
      else
      {
        v31 = v9[10];
        v14 = &v29;
      }
      v15 = PnpNotifyDriverCallback(v9, v14, &v23);
      ExReleaseResourceLite((PERESOURCE)v9[9]);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v16 = v23;
      if ( v15 < 0 )
        v16 = 0;
      v23 = v16;
      if ( v16 < 0
        && (Source1 == &GUID_TARGET_DEVICE_QUERY_REMOVE
         || RtlCompareMemory(Source1, &GUID_TARGET_DEVICE_QUERY_REMOVE, 0x10uLL) == 16) )
      {
        if ( v28 )
          *v28 = v9[6];
        v18 = v9;
        v30 = GUID_TARGET_DEVICE_REMOVE_CANCELLED;
        ExAcquireFastMutex(&PnpTargetDeviceNotifyLock);
        v19 = v25;
        do
        {
          v20 = -1;
          v21 = v9;
          if ( *((_DWORD *)v9 + 5) != (unsigned int)PsGetServerSiloServiceSessionId(-1LL) )
            v20 = IopGetSessionIdFromPDO((struct _DEVICE_OBJECT *)Objecta);
          ++*((_WORD *)v9 + 28);
          KeReleaseGuardedMutex(&PnpTargetDeviceNotifyLock);
          v22 = KeGetCurrentThread();
          --v22->KernelApcDisable;
          ExAcquireResourceExclusiveLite((PERESOURCE)v9[9], 1u);
          if ( (v20 == -1 || *((_DWORD *)v9 + 5) == v20) && !*((_BYTE *)v9 + 58) )
          {
            v31 = v9[10];
            PnpNotifyDriverCallback(v9, &v29, 0LL);
          }
          ExReleaseResourceLite((PERESOURCE)v9[9]);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          ExAcquireFastMutex(&PnpTargetDeviceNotifyLock);
          v9 = (__int64 *)v9[1];
          PnpDereferenceNotify(v21);
          if ( v21 == v18 )
            PnpDereferenceNotify(v18);
        }
        while ( v9 != v19 );
        v7 = v23;
        break;
      }
      v11 = v25;
    }
    else
    {
      ExReleaseResourceLite((PERESOURCE)v9[9]);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    }
    ExAcquireFastMutex(&PnpTargetDeviceNotifyLock);
    if ( v10 )
      v9 = (__int64 *)v9[1];
    else
      v9 = (__int64 *)*v9;
    PnpDereferenceNotify(v27);
  }
  KeReleaseGuardedMutex(&PnpTargetDeviceNotifyLock);
  ObfDereferenceObjectWithTag(Objecta, 0x4E706E50u);
  return v7;
}
