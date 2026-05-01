/*
 * XREFs of ?RmpPsmAppFamilyTableAdd@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY@@@Z @ 0x18001A144
 * Callers:
 *     ?RmpPsmAppFamilyTableFindOrCreate@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180019990 (-RmpPsmAppFamilyTableFindOrCreate@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM.c)
 * Callees:
 *     CempHeapFreeForHashTable @ 0x18001FEE0 (CempHeapFreeForHashTable.c)
 */

void __fastcall RmpPsmAppFamilyTableAdd(struct _RM_SERVICE_GLOBALS *a1, struct _RM_PSM_APP_FAMILY *a2)
{
  unsigned __int64 v2; // rsi
  unsigned int v4; // edi
  __int64 v5; // rcx
  __int64 v6; // rdx
  char v7; // di
  unsigned __int64 v8; // rax
  __int64 v9; // rbx
  struct _PEB *v10; // rcx
  char *Heap; // r8
  unsigned __int64 v12; // rcx
  unsigned int v13; // edi
  __int64 v14; // r9
  __int64 v15; // r15
  _QWORD *v16; // r10
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // [rsp+60h] [rbp+40h]
  __int64 v20; // [rsp+68h] [rbp+48h]

  v2 = (unsigned __int64)a1 + 1568;
  if ( *((_DWORD *)a1 + 392) >= (unsigned int)(2 * (*((_DWORD *)a1 + 393) >> 5)) )
  {
    v7 = -1;
    v8 = 2 * ((unsigned __int64)*((unsigned int *)a1 + 393) >> 5);
    if ( v8 <= 0xFFFFFFFF )
    {
      v9 = (unsigned int)v8;
      v10 = NtCurrentPeb();
      if ( (unsigned int)v8 < 4 )
        v9 = 4LL;
      Heap = (char *)RtlAllocateHeap(v10->ProcessHeap, 0, 8LL * (unsigned int)v9);
      if ( Heap )
      {
        if ( (((_DWORD)v9 - 1) & (unsigned int)v9) != 0 )
        {
          do
          {
            ++v7;
            LODWORD(v9) = (unsigned int)v9 >> 1;
          }
          while ( (_DWORD)v9 );
          v9 = (unsigned int)(1 << v7);
        }
        if ( (unsigned int)v9 > 0x4000000 )
          v9 = 0x4000000LL;
        v12 = (unsigned int)v9;
        if ( Heap > &Heap[8 * v9] )
          v12 = 0LL;
        if ( v12 )
          memset64(Heap, v2 | 1, v12);
        v13 = 0;
        v14 = -1LL << (*(_BYTE *)(v2 + 4) & 0x1F);
        if ( (*(_DWORD *)(v2 + 4) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v15 = *(_QWORD *)(v2 + 8);
            while ( 1 )
            {
              v16 = *(_QWORD **)(v15 + 8LL * v13);
              if ( ((unsigned __int8)v16 & 1) != 0 )
                break;
              *(_QWORD *)(v15 + 8LL * v13) = *v16;
              v19 = v14 & v16[1];
              v17 = (37
                   * (BYTE6(v19)
                    + 37
                    * (BYTE5(v19)
                     + 37
                     * (BYTE4(v19)
                      + 37
                      * (BYTE3(v19) + 37 * (BYTE2(v19) + 37 * (BYTE1(v19) + 37 * ((unsigned __int8)v19 + 11623883)))))))
                   + HIBYTE(v19)) & (unsigned int)(v9 - 1);
              *v16 = *(_QWORD *)&Heap[8 * v17];
              *(_QWORD *)&Heap[8 * v17] = v16;
            }
            ++v13;
          }
          while ( v13 < *(_DWORD *)(v2 + 4) >> 5 );
        }
        *(_DWORD *)(v2 + 4) &= 0x1Fu;
        v18 = *(_QWORD *)(v2 + 8);
        *(_DWORD *)(v2 + 4) |= 32 * v9;
        *(_QWORD *)(v2 + 8) = Heap;
        if ( v18 )
          CempHeapFreeForHashTable(v18, 0LL);
      }
    }
  }
  v4 = *(_DWORD *)(v2 + 4);
  v20 = *((_QWORD *)a2 + 1) & (-1LL << (v4 & 0x1F));
  v5 = *(_QWORD *)(v2 + 8);
  v6 = (37
      * (BYTE6(v20)
       + 37
       * (BYTE5(v20)
        + 37
        * (BYTE4(v20)
         + 37 * (BYTE3(v20) + 37 * (BYTE2(v20) + 37 * (BYTE1(v20) + 37 * ((unsigned __int8)v20 + 11623883)))))))
      + HIBYTE(v20)) & ((v4 >> 5) - 1);
  *(_QWORD *)a2 = *(_QWORD *)(v5 + 8 * v6);
  *(_QWORD *)(v5 + 8 * v6) = a2;
  ++*(_DWORD *)v2;
}
