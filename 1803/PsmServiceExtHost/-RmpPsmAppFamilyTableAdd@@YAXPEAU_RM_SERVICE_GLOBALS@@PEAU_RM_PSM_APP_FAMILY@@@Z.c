/*
 * XREFs of ?RmpPsmAppFamilyTableAdd@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY@@@Z @ 0x18000BF50
 * Callers:
 *     ?RmpPsmAppFamilyTableFindOrCreate@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x18000C1E4 (-RmpPsmAppFamilyTableFindOrCreate@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM.c)
 * Callees:
 *     CempHeapFree @ 0x180033D80 (CempHeapFree.c)
 */

void __fastcall RmpPsmAppFamilyTableAdd(struct _RM_SERVICE_GLOBALS *a1, struct _RM_PSM_APP_FAMILY *a2)
{
  unsigned __int64 v2; // rsi
  unsigned int v4; // edi
  unsigned __int64 v5; // rbp
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  char v8; // di
  unsigned __int64 v9; // rax
  __int64 v10; // rbx
  struct _PEB *v11; // rcx
  char *Heap; // r8
  unsigned __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // r10
  __int64 v16; // r15
  _QWORD *v17; // r11
  unsigned __int64 v18; // rcx
  __int64 v19; // rcx

  v2 = (unsigned __int64)a1 + 1992;
  if ( *((_DWORD *)a1 + 498) >= (unsigned int)(2 * (*((_DWORD *)a1 + 499) >> 5)) )
  {
    v8 = -1;
    v9 = 2 * ((unsigned __int64)*((unsigned int *)a1 + 499) >> 5);
    if ( v9 <= 0xFFFFFFFF )
    {
      v10 = (unsigned int)v9;
      v11 = NtCurrentPeb();
      if ( (unsigned int)v9 < 4 )
        v10 = 4LL;
      Heap = (char *)RtlAllocateHeap(v11->ProcessHeap, 0, 8LL * (unsigned int)v10);
      if ( Heap )
      {
        if ( (((_DWORD)v10 - 1) & (unsigned int)v10) != 0 )
        {
          do
          {
            ++v8;
            LODWORD(v10) = (unsigned int)v10 >> 1;
          }
          while ( (_DWORD)v10 );
          v10 = (unsigned int)(1 << v8);
        }
        if ( (unsigned int)v10 > 0x4000000 )
          v10 = 0x4000000LL;
        v13 = (unsigned int)v10;
        if ( Heap > &Heap[8 * v10] )
          v13 = 0LL;
        if ( v13 )
          memset64(Heap, v2 | 1, v13);
        v14 = 0LL;
        v15 = -1LL << (*(_BYTE *)(v2 + 4) & 0x1F);
        if ( (*(_DWORD *)(v2 + 4) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v16 = *(_QWORD *)(v2 + 8);
            while ( 1 )
            {
              v17 = *(_QWORD **)(v16 + 8LL * (unsigned int)v14);
              if ( ((unsigned __int8)v17 & 1) != 0 )
                break;
              *(_QWORD *)(v16 + 8LL * (unsigned int)v14) = *v17;
              v18 = ((((unsigned __int64)v15 & v17[1]) >> 56)
                   + 37
                   * ((unsigned __int8)(((unsigned __int64)v15 & v17[1]) >> 48)
                    + 37
                    * ((unsigned __int8)((unsigned __int16)(((unsigned __int64)v15 & v17[1]) >> 32) >> 8)
                     + 37
                     * ((unsigned __int8)(((unsigned __int64)v15 & v17[1]) >> 32)
                      + 37
                      * ((((unsigned int)v15 & (_DWORD)v17[1]) >> 24)
                       + 37
                       * ((unsigned __int8)(((unsigned int)v15 & (_DWORD)v17[1]) >> 16)
                        + 37
                        * (37 * ((unsigned __int8)(v15 & v17[1]) + 11623883)
                         + (unsigned __int8)((unsigned __int16)(v15 & v17[1]) >> 8)))))))) & (unsigned int)(v10 - 1);
              *v17 = *(_QWORD *)&Heap[8 * v18];
              *(_QWORD *)&Heap[8 * v18] = v17;
            }
            v14 = (unsigned int)(v14 + 1);
          }
          while ( (unsigned int)v14 < *(_DWORD *)(v2 + 4) >> 5 );
        }
        *(_DWORD *)(v2 + 4) &= 0x1Fu;
        v19 = *(_QWORD *)(v2 + 8);
        *(_DWORD *)(v2 + 4) |= 32 * v10;
        *(_QWORD *)(v2 + 8) = Heap;
        if ( v19 )
          CempHeapFree(v19, 0LL, Heap, v14);
      }
    }
  }
  v4 = *(_DWORD *)(v2 + 4);
  v5 = *((_QWORD *)a2 + 1) & (-1LL << (v4 & 0x1F));
  v6 = *(_QWORD *)(v2 + 8);
  v7 = (HIBYTE(v5)
      + 37
      * (BYTE6(v5)
       + 37
       * (BYTE5(v5)
        + 37
        * (BYTE4(v5) + 37 * (BYTE3(v5) + 37 * (BYTE2(v5) + 37 * (37 * ((unsigned __int8)v5 + 11623883) + BYTE1(v5)))))))) & ((v4 >> 5) - 1);
  *(_QWORD *)a2 = *(_QWORD *)(v6 + 8 * v7);
  *(_QWORD *)(v6 + 8 * v7) = a2;
  ++*(_DWORD *)v2;
}
