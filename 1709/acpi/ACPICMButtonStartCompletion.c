/*
 * XREFs of ACPICMButtonStartCompletion @ 0x1C002BA80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0005700 (WPP_RECORDER_SF_qsLqss.c)
 */

void __fastcall ACPICMButtonStartCompletion(__int64 a1, IRP *a2, int a3)
{
  struct _WORK_QUEUE_ITEM *v4; // rcx
  char v5; // di
  char v6; // bp
  char v7; // si
  unsigned __int8 MinorFunction; // r14
  _LIST_ENTRY *v9; // rax
  const char *v10; // rcx
  const char *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax

  v4 = (struct _WORK_QUEUE_ITEM *)(a1 + 32);
  v5 = 0;
  v6 = a3;
  v7 = (char)a2;
  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  a2->IoStatus.Status = a3;
  if ( a3 < 0 )
  {
    IofCompleteRequest(a2, 0);
    v10 = (const char *)&unk_1C0067B08;
    v11 = (const char *)&unk_1C0067B08;
    if ( a1 )
    {
      v12 = *(_QWORD *)(a1 + 8);
      v5 = a1;
      if ( (v12 & 0x200000000000LL) != 0 )
      {
        v10 = *(const char **)(a1 + 560);
        if ( (v12 & 0x400000000000LL) != 0 )
          v11 = *(const char **)(a1 + 568);
      }
    }
    v13 = MinorFunction;
    if ( MinorFunction >= 0x1Au )
      v13 = 26LL;
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0xDu,
      (__int64)&WPP_93108c2962503f6832bb11825bb6e7a8_Traceguids,
      v7,
      ACPIDispatchPnpTableNames[v13],
      v6,
      v5,
      v10,
      v11);
  }
  else
  {
    *(_DWORD *)(a1 + 320) = 2;
    v4->WorkerRoutine = (void (__fastcall *)(void *))ACPICMButtonStartWorker;
    v4->Parameter = v4;
    v4->List.Flink = 0LL;
    v9 = *(_LIST_ENTRY **)(a1 + 720);
    v4[1].List.Blink = (_LIST_ENTRY *)a2;
    v4[1].List.Flink = v9;
    ExQueueWorkItem(v4, DelayedWorkQueue);
  }
}
