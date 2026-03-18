/*
 * XREFs of CmSetCallbackObjectContext @ 0x140660300
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140679E44 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpPostOpenOrCreate @ 0x14067BEA8 (VrpPostOpenOrCreate.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall CmSetCallbackObjectContext(PVOID Object, PLARGE_INTEGER Cookie, PVOID NewContext, PVOID *OldContext)
{
  char v4; // r12
  NTSTATUS v9; // edi
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v11; // rax
  _QWORD *v12; // r14
  _QWORD *v13; // rsi
  LONGLONG QuadPart; // rcx
  LONGLONG v15; // rax
  void *v16; // rax
  struct _KTHREAD *v17; // rax
  __int64 *v18; // rbx
  LARGE_INTEGER *PoolWithTag; // rax
  LONGLONG *v20; // rcx
  __int64 *v21; // rbx
  LARGE_INTEGER *v22; // rax
  LARGE_INTEGER **v23; // rdx
  LONGLONG v24; // rax
  LONGLONG v25; // rdx

  v4 = 0;
  v9 = -1073741275;
  if ( !Object || *(_DWORD *)Object != 1803104306 )
    return -1073741585;
  if ( OldContext )
    *OldContext = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
  v11 = KeGetCurrentThread();
  --v11->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&CmpContextListLock, 0LL);
  v12 = (char *)Object + 72;
  while ( 1 )
  {
    v13 = (_QWORD *)*v12;
    if ( (_QWORD *)*v12 != v12 )
    {
      QuadPart = Cookie->QuadPart;
      while ( 1 )
      {
        v15 = v13[4];
        if ( v15 == QuadPart )
          break;
        if ( v15 >= QuadPart )
        {
          v13 = (_QWORD *)*v13;
          if ( v13 != v12 )
            continue;
        }
        goto LABEL_15;
      }
      v16 = (void *)_InterlockedExchange64(v13 + 7, (__int64)NewContext);
      if ( OldContext )
        *OldContext = v16;
      v9 = 0;
    }
LABEL_15:
    if ( v9 >= 0 )
      break;
    if ( v4 )
    {
      v18 = (__int64 *)CallbackListHead;
      if ( (__int64 *)CallbackListHead == &CallbackListHead )
      {
LABEL_21:
        v18 = 0LL;
      }
      else
      {
        while ( Cookie->QuadPart != v18[3] )
        {
          v18 = (__int64 *)*v18;
          if ( v18 == &CallbackListHead )
            goto LABEL_21;
        }
      }
      if ( v18 )
      {
        v9 = 0;
        PoolWithTag = (LARGE_INTEGER *)ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x63634D43u);
        v20 = (LONGLONG *)PoolWithTag;
        if ( PoolWithTag )
        {
          PoolWithTag[5].QuadPart = (LONGLONG)v18;
          v21 = v18 + 8;
          PoolWithTag[4] = *Cookie;
          v22 = PoolWithTag + 2;
          v20[7] = (LONGLONG)NewContext;
          v20[6] = (LONGLONG)Object;
          v23 = (LARGE_INTEGER **)v21[1];
          if ( *v23 != (LARGE_INTEGER *)v21 )
            __fastfail(3u);
          v22->QuadPart = (LONGLONG)v21;
          v20[3] = (LONGLONG)v23;
          *v23 = v22;
          v21[1] = (__int64)v22;
          v24 = v13[1];
          v25 = *(_QWORD *)v24;
          if ( *(_QWORD *)(*(_QWORD *)v24 + 8LL) != v24 )
            __fastfail(3u);
          *v20 = v25;
          v20[1] = v24;
          *(_QWORD *)(v25 + 8) = v20;
          *(_QWORD *)v24 = v20;
        }
        else
        {
          v9 = -1073741670;
        }
      }
      else
      {
        v9 = -1073741584;
      }
      break;
    }
    ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v17 = KeGetCurrentThread();
    v4 = 1;
    --v17->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpContextListLock, 0LL);
  }
  ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  ExReleasePushLockEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v9;
}
