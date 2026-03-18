/*
 * XREFs of ?SetOneAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@I@Z @ 0x1C009D1F8
 * Callers:
 *     ?SetAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C009D134 (-SetAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@I@Z.c)
 * Callees:
 *     memset @ 0x1C0018400 (memset.c)
 *     McTemplateK0pq @ 0x1C0021ADC (McTemplateK0pq.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C0060310 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 */

void __fastcall VIDMM_GLOBAL::SetOneAllocationPriority(VIDMM_GLOBAL *this, __int64 **a2, unsigned int a3)
{
  int v6; // esi
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // [rsp+20h] [rbp-68h]
  _QWORD v14[10]; // [rsp+30h] [rbp-58h] BYREF

  v6 = a3;
  if ( a3 >= 0xC8000000 && !SeSinglePrivilegeCheck((LUID)33LL, 1) )
  {
    v8 = WdLogNewEntry5_WdWarning(v7);
    *(_QWORD *)(v8 + 24) = a2;
    WdLogEvent5_WdWarning(v8);
    v6 = -939524097;
  }
  memset(v14, 0, sizeof(v14));
  v9 = *a2;
  LODWORD(v14[0]) = 212;
  v14[2] = a2;
  v10 = *v9;
  LODWORD(v14[4]) = v6;
  VIDMM_GLOBAL::QueueDeferredCommand(
    this,
    (struct VIDMM_PAGING_QUEUE *)(a2[1][9] + 160LL * (*(_DWORD *)(v10 + 76) & 0x3F)),
    (struct _VIDMM_DEFERRED_COMMAND *)v14,
    0,
    0LL);
  if ( bTracingEnabled )
  {
    if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      LODWORD(v13) = a3;
      McTemplateK0pq(v11, &EventSetAllocationPriority, v12, a2, v13);
    }
  }
}
