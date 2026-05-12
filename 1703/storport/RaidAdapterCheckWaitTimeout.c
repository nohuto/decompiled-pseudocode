/*
 * XREFs of RaidAdapterCheckWaitTimeout @ 0x1C002BBC4
 * Callers:
 *     RaidQueueWaitCheckDpcRoutine @ 0x1C002F730 (RaidQueueWaitCheckDpcRoutine.c)
 * Callees:
 *     RaUnitAcquireRemoveLock @ 0x1C0005080 (RaUnitAcquireRemoveLock.c)
 *     RaUnitReleaseRemoveLock @ 0x1C00054E4 (RaUnitReleaseRemoveLock.c)
 *     RaidAllocatePool @ 0x1C00058A4 (RaidAllocatePool.c)
 *     RaidCompleteRequestEx @ 0x1C0009A90 (RaidCompleteRequestEx.c)
 *     RaidDeleteDeviceQueueEntry @ 0x1C000FAA8 (RaidDeleteDeviceQueueEntry.c)
 *     RaidLunQueueCheckWaitTimeout @ 0x1C00312FC (RaidLunQueueCheckWaitTimeout.c)
 *     GatewayCheckWaitTimeout @ 0x1C003FE44 (GatewayCheckWaitTimeout.c)
 */

void __fastcall RaidAdapterCheckWaitTimeout(__int64 a1)
{
  __int64 v2; // r12
  unsigned int v3; // r13d
  __int64 v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // r15
  char v9; // si
  __int64 v10; // rbx
  __int64 v11; // rax
  char v12; // al
  char v13; // cl
  unsigned int v14; // r8d
  unsigned int v15; // r15d
  void *v16; // rsi
  _QWORD **v17; // r14
  _QWORD *i; // rdi
  _QWORD *v19; // rbx
  unsigned int v20; // edi
  struct _KEVENT **v21; // rbx
  unsigned int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rdi
  IRP *v26; // rsi
  __int64 v27; // rcx
  char v28; // r14
  _IO_SECURITY_CONTEXT *SecurityContext; // rbx
  _SECURITY_QUALITY_OF_SERVICE *v30; // rax
  char v31; // al
  char v32; // cl
  unsigned int v33; // r8d
  _QWORD v34[2]; // [rsp+20h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v36; // [rsp+90h] [rbp+40h]
  PVOID Pool; // [rsp+98h] [rbp+48h]

  v34[1] = v34;
  v36 = DpcCompletionLimit;
  v34[0] = v34;
  v2 = 0LL;
  v3 = GatewayCheckWaitTimeout((PKSPIN_LOCK)(a1 + 768));
  while ( 1 )
  {
    v4 = v34[0];
    if ( (_QWORD *)v34[0] == v34 )
      break;
    v5 = *(_QWORD *)v34[0];
    if ( *(_QWORD **)(v34[0] + 8LL) != v34 || *(_QWORD *)(v5 + 8) != v34[0] )
      __fastfail(3u);
    v34[0] = *(_QWORD *)v34[0];
    *(_QWORD *)(v5 + 8) = v34;
    v6 = (_QWORD *)(v4 - 24);
    v7 = *(_QWORD *)(v4 - 24 + 48);
    v8 = *(_QWORD *)(v4 - 24 + 40);
    v9 = *(_BYTE *)(v7 + 154);
    RaidDeleteDeviceQueueEntry(v7 + 400, *(_BYTE *)(v8 + 142) & 1);
    _InterlockedIncrement64((volatile signed __int64 *)(v7 + 1808));
    RaUnitReleaseRemoveLock((struct _KEVENT *)v7);
    v10 = *(_QWORD *)(*(_QWORD *)(v8 + 184) + 8LL);
    v11 = v6[2];
    if ( *(_BYTE *)(v10 + 2) == 40 )
    {
      *(_QWORD *)(v10 + 96) = v11;
    }
    else
    {
      *(_QWORD *)(v10 + 56) = 0LL;
      *(_QWORD *)(v10 + 40) = 0LL;
      *(_QWORD *)(v10 + 48) = v11;
    }
    ExFreePoolWithTag(v6, 0x54436152u);
    if ( (v9 & 2) != 0 )
    {
      v12 = 56;
      v13 = -72;
      v14 = -1073740534;
    }
    else
    {
      v13 = -119;
      v12 = 9;
      v14 = 258;
    }
    if ( *(char *)(v10 + 3) < 0 )
      v12 = v13;
    *(_BYTE *)(v10 + 3) = v12;
    RaidCompleteRequestEx((PIRP)v8, 0, v14);
  }
  if ( v36 != v3 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 112), &LockHandle);
    v15 = *(_DWORD *)(a1 + 136);
    Pool = RaidAllocatePool(NonPagedPoolNx, 8LL * v15, 0x4C556152u, *(_QWORD *)(a1 + 8));
    v16 = Pool;
    if ( Pool )
    {
      v17 = (_QWORD **)(a1 + 120);
      for ( i = *v17; i != v17; i = (_QWORD *)*i )
      {
        v19 = i - 6;
        if ( *((_BYTE *)i + 2528)
          && (*((_DWORD *)v19 + 650) != -1 || (*((_BYTE *)v19 + 154) & 2) != 0)
          && (int)RaUnitAcquireRemoveLock((__int64)(i - 6)) >= 0 )
        {
          *((_QWORD *)Pool + v2) = v19;
          v2 = (unsigned int)(v2 + 1);
        }
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( (unsigned int)v2 < v15 )
        *((_QWORD *)Pool + (unsigned int)v2) = 0LL;
      v20 = 0;
      if ( v15 )
      {
        v21 = (struct _KEVENT **)Pool;
        do
        {
          if ( !*v21 )
            break;
          if ( v36 > v3 )
          {
            v22 = RaidLunQueueCheckWaitTimeout(&(*v21)[16].Header.WaitListHead.Blink, v36 - v3, v34);
            v3 += v22;
            if ( v22 )
              _InterlockedExchangeAdd64((volatile signed __int64 *)&(*v21)[75].Header.WaitListHead.Blink, v22);
          }
          RaUnitReleaseRemoveLock(*v21);
          ++v20;
          ++v21;
        }
        while ( v20 < v15 );
        v16 = Pool;
      }
      ExFreePoolWithTag(v16, 0x4C556152u);
      while ( 1 )
      {
        v23 = v34[0];
        if ( (_QWORD *)v34[0] == v34 )
          break;
        v24 = *(_QWORD *)v34[0];
        if ( *(_QWORD **)(v34[0] + 8LL) != v34 || *(_QWORD *)(v24 + 8) != v34[0] )
          __fastfail(3u);
        v34[0] = *(_QWORD *)v34[0];
        v25 = (_QWORD *)(v23 - 24);
        *(_QWORD *)(v24 + 8) = v34;
        v26 = *(IRP **)(v23 - 24 + 40);
        v27 = *(_QWORD *)(v23 - 24 + 48);
        v28 = *(_BYTE *)(v27 + 154);
        SecurityContext = v26->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
        RaUnitReleaseRemoveLock((struct _KEVENT *)v27);
        v30 = (_SECURITY_QUALITY_OF_SERVICE *)v25[2];
        if ( BYTE2(SecurityContext->SecurityQos) == 40 )
        {
          SecurityContext[4].SecurityQos = v30;
        }
        else
        {
          SecurityContext[2].SecurityQos = v30;
          SecurityContext[2].AccessState = 0LL;
          *(_QWORD *)&SecurityContext[1].DesiredAccess = 0LL;
        }
        ExFreePoolWithTag(v25, 0x54436152u);
        if ( (v28 & 2) != 0 )
        {
          v31 = 56;
          v32 = -72;
          v33 = -1073740534;
        }
        else
        {
          v32 = -119;
          v31 = 9;
          v33 = 258;
        }
        if ( SBYTE3(SecurityContext->SecurityQos) < 0 )
          v31 = v32;
        BYTE3(SecurityContext->SecurityQos) = v31;
        RaidCompleteRequestEx(v26, 0, v33);
      }
    }
    else
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
  }
}
