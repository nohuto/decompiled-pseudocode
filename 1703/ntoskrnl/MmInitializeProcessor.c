/*
 * XREFs of MmInitializeProcessor @ 0x140410F84
 * Callers:
 *     KiStartDynamicProcessor @ 0x1406AC0A4 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140808F4C (KeStartAllProcessors.c)
 *     MmInitNucleus @ 0x140813B1C (MmInitNucleus.c)
 * Callees:
 *     MiReservePtes @ 0x1400F7CA0 (MiReservePtes.c)
 */

ULONG_PTR __fastcall MmInitializeProcessor(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  ULONG_PTR result; // rax
  __int64 v5; // rdx

  if ( *(_DWORD *)(a1 + 36) )
    *(_QWORD *)(a1 + 25528) = -1LL;
  result = MiReservePtes((__int64)&qword_14036D0A0, 0x40uLL, a3);
  if ( result )
  {
    *(_QWORD *)(a1 + 24768) = (__int64)(result << 25) >> 16;
    *(_DWORD *)(a1 + 23664) = dword_14036C1F8;
    v5 = qword_140380230 + 2184LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 192) + 146LL);
    *(_DWORD *)(a1 + 23656) = *(unsigned __int8 *)(v5 + 2068);
    *(_DWORD *)(a1 + 23660) = *(_DWORD *)(v5 + 2064);
    return 1LL;
  }
  return result;
}
