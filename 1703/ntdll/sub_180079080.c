/*
 * XREFs of sub_180079080 @ 0x180079080
 * Callers:
 *     sub_180011D94 @ 0x180011D94 (sub_180011D94.c)
 *     sub_18003015C @ 0x18003015C (sub_18003015C.c)
 *     sub_180041A60 @ 0x180041A60 (sub_180041A60.c)
 * Callees:
 *     sub_1800790B8 @ 0x1800790B8 (sub_1800790B8.c)
 *     ZwUnmapViewOfSection @ 0x1800A5840 (ZwUnmapViewOfSection.c)
 */

NTSTATUS __fastcall sub_180079080(__int64 a1)
{
  NTSTATUS result; // eax

  if ( *(_QWORD *)(a1 + 48) )
  {
    if ( (*(_DWORD *)(a1 + 104) & 0x200) != 0 )
      sub_1800790B8();
    result = ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, *(PVOID *)(a1 + 48));
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  return result;
}
