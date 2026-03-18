/*
 * XREFs of KeRestoreMtrrBroadcast @ 0x140426B74
 * Callers:
 *     PnprWakeProcessors @ 0x14042D77C (PnprWakeProcessors.c)
 *     KiInitializeDynamicProcessorDpc @ 0x14042E640 (KiInitializeDynamicProcessorDpc.c)
 *     KiInitializeMTRR @ 0x1408388B4 (KiInitializeMTRR.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x14008D0E0 (KeQueryActiveProcessorCountEx.c)
 *     KeIpiGenericCall @ 0x140143640 (KeIpiGenericCall.c)
 */

void KeRestoreMtrrBroadcast()
{
  _DWORD Context[4]; // [rsp+20h] [rbp-28h] BYREF
  void *v1; // [rsp+30h] [rbp-18h]

  if ( byte_14036AAB0 )
  {
    Context[0] = 0;
    Context[1] = KeQueryActiveProcessorCountEx(0xFFFFu) - 1;
    v1 = &KiTargetPhase;
    Context[2] = 0;
    KeIpiGenericCall(KiLoadMTRRTarget, (ULONG_PTR)Context);
  }
}
