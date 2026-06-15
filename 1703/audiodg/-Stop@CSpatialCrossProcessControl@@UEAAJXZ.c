/*
 * XREFs of ?Stop@CSpatialCrossProcessControl@@UEAAJXZ @ 0x14005D5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140004910 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AEWMILOG_CONTROL@@YAXKPEAXEE_K@Z @ 0x1400539B0 (-AEWMILOG_CONTROL@@YAXKPEAXEE_K@Z.c)
 *     ?LogStreamControl@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBD@Z @ 0x14005A390 (-LogStreamControl@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBD@Z.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005AB90 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x14005D334 (-IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 *     ?IsValidFlags@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x14005D360 (-IsValidFlags@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 */

__int64 __fastcall CSpatialCrossProcessControl::Stop(CSpatialCrossProcessControl *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rax
  CSpatialCrossProcessBaseEndpoint *v3; // rcx
  unsigned int v4; // ebx
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // r8
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v10; // [rsp+38h] [rbp-10h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(*((_QWORD *)this + 1) + 32LL);
  v10 = 0;
  lpCriticalSection = v2;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v3 = (CSpatialCrossProcessBaseEndpoint *)*((_QWORD *)this + 1);
  if ( !*((_BYTE *)v3 + 72) )
  {
    v4 = -2005139437;
LABEL_7:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessControl::Stop", 169, v4);
    goto LABEL_9;
  }
  if ( !CSpatialCrossProcessBaseEndpoint::IsValidFlags(v3) )
  {
    v4 = -2005139387;
    goto LABEL_7;
  }
  if ( !CSpatialCrossProcessBaseEndpoint::IsRunning(*((CSpatialCrossProcessBaseEndpoint **)this + 1)) )
  {
    v4 = -2005139433;
    goto LABEL_7;
  }
  _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 1) + 120LL), 1);
  v5 = *((_QWORD *)this + 1);
  CSpatialCrossProcessEndpointTraceLogger::LogStreamControl(
    (CSpatialCrossProcessEndpointTraceLogger *)(v5 + 384),
    "Stop");
  _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v5 + 880) + 64LL), 0xFFFFFFF5);
  v4 = 0;
  AEWMILOG_CONTROL(v6, this, v7, 7);
LABEL_9:
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
  return v4;
}
