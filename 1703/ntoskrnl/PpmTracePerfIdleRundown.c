/*
 * XREFs of PpmTracePerfIdleRundown @ 0x140233760
 * Callers:
 *     <none>
 * Callees:
 *     PpmEventIdleStateChange @ 0x140022A04 (PpmEventIdleStateChange.c)
 *     PpmPerfGetCurrentState @ 0x140031BD8 (PpmPerfGetCurrentState.c)
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

__int64 __fastcall PpmTracePerfIdleRundown(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v4; // [rsp+30h] [rbp-30h] BYREF
  __int64 v5; // [rsp+38h] [rbp-28h]
  __int64 v6; // [rsp+40h] [rbp-20h]
  __int64 *v7; // [rsp+48h] [rbp-18h] BYREF
  int v8; // [rsp+50h] [rbp-10h]
  int v9; // [rsp+54h] [rbp-Ch]

  if ( a1[3038] )
  {
    v4 = 0LL;
    v5 = 0LL;
    v6 = 0LL;
    PpmPerfGetCurrentState((__int64)a1, (unsigned __int64)&v4 + 4, 0LL, 0LL, &v4, 0LL);
    v9 = 0;
    LODWORD(v5) = HIDWORD(v4);
    v6 = a1[25];
    v7 = &v4;
    v8 = 24;
    EtwTraceKernelEvent((int)&v7, 1, 0x80008000, 4659, 4200450);
  }
  v2 = a1[2992];
  if ( v2 )
    PpmEventIdleStateChange(*(_DWORD *)(v2 + 12), *(_DWORD *)(v2 + 12));
  return 0LL;
}
