/*
 * XREFs of sub_18004FC74 @ 0x18004FC74
 * Callers:
 *     sub_18004FC4C @ 0x18004FC4C (sub_18004FC4C.c)
 *     sub_1800F2DE4 @ 0x1800F2DE4 (sub_1800F2DE4.c)
 * Callees:
 *     sub_18002B3EC @ 0x18002B3EC (sub_18002B3EC.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     bsearch_s @ 0x18008DC50 (bsearch_s.c)
 *     ZwQueryVirtualMemory @ 0x18009AF20 (ZwQueryVirtualMemory.c)
 */

char __fastcall sub_18004FC74(PVOID BaseAddress, _BYTE *a2)
{
  int v4; // ebx
  _DWORD *v5; // rax
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
  v5 = sub_18002B3EC(BaseOfImage[0]);
  if ( !v5 )
    return 0;
  if ( *v5 < 0x94u )
    return 0;
  v6 = v5[36];
  v7 = (unsigned int)v5[34];
  if ( (v6 & 0x400) == 0 )
    return 0;
  v8 = (const void *)*((_QWORD *)v5 + 16);
  if ( !v8 )
    return 0;
  v9 = (v6 >> 28) + 4;
  if ( v9 <= 4 )
    return 0;
  LODWORD(Key[0]) = (_DWORD)BaseAddress - v4;
  v10 = bsearch_s(Key, v8, v7, v9, CompareFunction, 0LL);
  if ( !v10 )
    return 0;
  v11 = v10[4];
  result = 1;
  *a2 = v11;
  return result;
}
