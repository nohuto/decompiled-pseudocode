/*
 * XREFs of IoGetRequestorProcessId @ 0x14003C9A0
 * Callers:
 *     <none>
 * Callees:
 *     IoGetRequestorProcess @ 0x14004D4E0 (IoGetRequestorProcess.c)
 */

ULONG __stdcall IoGetRequestorProcessId(PIRP Irp)
{
  PEPROCESS RequestorProcess; // rax

  RequestorProcess = IoGetRequestorProcess(Irp);
  if ( RequestorProcess )
    LODWORD(RequestorProcess) = RequestorProcess[1].Header.WaitListHead.Flink;
  return (unsigned int)RequestorProcess;
}
