/*
 * XREFs of ?GetPingPongReadIndex@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z @ 0x14005C490
 * Callers:
 *     ?GetObjectsAvailableForProcessing@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z @ 0x14005C310 (-GetObjectsAvailableForProcessing@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?GetState@PingPongState@@AEBA?AW4State@1@XZ @ 0x14005C774 (-GetState@PingPongState@@AEBA-AW4State@1@XZ.c)
 *     ?Log@?$LogarithmicLogger@$1?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z$0?HHIDPPJO@@@QEAAXPEBDIJ@Z @ 0x14005CBB0 (-Log@-$LogarithmicLogger@$1-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z$0-HHIDPPJO@@@QEAAXPEBD.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::GetPingPongReadIndex(
        volatile signed __int32 **this,
        unsigned int *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  unsigned __int32 State; // r10d
  unsigned __int32 v7; // r11d
  unsigned int v8; // ecx
  unsigned int v9; // ebx
  unsigned __int32 v10; // r10d
  int v12; // [rsp+30h] [rbp+8h] BYREF

  State = PingPongState::GetState(this + 21);
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
      v4 = State;
      v7 = `PingPongState::LockForRead'::`2'::nextState[State];
      State = _InterlockedCompareExchange(this[38], v7, State);
      if ( (_DWORD)v4 == State )
        goto LABEL_4;
    }
  }
  v7 = 16;
LABEL_6:
  v8 = *((_DWORD *)this + v7 + 42);
  if ( v8 == 3 )
  {
    v12 = 1;
    (*(void (__fastcall **)(char *, _QWORD, int *))this[92])((char *)this + 736, 0LL, &v12);
    v9 = -2005139387;
    v10 = PingPongState::GetState(this + 21);
    if ( v10 != 17 )
    {
      do
      {
        if ( v10 > 0x10 )
          break;
        v5 = v10;
        v4 = (unsigned int)`PingPongState::Reset'::`2'::nextState[v10];
        v10 = _InterlockedCompareExchange(this[38], v4, v10);
      }
      while ( (_DWORD)v5 != v10 );
    }
    goto LABEL_13;
  }
  if ( v8 == 2 )
  {
    _InterlockedIncrement(this[110] + 19);
    v9 = -2005139358;
LABEL_13:
    LogarithmicLogger<&void SpatialCPTraceLoggingErrorHelper(char const *,unsigned int,long),-2005139358>::Log(
      this + 113,
      v4,
      v5,
      v9);
    return v9;
  }
  *a2 = v8;
  return 0LL;
}
