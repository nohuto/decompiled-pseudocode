/*
 * XREFs of ?SignalCompletionEvent@CSpatialCrossProcessServerEndpoint@@AEAA_NXZ @ 0x14005F068
 * Callers:
 *     ?EmptyBufferMonitorThread@CSpatialCrossProcessServerEndpoint@@AEAAXXZ @ 0x14005E97C (-EmptyBufferMonitorThread@CSpatialCrossProcessServerEndpoint@@AEAAXXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x140036454 (WPP_SF_.c)
 *     WPP_SF_dq @ 0x140054EF4 (WPP_SF_dq.c)
 *     ?LogSetClientEvent@CSpatialCrossProcessEndpointTraceLogger@@QEAAXXZ @ 0x14005A28C (-LogSetClientEvent@CSpatialCrossProcessEndpointTraceLogger@@QEAAXXZ.c)
 *     ?IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x14005D334 (-IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 */

char __fastcall CSpatialCrossProcessServerEndpoint::SignalCompletionEvent(CSpatialCrossProcessServerEndpoint *this)
{
  __int64 v1; // rax
  char v2; // di
  __int64 v4; // rax
  __int64 v5; // rdx
  const GUID *v6; // r8
  const GUID *v7; // r9

  v1 = *((_QWORD *)this + 122);
  v2 = 0;
  if ( v1 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
    {
      WPP_SF_dq(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xAu,
        &WPP_322c11f52d333bde9b856190d50d5b1b_Traceguids,
        *((_DWORD *)this + 21),
        v1);
    }
    _InterlockedExchange64((volatile __int64 *)this + 121, *((_QWORD *)this + 122));
    v4 = *((_QWORD *)this + 110);
    *((_QWORD *)this + 122) = 0LL;
    _InterlockedOr((volatile signed __int32 *)(v4 + 64), 0x20u);
  }
  if ( *((_QWORD *)this + 121) )
  {
    if ( CSpatialCrossProcessBaseEndpoint::IsRunning(this) )
    {
      CSpatialCrossProcessEndpointTraceLogger::LogSetClientEvent(
        (CSpatialCrossProcessServerEndpoint *)((char *)this + 384),
        v5,
        v6,
        v7);
      SetEvent(*((HANDLE *)this + 121));
      return 1;
    }
  }
  else if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, (__int64)&WPP_322c11f52d333bde9b856190d50d5b1b_Traceguids);
  }
  return v2;
}
