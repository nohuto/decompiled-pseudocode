/*
 * XREFs of IoGetRequestorProcessId @ 0x140187250
 * Callers:
 *     <none>
 * Callees:
 *     IoGetRequestorProcess @ 0x1400AA380 (IoGetRequestorProcess.c)
 */

ULONG __stdcall IoGetRequestorProcessId(PIRP Irp)
{
  PEPROCESS RequestorProcess; // rax

  RequestorProcess = IoGetRequestorProcess(Irp);
  if ( RequestorProcess )
    LODWORD(RequestorProcess) = RequestorProcess[1].Header.WaitListHead.Flink;
  return (unsigned int)RequestorProcess;
}
