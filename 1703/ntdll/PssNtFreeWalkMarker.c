/*
 * XREFs of PssNtFreeWalkMarker @ 0x180106A20
 * Callers:
 *     <none>
 * Callees:
 *     ZwUnmapViewOfSection @ 0x1800A5840 (ZwUnmapViewOfSection.c)
 */

__int64 __fastcall PssNtFreeWalkMarker(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
  {
    result = ZwUnmapViewOfSection();
    *a1 = 0LL;
  }
  a1[1] = 0LL;
  return result;
}
