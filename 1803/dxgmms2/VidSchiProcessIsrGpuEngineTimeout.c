/*
 * XREFs of VidSchiProcessIsrGpuEngineTimeout @ 0x1C003330C
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C000C520 (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __fastcall VidSchiProcessIsrGpuEngineTimeout(__int64 a1)
{
  union _SLIST_HEADER *v1; // rdi
  PSLIST_ENTRY v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v7; // rax

  v1 = *(union _SLIST_HEADER **)(a1 + 24);
  v3 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 6048));
  if ( v3 )
  {
    v3[2].Next = (struct _SLIST_ENTRY *)a1;
    LODWORD(v3->Next) = 16;
    return ExpInterlockedPushEntrySList(v1 + 122, v3 + 1);
  }
  else
  {
    v7 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v7 + 24) = *(unsigned __int16 *)(a1 + 4);
    return (PSLIST_ENTRY)WdLogEvent5_WdAssertion(v7);
  }
}
