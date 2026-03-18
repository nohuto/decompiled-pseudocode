/*
 * XREFs of DxgNotifyDpcCB @ 0x1C000DAE0
 * Callers:
 *     <none>
 * Callees:
 *     DpSynchronizeExecution @ 0x1C000D9A0 (DpSynchronizeExecution.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?NotifyDpc@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C002B908 (-NotifyDpc@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?AllocateNewChunks@MIRACAST_CHUNK_LIST@@QEAAEK@Z @ 0x1C002E948 (-AllocateNewChunks@MIRACAST_CHUNK_LIST@@QEAAEK@Z.c)
 *     ?RemoveHead@MIRACAST_CHUNK_LIST@@QEAAPEAUMIRACAST_CHUNK@@XZ @ 0x1C002ECE8 (-RemoveHead@MIRACAST_CHUNK_LIST@@QEAAPEAUMIRACAST_CHUNK@@XZ.c)
 *     DpiMiracastStopMiracastSessionAsync @ 0x1C002F9A0 (DpiMiracastStopMiracastSessionAsync.c)
 */

void __fastcall DxgNotifyDpcCB(__int64 a1)
{
  volatile signed __int32 *v2; // rcx
  struct DXGADAPTER *v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // r9d
  __int64 v11; // rax
  struct MIRACAST_CHUNK *v12; // rax
  struct _KEVENT *v13; // rcx
  _QWORD v14[2]; // [rsp+30h] [rbp-19h] BYREF
  __int64 v15; // [rsp+40h] [rbp-9h] BYREF
  __int64 v16; // [rsp+48h] [rbp-1h]
  __int64 v17; // [rsp+50h] [rbp+7h]
  _QWORD v18[2]; // [rsp+58h] [rbp+Fh] BYREF
  int v19; // [rsp+68h] [rbp+1Fh]
  int v20; // [rsp+6Ch] [rbp+23h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp+27h] BYREF
  BOOLEAN v22; // [rsp+B0h] [rbp+67h] BYREF

  if ( KeGetCurrentIrql() != 2 )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v8 + 24) = 90LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v2 = *(volatile signed __int32 **)(a1 + 64);
  if ( (_InterlockedCompareExchange(v2 + 937, 0, 0) & 1) != 0 )
  {
    v3 = *(struct DXGADAPTER **)(*(_QWORD *)(a1 + 64) + 3728LL);
    if ( v3 )
    {
      v4 = *((_QWORD *)v3 + 289);
      if ( v4 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v4 + 504) + 8LL) + 16LL))(a1);
      }
      else
      {
        v2 = *(volatile signed __int32 **)(*((_QWORD *)v3 + 288) + 264LL);
        if ( v2 )
          DXGDODPRESENT::NotifyDpc((DXGDODPRESENT *)v2, v3);
      }
    }
  }
  v5 = *(_QWORD *)(a1 + 64);
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  if ( v5 && *(_DWORD *)(v5 + 16) == 1953656900 && *(_DWORD *)(v5 + 20) == 2 )
  {
    KeAcquireInStackQueuedSpinLock(&qword_1C0060BD8, &LockHandle);
    v6 = *(_QWORD *)(v5 + 3096);
    if ( v6 )
    {
      v15 = v5;
      v16 = *(_QWORD *)(v6 + 488);
      DpSynchronizeExecution(
        a1,
        (KSYNCHRONIZE_ROUTINE *)MiracastProcessPendingDPCChunks,
        &v15,
        *(_DWORD *)(v5 + 3740),
        &v22);
      if ( BYTE1(v17) )
      {
        DpiMiracastStopMiracastSessionAsync((PVOID)v6);
      }
      else
      {
        if ( (_BYTE)v17 )
          *(_BYTE *)(v6 + 588) = 1;
        if ( HIDWORD(v17) < 0x14 && *(_DWORD *)(v5 + 3116) + 5 < 40 )
        {
          v20 = *(_DWORD *)(v5 + 3080);
          v19 = 0;
          v18[1] = v18;
          v18[0] = v18;
          if ( MIRACAST_CHUNK_LIST::AllocateNewChunks((MIRACAST_CHUNK_LIST *)v18, 5u) )
          {
            v10 = *(_DWORD *)(v5 + 3740);
            v14[0] = v18;
            v14[1] = *(_QWORD *)(v5 + 3120);
            DpSynchronizeExecution(a1, (KSYNCHRONIZE_ROUTINE *)DpiMiracastMoveChunkList, v14, v10, &v22);
            *(_DWORD *)(v5 + 3116) += 5;
          }
          else
          {
            v11 = WdLogNewEntry5_WdLowResource(v9);
            *(_QWORD *)(v11 + 24) = -1073741801LL;
            WdLogEvent5_WdLowResource(v11);
          }
          while ( 1 )
          {
            v12 = MIRACAST_CHUNK_LIST::RemoveHead((MIRACAST_CHUNK_LIST *)v18);
            if ( !v12 )
              break;
            ExFreePoolWithTag(v12, 0);
          }
        }
        if ( BYTE2(v17) || (_BYTE)v17 )
        {
          v13 = *(struct _KEVENT **)(v6 + 496);
          if ( v13 )
            KeSetEvent(v13, 1, 0);
        }
      }
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(v2);
    *(_QWORD *)(v7 + 24) = v5;
    *(_QWORD *)(v7 + 32) = -1073741585LL;
    WdLogEvent5_WdError(v7);
  }
}
