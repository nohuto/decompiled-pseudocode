/*
 * XREFs of IopIsActivityTracingEventEnabled @ 0x14014B888
 * Callers:
 *     IoReuseIrp @ 0x1400A60A0 (IoReuseIrp.c)
 *     IoTransferActivityId @ 0x14014B850 (IoTransferActivityId.c)
 *     IopInitActivityIdIrp @ 0x140232848 (IopInitActivityIdIrp.c)
 * Callees:
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 */

bool __fastcall IopIsActivityTracingEventEnabled(PCEVENT_DESCRIPTOR EventDescriptor)
{
  char v1; // bl

  v1 = 0;
  if ( IoTraceHandle )
    return EtwEventEnabled(IoTraceHandle, EventDescriptor) != 0;
  return v1;
}
