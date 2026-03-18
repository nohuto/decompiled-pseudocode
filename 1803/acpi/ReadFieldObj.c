/*
 * XREFs of ReadFieldObj @ 0x1C004D690
 * Callers:
 *     <none>
 * Callees:
 *     HeapFree @ 0x1C0003D74 (HeapFree.c)
 *     AccessFieldData @ 0x1C004C4E0 (AccessFieldData.c)
 *     PushAccFieldObj @ 0x1C004CFE0 (PushAccFieldObj.c)
 *     WriteSystemMem @ 0x1C004E3B4 (WriteSystemMem.c)
 */

__int64 __fastcall ReadFieldObj(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // esi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned int v13; // edx
  __int64 v14; // r8
  unsigned int v15; // ecx
  __int64 v16; // rax
  int v17; // eax
  int v18; // ecx
  int v19; // ecx
  unsigned int v20; // eax
  int v21; // ecx
  int v22; // eax
  __int64 v23; // rcx

  v3 = a3;
  if ( a3 )
    v6 = 3;
  else
    v6 = *(_DWORD *)(a2 + 16) & 0xF;
  if ( !v6 )
    goto LABEL_9;
  v7 = v6 - 1;
  if ( !v7 )
    goto LABEL_12;
  v8 = v7 - 1;
  if ( v8 )
  {
    if ( v8 != 1 )
      return v3;
  }
  else
  {
    while ( 1 )
    {
      if ( *(_DWORD *)(a2 + 80) )
      {
        WriteSystemMem(*(void **)(a2 + 40), *(unsigned int *)(a2 + 56));
        *(_QWORD *)(a2 + 40) += *(unsigned int *)(a2 + 56);
        if ( *(_QWORD *)(a2 + 40) >= *(_QWORD *)(a2 + 48) )
        {
          ++*(_DWORD *)(a2 + 16);
          goto LABEL_28;
        }
      }
      v13 = *(_DWORD *)(a2 + 72);
      v14 = *(_QWORD *)(a2 + 88) >> *(_DWORD *)(a2 + 76);
      v15 = *(_DWORD *)(a2 + 104);
      *(_QWORD *)(a2 + 88) = v14;
      if ( v15 < v13 )
      {
        if ( v15 < 0x40 )
          v16 = 1LL << v15;
        else
          v16 = 0LL;
        *(_QWORD *)(a2 + 88) = v14 & (v16 - 1);
      }
      WriteSystemMem(*(void **)(a2 + 40), *(unsigned int *)(a2 + 56));
      v17 = *(_DWORD *)(a2 + 56);
      *(_DWORD *)(a2 + 96) += v17;
      v18 = *(_DWORD *)(a2 + 100);
      ++*(_DWORD *)(a2 + 80);
      *(_DWORD *)(a2 + 100) = 0;
      v19 = v18 - 8 * v17;
      v20 = *(_DWORD *)(a2 + 80);
      *(_DWORD *)(a2 + 104) += v19;
      v21 = *(_DWORD *)(a2 + 16);
      if ( v20 >= *(_DWORD *)(a2 + 60) )
      {
        v22 = v21 + 1;
        goto LABEL_27;
      }
      *(_DWORD *)(a2 + 16) = v21 - 2;
LABEL_9:
      v9 = *(_DWORD *)(a2 + 16);
      if ( *(_DWORD *)(a2 + 80) >= *(_DWORD *)(a2 + 60) )
        break;
      *(_DWORD *)(a2 + 16) = v9 + 1;
      v10 = *(_QWORD *)(a2 + 32);
      if ( *(_WORD *)(v10 + 2) == 5 )
      {
        v11 = **(_QWORD **)(v10 + 32);
        if ( *(_WORD *)(v11 + 66) == 132 )
          return (unsigned int)PushAccFieldObj(
                                 a1,
                                 (__int64)WriteFieldObj,
                                 **(_QWORD **)(v11 + 96) + 64LL,
                                 (_DWORD *)(*(_QWORD *)(**(_QWORD **)(v11 + 96) + 96LL) + 8LL),
                                 a2 + 96,
                                 4u);
      }
LABEL_12:
      v12 = *(_QWORD *)(a2 + 32);
      ++*(_DWORD *)(a2 + 16);
      v3 = AccessFieldData(a1, v12, (unsigned int *)(a2 + 96), (__int64 *)(a2 + 88), 1);
      if ( v3 || a2 != *(_QWORD *)(a1 + 416) )
        return v3;
    }
    v22 = v9 + 3;
LABEL_27:
    *(_DWORD *)(a2 + 16) = v22;
  }
LABEL_28:
  v23 = *(_QWORD *)(a1 + 416);
  *(_QWORD *)(a1 + 416) = *(_QWORD *)(v23 + 8);
  HeapFree(v23);
  return v3;
}
