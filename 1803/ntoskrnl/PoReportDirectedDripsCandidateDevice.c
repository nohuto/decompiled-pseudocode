/*
 * XREFs of PoReportDirectedDripsCandidateDevice @ 0x1407616B0
 * Callers:
 *     <none>
 * Callees:
 *     PipSetDevNodeStateFlags @ 0x140727DF4 (PipSetDevNodeStateFlags.c)
 *     PopDiagTraceDirectedDripsMarkDevice @ 0x1407671C0 (PopDiagTraceDirectedDripsMarkDevice.c)
 */

__int64 __fastcall PoReportDirectedDripsCandidateDevice(struct _DEVICE_OBJECT *a1)
{
  unsigned int v2; // ebx
  int v3; // eax

  v2 = 0;
  _m_prefetchw(&PopDirectedDripsState);
  if ( (_InterlockedOr(&PopDirectedDripsState, 0) & 1) != 0 && _InterlockedExchangeAdd(&dword_1403AAFBC, 0) <= 0 )
  {
    v3 = PipSetDevNodeStateFlags(a1);
    v2 = v3;
    if ( v3 >= 0 && v3 != 255 )
    {
      PopDiagTraceDirectedDripsMarkDevice(a1);
      _InterlockedIncrement(&dword_1403AAFC4);
    }
  }
  return v2;
}
