/*
 * XREFs of KeRestoreMtrrBroadcast @ 0x14047C5A8
 * Callers:
 *     PnprWakeProcessors @ 0x14048431C (PnprWakeProcessors.c)
 *     KiInitializeDynamicProcessorDpc @ 0x140484800 (KiInitializeDynamicProcessorDpc.c)
 *     KiInitializeMTRR @ 0x1408B2DEC (KiInitializeMTRR.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140036ED0 (KeQueryActiveProcessorCountEx.c)
 *     KeIpiGenericCall @ 0x14016C6C0 (KeIpiGenericCall.c)
 */

void KeRestoreMtrrBroadcast()
{
  _DWORD Context[4]; // [rsp+20h] [rbp-28h] BYREF
  void *v1; // [rsp+30h] [rbp-18h]

  if ( byte_1403ADB90 )
  {
    Context[0] = 0;
    Context[1] = KeQueryActiveProcessorCountEx(0xFFFFu) - 1;
    v1 = &KiTargetPhase;
    Context[2] = 0;
    KeIpiGenericCall(KiLoadMTRRTarget, (ULONG_PTR)Context);
  }
}
