/*
 * XREFs of PssNtFreeWalkMarker @ 0x180086280
 * Callers:
 *     <none>
 * Callees:
 *     ZwUnmapViewOfSection @ 0x18009B000 (ZwUnmapViewOfSection.c)
 */

__int64 __fastcall PssNtFreeWalkMarker(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
  {
    result = ZwUnmapViewOfSection(-1LL);
    *a1 = 0LL;
  }
  a1[1] = 0LL;
  return result;
}
