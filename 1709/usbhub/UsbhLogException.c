/*
 * XREFs of UsbhLogException @ 0x1C00505F8
 * Callers:
 *     UsbhExceptionWorker @ 0x1C0050400 (UsbhExceptionWorker.c)
 * Callees:
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 */

__int64 *__fastcall UsbhLogException(__int64 a1, __int64 a2)
{
  __int64 *v3; // rsi
  _DWORD *v4; // rdi
  _DWORD *v5; // rcx
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  unsigned __int32 v8; // eax
  __int64 *v9; // rax
  __int64 v10; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0LL;
  v4 = FdoExt(a1);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v4 + 609, &LockHandle);
  v5 = v4 + 1214;
  v6 = (_QWORD *)(a2 + 48);
  v7 = (_QWORD *)*((_QWORD *)v4 + 608);
  if ( (_DWORD *)*v7 != v4 + 1214 )
    __fastfail(3u);
  v6[1] = v7;
  *v6 = v5;
  *v7 = v6;
  *((_QWORD *)v4 + 608) = v6;
  v8 = _InterlockedIncrement(v4 + 1220);
  if ( v8 > LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) && *(_DWORD **)v5 != v5 )
  {
    v9 = *(__int64 **)v5;
    if ( *(_DWORD **)(*(_QWORD *)v5 + 8LL) != v5 || (v10 = *v9, *(__int64 **)(*v9 + 8) != v9) )
      __fastfail(3u);
    *(_QWORD *)v5 = v10;
    v3 = v9 - 6;
    *(_QWORD *)(v10 + 8) = v5;
    _InterlockedDecrement(v4 + 1220);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v3;
}
