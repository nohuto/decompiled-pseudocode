/*
 * XREFs of CmSetCallbackObjectContext @ 0x1406ED660
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140708A30 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpPostOpenOrCreate @ 0x14070AD00 (VrpPostOpenOrCreate.c)
 *     VrpPreLoadKey @ 0x14070B60C (VrpPreLoadKey.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall CmSetCallbackObjectContext(PVOID Object, PLARGE_INTEGER Cookie, PVOID NewContext, PVOID *OldContext)
{
  char v4; // r12
  NTSTATUS v9; // edi
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // r14
  _QWORD *v15; // rsi
  LONGLONG QuadPart; // rcx
  LONGLONG v17; // rax
  void *v18; // rax
  struct _KTHREAD *v19; // rax
  __int64 *v20; // rbx
  LARGE_INTEGER *PoolWithTag; // rax
  LONGLONG *v22; // rcx
  __int64 *v23; // rbx
  LARGE_INTEGER *v24; // rax
  LARGE_INTEGER **v25; // rdx
  LONGLONG v26; // rax
  LONGLONG v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9

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
  v14 = (char *)Object + 72;
  while ( 1 )
  {
    v15 = (_QWORD *)*v14;
    if ( (_QWORD *)*v14 != v14 )
    {
      QuadPart = Cookie->QuadPart;
      while ( 1 )
      {
        v17 = v15[4];
        if ( v17 == QuadPart )
          break;
        if ( v17 >= QuadPart )
        {
          v15 = (_QWORD *)*v15;
          if ( v15 != v14 )
            continue;
        }
        goto LABEL_15;
      }
      v18 = (void *)_InterlockedExchange64(v15 + 7, (__int64)NewContext);
      if ( OldContext )
        *OldContext = v18;
      v9 = 0;
    }
LABEL_15:
    if ( v9 >= 0 )
      break;
    if ( v4 )
    {
      v20 = (__int64 *)CallbackListHead;
      if ( (__int64 *)CallbackListHead == &CallbackListHead )
      {
LABEL_21:
        v20 = 0LL;
      }
      else
      {
        while ( Cookie->QuadPart != v20[3] )
        {
          v20 = (__int64 *)*v20;
          if ( v20 == &CallbackListHead )
            goto LABEL_21;
        }
      }
      if ( v20 )
      {
        v9 = 0;
        PoolWithTag = (LARGE_INTEGER *)ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x63634D43u);
        v22 = (LONGLONG *)PoolWithTag;
        if ( PoolWithTag )
        {
          PoolWithTag[5].QuadPart = (LONGLONG)v20;
          v23 = v20 + 8;
          PoolWithTag[4] = *Cookie;
          v24 = PoolWithTag + 2;
          v22[7] = (LONGLONG)NewContext;
          v22[6] = (LONGLONG)Object;
          v25 = (LARGE_INTEGER **)v23[1];
          if ( *v25 != (LARGE_INTEGER *)v23 )
            __fastfail(3u);
          v24->QuadPart = (LONGLONG)v23;
          v22[3] = (LONGLONG)v25;
          *v25 = v24;
          v23[1] = (__int64)v24;
          v26 = v15[1];
          v27 = *(_QWORD *)v26;
          if ( *(_QWORD *)(*(_QWORD *)v26 + 8LL) != v26 )
            __fastfail(3u);
          *v22 = v27;
          v22[1] = v26;
          *(_QWORD *)(v27 + 8) = v22;
          *(_QWORD *)v26 = v22;
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
    ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL, v12, v13);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v19 = KeGetCurrentThread();
    v4 = 1;
    --v19->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpContextListLock, 0LL);
  }
  ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL, v12, v13);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  ExReleasePushLockEx((ULONG_PTR)&CmpCallbackListLock, 0LL, v28, v29);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v9;
}
