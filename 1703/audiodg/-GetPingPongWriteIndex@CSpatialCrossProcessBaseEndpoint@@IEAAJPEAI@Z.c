/*
 * XREFs of ?GetPingPongWriteIndex@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z @ 0x14005C1B0
 * Callers:
 *     ?GetObjectsAvailableForRendering@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z @ 0x14005BFE0 (-GetObjectsAvailableForRendering@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005AB90 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetState@PingPongState@@AEBA?AW4State@1@XZ @ 0x14005C350 (-GetState@PingPongState@@AEBA-AW4State@1@XZ.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::GetPingPongWriteIndex(
        CSpatialCrossProcessBaseEndpoint *this,
        unsigned int *a2)
{
  volatile signed __int32 **v2; // rdi
  unsigned __int32 State; // r10d
  unsigned __int32 v6; // r11d
  unsigned __int32 v7; // edx
  unsigned int v8; // ecx
  unsigned int v9; // ebx
  unsigned __int32 v10; // r10d
  unsigned __int32 v11; // r8d
  int v13; // [rsp+30h] [rbp+8h] BYREF

  v2 = (volatile signed __int32 **)((char *)this + 168);
  State = PingPongState::GetState((char *)this + 168);
  if ( State == 17 )
  {
LABEL_4:
    if ( State <= 0x10 )
      goto LABEL_6;
  }
  else
  {
    while ( State <= 0x10 )
    {
      v7 = State;
      v6 = `PingPongState::LockForWrite'::`2'::nextState[State];
      State = _InterlockedCompareExchange(v2[17], v6, State);
      if ( v7 == State )
        goto LABEL_4;
    }
  }
  v6 = 16;
LABEL_6:
  v8 = *((_DWORD *)v2 + v6 + 17);
  if ( v8 == 3 )
  {
    v13 = 1;
    (**((void (__fastcall ***)(char *, _QWORD, int *))this + 92))((char *)this + 736, 0LL, &v13);
    v9 = -2005139387;
    v10 = PingPongState::GetState(v2);
    if ( v10 != 17 )
    {
      do
      {
        if ( v10 > 0x10 )
          break;
        v11 = v10;
        v10 = _InterlockedCompareExchange(v2[17], `PingPongState::Reset'::`2'::nextState[v10], v10);
      }
      while ( v11 != v10 );
    }
    goto LABEL_13;
  }
  if ( v8 == 2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 110) + 72LL));
    v9 = -2005139359;
LABEL_13:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::GetPingPongWriteIndex", 632, v9);
    return v9;
  }
  *a2 = v8;
  return 0LL;
}
