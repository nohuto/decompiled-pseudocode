/*
 * XREFs of DeviceRemove @ 0x1C0001EC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C00011A8 (WPP_RECORDER_SF_q.c)
 *     McGenEventUnregister @ 0x1C0001A68 (McGenEventUnregister.c)
 *     _guard_dispatch_icall_nop @ 0x1C0009630 (_guard_dispatch_icall_nop.c)
 *     WmiUnregisterProvider @ 0x1C001EE3C (WmiUnregisterProvider.c)
 */

ULONG __fastcall DeviceRemove(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  void *v4; // rcx
  KIRQL v5; // al
  __int64 v6; // r8
  _QWORD *v7; // rdx
  PREGHANDLE v8; // rcx

  v2 = *(_QWORD **)(a1 + 16);
  WPP_RECORDER_SF_q(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    a2,
    1u,
    0x18u,
    (__int64)&WPP_f0533e5d5f783f1fc772c257a08fb41e_Traceguids,
    a1);
  v4 = (void *)v2[63];
  if ( v4 )
  {
    PoDeletePowerRequest(v4);
    v2[63] = 0LL;
  }
  (*(void (__fastcall **)(__int64))(pExtBusDeviceDispatchTable + 24))(a1);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters);
  v6 = *v2;
  if ( *(_QWORD **)(*v2 + 8LL) != v2 || (v7 = (_QWORD *)v2[1], (_QWORD *)*v7 != v2) )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  --WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters, v5);
  WmiUnregisterProvider(a1);
  return McGenEventUnregister(v8);
}
