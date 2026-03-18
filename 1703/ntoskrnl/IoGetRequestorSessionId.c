/*
 * XREFs of IoGetRequestorSessionId @ 0x140149230
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 */

NTSTATUS __stdcall IoGetRequestorSessionId(PIRP Irp, PULONG pSessionId)
{
  PETHREAD Thread; // rcx
  ULONG SessionId; // eax

  Thread = Irp->Tail.Overlay.Thread;
  if ( Thread )
  {
    SessionId = MmGetSessionIdEx(Thread->Process);
    if ( SessionId == -1 )
      SessionId = 0;
    *pSessionId = SessionId;
    return 0;
  }
  else
  {
    *pSessionId = -1;
    return -1073741823;
  }
}
