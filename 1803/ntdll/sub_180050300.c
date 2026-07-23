/*
 * XREFs of sub_180050300 @ 0x180050300
 * Callers:
 *     sub_18000FC70 @ 0x18000FC70 (sub_18000FC70.c)
 * Callees:
 *     sub_18001F704 @ 0x18001F704 (sub_18001F704.c)
 *     sub_18004FEB8 @ 0x18004FEB8 (sub_18004FEB8.c)
 *     sub_1800503AC @ 0x1800503AC (sub_1800503AC.c)
 *     ZwProtectVirtualMemory @ 0x18009B4C0 (ZwProtectVirtualMemory.c)
 *     sub_1800CA554 @ 0x1800CA554 (sub_1800CA554.c)
 */

NTSTATUS __fastcall sub_180050300(__int64 a1)
{
  int v2; // ebx
  NTSTATUS result; // eax
  _QWORD *v4; // rax
  char v5; // al
  ULONG v6; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  if ( !*(_QWORD *)(a1 + 104)
    || (result = ZwProtectVirtualMemory(
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   (PVOID *)(a1 + 104),
                   (PSIZE_T)(a1 + 112),
                   *(_DWORD *)(a1 + 136),
                   &v6),
        v2 = result,
        result >= 0) )
  {
    v4 = *(_QWORD **)(a1 + 152);
    if ( v4 && *v4 != *(_QWORD *)(a1 + 144) )
      __fastfail(0x13u);
    if ( *(_WORD *)(*(_QWORD *)(a1 + 56) + 110LL) || (result = sub_1800503AC(), v2 = result, result >= 0) )
    {
      if ( (unsigned int)sub_18001F704() )
      {
        v2 = sub_18004FEB8(*(char **)(*(_QWORD *)(a1 + 56) + 48LL), 0, 0);
        if ( v2 < 0 )
        {
          v5 = dword_180156A70;
          if ( (dword_180156A70 & 3) != 0 )
          {
            sub_1800CA554(
              (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
              565,
              (unsigned int)"LdrpDoPostSnapWork",
              0,
              "LdrpDoPostSnapWork:Unable to unsuppress the export suppressed functions that are imported in the DLL based"
              " at 0x%p.Status = 0x%x\n",
              *(const void **)(*(_QWORD *)(a1 + 56) + 48LL),
              v2);
            v5 = dword_180156A70;
          }
          if ( (v5 & 0x10) != 0 )
            __debugbreak();
        }
      }
      return v2;
    }
  }
  return result;
}
