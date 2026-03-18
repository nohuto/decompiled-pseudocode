/*
 * XREFs of KeRestoreMtrrBroadcast @ 0x140412370
 * Callers:
 *     PnprWakeProcessors @ 0x14041876C (PnprWakeProcessors.c)
 *     KiInitializeDynamicProcessorDpc @ 0x140418DA0 (KiInitializeDynamicProcessorDpc.c)
 *     KiInitializeMTRR @ 0x140817890 (KiInitializeMTRR.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140089140 (KeQueryActiveProcessorCountEx.c)
 *     KeIpiGenericCall @ 0x140147FF0 (KeIpiGenericCall.c)
 */

void KeRestoreMtrrBroadcast()
{
  _DWORD Context[4]; // [rsp+20h] [rbp-28h] BYREF
  void *v1; // [rsp+30h] [rbp-18h]

  if ( byte_14034FFB0 )
  {
    Context[0] = 0;
    Context[1] = KeQueryActiveProcessorCountEx(0xFFFFu) - 1;
    v1 = &KiTargetPhase;
    Context[2] = 0;
    KeIpiGenericCall(KiLoadMTRRTarget, (ULONG_PTR)Context);
  }
}
