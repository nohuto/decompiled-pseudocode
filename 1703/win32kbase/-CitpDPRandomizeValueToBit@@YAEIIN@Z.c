/*
 * XREFs of ?CitpDPRandomizeValueToBit@@YAEIIN@Z @ 0x1C0154488
 * Callers:
 *     ?CitpDPProcessDuration@@YAIIIN@Z @ 0x1C01543FC (-CitpDPProcessDuration@@YAIIIN@Z.c)
 * Callees:
 *     exp @ 0x1C00A1574 (exp.c)
 */

bool __fastcall CitpDPRandomizeValueToBit(unsigned int a1, int a2, double a3)
{
  int v3; // esi
  double v5; // xmm0_8
  int pbBuffer; // [rsp+40h] [rbp+8h] BYREF

  v3 = a1;
  if ( a1 >= a2 )
    v3 = a2 - 1;
  v5 = exp(a3);
  pbBuffer = 0;
  BCryptGenRandom(0LL, (PUCHAR)&pbBuffer, 4u, 2u);
  return (double)v3 / (double)a2 * ((v5 - 1.0) / (v5 + 1.0)) + 1.0 / (v5 + 1.0) > (double)pbBuffer
                                                                                * 2.328306436538696e-10;
}
