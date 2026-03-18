/*
 * XREFs of IsDefaultMouseSensitivity @ 0x1C012E270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall IsDefaultMouseSensitivity(int a1)
{
  return *((_DWORD *)qword_1C0188098 + 24) == a1;
}
