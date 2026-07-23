/*
 * XREFs of sub_180074114 @ 0x180074114
 * Callers:
 *     sub_18001F5FC @ 0x18001F5FC (sub_18001F5FC.c)
 *     sub_180039360 @ 0x180039360 (sub_180039360.c)
 *     sub_180046AE0 @ 0x180046AE0 (sub_180046AE0.c)
 *     sub_1800CA2A4 @ 0x1800CA2A4 (sub_1800CA2A4.c)
 * Callees:
 *     sub_180074154 @ 0x180074154 (sub_180074154.c)
 *     ZwUnmapViewOfSection @ 0x18009B000 (ZwUnmapViewOfSection.c)
 */

NTSTATUS __fastcall sub_180074114(__int64 a1)
{
  void *v1; // rdx
  NTSTATUS result; // eax

  v1 = *(void **)(a1 + 48);
  if ( v1 )
  {
    if ( (*(_DWORD *)(a1 + 104) & 0x200) != 0 )
    {
      sub_180074154(*(_QWORD *)(a1 + 48));
      v1 = *(void **)(a1 + 48);
    }
    result = ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v1);
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  return result;
}
