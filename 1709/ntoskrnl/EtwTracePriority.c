/*
 * XREFs of EtwTracePriority @ 0x14027B720
 * Callers:
 *     PsSetPagePriorityThread @ 0x1400217F8 (PsSetPagePriorityThread.c)
 *     PsSetIoPriorityThread @ 0x140021850 (PsSetIoPriorityThread.c)
 *     KeSetPriorityThread @ 0x14008BE00 (KeSetPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x1400A7A70 (KeSetActualBasePriorityThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1400D34C8 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetBasePriorityThread @ 0x1400D38F0 (KeSetBasePriorityThread.c)
 *     KeBoostPriorityThread @ 0x1400FE440 (KeBoostPriorityThread.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     EtwpPsProvTracePriority @ 0x14027CAF4 (EtwpPsProvTracePriority.c)
 */

void __fastcall EtwTracePriority(__int64 a1, unsigned __int16 a2, int a3, int a4, _BYTE *a5)
{
  char v5; // di
  char v6; // bl
  int v9; // eax
  int v10; // [rsp+30h] [rbp-48h] BYREF
  char v11; // [rsp+34h] [rbp-44h]
  char v12; // [rsp+35h] [rbp-43h]
  __int16 v13; // [rsp+36h] [rbp-42h]
  int *v14; // [rsp+38h] [rbp-40h] BYREF
  int v15; // [rsp+40h] [rbp-38h]
  int v16; // [rsp+44h] [rbp-34h]

  if ( a3 != a4 )
  {
    v5 = a4;
    v6 = a3;
    if ( EtwpHostSiloState != -4464 && (*(_DWORD *)(EtwpHostSiloState + 4468) & 0x2000) != 0 )
      EtwpPsProvTracePriority(a1, a2);
    v9 = *(_DWORD *)(a1 + 1600);
    v13 = 0;
    v10 = v9;
    v11 = v6;
    v12 = v5;
    if ( a5 )
      LOBYTE(v13) = *a5;
    v16 = 0;
    v14 = &v10;
    v15 = 8;
    EtwTraceKernelEvent((__int64)&v14, 1u, 0x20002000u, a2, 0x1501903u);
  }
}
