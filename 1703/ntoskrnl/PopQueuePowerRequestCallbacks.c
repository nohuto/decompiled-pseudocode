/*
 * XREFs of PopQueuePowerRequestCallbacks @ 0x1400715F8
 * Callers:
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x1400714F0 (PopProcessPowerRequestOverrideQueryResponse.c)
 *     PopQueuePowerRequestCallback @ 0x1400715B8 (PopQueuePowerRequestCallback.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 */

void __fastcall PopQueuePowerRequestCallbacks(__int64 a1, char a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rax

  if ( !*(_BYTE *)(a1 + 78) )
  {
    v4 = 0LL;
    while ( !*(_BYTE *)(a1 + v4 + 72) )
    {
      if ( ++v4 >= 6 )
        return;
    }
    ObfReferenceObjectWithTag((PVOID)a1, 0x746C6644u);
    v5 = PopPowerRequestCallbacks;
    v6 = (_QWORD *)(a1 + 56);
    if ( *(__int64 **)(PopPowerRequestCallbacks + 8) != &PopPowerRequestCallbacks )
      __fastfail(3u);
    *v6 = PopPowerRequestCallbacks;
    *(_QWORD *)(a1 + 64) = &PopPowerRequestCallbacks;
    *(_QWORD *)(v5 + 8) = v6;
    PopPowerRequestCallbacks = a1 + 56;
    *(_BYTE *)(a1 + 78) = 1;
    if ( a2 )
    {
      if ( !PopCallbackWorkItemScheduled )
      {
        PopCallbackWorkItemScheduled = 1;
        ExQueueWorkItem(&PopCallbackWorkItem, CriticalWorkQueue);
      }
    }
  }
}
