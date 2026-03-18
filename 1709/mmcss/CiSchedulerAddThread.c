/*
 * XREFs of CiSchedulerAddThread @ 0x1C00028EC
 * Callers:
 *     CiThreadCreate @ 0x1C000A9F4 (CiThreadCreate.c)
 * Callees:
 *     CiSystemUpdateThreadTag @ 0x1C00028A8 (CiSystemUpdateThreadTag.c)
 *     CiSchedulerSetPriority @ 0x1C0003088 (CiSchedulerSetPriority.c)
 */

void __fastcall CiSchedulerAddThread(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *SystemArgument2; // r8
  PVOID **v6; // rdx
  _QWORD *v7; // rcx
  _QWORD *v8; // rdx

  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
  v4 = (_QWORD *)(a1 + 32);
  if ( (_QWORD *)*v4 == v4 )
  {
    SystemArgument2 = WPP_MAIN_CB.Dpc.SystemArgument2;
    v6 = (PVOID **)(a1 + 16);
    if ( *(struct _DEVICE_OBJECT **)WPP_MAIN_CB.Dpc.SystemArgument2 != (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.Dpc.SystemArgument1 )
      __fastfail(3u);
    *v6 = &WPP_MAIN_CB.Dpc.SystemArgument1;
    *(_QWORD *)(a1 + 24) = SystemArgument2;
    *SystemArgument2 = v6;
    WPP_MAIN_CB.Dpc.SystemArgument2 = (PVOID)(a1 + 16);
  }
  *(_BYTE *)(a2 + 107) = -1;
  v7 = (_QWORD *)(a2 + 80);
  v8 = *(_QWORD **)(a1 + 40);
  if ( (_QWORD *)*v8 != v4 )
    __fastfail(3u);
  *v7 = v4;
  *(_QWORD *)(a2 + 88) = v8;
  *v8 = v7;
  *(_QWORD *)(a1 + 40) = v7;
  CiSchedulerSetPriority(a2);
  if ( (*(_DWORD *)(a1 + 184) & 2) != 0 )
    CiSystemUpdateThreadTag(a2, 1u);
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
}
