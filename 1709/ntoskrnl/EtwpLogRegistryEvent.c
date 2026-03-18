/*
 * XREFs of EtwpLogRegistryEvent @ 0x140746B2C
 * Callers:
 *     EtwpTraceRegistry @ 0x1407479A0 (EtwpTraceRegistry.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     EtwpLogSystemEventUnsafe @ 0x14027C4F4 (EtwpLogSystemEventUnsafe.c)
 */

unsigned int *__fastcall EtwpLogRegistryEvent(
        unsigned int a1,
        unsigned __int8 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 *a6,
        __int64 a7)
{
  unsigned __int16 v7; // r10
  unsigned int v9; // edx
  int v10; // eax
  struct _KTHREAD *CurrentThread; // r8
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v15; // [rsp+40h] [rbp-21h] BYREF
  int v16; // [rsp+48h] [rbp-19h]
  int v17; // [rsp+4Ch] [rbp-15h]
  __int64 v18; // [rsp+50h] [rbp-11h]
  __int64 *v19; // [rsp+60h] [rbp-1h] BYREF
  _QWORD v20[2]; // [rsp+68h] [rbp+7h]
  int v21; // [rsp+78h] [rbp+17h]
  int v22; // [rsp+7Ch] [rbp+1Bh]

  v7 = a2 | 0x900;
  v16 = a3;
  v17 = a4;
  v20[0] = 24LL;
  v9 = 1;
  v15 = *a6;
  v18 = a5;
  v19 = &v15;
  if ( a7 )
  {
    v10 = *(_WORD *)a7 & 0xFFFE;
    if ( *(_QWORD *)(a7 + 8) )
    {
      if ( (*(_WORD *)a7 & 0xFFFE) != 0 )
      {
        v20[1] = *(_QWORD *)(a7 + 8);
        v9 = 2;
        v21 = v10;
        v22 = 0;
      }
    }
  }
  CurrentThread = KeGetCurrentThread();
  v12 = 2LL * v9;
  v20[v12 - 1] = &EtwpNull;
  v13 = EtwpHostSiloState;
  v20[v12] = 2LL;
  return EtwpLogSystemEventUnsafe(v13, (__int64)&v19, CurrentThread, a1, v9 + 1, v7, 0x501902u);
}
