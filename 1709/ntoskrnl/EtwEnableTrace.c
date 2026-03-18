/*
 * XREFs of EtwEnableTrace @ 0x1405A8C30
 * Callers:
 *     WdipSemEnableDisableTrace @ 0x1405A8CF4 (WdipSemEnableDisableTrace.c)
 *     EtwWmitraceWorker @ 0x14074A7F4 (EtwWmitraceWorker.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1400D2E30 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpEnableTrace @ 0x1405A88D0 (EtwpEnableTrace.c)
 */

__int64 __fastcall EtwEnableTrace(
        __int128 *a1,
        _OWORD *a2,
        __int16 a3,
        int a4,
        char a5,
        __int64 a6,
        __int64 a7,
        int a8)
{
  _QWORD *CurrentServerSiloGlobals; // rax
  size_t Size; // [rsp+60h] [rbp-38h]
  size_t v15; // [rsp+70h] [rbp-28h]
  size_t v16; // [rsp+80h] [rbp-18h]

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  LODWORD(v16) = 0;
  LODWORD(v15) = 0;
  LODWORD(Size) = 0;
  return EtwpEnableTrace(
           CurrentServerSiloGlobals[108],
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0LL,
           0LL,
           0LL,
           Size,
           0LL,
           v15,
           0LL,
           v16,
           0LL);
}
