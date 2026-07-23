/*
 * XREFs of WbSetTrapFrame @ 0x14053C120
 * Callers:
 *     WbHeapExecuteReturn @ 0x14053BFD0 (WbHeapExecuteReturn.c)
 *     WbHeapExecuteCall @ 0x14053C4C0 (WbHeapExecuteCall.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PspSetContextThreadInternal @ 0x14053B080 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x14053B2A0 (PspGetContextThreadInternal.c)
 */

__int64 __fastcall WbSetTrapFrame(__int64 a1)
{
  CONTEXT *PoolWithTag; // rbx
  struct _KTHREAD *CurrentThread; // rax
  int ContextThreadInternal; // edi
  struct _KTHREAD *v5; // rcx
  __int16 v6; // ax

  PoolWithTag = (CONTEXT *)ExAllocatePoolWithTag(PagedPool, 0x4D0uLL, 0x42524157u);
  if ( !PoolWithTag )
    return 3221225495LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  PoolWithTag->ContextFlags = 1048577;
  ContextThreadInternal = PspGetContextThreadInternal((__int64)KeGetCurrentThread(), (__int64)PoolWithTag, 0, 1, 1);
  if ( ContextThreadInternal >= 0 )
  {
    PoolWithTag->Rip = *(_QWORD *)(a1 + 8);
    PoolWithTag->Rsp = *(_QWORD *)a1;
    PoolWithTag->EFlags = *(_DWORD *)(a1 + 16);
    ContextThreadInternal = PspSetContextThreadInternal(KeGetCurrentThread(), PoolWithTag, 0, 1, 1);
  }
  v5 = KeGetCurrentThread();
  v6 = v5->SpecialApcDisable + 1;
  v5->SpecialApcDisable = v6;
  if ( !v6 && ($69CD3F157F9F39B6F7113F2231989901 *)v5->ApcState.ApcListHead[0].Flink != &v5->152 )
    KiCheckForKernelApcDelivery((__int64)v5);
  ExFreePoolWithTag(PoolWithTag, 0x42524157u);
  return (unsigned int)ContextThreadInternal;
}
