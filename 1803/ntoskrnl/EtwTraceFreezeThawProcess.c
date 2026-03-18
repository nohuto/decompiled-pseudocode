/*
 * XREFs of EtwTraceFreezeThawProcess @ 0x1407A7764
 * Callers:
 *     PsThawProcess @ 0x140565D8C (PsThawProcess.c)
 *     PsFreezeProcess @ 0x140565F94 (PsFreezeProcess.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400C1C38 (EtwTraceKernelEvent.c)
 *     EtwWrite @ 0x1400EF820 (EtwWrite.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceFreezeThawProcess(__int64 a1, char a2)
{
  const EVENT_DESCRIPTOR *v3; // rdx
  int v5; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+38h] [rbp-30h] BYREF
  __int64 v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+50h] [rbp-18h]
  int v9; // [rsp+54h] [rbp-14h]

  v5 = *(_DWORD *)(a1 + 736);
  v6.Ptr = (ULONGLONG)&v5;
  v6.Reserved = 0;
  v6.Size = 4;
  v7 = a1 + 776;
  v9 = 0;
  v8 = 8;
  if ( EtwpHostSiloState != -4480 && (*(_DWORD *)(EtwpHostSiloState + 4488) & 2) != 0 )
  {
    v3 = (const EVENT_DESCRIPTOR *)&ProcessFreezeEvent;
    if ( !a2 )
      v3 = &ProcessThawEvent;
    EtwWrite(EtwpPsProvRegHandle, v3, 0LL, 2u, &v6);
  }
  return EtwTraceKernelEvent((int)&v6, 1, 0x40000002u, 805 - (a2 != 0), 5249282);
}
