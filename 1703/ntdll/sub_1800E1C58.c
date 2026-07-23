/*
 * XREFs of sub_1800E1C58 @ 0x1800E1C58
 * Callers:
 *     sub_1800E1AD8 @ 0x1800E1AD8 (sub_1800E1AD8.c)
 * Callees:
 *     RtlImageNtHeader @ 0x180036560 (RtlImageNtHeader.c)
 */

char __fastcall sub_1800E1C58(unsigned int a1, unsigned __int64 a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdx
  PIMAGE_NT_HEADERS v10; // rax
  char result; // al

  if ( !a2 )
    return 0;
  if ( !a3 )
    return 0;
  if ( a1 >= dword_18015A268 )
    return 0;
  _mm_lfence();
  v7 = 9LL * a1;
  v8 = *((_QWORD *)BaseAddress + v7 + 4);
  v9 = *((_QWORD *)BaseAddress + v7 + 6);
  if ( (unsigned __int64)(v8 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return 0;
  if ( !v9 )
  {
    v10 = RtlImageNtHeader((PVOID)(v8 & 0xFFFFFFFFFFFFFFFCuLL));
    if ( !v10 )
      return 0;
    v9 = v10->OptionalHeader.Magic == 267 || v10->OptionalHeader.Magic == 523 ? v10->OptionalHeader.SizeOfImage : 0LL;
    if ( !v9 )
      return 0;
  }
  if ( a2 < (v8 & 0xFFFFFFFFFFFFFFFCuLL) || a2 >= v9 + (v8 & 0xFFFFFFFFFFFFFFFCuLL) )
    return 0;
  *a3 = v8;
  result = 1;
  *a4 = v9;
  return result;
}
