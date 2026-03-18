/*
 * XREFs of IoAllocateErrorLogEntry @ 0x140149ED0
 * Callers:
 *     IopDisassociateThreadIrp @ 0x1401EF7E0 (IopDisassociateThreadIrp.c)
 *     FsRtlLogCcFlushError @ 0x140684AD0 (FsRtlLogCcFlushError.c)
 * Callees:
 *     <none>
 */

PVOID __stdcall IoAllocateErrorLogEntry(PVOID IoObject, UCHAR EntrySize)
{
  PVOID v2; // rdx

  if ( IoObject )
  {
    if ( *(_WORD *)IoObject == 3 )
    {
      v2 = (PVOID)*((_QWORD *)IoObject + 1);
      return (PVOID)IopAllocateErrorLogEntry(IoObject, v2);
    }
    if ( *(_WORD *)IoObject == 4 )
    {
      v2 = IoObject;
      IoObject = 0LL;
      return (PVOID)IopAllocateErrorLogEntry(IoObject, v2);
    }
  }
  return 0LL;
}
