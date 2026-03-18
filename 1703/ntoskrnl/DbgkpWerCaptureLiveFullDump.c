/*
 * XREFs of DbgkpWerCaptureLiveFullDump @ 0x140682BE0
 * Callers:
 *     DbgkpWerProcessPolicyResult @ 0x1406833D8 (DbgkpWerProcessPolicyResult.c)
 * Callees:
 *     DbgPrintEx @ 0x1400680A0 (DbgPrintEx.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     DbgkpWerInitializeDeferredLiveDump @ 0x1406831C0 (DbgkpWerInitializeDeferredLiveDump.c)
 *     DbgkpWerInvokeCallbacks @ 0x140683320 (DbgkpWerInvokeCallbacks.c)
 *     IoCaptureLiveDump @ 0x14068DFA4 (IoCaptureLiveDump.c)
 */

__int64 __fastcall DbgkpWerCaptureLiveFullDump(__int64 a1, _BYTE *a2)
{
  PVOID PoolWithTag; // rax
  __int64 v5; // rsi
  int v6; // ebx
  __int64 v7; // rcx
  int v8; // eax
  struct _WORK_QUEUE_ITEM *v9; // rcx
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF
  __int64 v12; // [rsp+68h] [rbp+10h] BYREF

  *a2 = 1;
  *(_DWORD *)(a1 + 92) = 0x10000000;
  DbgPrintEx(5u, 3u, "DBGK: Creating full dump.  ComponentName %ws, Defer = %d\n", a1, 1);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x57676244u);
  v5 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x30uLL);
    *(_QWORD *)(a1 + 128) = v5;
    *(_DWORD *)v5 = 1;
    *(_DWORD *)(v5 + 4) = 48;
    if ( (*(_DWORD *)(a1 + 88) & 1) != 0 )
      *(_DWORD *)(v5 + 24) |= 4u;
    v7 = *(_QWORD *)(a1 + 104);
    v11 = 0LL;
    v8 = WerLiveKernelOpenDumpFile(v7, &v11);
    v6 = v8;
    if ( v8 >= 0 )
    {
      *(_QWORD *)(v5 + 8) = v11;
      *(_DWORD *)(a1 + 112) |= 2u;
      *(_DWORD *)(v5 + 24) |= 8u;
      v6 = DbgkpWerInitializeDeferredLiveDump(a1);
      if ( v6 >= 0 )
      {
        v6 = DbgkpWerInvokeCallbacks(a1);
        if ( v6 >= 0 )
        {
          v6 = IoCaptureLiveDump(
                 *(_DWORD *)(a1 + 32),
                 *(_QWORD *)(a1 + 40),
                 *(_QWORD *)(a1 + 48),
                 *(_QWORD *)(a1 + 56),
                 *(_QWORD *)(a1 + 64),
                 v5,
                 (__int64)&v12);
          if ( (int)(v6 + 0x80000000) < 0 || v6 == -1073741802 )
          {
            v9 = *(struct _WORK_QUEUE_ITEM **)(a1 + 120);
            *(_QWORD *)(a1 + 136) = v12;
            ExQueueWorkItem(v9, DelayedWorkQueue);
            v6 = 0;
            *a2 = 0;
          }
          else
          {
            DbgPrintEx(
              5u,
              0,
              "DBGK: DbgkpWerCaptureLiveFullDump: IoCaptureLiveDump failed with status 0x%X\n",
              (unsigned int)v6);
          }
        }
      }
    }
    else
    {
      DbgPrintEx(5u, 0, "DBGK: WerLiveKernelOpenDumpFile failed. Status = 0x%X\n", (unsigned int)v8);
    }
  }
  else
  {
    DbgPrintEx(5u, 0, "DBGK: Could not allocate an Io Control.\n");
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v6;
}
