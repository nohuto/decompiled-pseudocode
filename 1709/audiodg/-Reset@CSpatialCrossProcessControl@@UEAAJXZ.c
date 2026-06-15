/*
 * XREFs of ?Reset@CSpatialCrossProcessControl@@UEAAJXZ @ 0x140060150
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010310 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AEWMILOG_CONTROL@@YAXKPEAXEE_K@Z @ 0x1400557F0 (-AEWMILOG_CONTROL@@YAXKPEAXEE_K@Z.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005D9E0 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x140060104 (-IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 *     ?IsValidFlags@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x14006012C (-IsValidFlags@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 *     ?ResetStream@CSpatialCrossProcessBaseEndpoint@@IEAAJXZ @ 0x140060220 (-ResetStream@CSpatialCrossProcessBaseEndpoint@@IEAAJXZ.c)
 */

__int64 __fastcall CSpatialCrossProcessControl::Reset(CSpatialCrossProcessControl *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rax
  CSpatialCrossProcessBaseEndpoint *v3; // rcx
  int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // r8
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v9; // [rsp+38h] [rbp-10h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(*((_QWORD *)this + 1) + 32LL);
  v9 = 0;
  lpCriticalSection = v2;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v3 = (CSpatialCrossProcessBaseEndpoint *)*((_QWORD *)this + 1);
  if ( *((_BYTE *)v3 + 72) )
  {
    if ( CSpatialCrossProcessBaseEndpoint::IsValidFlags(v3) )
    {
      if ( CSpatialCrossProcessBaseEndpoint::IsRunning(*((CSpatialCrossProcessBaseEndpoint **)this + 1)) )
      {
        v4 = -2005139434;
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 1) + 128LL) = 0LL;
        *(_QWORD *)(*((_QWORD *)this + 1) + 136LL) = 0LL;
        _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 1) + 120LL), 1);
        v4 = CSpatialCrossProcessBaseEndpoint::ResetStream(*((CSpatialCrossProcessBaseEndpoint **)this + 1));
        AEWMILOG_CONTROL(v5, this, v6, 8);
        if ( v4 >= 0 )
          goto LABEL_9;
      }
    }
    else
    {
      v4 = -2005139387;
    }
  }
  else
  {
    v4 = -2005139437;
  }
  SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessControl::Reset", 72, v4);
LABEL_9:
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v4;
}
