/*
 * XREFs of PssNtFreeWalkMarker @ 0x180106A20
 * Callers:
 *     <none>
 * Callees:
 *     ZwUnmapViewOfSection @ 0x1800A5840 (ZwUnmapViewOfSection.c)
 */

NTSTATUS __fastcall PssNtFreeWalkMarker(__int64 a1)
{
  NTSTATUS result; // eax

  if ( *(_QWORD *)a1 )
  {
    result = ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, *(PVOID *)a1);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  return result;
}
