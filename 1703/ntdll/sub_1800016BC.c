/*
 * XREFs of sub_1800016BC @ 0x1800016BC
 * Callers:
 *     sub_180001694 @ 0x180001694 (sub_180001694.c)
 *     sub_1800F5B0C @ 0x1800F5B0C (sub_1800F5B0C.c)
 * Callees:
 *     sub_18003A72C @ 0x18003A72C (sub_18003A72C.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     bsearch_s @ 0x1800987F0 (bsearch_s.c)
 *     ZwQueryVirtualMemory @ 0x1800A5760 (ZwQueryVirtualMemory.c)
 */

char __fastcall sub_1800016BC(PVOID BaseAddress, _BYTE *a2)
{
  int v4; // ebx
  __int64 v5; // rax
  unsigned int v6; // ecx
  rsize_t v7; // r8
  const void *v8; // rdx
  unsigned int v9; // ecx
  _BYTE *v10; // rax
  char v11; // cl
  char result; // al
  PVOID BaseOfImage[2]; // [rsp+30h] [rbp-38h] BYREF
  char v14; // [rsp+40h] [rbp-28h]
  _QWORD Key[2]; // [rsp+48h] [rbp-20h] BYREF

  Key[0] = 0LL;
  Key[1] = 0LL;
  if ( ZwQueryVirtualMemory(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         BaseAddress,
         MemoryImageInformation,
         BaseOfImage,
         0x18uLL,
         0LL) < 0 )
    return 0;
  v4 = (int)BaseOfImage[0];
  if ( !BaseOfImage[0] )
    return 0;
  if ( (v14 & 2) != 0 )
    return 0;
  if ( (v14 & 1) != 0 )
    return 0;
  if ( BaseAddress < BaseOfImage[0] )
    return 0;
  v5 = sub_18003A72C(BaseOfImage[0]);
  if ( !v5 )
    return 0;
  if ( *(_DWORD *)v5 < 0x94u )
    return 0;
  v6 = *(_DWORD *)(v5 + 144);
  v7 = *(unsigned int *)(v5 + 136);
  v8 = *(const void **)(v5 + 128);
  if ( (v6 & 0x400) == 0 )
    return 0;
  if ( !v8 )
    return 0;
  v9 = (v6 >> 28) + 4;
  if ( v9 <= 4 )
    return 0;
  LODWORD(Key[0]) = (_DWORD)BaseAddress - v4;
  v10 = bsearch_s(Key, v8, v7, v9, sub_18008BC30, 0LL);
  if ( !v10 )
    return 0;
  v11 = v10[4];
  result = 1;
  *a2 = v11;
  return result;
}
