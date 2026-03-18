/*
 * XREFs of RefOf @ 0x1C0052E00
 * Callers:
 *     <none>
 * Callees:
 *     MoveObjData @ 0x1C0047124 (MoveObjData.c)
 */

__int64 __fastcall RefOf(__int64 a1, __int64 a2)
{
  MoveObjData(*(_OWORD **)(a2 + 88), *(_OWORD **)(a2 + 80));
  return 0LL;
}
