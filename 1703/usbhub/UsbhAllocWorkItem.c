/*
 * XREFs of UsbhAllocWorkItem @ 0x1C0002448
 * Callers:
 *     UsbhFdoScheduleDeferredPowerRequest @ 0x1C0001628 (UsbhFdoScheduleDeferredPowerRequest.c)
 *     UsbhQueueWorkItemEx @ 0x1C00022F4 (UsbhQueueWorkItemEx.c)
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C00285B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00289C0 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 */

struct _LIST_ENTRY *__fastcall UsbhAllocWorkItem(_LIST_ENTRY *a1, _LIST_ENTRY *a2, __int64 a3, int a4, int a5, char a6)
{
  __int64 v10; // r14
  struct _LIST_ENTRY *PoolWithTag; // rax
  struct _LIST_ENTRY *v12; // rbx
  __int64 (__fastcall *v13)(_LIST_ENTRY *, __int64); // rax
  __int64 v14; // rdx
  __int64 v15; // rax

  v10 = FdoExt(a1);
  if ( a5 != 2001228627 )
    Log((_DWORD)a1, 8, 1633110861, a4, a3);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      45,
      (__int64)&WPP_769f670b4daf3a39507e1b81909708b8_Traceguids,
      a4);
  PoolWithTag = (struct _LIST_ENTRY *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x48uLL, 0x42554855u);
  v12 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  memset(PoolWithTag, 0, 0x48uLL);
  v13 = *(__int64 (__fastcall **)(_LIST_ENTRY *, __int64))(FdoExt(a1) + 4768);
  if ( !v13 || (LOBYTE(v14) = a6, (v15 = v13(a1, v14)) == 0) )
  {
    ExFreePoolWithTag(v12, 0);
    return 0LL;
  }
  v12[2].Blink = (_LIST_ENTRY *)v15;
  LODWORD(v12->Flink) = 1230463592;
  HIDWORD(v12->Flink) = a5;
  HIDWORD(v12->Blink) = a4;
  v12[2].Flink = (_LIST_ENTRY *)a3;
  v12[1].Flink = a1;
  v12[1].Blink = a2;
  ExInterlockedInsertTailList((PLIST_ENTRY)(v10 + 2784), v12 + 3, (PKSPIN_LOCK)(v10 + 2800));
  if ( HIDWORD(v12->Flink) != 2001228627 )
    Log((_DWORD)a1, 8, 1464552747, 0, (__int64)v12);
  return v12;
}
