/*
 * XREFs of UsbhHubProcessChangeWorker @ 0x1C000D020
 * Callers:
 *     <none>
 * Callees:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C000ED90 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 *     UsbhTrapFatalTimeout_x9f @ 0x1C003CEC0 (UsbhTrapFatalTimeout_x9f.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D4D4 (WPP_RECORDER_SF_dq.c)
 */

void __fastcall UsbhHubProcessChangeWorker(PDEVICE_OBJECT DeviceObject, unsigned __int16 *Context, int a3)
{
  _DWORD *DeviceExtension; // rdx
  __int64 v6; // r12
  struct _KEVENT *v7; // r14
  struct _KEVENT *v8; // r15
  __int64 Signalling; // r8
  void *v10; // rcx
  __int64 v11; // rdx
  _QWORD *PoolWithTag; // rax
  __int64 v13; // rbx
  _LIST_ENTRY *p_WaitListHead; // r14
  char *v15; // rax
  char **Blink; // rcx
  KIRQL v17; // al
  void *v18; // rdx
  __int64 v19; // rcx
  _DWORD *v20; // rdx
  KIRQL v21; // r8
  __int64 v22; // r9
  void *v23; // rcx
  __int64 v24; // rdx
  struct _KEVENT *v25; // r14
  __int64 v26; // rcx
  void *v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  _QWORD *v30; // rax
  _QWORD *v31; // rdx
  unsigned int v32; // eax
  __int64 v33; // rdx
  volatile int Lock; // eax
  __int64 v35; // [rsp+80h] [rbp+8h]
  union _LARGE_INTEGER Timeout; // [rsp+90h] [rbp+18h] BYREF

  if ( !DeviceObject )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  DeviceExtension = DeviceObject->DeviceExtension;
  if ( !DeviceExtension )
    UsbhTrapFatal_Dbg(DeviceObject, 0LL);
  if ( *DeviceExtension != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceExtension);
  v6 = Context[2];
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)DeviceExtension,
      a3,
      100,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      v6,
      (char)Context);
  v7 = (struct _KEVENT *)DeviceObject->DeviceExtension;
  if ( !v7 )
    UsbhTrapFatal_Dbg(DeviceObject, 0LL);
  if ( v7->Header.LockNV != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceObject->DeviceExtension);
  v8 = v7 + 139;
  v7[142].Header.Type = 1;
  KeWaitForSingleObject(&v7[139], Executive, 0, 0, 0LL);
  Signalling = v7[142].Header.Signalling;
  if ( (UsbhLogMask & 0x10000) != 0 )
  {
    v10 = DeviceObject->DeviceExtension;
    if ( v10 )
    {
      v11 = *((_QWORD *)v10 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v10 + 220) & *((_DWORD *)v10 + 221));
      *(_DWORD *)v11 = 1668172104;
      *(_QWORD *)(v11 + 8) = 0LL;
      *(_QWORD *)(v11 + 16) = 0LL;
      *(_QWORD *)(v11 + 24) = Signalling;
    }
  }
  if ( v7[142].Header.Signalling )
  {
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x28uLL, 0x42554855u);
    v13 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      p_WaitListHead = &v7[129].Header.WaitListHead;
      *PoolWithTag = 0LL;
      PoolWithTag[1] = 0LL;
      PoolWithTag[2] = 0LL;
      PoolWithTag[4] = 0LL;
      v15 = (char *)(PoolWithTag + 1);
      *(_DWORD *)v13 = 1215918946;
      *(_QWORD *)(v13 + 24) = Context;
      *(_DWORD *)(v13 + 32) = 1129345907;
      Blink = (char **)p_WaitListHead->Blink;
      if ( *Blink != (char *)p_WaitListHead )
        __fastfail(3u);
      *(_QWORD *)v15 = p_WaitListHead;
      *(_QWORD *)(v13 + 16) = Blink;
      *Blink = v15;
      p_WaitListHead->Blink = (_LIST_ENTRY *)v15;
    }
    else
    {
      ++v7[130].Header.LockNV;
      v13 = 1936941672LL;
    }
    KeSetEvent(v8, 0, 0);
  }
  else
  {
    KeSetEvent(v7 + 139, 0, 0);
    v13 = 0LL;
  }
  Timeout.QuadPart = -6600000000LL - (int)(KeQueryTimeIncrement() - 1);
  if ( KeWaitForSingleObject(Context + 1232, Executive, 0, 0, &Timeout) == 258 )
  {
    v32 = *((_DWORD *)Context + 711);
    v33 = 10LL;
    if ( v32 )
      v33 = v32;
    UsbhTrapFatalTimeout_x9f(DeviceObject, v33, Context);
  }
  v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 306);
  *((_DWORD *)Context + 603) = 2;
  KeReleaseSpinLock((PKSPIN_LOCK)Context + 306, v17);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v18 = DeviceObject->DeviceExtension;
    if ( v18 )
    {
      v19 = *((_QWORD *)v18 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v18 + 220) & *((_DWORD *)v18 + 221));
      *(_DWORD *)v19 = 1464029256;
      *(_QWORD *)(v19 + 8) = 0LL;
      *(_QWORD *)(v19 + 16) = Context;
      *(_QWORD *)(v19 + 24) = v6;
    }
  }
  v20 = DeviceObject->DeviceExtension;
  if ( !v20 )
    UsbhTrapFatal_Dbg(DeviceObject, 0LL);
  if ( *v20 != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, v20);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      57,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      Context[2]);
  LODWORD(v35) = 0;
  UsbhDispatch_PortChangeQueueEventEx((_DWORD)DeviceObject, (_DWORD)Context, 5, (_DWORD)Context + 24, v35, 0, 0LL, 0LL);
  KeSetEvent((PRKEVENT)(Context + 1232), 0, 0);
  v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 306);
  v22 = *((unsigned int *)Context + 603);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v23 = DeviceObject->DeviceExtension;
    if ( v23 )
    {
      v24 = *((_QWORD *)v23 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v23 + 220) & *((_DWORD *)v23 + 221));
      *(_DWORD *)v24 = 1682133064;
      *(_QWORD *)(v24 + 8) = 0LL;
      *(_QWORD *)(v24 + 16) = v22;
      *(_QWORD *)(v24 + 24) = v6;
    }
  }
  if ( *((_DWORD *)Context + 603) == 2 )
    *((_DWORD *)Context + 603) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)Context + 306, v21);
  v25 = (struct _KEVENT *)DeviceObject->DeviceExtension;
  if ( !v25 )
    UsbhTrapFatal_Dbg(DeviceObject, 0LL);
  if ( v25->Header.LockNV != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceObject->DeviceExtension);
  v25[142].Header.Type = 1;
  KeWaitForSingleObject(&v25[139], Executive, 0, 0, 0LL);
  v26 = v25[142].Header.Signalling;
  if ( (UsbhLogMask & 0x10000) != 0 )
  {
    v27 = DeviceObject->DeviceExtension;
    if ( v27 )
    {
      v28 = *((_QWORD *)v27 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v27 + 220) & *((_DWORD *)v27 + 221));
      *(_DWORD *)v28 = 1667581000;
      *(_QWORD *)(v28 + 8) = 0LL;
      *(_QWORD *)(v28 + 16) = v13;
      *(_QWORD *)(v28 + 24) = v26;
    }
  }
  if ( v25[142].Header.Signalling )
  {
    if ( v13 == 1936941672 )
    {
      Lock = v25[130].Header.Lock;
      if ( Lock )
        v25[130].Header.LockNV = Lock - 1;
    }
    else if ( v13 )
    {
      v29 = *(_QWORD *)(v13 + 8);
      v30 = (_QWORD *)(v13 + 8);
      if ( *(_QWORD *)(v29 + 8) != v13 + 8 || (v31 = *(_QWORD **)(v13 + 16), (_QWORD *)*v31 != v30) )
        __fastfail(3u);
      *v31 = v29;
      *(_QWORD *)(v29 + 8) = v31;
      *(_QWORD *)(v13 + 16) = v13 + 8;
      *v30 = v30;
      ExFreePoolWithTag((PVOID)v13, 0);
    }
  }
  KeSetEvent(v25 + 139, 0, 0);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Context + 610, 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(Context + 1208), 0, 0);
}
