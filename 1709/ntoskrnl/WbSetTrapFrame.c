/*
 * XREFs of WbSetTrapFrame @ 0x1405023C0
 * Callers:
 *     sub_140502058 @ 0x140502058 (sub_140502058.c)
 *     WbHeapExecuteCall @ 0x1405024B0 (WbHeapExecuteCall.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     PspGetContextThreadInternal @ 0x14049D7A0 (PspGetContextThreadInternal.c)
 *     PspSetContextThreadInternal @ 0x14049DFC0 (PspSetContextThreadInternal.c)
 *     WbSetWowTrapFrame @ 0x14076D908 (WbSetWowTrapFrame.c)
 */

__int64 __fastcall WbSetTrapFrame(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rcx
  int ContextThreadInternal; // edi
  struct _KTHREAD *v8; // rax
  __int16 v11; // cx

  v4 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
  if ( v4 )
  {
    v11 = *(_WORD *)(v4 + 8);
    if ( v11 == 332 || v11 == 452 )
      return WbSetWowTrapFrame(a1);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  *(_DWORD *)(a1 + 96) = 1048577;
  ContextThreadInternal = PspGetContextThreadInternal((__int64)KeGetCurrentThread(), a1 + 48, 0, 1, 1);
  if ( ContextThreadInternal >= 0 )
  {
    *(_QWORD *)(a1 + 296) = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a1 + 200) = *(_QWORD *)a2;
    *(_DWORD *)(a1 + 116) = *(_DWORD *)(a2 + 16);
    ContextThreadInternal = PspSetContextThreadInternal(KeGetCurrentThread(), (CONTEXT *)(a1 + 48), 0, 1, 1);
  }
  v8 = KeGetCurrentThread();
  if ( v8->SpecialApcDisable++ == -1
    && ($B476B70DB57F76B110DA5B9238C3E934 *)v8->ApcState.ApcListHead[0].Flink != &v8->152 )
  {
    KiCheckForKernelApcDelivery(v6);
  }
  return (unsigned int)ContextThreadInternal;
}
