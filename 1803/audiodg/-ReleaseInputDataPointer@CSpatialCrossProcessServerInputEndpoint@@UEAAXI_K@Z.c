/*
 * XREFs of ?ReleaseInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXI_K@Z @ 0x14005FAF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?LogReleaseInputDataPointer@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI_N@Z @ 0x14005A4B4 (-LogReleaseInputDataPointer@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI_N@Z.c)
 *     ?RegisterGlitches@CSpatialCrossProcessEndpointTraceLogger@@QEAAXHH@Z @ 0x14005AD18 (-RegisterGlitches@CSpatialCrossProcessEndpointTraceLogger@@QEAAXHH@Z.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005AE50 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?CommitRead@CSpatialCrossProcessBaseEndpoint@@IEAAJI@Z @ 0x14005BB34 (-CommitRead@CSpatialCrossProcessBaseEndpoint@@IEAAJI@Z.c)
 *     ?AEWMILOG_DATA@@YAXKPEAXEE_K11@Z @ 0x140060254 (-AEWMILOG_DATA@@YAXKPEAXEE_K11@Z.c)
 */

void __fastcall CSpatialCrossProcessServerInputEndpoint::ReleaseInputDataPointer(
        CSpatialCrossProcessServerInputEndpoint *this,
        unsigned int a2)
{
  volatile signed __int32 **v2; // rsi
  unsigned __int64 v4; // rbp
  const GUID *v6; // r9
  unsigned int v7; // ecx
  unsigned __int8 v8; // r8
  int v9; // ebx
  unsigned int v10; // edx
  int v11; // eax

  v2 = (volatile signed __int32 **)((char *)this - 1096);
  v4 = a2;
  AEWMILOG_DATA(
    (unsigned int)this,
    (char *)this - 1096,
    *((_BYTE *)this + 72),
    7u,
    a2,
    *((unsigned __int8 *)this + 72),
    *((unsigned int *)this + 16));
  CSpatialCrossProcessEndpointTraceLogger::LogReleaseInputDataPointer(
    (CSpatialCrossProcessServerInputEndpoint *)((char *)this - 712),
    a2,
    *((_BYTE *)this + 72),
    v6);
  CSpatialCrossProcessEndpointTraceLogger::RegisterGlitches(
    (CSpatialCrossProcessEndpointTraceLogger *)(v2 + 48),
    _InterlockedExchange(v2[110] + 19, 0) != 0,
    _InterlockedExchange(v2[110] + 20, 0) != 0);
  v9 = 0;
  if ( *((_BYTE *)this + 72) )
  {
    (*((void (__fastcall **)(volatile signed __int32 **, _QWORD))*v2 + 11))(v2, *((unsigned int *)this + 17));
    v10 = *((_DWORD *)this + 16);
    *((_BYTE *)this + 72) = 0;
    v11 = CSpatialCrossProcessBaseEndpoint::CommitRead(v2, v10);
    v9 = v11;
    if ( v11 < 0 )
      SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessServerInputEndpoint::ReleaseInputDataPointer", 365, v11);
  }
  *((_DWORD *)this + 19) = -2147418113;
  AEWMILOG_DATA(v7, v2, v8, 8u, v4, v9, 0LL);
}
