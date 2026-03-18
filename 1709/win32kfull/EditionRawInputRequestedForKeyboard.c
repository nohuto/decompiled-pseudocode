/*
 * XREFs of EditionRawInputRequestedForKeyboard @ 0x1C01A1B90
 * Callers:
 *     <none>
 * Callees:
 *     HasHidTable @ 0x1C00A0EE0 (HasHidTable.c)
 */

__int64 __fastcall EditionRawInputRequestedForKeyboard(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( gHidCounters[0]
    || (unsigned int)HasHidTable(a1) && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 400) + 784LL) + 100LL) & 0x10) != 0 )
  {
    return 1;
  }
  return v1;
}
