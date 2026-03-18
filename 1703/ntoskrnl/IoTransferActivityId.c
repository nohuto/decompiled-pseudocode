/*
 * XREFs of IoTransferActivityId @ 0x140135F30
 * Callers:
 *     <none>
 * Callees:
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     IopIsActivityTracingEventEnabled @ 0x140135F68 (IopIsActivityTracingEventEnabled.c)
 */

NTSTATUS __fastcall IoTransferActivityId(LPCGUID ActivityId, LPCGUID RelatedActivityId)
{
  NTSTATUS result; // eax

  result = IopIsActivityTracingEventEnabled(&IoTrace_ActivityIdTransfer);
  if ( (_BYTE)result )
    return EtwWriteEx(IoTraceHandle, &IoTrace_ActivityIdTransfer, 0LL, 0, ActivityId, RelatedActivityId, 0, 0LL);
  return result;
}
