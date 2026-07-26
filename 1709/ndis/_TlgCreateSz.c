/*
 * XREFs of _TlgCreateSz @ 0x1C0022468
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C0022104 (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     <none>
 */

void __stdcall TlgCreateSz(PEVENT_DATA_DESCRIPTOR pDesc, LPCSTR psz)
{
  __int64 v2; // rax
  LPCSTR v3; // r8

  LODWORD(v2) = 0;
  v3 = File;
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
  pDesc->Ptr = (unsigned __int64)v3;
}
