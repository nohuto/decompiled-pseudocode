/*
 * XREFs of PsSetProcessPriorityClass @ 0x14024E0B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PsSetProcessPriorityClass(__int64 a1, char a2)
{
  *(_BYTE *)(a1 + 1119) = a2;
}
