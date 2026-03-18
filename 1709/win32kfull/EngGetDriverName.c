/*
 * XREFs of EngGetDriverName @ 0x1C0269F50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LPWSTR __stdcall EngGetDriverName(HDEV hdev)
{
  return *(LPWSTR *)(*(_QWORD *)(*((_QWORD *)hdev + 226) + 16LL) + 8LL);
}
