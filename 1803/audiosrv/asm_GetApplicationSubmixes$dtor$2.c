/*
 * XREFs of asm_GetApplicationSubmixes$dtor$2 @ 0x1800D7F1F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall asm_GetApplicationSubmixes_dtor_2(__int64 a1, __int64 a2)
{
  return std::vector<CVADServer *>::~vector<CVADServer *>(a2 + 72);
}
