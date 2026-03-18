/*
 * XREFs of EtwEnableTrace @ 0x1404685E0
 * Callers:
 *     WdipSemEnableDisableTrace @ 0x14046858C (WdipSemEnableDisableTrace.c)
 *     EtwWmitraceWorker @ 0x14070EB94 (EtwWmitraceWorker.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14000D920 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpEnableTrace @ 0x1405524C8 (EtwpEnableTrace.c)
 */

__int64 __fastcall EtwEnableTrace(int a1, int a2, int a3, int a4, char a5, __int64 a6, __int64 a7, int a8)
{
  _QWORD *CurrentServerSiloGlobals; // rax
  size_t Size; // [rsp+60h] [rbp-28h]
  size_t v15; // [rsp+70h] [rbp-18h]

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  LODWORD(v15) = 0;
  LODWORD(Size) = 0;
  return EtwpEnableTrace(CurrentServerSiloGlobals[108], a1, a2, a3, a4, a5, a6, a7, a8, 0LL, 0LL, 0LL, Size, 0LL, v15);
}
