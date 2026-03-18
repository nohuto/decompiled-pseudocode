/*
 * XREFs of EtwTraceFreezeThawProcess @ 0x14070A970
 * Callers:
 *     PsFreezeProcess @ 0x1404C7A84 (PsFreezeProcess.c)
 *     PsThawProcess @ 0x14054E700 (PsThawProcess.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void *__fastcall EtwTraceFreezeThawProcess(__int64 a1, char a2)
{
  const EVENT_DESCRIPTOR *v3; // rdx
  int v5; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+38h] [rbp-40h] BYREF
  __int64 v7; // [rsp+48h] [rbp-30h]
  int v8; // [rsp+50h] [rbp-28h]
  int v9; // [rsp+54h] [rbp-24h]

  v5 = *(_DWORD *)(a1 + 736);
  v6.Ptr = (ULONGLONG)&v5;
  v6.Reserved = 0;
  v6.Size = 4;
  v7 = a1 + 776;
  v9 = 0;
  v8 = 8;
  if ( (dword_140345008 & 2) != 0 )
  {
    v3 = (const EVENT_DESCRIPTOR *)&ProcessFreezeEvent;
    if ( !a2 )
      v3 = &ProcessThawEvent;
    EtwWrite(EtwpPsProvRegHandle, v3, 0LL, 2u, &v6);
  }
  return EtwTraceKernelEvent((int)&v6, 1, 0x40000002u, 805 - (a2 != 0), 5249282);
}
