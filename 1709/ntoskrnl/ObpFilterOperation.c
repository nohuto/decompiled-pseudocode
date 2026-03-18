/*
 * XREFs of ObpFilterOperation @ 0x1400BBCC0
 * Callers:
 *     ObCompleteObjectDuplication @ 0x140506594 (ObCompleteObjectDuplication.c)
 * Callees:
 *     <none>
 */

bool __fastcall ObpFilterOperation(__int64 a1)
{
  return (*(_BYTE *)(a1 + 66) & 0x40) != 0 && *(_QWORD *)(a1 + 200) != a1 + 200;
}
