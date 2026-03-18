/*
 * XREFs of UsbhLogException @ 0x1C004F928
 * Callers:
 *     UsbhExceptionWorker @ 0x1C004F730 (UsbhExceptionWorker.c)
 * Callees:
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 */

__int64 *__fastcall UsbhLogException(__int64 a1, __int64 a2)
{
  __int64 *v3; // rsi
  _DWORD *v4; // rdi
  __int64 **v5; // rcx
  __int64 ***v6; // rbx
  __int64 **v7; // rax
  unsigned __int32 v8; // eax
  __int64 *v9; // rax
  __int64 v10; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0LL;
  v4 = FdoExt(a1);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v4 + 609, &LockHandle);
  v5 = (__int64 **)(v4 + 1214);
  v6 = (__int64 ***)(a2 + 48);
  v7 = (__int64 **)*((_QWORD *)v4 + 608);
  if ( *v7 != (__int64 *)(v4 + 1214) )
    __fastfail(3u);
  v6[1] = v7;
  *v6 = v5;
  *v7 = (__int64 *)v6;
  *((_QWORD *)v4 + 608) = v6;
  v8 = _InterlockedIncrement(v4 + 1220);
  if ( v8 > LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) && *v5 != (__int64 *)v5 )
  {
    v9 = *v5;
    v10 = **v5;
    if ( (__int64 **)(*v5)[1] != v5 || *(__int64 **)(v10 + 8) != v9 )
      __fastfail(3u);
    *v5 = (__int64 *)v10;
    v3 = v9 - 6;
    *(_QWORD *)(v10 + 8) = v5;
    _InterlockedDecrement(v4 + 1220);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v3;
}
