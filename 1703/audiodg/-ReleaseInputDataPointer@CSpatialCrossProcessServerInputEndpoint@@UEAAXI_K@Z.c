/*
 * XREFs of ?ReleaseInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXI_K@Z @ 0x14005F640
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?LogReleaseInputDataPointer@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI_N@Z @ 0x14005A1EC (-LogReleaseInputDataPointer@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI_N@Z.c)
 *     ?RegisterGlitches@CSpatialCrossProcessEndpointTraceLogger@@QEAAXHH@Z @ 0x14005AA50 (-RegisterGlitches@CSpatialCrossProcessEndpointTraceLogger@@QEAAXHH@Z.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005AB90 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?CommitRead@CSpatialCrossProcessBaseEndpoint@@IEAAJI@Z @ 0x14005B6EC (-CommitRead@CSpatialCrossProcessBaseEndpoint@@IEAAJI@Z.c)
 *     ?AEWMILOG_DATA@@YAXKPEAXEE_K11@Z @ 0x1400600F0 (-AEWMILOG_DATA@@YAXKPEAXEE_K11@Z.c)
 */

void __fastcall CSpatialCrossProcessServerInputEndpoint::ReleaseInputDataPointer(
        CSpatialCrossProcessServerInputEndpoint *this,
        unsigned int a2)
{
  volatile signed __int32 **v2; // rsi
  unsigned __int64 v4; // rbp
  const GUID *v6; // r8
  const GUID *v7; // r9
  unsigned int v8; // ecx
  unsigned __int8 v9; // r8
  int v10; // ebx
  unsigned int v11; // edx
  int v12; // eax

  v2 = (volatile signed __int32 **)((char *)this - 1088);
  v4 = a2;
  AEWMILOG_DATA(
    (unsigned int)this,
    (char *)this - 1088,
    *((_BYTE *)this + 72),
    7u,
    a2,
    *((unsigned __int8 *)this + 72),
    *((unsigned int *)this + 16));
  LOBYTE(v6) = *((_BYTE *)this + 72);
  CSpatialCrossProcessEndpointTraceLogger::LogReleaseInputDataPointer(
    (CSpatialCrossProcessServerInputEndpoint *)((char *)this - 704),
    a2,
    v6,
    v7);
  CSpatialCrossProcessEndpointTraceLogger::RegisterGlitches(
    (CSpatialCrossProcessEndpointTraceLogger *)(v2 + 48),
    _InterlockedExchange(v2[110] + 17, 0) != 0,
    _InterlockedExchange(v2[110] + 18, 0) != 0);
  v10 = 0;
  if ( *((_BYTE *)this + 72) )
  {
    (*((void (__fastcall **)(volatile signed __int32 **, _QWORD))*v2 + 11))(v2, *((unsigned int *)this + 17));
    v11 = *((_DWORD *)this + 16);
    *((_BYTE *)this + 72) = 0;
    v12 = CSpatialCrossProcessBaseEndpoint::CommitRead(v2, v11);
    v10 = v12;
    if ( v12 < 0 )
      SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessServerInputEndpoint::ReleaseInputDataPointer", 325, v12);
  }
  *((_DWORD *)this + 19) = -2147418113;
  AEWMILOG_DATA(v8, v2, v9, 8u, v4, v10, 0LL);
}
