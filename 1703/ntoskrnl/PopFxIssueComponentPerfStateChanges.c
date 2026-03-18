/*
 * XREFs of PopFxIssueComponentPerfStateChanges @ 0x14022B014
 * Callers:
 *     PoFxIssueComponentPerfStateChangeMultiple @ 0x14022A5F0 (PoFxIssueComponentPerfStateChangeMultiple.c)
 * Callees:
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     PopFxQueueWorkOrder @ 0x14006882C (PopFxQueueWorkOrder.c)
 *     PopFxAddLogEntry @ 0x140069898 (PopFxAddLogEntry.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     PopFxBugCheck @ 0x14022A7A4 (PopFxBugCheck.c)
 *     PopFxCompleteComponentPerfState @ 0x14022A7C8 (PopFxCompleteComponentPerfState.c)
 *     PopPluginRequestComponentPerfState @ 0x14022CCB4 (PopPluginRequestComponentPerfState.c)
 *     PopDiagTraceFxPerfRequest @ 0x140231758 (PopDiagTraceFxPerfRequest.c)
 *     PopDiagTraceFxPerfRequestProgress @ 0x140231960 (PopDiagTraceFxPerfRequestProgress.c)
 */

void __fastcall PopFxIssueComponentPerfStateChanges(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        char a3,
        unsigned int a4,
        void *Src,
        __int64 a6)
{
  __int64 v10; // rbx
  int v11; // r12d
  void *v12; // r15
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // r14
  int v16; // edx
  char v17; // al
  char v18; // cl
  __int64 v19; // r9
  signed __int32 v20[8]; // [rsp+0h] [rbp-68h] BYREF
  int v21; // [rsp+30h] [rbp-38h]
  char v22; // [rsp+78h] [rbp+10h] BYREF

  KeGetCurrentIrql();
  v10 = *(_QWORD *)(a2 + 248);
  if ( !v10 )
    PopFxBugCheck(0x61BuLL, *(_QWORD *)(BugCheckParameter2 + 64), BugCheckParameter2, *(unsigned int *)(a2 + 16));
  v11 = *(_DWORD *)(*(_QWORD *)v10 + 16LL);
  if ( a4 > *(_DWORD *)(v10 + 144) )
    PopFxBugCheck(0x61CuLL, BugCheckParameter2, *(unsigned int *)(a2 + 16), 0LL);
  if ( (_InterlockedExchange((volatile __int32 *)(v10 + 40), 0) & 7) != 0 )
    PopFxBugCheck(0x61DuLL, BugCheckParameter2, *(unsigned int *)(a2 + 16), *(_QWORD *)(v10 + 80));
  v12 = Src;
  if ( *(_BYTE *)(v10 + 74) )
  {
    memmove(*(void **)(v10 + 48), Src, 16LL * a4);
    *(_DWORD *)(v10 + 56) = a4;
    *(_BYTE *)(v10 + 72) = 0;
    *(_QWORD *)(v10 + 64) = MEMORY[0xFFFFF78000000008];
  }
  *(_QWORD *)(v10 + 80) = a6;
  KeResetEvent((PRKEVENT)(v10 + 8));
  PopDiagTraceFxPerfRequest(v10, a4, v12);
  v15 = 1;
  v21 = a3 & 1;
  if ( (a3 & 1) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(v10 + 40), 0x88000000);
  }
  else if ( (a3 & 2) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(v10 + 40), 0x10000000u);
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 40), 4u);
  _InterlockedOr(v20, 0);
  if ( *(_BYTE *)(v10 + 73) )
  {
    v16 = *(_DWORD *)(a2 + 16);
    v22 = 0;
    v17 = PopPluginRequestComponentPerfState(BugCheckParameter2, v16, a4, (_DWORD)v12, (__int64)&v22);
    v18 = v22;
    v15 = v17;
  }
  else
  {
    v18 = 1;
    v22 = 1;
  }
  if ( v15 )
  {
    if ( v18 )
      _InterlockedOr((volatile signed __int32 *)(v10 + 40), 0x60000000u);
    else
      _InterlockedOr((volatile signed __int32 *)(v10 + 40), 0x20000000u);
    _InterlockedDecrement((volatile signed __int32 *)(v10 + 40));
  }
  PopDiagTraceFxPerfRequestProgress(
    v10,
    ((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 40), 0xFFFFFFFF) - 1) & 7,
    v13,
    v14);
  if ( v15 )
  {
    if ( (a3 & 2) != 0 )
    {
      PopFxAddLogEntry(*(_QWORD *)(BugCheckParameter2 + 48), v11, 15, 0LL);
      PopFxQueueWorkOrder(&PopFxSystemWorkQueue, (PLIST_ENTRY)(v10 + 88), BugCheckParameter2, 0);
    }
    else
    {
      _InterlockedOr((volatile signed __int32 *)(v10 + 40), 0x80000000);
      LOBYTE(v19) = v22;
      PopFxCompleteComponentPerfState(BugCheckParameter2, *(_DWORD *)(a2 + 16), v10, v19);
    }
  }
  else if ( v21 )
  {
    KeWaitForSingleObject((PVOID)(v10 + 8), Executive, 0, 0, 0LL);
  }
  else
  {
    PopFxAddLogEntry(*(_QWORD *)(BugCheckParameter2 + 48), v11, 15, 0LL);
    PopFxAddLogEntry(*(_QWORD *)(BugCheckParameter2 + 48), v11, 20, 0LL);
  }
}
