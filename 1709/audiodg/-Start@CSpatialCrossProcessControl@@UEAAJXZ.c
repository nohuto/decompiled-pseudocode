/*
 * XREFs of ?Start@CSpatialCrossProcessControl@@UEAAJXZ @ 0x1400602A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010310 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ?AEWMILOG_CONTROL@@YAXKPEAXEE_K@Z @ 0x1400557F0 (-AEWMILOG_CONTROL@@YAXKPEAXEE_K@Z.c)
 *     ?LogStreamControl@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBD@Z @ 0x14005D204 (-LogStreamControl@CSpatialCrossProcessEndpointTraceLogger@@QEAAXPEBD@Z.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005D9E0 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x140060104 (-IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 *     ?IsValidFlags@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x14006012C (-IsValidFlags@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 */

__int64 __fastcall CSpatialCrossProcessControl::Start(CSpatialCrossProcessControl *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rax
  _BYTE *v3; // rcx
  int v4; // ebx
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // r8
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v10; // [rsp+38h] [rbp-10h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(*((_QWORD *)this + 1) + 32LL);
  v10 = 0;
  lpCriticalSection = v2;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v3 = (_BYTE *)*((_QWORD *)this + 1);
  if ( !v3[72] )
  {
    v4 = -2005139437;
LABEL_3:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessControl::Start", 124, v4);
    goto LABEL_4;
  }
  v4 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v3 + 72LL))(v3);
  if ( v4 < 0 )
    goto LABEL_3;
  if ( !CSpatialCrossProcessBaseEndpoint::IsValidFlags(*((CSpatialCrossProcessBaseEndpoint **)this + 1)) )
  {
    v4 = -2005139387;
    goto LABEL_3;
  }
  if ( CSpatialCrossProcessBaseEndpoint::IsRunning(*((CSpatialCrossProcessBaseEndpoint **)this + 1)) )
  {
    v4 = -2005139434;
    goto LABEL_3;
  }
  _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 1) + 120LL), 1);
  v6 = *((_QWORD *)this + 1);
  CSpatialCrossProcessEndpointTraceLogger::LogStreamControl(
    (CSpatialCrossProcessEndpointTraceLogger *)(v6 + 384),
    "Start");
  _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v6 + 880) + 72LL), 2u);
  SetEvent(*(HANDLE *)(v6 + 328));
  v4 = 0;
  AEWMILOG_CONTROL(v7, this, v8, 6);
LABEL_4:
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v4;
}
