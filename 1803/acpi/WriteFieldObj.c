/*
 * XREFs of WriteFieldObj @ 0x1C004E010
 * Callers:
 *     <none>
 * Callees:
 *     HeapFree @ 0x1C0003D74 (HeapFree.c)
 *     AccessFieldData @ 0x1C004C4E0 (AccessFieldData.c)
 *     PushAccFieldObj @ 0x1C004CFE0 (PushAccFieldObj.c)
 *     ReadSystemMem @ 0x1C004D91C (ReadSystemMem.c)
 */

__int64 __fastcall WriteFieldObj(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // edi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 SystemMem; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // eax
  int v20; // ecx
  int v21; // ecx
  unsigned int v22; // eax
  int v23; // ecx
  int v24; // eax
  __int64 v25; // rcx

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
      v19 = *(_DWORD *)(a2 + 56);
      *(_DWORD *)(a2 + 96) += v19;
      v20 = *(_DWORD *)(a2 + 100);
      ++*(_DWORD *)(a2 + 80);
      *(_DWORD *)(a2 + 100) = 0;
      v21 = v20 - 8 * v19;
      v22 = *(_DWORD *)(a2 + 80);
      *(_DWORD *)(a2 + 104) += v21;
      v23 = *(_DWORD *)(a2 + 16);
      if ( v22 >= *(_DWORD *)(a2 + 60) )
      {
        v24 = v23 + 1;
        goto LABEL_27;
      }
      *(_DWORD *)(a2 + 16) = v23 - 2;
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
      ++*(_DWORD *)(a2 + 16);
      v12 = *(_QWORD *)(a2 + 40);
      if ( v12 < *(_QWORD *)(a2 + 48) )
        SystemMem = ReadSystemMem(v12, *(unsigned int *)(a2 + 56), *(_QWORD *)(a2 + 64));
      else
        SystemMem = 0LL;
      if ( *(_DWORD *)(a2 + 80) )
      {
        v14 = SystemMem >> *(_DWORD *)(a2 + 72);
        *(_QWORD *)(a2 + 88) = v14;
        v15 = *(unsigned int *)(a2 + 56);
        *(_QWORD *)(a2 + 40) += v15;
        v16 = *(_QWORD *)(a2 + 40);
        if ( v16 < *(_QWORD *)(a2 + 48) )
        {
          SystemMem = ReadSystemMem(v16, (unsigned int)v15, *(_QWORD *)(a2 + 64));
          v14 = *(_QWORD *)(a2 + 88);
        }
        else
        {
          SystemMem = 0LL;
        }
      }
      else
      {
        *(_QWORD *)(a2 + 88) = 0LL;
        v14 = 0LL;
      }
      v17 = v14 | *(_QWORD *)(a2 + 64) & (SystemMem << *(_DWORD *)(a2 + 76));
      v18 = *(_QWORD *)(a2 + 32);
      *(_QWORD *)(a2 + 88) = v17;
      v3 = AccessFieldData(a1, v18, (unsigned int *)(a2 + 96), (__int64 *)(a2 + 88), 0);
      if ( v3 == 32772 || a2 != *(_QWORD *)(a1 + 416) )
        return v3;
    }
    v24 = v9 + 3;
LABEL_27:
    *(_DWORD *)(a2 + 16) = v24;
  }
  v25 = *(_QWORD *)(a1 + 416);
  *(_QWORD *)(a1 + 416) = *(_QWORD *)(v25 + 8);
  HeapFree(v25);
  return v3;
}
