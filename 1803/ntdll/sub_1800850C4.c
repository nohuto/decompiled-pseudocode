/*
 * XREFs of sub_1800850C4 @ 0x1800850C4
 * Callers:
 *     PssNtWalkSnapshot @ 0x180084C60 (PssNtWalkSnapshot.c)
 * Callees:
 *     ZwMapViewOfSection @ 0x18009AFC0 (ZwMapViewOfSection.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

NTSTATUS __fastcall sub_1800850C4(__int64 a1, __int64 a2, _DWORD *a3)
{
  void *v5; // rcx
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rbx
  unsigned int v9; // edx
  char v10; // al
  int v11; // ecx
  __int64 v12; // rax
  unsigned int v13; // edx
  int v14; // ecx
  NTSTATUS result; // eax
  __int64 v16; // rax
  unsigned int v17; // edx
  int v18; // ecx
  ULONG_PTR ViewSize; // [rsp+60h] [rbp+8h] BYREF

  v5 = *(void **)(a1 + 976);
  if ( !v5 )
    return -1073741275;
  if ( !a2 )
    return -1073741811;
  if ( !*(_QWORD *)a2 )
  {
    ViewSize = 0LL;
    result = ZwMapViewOfSection(
               v5,
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               (PVOID *)a2,
               0LL,
               0LL,
               0LL,
               &ViewSize,
               ViewShare,
               0,
               2u);
    if ( result < 0 )
      return result;
    *(_QWORD *)(a2 + 8) = 0LL;
  }
  v7 = *(_QWORD *)(a2 + 8);
  if ( v7 >= *(_QWORD *)(a1 + 968) )
    return -2147483622;
  if ( !a3 )
    return 261;
  v8 = v7 + *(_QWORD *)a2;
  memset(a3, 0, 0x48uLL);
  v9 = 16;
  *a3 = *(_DWORD *)v8;
  *((_BYTE *)a3 + 4) = *(_BYTE *)(v8 + 4);
  *((_BYTE *)a3 + 5) = *(_BYTE *)(v8 + 5);
  *((_QWORD *)a3 + 1) = *(_QWORD *)(v8 + 8);
  v10 = *(_BYTE *)(v8 + 4);
  if ( (v10 & 1) != 0 )
  {
    v11 = *(unsigned __int16 *)(v8 + 16);
    *((_WORD *)a3 + 8) = v11;
    *((_QWORD *)a3 + 3) = v8 + 18;
    v10 = *(_BYTE *)(v8 + 4);
    v9 = v11 + 18;
  }
  if ( (v10 & 2) != 0 )
  {
    v16 = v9;
    v17 = v9 + 2;
    v18 = *(unsigned __int16 *)(v16 + v8);
    *((_WORD *)a3 + 16) = v18;
    *((_QWORD *)a3 + 5) = v8 + v17;
    v9 = v18 + v17;
    v10 = *(_BYTE *)(v8 + 4);
  }
  if ( (v10 & 4) != 0 )
  {
    *((_QWORD *)a3 + 6) = v8 + v9;
    v9 += 56;
    v10 = *(_BYTE *)(v8 + 4);
  }
  if ( (v10 & 8) != 0 )
  {
    v12 = v9;
    v13 = v9 + 2;
    v14 = *(unsigned __int16 *)(v12 + v8);
    *((_WORD *)a3 + 28) = v14;
    *((_QWORD *)a3 + 8) = v8 + v13;
    v9 = v14 + v13;
  }
  *(_QWORD *)(a2 + 8) = v7 + v9;
  return 0;
}
