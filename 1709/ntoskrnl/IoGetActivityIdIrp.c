/*
 * XREFs of IoGetActivityIdIrp @ 0x1401034A0
 * Callers:
 *     IoPropagateActivityIdToThread @ 0x140117E90 (IoPropagateActivityIdToThread.c)
 *     EtwpTraceIo @ 0x14027D2B0 (EtwpTraceIo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoGetActivityIdIrp(__int64 a1, _OWORD *a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 200);
  if ( *(char *)(a1 + 71) < 0 || !v2 || (*(_BYTE *)(v2 + 2) & 1) == 0 )
    return 3221226021LL;
  result = 0LL;
  *a2 = *(_OWORD *)(*(_QWORD *)(a1 + 200) + 24LL);
  return result;
}
