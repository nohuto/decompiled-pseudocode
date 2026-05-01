/*
 * XREFs of ?RmpActivityHostAddToTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180017054
 * Callers:
 *     ?RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180018D04 (-RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_I.c)
 *     ?RmpActivityHostCompleteInitialization@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180035AE0 (-RmpActivityHostCompleteInitialization@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpObjectTableAddObjectWithLock@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z @ 0x1800172D4 (-RmpObjectTableAddObjectWithLock@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpActivityHostIdentifierHash@@YA_KPEAT_RM_ACTIVITY_HOST_IDENTIFIER@@W4_RM_ACTIVITY_HOST_TYPE@@@Z @ 0x180018C00 (-RmpActivityHostIdentifierHash@@YA_KPEAT_RM_ACTIVITY_HOST_IDENTIFIER@@W4_RM_ACTIVITY_HOST_TYPE@@.c)
 *     CempHeapFreeForHashTable @ 0x18001FEE0 (CempHeapFreeForHashTable.c)
 */

void __fastcall RmpActivityHostAddToTables(struct _RM_ACTIVITY_HOST *a1)
{
  __int64 v1; // rdi
  __int64 v3; // r13
  __int64 v4; // rsi
  unsigned int v5; // edi
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rdi
  char v9; // di
  unsigned __int64 v10; // rax
  __int64 v11; // rbx
  struct _PEB *v12; // rcx
  char *Heap; // r8
  unsigned __int64 v14; // rcx
  unsigned int v15; // edi
  __int64 v16; // r9
  __int64 v17; // r15
  _QWORD *v18; // r10
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // [rsp+60h] [rbp+40h]

  v1 = *((_QWORD *)a1 + 5);
  v3 = v1 + 32;
  *((_QWORD *)a1 + 157) = RmpActivityHostIdentifierHash((char *)a1 + 88, *((unsigned int *)a1 + 14));
  RtlAcquireSRWLockExclusive(v1 + 32);
  RmpObjectTableAddObjectWithLock((struct _RM_OBJECT_TABLE *)(v1 + 16), a1);
  v4 = v1 + 1552;
  if ( *(_DWORD *)(v1 + 1552) >= (unsigned int)(2 * (*(_DWORD *)(v1 + 1556) >> 5)) )
  {
    v9 = -1;
    v10 = 2 * ((unsigned __int64)*(unsigned int *)(v4 + 4) >> 5);
    if ( v10 <= 0xFFFFFFFF )
    {
      v11 = (unsigned int)v10;
      v12 = NtCurrentPeb();
      if ( (unsigned int)v10 < 4 )
        v11 = 4LL;
      Heap = (char *)RtlAllocateHeap(v12->ProcessHeap, 0, 8LL * (unsigned int)v11);
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
        v15 = 0;
        v16 = -1LL << (*(_BYTE *)(v4 + 4) & 0x1F);
        if ( (*(_DWORD *)(v4 + 4) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v17 = *(_QWORD *)(v4 + 8);
            while ( 1 )
            {
              v18 = *(_QWORD **)(v17 + 8LL * v15);
              if ( ((unsigned __int8)v18 & 1) != 0 )
                break;
              *(_QWORD *)(v17 + 8LL * v15) = *v18;
              v21 = v16 & v18[1];
              v19 = (37
                   * (BYTE6(v21)
                    + 37
                    * (BYTE5(v21)
                     + 37
                     * (BYTE4(v21)
                      + 37
                      * (BYTE3(v21) + 37 * (BYTE2(v21) + 37 * (BYTE1(v21) + 37 * ((unsigned __int8)v21 + 11623883)))))))
                   + HIBYTE(v21)) & (unsigned int)(v11 - 1);
              *v18 = *(_QWORD *)&Heap[8 * v19];
              *(_QWORD *)&Heap[8 * v19] = v18;
            }
            ++v15;
          }
          while ( v15 < *(_DWORD *)(v4 + 4) >> 5 );
        }
        *(_DWORD *)(v4 + 4) &= 0x1Fu;
        v20 = *(_QWORD *)(v4 + 8);
        *(_DWORD *)(v4 + 4) |= 32 * v11;
        *(_QWORD *)(v4 + 8) = Heap;
        if ( v20 )
          CempHeapFreeForHashTable(v20, 0LL);
      }
    }
  }
  v5 = *(_DWORD *)(v4 + 4);
  v6 = *((_QWORD *)a1 + 157) & (-1LL << (v5 & 0x1F));
  v7 = *(_QWORD *)(v4 + 8);
  v8 = (37
      * (BYTE6(v6)
       + 37
       * (BYTE5(v6)
        + 37
        * (BYTE4(v6) + 37 * (BYTE3(v6) + 37 * (BYTE2(v6) + 37 * (BYTE1(v6) + 37 * ((unsigned __int8)v6 + 11623883)))))))
      + HIBYTE(v6)) & ((v5 >> 5) - 1);
  *((_QWORD *)a1 + 156) = *(_QWORD *)(v7 + 8 * v8);
  *(_QWORD *)(v7 + 8 * v8) = (char *)a1 + 1248;
  ++*(_DWORD *)v4;
  RtlReleaseSRWLockExclusive(v3);
}
