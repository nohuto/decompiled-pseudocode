/*
 * XREFs of IopIsActivityTracingEventEnabled @ 0x140127F78
 * Callers:
 *     IoReuseIrp @ 0x1400B4070 (IoReuseIrp.c)
 *     IoTransferActivityId @ 0x140127F40 (IoTransferActivityId.c)
 *     IopInitActivityIdIrp @ 0x1401F5318 (IopInitActivityIdIrp.c)
 * Callees:
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 */

bool __fastcall IopIsActivityTracingEventEnabled(PCEVENT_DESCRIPTOR EventDescriptor)
{
  char v1; // bl

  v1 = 0;
  if ( IoTraceHandle )
    return EtwEventEnabled(IoTraceHandle, EventDescriptor) != 0;
  return v1;
}
