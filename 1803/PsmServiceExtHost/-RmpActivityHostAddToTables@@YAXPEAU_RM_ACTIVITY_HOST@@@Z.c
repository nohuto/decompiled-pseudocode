/*
 * XREFs of ?RmpActivityHostAddToTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000D24C
 * Callers:
 *     ?RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000D158 (-RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_I.c)
 * Callees:
 *     ?RmpObjectTableAddObjectWithLock@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z @ 0x18000D508 (-RmpObjectTableAddObjectWithLock@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ??R?$hash@U_RM_PSM_HOST_INFO@@@utl@@QEBA_KAEBU_RM_PSM_HOST_INFO@@@Z @ 0x18000DEB0 (--R-$hash@U_RM_PSM_HOST_INFO@@@utl@@QEBA_KAEBU_RM_PSM_HOST_INFO@@@Z.c)
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x180032300 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     CempHeapFree @ 0x180033D80 (CempHeapFree.c)
 */

void __fastcall RmpActivityHostAddToTables(struct _RM_ACTIVITY_HOST *a1)
{
  __int64 v1; // rdi
  __int64 v3; // r13
  __int64 v4; // rsi
  unsigned int v5; // edi
  unsigned __int64 v6; // r14
  __int64 v7; // rdx
  unsigned __int64 v8; // rdi
  char v9; // di
  unsigned __int64 v10; // rax
  __int64 v11; // rbx
  char *Heap; // rax
  __int64 v13; // r9
  unsigned __int64 v14; // rcx
  __int64 v15; // r10
  __int64 v16; // r12
  _QWORD *v17; // r11
  unsigned __int64 v18; // rcx
  __int64 v19; // rcx

  v1 = *((_QWORD *)a1 + 6);
  v3 = v1 + 32;
  *((_QWORD *)a1 + 175) = utl::hash<_RM_PSM_HOST_INFO>::operator()(a1, (char *)a1 + 88);
  RtlAcquireSRWLockExclusive(v1 + 32);
  RmpObjectTableAddObjectWithLock((struct _RM_OBJECT_TABLE *)(v1 + 16), a1);
  v4 = v1 + 1976;
  if ( *(_DWORD *)(v1 + 1976) >= (unsigned int)(2 * (*(_DWORD *)(v1 + 1980) >> 5)) )
  {
    v9 = -1;
    v10 = 2 * ((unsigned __int64)*(unsigned int *)(v4 + 4) >> 5);
    if ( v10 <= 0xFFFFFFFF )
    {
      v11 = (unsigned int)v10;
      if ( (unsigned int)v10 < 4 )
        v11 = 4LL;
      Heap = (char *)HampAllocateHeap(8LL * (unsigned int)v11);
      v13 = 0LL;
      if ( Heap )
      {
        if ( (((_DWORD)v11 - 1) & (unsigned int)v11) != 0 )
        {
          do
          {
            ++v9;
            LODWORD(v11) = (unsigned int)v11 >> 1;
          }
          while ( (_DWORD)v11 );
          v11 = (unsigned int)(1 << v9);
        }
        if ( (unsigned int)v11 > 0x4000000 )
          v11 = 0x4000000LL;
        v14 = (unsigned int)v11;
        if ( Heap > &Heap[8 * v11] )
          v14 = 0LL;
        if ( v14 )
          memset64(Heap, v4 | 1, v14);
        v15 = -1LL << (*(_BYTE *)(v4 + 4) & 0x1F);
        if ( (*(_DWORD *)(v4 + 4) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v16 = *(_QWORD *)(v4 + 8);
            while ( 1 )
            {
              v17 = *(_QWORD **)(v16 + 8LL * (unsigned int)v13);
              if ( ((unsigned __int8)v17 & 1) != 0 )
                break;
              *(_QWORD *)(v16 + 8LL * (unsigned int)v13) = *v17;
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
                         + (unsigned __int8)((unsigned __int16)(v15 & v17[1]) >> 8)))))))) & (unsigned int)(v11 - 1);
              *v17 = *(_QWORD *)&Heap[8 * v18];
              *(_QWORD *)&Heap[8 * v18] = v17;
            }
            v13 = (unsigned int)(v13 + 1);
          }
          while ( (unsigned int)v13 < *(_DWORD *)(v4 + 4) >> 5 );
        }
        *(_DWORD *)(v4 + 4) &= 0x1Fu;
        v19 = *(_QWORD *)(v4 + 8);
        *(_DWORD *)(v4 + 4) |= 32 * v11;
        *(_QWORD *)(v4 + 8) = Heap;
        if ( v19 )
          CempHeapFree(v19, 0LL, Heap, v13);
      }
    }
  }
  v5 = *(_DWORD *)(v4 + 4);
  v6 = *((_QWORD *)a1 + 175) & (-1LL << (v5 & 0x1F));
  v7 = *(_QWORD *)(v4 + 8);
  v8 = (HIBYTE(v6)
      + 37
      * (BYTE6(v6)
       + 37
       * (BYTE5(v6)
        + 37
        * (BYTE4(v6) + 37 * (BYTE3(v6) + 37 * (BYTE2(v6) + 37 * (37 * ((unsigned __int8)v6 + 11623883) + BYTE1(v6)))))))) & ((v5 >> 5) - 1);
  *((_QWORD *)a1 + 174) = *(_QWORD *)(v7 + 8 * v8);
  *(_QWORD *)(v7 + 8 * v8) = (char *)a1 + 1392;
  ++*(_DWORD *)v4;
  RtlReleaseSRWLockExclusive(v3);
}
