/*
 * XREFs of ?CommitRead@CSpatialCrossProcessBaseEndpoint@@IEAAJI@Z @ 0x14005E53C
 * Callers:
 *     ?ReleaseInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXI_K@Z @ 0x1400624E0 (-ReleaseInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXI_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005D9E0 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetState@PingPongState@@AEBA?AW4State@1@XZ @ 0x14005F1C0 (-GetState@PingPongState@@AEBA-AW4State@1@XZ.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::CommitRead(volatile signed __int32 **this, unsigned int a2)
{
  unsigned int v3; // ebx
  unsigned __int32 State; // r10d
  unsigned __int32 v5; // r11d
  unsigned __int32 v6; // edx
  int v8; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 > 1 )
  {
    v3 = -2147024809;
LABEL_10:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::CommitRead", 980, v3);
    return v3;
  }
  State = PingPongState::GetState(this + 21);
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
      v6 = State;
      v5 = `PingPongState::CommitRead'::`2'::nextState[State];
      State = _InterlockedCompareExchange(this[38], v5, State);
      if ( v6 == State )
        goto LABEL_6;
    }
  }
  v5 = 16;
LABEL_8:
  if ( *((_DWORD *)this + v5 + 42) == 3 )
  {
    v8 = 1;
    (*(void (__fastcall **)(char *, _QWORD, int *))this[92])((char *)this + 736, 0LL, &v8);
    v3 = -2005139387;
    goto LABEL_10;
  }
  return 0LL;
}
