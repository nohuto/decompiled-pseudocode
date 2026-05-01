/*
 * XREFs of ?RmpObjectTableAddObjectWithLock@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z @ 0x18000D508
 * Callers:
 *     ?RmpActivityHostAddToTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000D24C (-RmpActivityHostAddToTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpObjectTableAddObject@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z @ 0x180059288 (-RmpObjectTableAddObject@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z.c)
 * Callees:
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x180032300 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     CempHeapFree @ 0x180033D80 (CempHeapFree.c)
 */

void __fastcall RmpObjectTableAddObjectWithLock(unsigned __int64 a1, struct _RM_OBJECT_HEADER *a2)
{
  unsigned int v4; // edi
  unsigned __int64 v5; // rbp
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  char v8; // di
  unsigned __int64 v9; // rax
  __int64 v10; // rbx
  char *Heap; // r8
  unsigned __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // r10
  __int64 v15; // r15
  _QWORD *v16; // r11
  unsigned __int64 v17; // rcx
  __int64 v18; // rcx

  if ( *(_DWORD *)a1 >= (unsigned int)(2 * (*(_DWORD *)(a1 + 4) >> 5)) )
  {
    v8 = -1;
    v9 = 2 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5);
    if ( v9 <= 0xFFFFFFFF )
    {
      v10 = (unsigned int)v9;
      if ( (unsigned int)v9 < 4 )
        v10 = 4LL;
      Heap = (char *)HampAllocateHeap(8LL * (unsigned int)v10);
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
        v12 = (unsigned int)v10;
        if ( Heap > &Heap[8 * v10] )
          v12 = 0LL;
        if ( v12 )
          memset64(Heap, a1 | 1, v12);
        v13 = 0LL;
        v14 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
        if ( (*(_DWORD *)(a1 + 4) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v15 = *(_QWORD *)(a1 + 8);
            while ( 1 )
            {
              v16 = *(_QWORD **)(v15 + 8LL * (unsigned int)v13);
              if ( ((unsigned __int8)v16 & 1) != 0 )
                break;
              *(_QWORD *)(v15 + 8LL * (unsigned int)v13) = *v16;
              v17 = ((((unsigned __int64)v14 & v16[1]) >> 56)
                   + 37
                   * ((unsigned __int8)(((unsigned __int64)v14 & v16[1]) >> 48)
                    + 37
                    * ((unsigned __int8)((unsigned __int16)(((unsigned __int64)v14 & v16[1]) >> 32) >> 8)
                     + 37
                     * ((unsigned __int8)(((unsigned __int64)v14 & v16[1]) >> 32)
                      + 37
                      * ((((unsigned int)v14 & (_DWORD)v16[1]) >> 24)
                       + 37
                       * ((unsigned __int8)(((unsigned int)v14 & (_DWORD)v16[1]) >> 16)
                        + 37
                        * (37 * ((unsigned __int8)(v14 & v16[1]) + 11623883)
                         + (unsigned __int8)((unsigned __int16)(v14 & v16[1]) >> 8)))))))) & (unsigned int)(v10 - 1);
              *v16 = *(_QWORD *)&Heap[8 * v17];
              *(_QWORD *)&Heap[8 * v17] = v16;
            }
            v13 = (unsigned int)(v13 + 1);
          }
          while ( (unsigned int)v13 < *(_DWORD *)(a1 + 4) >> 5 );
        }
        *(_DWORD *)(a1 + 4) &= 0x1Fu;
        v18 = *(_QWORD *)(a1 + 8);
        *(_DWORD *)(a1 + 4) |= 32 * v10;
        *(_QWORD *)(a1 + 8) = Heap;
        if ( v18 )
          CempHeapFree(v18, 0LL, Heap, v13);
      }
    }
  }
  v4 = *(_DWORD *)(a1 + 4);
  v5 = *((_QWORD *)a2 + 1) & (-1LL << (v4 & 0x1F));
  v6 = *(_QWORD *)(a1 + 8);
  v7 = (HIBYTE(v5)
      + 37
      * (BYTE6(v5)
       + 37
       * (BYTE5(v5)
        + 37
        * (BYTE4(v5) + 37 * (BYTE3(v5) + 37 * (BYTE2(v5) + 37 * (37 * ((unsigned __int8)v5 + 11623883) + BYTE1(v5)))))))) & ((v4 >> 5) - 1);
  *(_QWORD *)a2 = *(_QWORD *)(v6 + 8 * v7);
  *(_QWORD *)(v6 + 8 * v7) = a2;
  ++*(_DWORD *)a1;
}
