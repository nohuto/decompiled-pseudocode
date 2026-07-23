/*
 * XREFs of sub_180058B10 @ 0x180058B10
 * Callers:
 *     sub_180032DD0 @ 0x180032DD0 (sub_180032DD0.c)
 * Callees:
 *     sub_180001328 @ 0x180001328 (sub_180001328.c)
 *     sub_180030138 @ 0x180030138 (sub_180030138.c)
 *     sub_180058BC8 @ 0x180058BC8 (sub_180058BC8.c)
 *     ZwProtectVirtualMemory @ 0x1800A5D00 (ZwProtectVirtualMemory.c)
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
 */

NTSTATUS __fastcall sub_180058B10(__int64 a1)
{
  int v2; // ebx
  NTSTATUS result; // eax
  _QWORD *v4; // rax
  char v5; // al
  ULONG v6; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  if ( !*(_QWORD *)(a1 + 96)
    || (result = ZwProtectVirtualMemory(
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   (PVOID *)(a1 + 96),
                   (PSIZE_T)(a1 + 104),
                   *(_DWORD *)(a1 + 128),
                   &v6),
        v2 = result,
        result >= 0) )
  {
    v4 = *(_QWORD **)(a1 + 144);
    if ( v4 && *v4 != *(_QWORD *)(a1 + 136) )
      __fastfail(0x13u);
    if ( *(_WORD *)(*(_QWORD *)(a1 + 48) + 110LL) || (result = sub_180058BC8(), v2 = result, result >= 0) )
    {
      if ( sub_180030138() )
      {
        v2 = sub_180001328(*(char **)(*(_QWORD *)(a1 + 48) + 48LL), 0, 0);
        v5 = dword_180155A10;
        if ( (dword_180155A10 & 3) != 0 )
        {
          sub_1800D5274(
            (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
            479,
            (unsigned int)"LdrpDoPostSnapWork",
            0,
            "LdrpDoPostSnapWork:Unable to unsuppress the export suppressed functions that are imported in the DLL based a"
            "t 0x%p.Status = 0x%x\n",
            *(const void **)(*(_QWORD *)(a1 + 48) + 48LL),
            v2);
          v5 = dword_180155A10;
        }
        if ( (v5 & 0x10) != 0 )
          __debugbreak();
      }
      return v2;
    }
  }
  return result;
}
