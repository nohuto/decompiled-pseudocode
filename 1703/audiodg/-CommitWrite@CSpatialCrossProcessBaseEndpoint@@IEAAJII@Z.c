/*
 * XREFs of ?CommitWrite@CSpatialCrossProcessBaseEndpoint@@IEAAJII@Z @ 0x14005B7B4
 * Callers:
 *     ?ProcessComplete@CSpatialCrossProcessClientOutputEndpoint@@UEAAJXZ @ 0x14005E860 (-ProcessComplete@CSpatialCrossProcessClientOutputEndpoint@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005AB90 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetState@PingPongState@@AEBA?AW4State@1@XZ @ 0x14005C350 (-GetState@PingPongState@@AEBA-AW4State@1@XZ.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::CommitWrite(
        CSpatialCrossProcessBaseEndpoint *this,
        unsigned int a2,
        __int32 a3)
{
  unsigned int v4; // ebx
  unsigned __int32 v5; // ebx
  __int64 v6; // r10
  unsigned __int32 State; // r11d
  unsigned __int32 v8; // edx
  unsigned int v10; // eax
  int v11; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 > 1 )
  {
    v4 = -2005139345;
LABEL_10:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::CommitWrite", 952, v4);
    return v4;
  }
  v5 = 16;
  _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 110) + 4LL * a2 + 32), a3);
  State = PingPongState::GetState((char *)this + 168);
  if ( State == 17 )
  {
LABEL_6:
    if ( State <= 0x10 )
      goto LABEL_8;
  }
  else
  {
    while ( State <= 0x10 )
    {
      v8 = State;
      v5 = `PingPongState::CommitWrite'::`2'::nextState[State];
      State = _InterlockedCompareExchange(*(volatile signed __int32 **)(v6 + 304), v5, State);
      if ( v8 == State )
        goto LABEL_6;
    }
  }
  v5 = 16;
LABEL_8:
  if ( *(_DWORD *)(v6 + 4LL * v5 + 236) == 3 )
  {
    v11 = 1;
    (**(void (__fastcall ***)(__int64, _QWORD, int *))(v6 + 736))(v6 + 736, 0LL, &v11);
    v4 = -2005139387;
    goto LABEL_10;
  }
  if ( a3 )
    v10 = *(_DWORD *)(v6 + 144);
  else
    v10 = 0;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(v6 + 880) + 40LL), v10);
  return 0LL;
}
