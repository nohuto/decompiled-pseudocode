/*
 * XREFs of RaidAdapterCheckWaitTimeout @ 0x1C0025224
 * Callers:
 *     RaidQueueWaitCheckDpcRoutine @ 0x1C002BAA0 (RaidQueueWaitCheckDpcRoutine.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007658 (RaidAllocatePool.c)
 *     RaUnitAcquireRemoveLock @ 0x1C0008084 (RaUnitAcquireRemoveLock.c)
 *     RaUnitReleaseRemoveLock @ 0x1C0008488 (RaUnitReleaseRemoveLock.c)
 *     RaidCompleteRequestEx @ 0x1C000C410 (RaidCompleteRequestEx.c)
 *     RaidDeleteDeviceQueueEntry @ 0x1C0010478 (RaidDeleteDeviceQueueEntry.c)
 *     RaidLunQueueCheckWaitTimeout @ 0x1C002D6D4 (RaidLunQueueCheckWaitTimeout.c)
 *     GatewayCheckWaitTimeout @ 0x1C003F1B4 (GatewayCheckWaitTimeout.c)
 */

void __fastcall RaidAdapterCheckWaitTimeout(__int64 a1)
{
  __int64 v2; // r12
  unsigned int v3; // r13d
  __int64 v4; // rcx
  __int64 v5; // rax
  _QWORD *v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // r15
  char v9; // r14
  __int64 v10; // rbx
  __int64 v11; // rax
  unsigned int v12; // r8d
  char v13; // cl
  __int64 v14; // rsi
  _QWORD *v15; // r15
  _QWORD *i; // rdi
  _QWORD *v17; // rbx
  unsigned int v18; // edi
  __int64 *v19; // rbx
  unsigned int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rdi
  IRP *v24; // rsi
  __int64 v25; // rcx
  char v26; // r14
  _IO_SECURITY_CONTEXT *SecurityContext; // rbx
  _SECURITY_QUALITY_OF_SERVICE *v28; // rax
  unsigned int v29; // r8d
  char v30; // cl
  _QWORD v31[2]; // [rsp+20h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v33; // [rsp+90h] [rbp+40h]
  __int64 *Pool; // [rsp+98h] [rbp+48h]

  v31[1] = v31;
  v33 = DpcCompletionLimit;
  v31[0] = v31;
  v2 = 0LL;
  v3 = GatewayCheckWaitTimeout((PKSPIN_LOCK)(a1 + 768));
  while ( 1 )
  {
    v4 = v31[0];
    if ( (_QWORD *)v31[0] == v31 )
      break;
    if ( *(_QWORD **)(v31[0] + 8LL) != v31 || (v5 = *(_QWORD *)v31[0], *(_QWORD *)(*(_QWORD *)v31[0] + 8LL) != v31[0]) )
      __fastfail(3u);
    v31[0] = *(_QWORD *)v31[0];
    v6 = (_QWORD *)(v4 - 24);
    *(_QWORD *)(v5 + 8) = v31;
    v7 = *(_QWORD *)(v4 - 24 + 48);
    v8 = *(_QWORD *)(v4 - 24 + 40);
    v9 = *(_BYTE *)(v7 + 154);
    RaidDeleteDeviceQueueEntry(v7 + 400, *(_BYTE *)(v8 + 142) & 1);
    _InterlockedIncrement64((volatile signed __int64 *)(v7 + 1840));
    RaUnitReleaseRemoveLock(v7);
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
      v12 = -1073740534;
      v13 = *(char *)(v10 + 3) < 0 ? -72 : 56;
    }
    else
    {
      v12 = 258;
      v13 = *(char *)(v10 + 3) < 0 ? -119 : 9;
    }
    *(_BYTE *)(v10 + 3) = v13;
    RaidCompleteRequestEx((PIRP)v8, 0, v12);
  }
  if ( v33 != v3 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 112), &LockHandle);
    v14 = *(unsigned int *)(a1 + 136);
    if ( (_DWORD)v14
      && (Pool = (__int64 *)RaidAllocatePool(NonPagedPoolNx, 8 * v14, 0x4C556152u, *(_QWORD *)(a1 + 8))) != 0LL )
    {
      v15 = (_QWORD *)(a1 + 120);
      for ( i = *(_QWORD **)(a1 + 120); i != v15; i = (_QWORD *)*i )
      {
        v17 = i - 6;
        if ( *((_BYTE *)i + 2576)
          && (*((_DWORD *)v17 + 662) != -1 || (*((_BYTE *)v17 + 154) & 2) != 0)
          && (int)RaUnitAcquireRemoveLock((__int64)(i - 6), 0LL, 0LL) >= 0 )
        {
          Pool[v2] = (__int64)v17;
          v2 = (unsigned int)(v2 + 1);
        }
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( (unsigned int)v2 < (unsigned int)v14 )
        Pool[v2] = 0LL;
      v18 = 0;
      v19 = Pool;
      do
      {
        if ( !*v19 )
          break;
        if ( v33 > v3 )
        {
          v20 = RaidLunQueueCheckWaitTimeout(*v19 + 400, v33 - v3, v31);
          v3 += v20;
          if ( v20 )
            _InterlockedExchangeAdd64((volatile signed __int64 *)(*v19 + 1848), v20);
        }
        RaUnitReleaseRemoveLock(*v19);
        ++v18;
        ++v19;
      }
      while ( v18 < (unsigned int)v14 );
      ExFreePoolWithTag(Pool, 0x4C556152u);
      while ( 1 )
      {
        v21 = v31[0];
        if ( (_QWORD *)v31[0] == v31 )
          break;
        if ( *(_QWORD **)(v31[0] + 8LL) != v31
          || (v22 = *(_QWORD *)v31[0], *(_QWORD *)(*(_QWORD *)v31[0] + 8LL) != v31[0]) )
        {
          __fastfail(3u);
        }
        v31[0] = *(_QWORD *)v31[0];
        v23 = (_QWORD *)(v21 - 24);
        *(_QWORD *)(v22 + 8) = v31;
        v24 = *(IRP **)(v21 - 24 + 40);
        v25 = *(_QWORD *)(v21 - 24 + 48);
        v26 = *(_BYTE *)(v25 + 154);
        SecurityContext = v24->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
        RaUnitReleaseRemoveLock(v25);
        v28 = (_SECURITY_QUALITY_OF_SERVICE *)v23[2];
        if ( BYTE2(SecurityContext->SecurityQos) == 40 )
        {
          SecurityContext[4].SecurityQos = v28;
        }
        else
        {
          SecurityContext[2].AccessState = 0LL;
          *(_QWORD *)&SecurityContext[1].DesiredAccess = 0LL;
          SecurityContext[2].SecurityQos = v28;
        }
        ExFreePoolWithTag(v23, 0x54436152u);
        if ( (v26 & 2) != 0 )
        {
          v29 = -1073740534;
          v30 = SBYTE3(SecurityContext->SecurityQos) < 0 ? -72 : 56;
        }
        else
        {
          v29 = 258;
          v30 = SBYTE3(SecurityContext->SecurityQos) < 0 ? -119 : 9;
        }
        BYTE3(SecurityContext->SecurityQos) = v30;
        RaidCompleteRequestEx(v24, 0, v29);
      }
    }
    else
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
  }
}
