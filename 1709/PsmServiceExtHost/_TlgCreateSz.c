/*
 * XREFs of _TlgCreateSz @ 0x18003B640
 * Callers:
 *     PdcpFireClientCallWatchdog @ 0x18004BC60 (PdcpFireClientCallWatchdog.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x18004BEF0 (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     <none>
 */

void __stdcall TlgCreateSz(PEVENT_DATA_DESCRIPTOR pDesc, LPCSTR psz)
{
  __int64 v2; // rax
  LPCSTR v3; // r8

  LODWORD(v2) = 0;
  v3 = (LPCSTR)&unk_18005CC01;
  if ( psz )
  {
    v3 = psz;
    v2 = -1LL;
    do
      ++v2;
    while ( psz[v2] );
  }
  pDesc->Reserved = 0;
  pDesc->Size = v2 + 1;
  pDesc->Ptr = (ULONGLONG)v3;
}
