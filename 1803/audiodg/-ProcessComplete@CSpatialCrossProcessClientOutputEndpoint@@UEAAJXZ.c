/*
 * XREFs of ?ProcessComplete@CSpatialCrossProcessClientOutputEndpoint@@UEAAJXZ @ 0x14005EC60
 * Callers:
 *     <none>
 * Callees:
 *     ?LogObjectCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBDII@Z @ 0x14005A374 (-LogObjectCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBDII@Z.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005AE50 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?CommitWrite@CSpatialCrossProcessBaseEndpoint@@IEAAJII@Z @ 0x14005BBFC (-CommitWrite@CSpatialCrossProcessBaseEndpoint@@IEAAJII@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessClientOutputEndpoint::ProcessComplete(
        CSpatialCrossProcessClientOutputEndpoint *this)
{
  unsigned int v1; // ebx
  void *v3; // rcx

  v1 = 0;
  if ( *((_BYTE *)this + 56) )
  {
    if ( *((_BYTE *)this + 1056) )
    {
      CSpatialCrossProcessEndpointTraceLogger::LogObjectCount(
        (CSpatialCrossProcessClientOutputEndpoint *)((char *)this + 368),
        "Client",
        *((_DWORD *)this + 260),
        *((_DWORD *)this + 231));
      CSpatialCrossProcessBaseEndpoint::CommitWrite(
        (CSpatialCrossProcessClientOutputEndpoint *)((char *)this - 16),
        *((_DWORD *)this + 260),
        *((_DWORD *)this + 231));
      v3 = (void *)*((_QWORD *)this + 39);
      *((_BYTE *)this + 1056) = 0;
      *((_DWORD *)this + 263) = 0;
      SetEvent(v3);
    }
  }
  else
  {
    v1 = -2005139437;
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessClientOutputEndpoint::ProcessComplete", 243, -2005139437);
  }
  return v1;
}
