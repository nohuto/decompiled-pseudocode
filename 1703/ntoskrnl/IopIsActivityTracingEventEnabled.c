/*
 * XREFs of IopIsActivityTracingEventEnabled @ 0x140135F68
 * Callers:
 *     IoReuseIrp @ 0x14012C360 (IoReuseIrp.c)
 *     IoTransferActivityId @ 0x140135F30 (IoTransferActivityId.c)
 *     IopInitActivityIdIrp @ 0x1401EFC10 (IopInitActivityIdIrp.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 */

bool __fastcall IopIsActivityTracingEventEnabled(PCEVENT_DESCRIPTOR EventDescriptor)
{
  char v1; // bl

  v1 = 0;
  if ( IoTraceHandle )
    return EtwEventEnabled(IoTraceHandle, EventDescriptor) != 0;
  return v1;
}
