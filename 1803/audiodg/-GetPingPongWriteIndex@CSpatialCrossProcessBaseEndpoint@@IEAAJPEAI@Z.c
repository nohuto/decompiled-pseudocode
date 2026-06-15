/*
 * XREFs of ?GetPingPongWriteIndex@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z @ 0x14005C5BC
 * Callers:
 *     ?GetObjectsAvailableForRendering@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z @ 0x14005C3EC (-GetObjectsAvailableForRendering@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005AE50 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetState@PingPongState@@AEBA?AW4State@1@XZ @ 0x14005C774 (-GetState@PingPongState@@AEBA-AW4State@1@XZ.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::GetPingPongWriteIndex(
        CSpatialCrossProcessBaseEndpoint *this,
        unsigned int *a2)
{
  volatile signed __int32 **v2; // rdi
  unsigned __int32 v4; // ebx
  unsigned __int32 State; // r10d
  __int64 v6; // r11
  unsigned __int32 v7; // edx
  __int64 v8; // r9
  unsigned int v9; // ebx
  unsigned __int32 v10; // r10d
  unsigned __int32 v11; // r8d
  __int64 v12; // rax
  __int64 result; // rax
  int v14; // r8d
  int v15; // [rsp+30h] [rbp+8h] BYREF

  v2 = (volatile signed __int32 **)((char *)this + 168);
  v4 = 16;
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
      v4 = `PingPongState::LockForWrite'::`2'::nextState[State];
      State = _InterlockedCompareExchange(v2[17], v4, State);
      if ( v7 == State )
        goto LABEL_4;
    }
  }
  v4 = 16;
LABEL_6:
  v8 = *((int *)v2 + v4 + 17);
  if ( (_DWORD)v8 == 3 )
  {
    v15 = 1;
    (**(void (__fastcall ***)(__int64, _QWORD, int *))(v6 + 736))(v6 + 736, 0LL, &v15);
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
  v12 = *(_QWORD *)(v6 + 880);
  if ( (_DWORD)v8 == 2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 80));
    v9 = -2005139359;
LABEL_13:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::GetPingPongWriteIndex", 633, v9);
    return v9;
  }
  v14 = *(_DWORD *)(v12 + 52);
  result = 0LL;
  *(_DWORD *)(*(_QWORD *)(v6 + 880) + 4 * v8 + 56) = v14;
  *a2 = v8;
  return result;
}
