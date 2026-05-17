/*
 * XREFs of PssNtFreeWalkMarker @ 0x180088AD0
 * Callers:
 *     <none>
 * Callees:
 *     NtUnmapViewOfSection @ 0x1800A0600 (NtUnmapViewOfSection.c)
 */

__int64 __fastcall PssNtFreeWalkMarker(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( *a1 )
  {
    result = NtUnmapViewOfSection(-1LL, *a1, a3);
    *a1 = 0LL;
  }
  a1[1] = 0LL;
  return result;
}
