/*
 * XREFs of _TlgCreateSz @ 0x18006C84C
 * Callers:
 *     PdcpFireClientCallWatchdog @ 0x18006C6A0 (PdcpFireClientCallWatchdog.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x18006C95C (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     <none>
 */

void __stdcall TlgCreateSz(PEVENT_DATA_DESCRIPTOR pDesc, LPCSTR psz)
{
  __int64 v2; // rax

  LODWORD(v2) = 0;
  if ( psz )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( psz[v2] );
  }
  if ( !psz )
    psz = (LPCSTR)&word_1800782C0;
  pDesc->Reserved = 0;
  pDesc->Ptr = (ULONGLONG)psz;
  pDesc->Size = v2 + 1;
}
