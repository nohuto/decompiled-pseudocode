/*
 * XREFs of ?RmpCpuSetManagerInsertProcess@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z @ 0x1800558F8
 * Callers:
 *     ?RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_CPU_SET_ALLOCATION@@PEAPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x18005647C (-RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_C.c)
 * Callees:
 *     CempHeapFree @ 0x180033D80 (CempHeapFree.c)
 */

void __fastcall RmpCpuSetManagerInsertProcess(struct _RM_CPU_SET_MANAGER *a1, struct _RM_CPU_SET_PROCESS *a2)
{
  unsigned __int64 v2; // rsi
  unsigned int v4; // r8d
  char v5; // al
  unsigned __int64 v6; // rdi
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  char v9; // di
  unsigned __int64 v10; // rax
  __int64 v11; // rbx
  struct _PEB *v12; // rcx
  char *Heap; // r8
  unsigned __int64 v14; // rcx
  unsigned int v15; // r9d
  __int64 v16; // rbp
  __int64 v17; // r14
  _QWORD *v18; // r10
  unsigned __int64 v19; // rcx
  void *v20; // rcx

  v2 = (unsigned __int64)a1 + 72;
  v4 = *((_DWORD *)a1 + 19);
  v5 = v4 & 0x1F;
  v6 = *((_QWORD *)a2 + 1) & (-1LL << (v4 & 0x1F));
  v7 = *((_QWORD *)a1 + 10);
  v8 = (HIBYTE(v6)
      + 37
      * (BYTE6(v6)
       + 37
       * ((unsigned __int8)((unsigned __int16)((*((_QWORD *)a2 + 1) & (unsigned __int64)(-1LL << v5)) >> 32) >> 8)
        + 37
        * (BYTE4(v6)
         + 37
         * (((*((_DWORD *)a2 + 2) & (unsigned int)(-1 << v5)) >> 24)
          + 37
          * ((unsigned __int8)((*((_DWORD *)a2 + 2) & (unsigned int)(-1 << v5)) >> 16)
           + 37
           * (37 * ((unsigned __int8)v6 + 11623883)
            + (unsigned __int8)((unsigned __int16)(*((_WORD *)a2 + 4) & (-1 << v5)) >> 8)))))))) & ((v4 >> 5) - 1);
  *(_QWORD *)a2 = *(_QWORD *)(v7 + 8 * v8);
  *(_QWORD *)(v7 + 8 * v8) = a2;
  if ( ++*(_DWORD *)v2 >= (unsigned int)(2 * (*(_DWORD *)(v2 + 4) >> 5)) )
  {
    v9 = -1;
    v10 = 2 * ((unsigned __int64)*(unsigned int *)(v2 + 4) >> 5);
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
          memset64(Heap, v2 | 1, v14);
        v15 = 0;
        v16 = -1LL << (*(_BYTE *)(v2 + 4) & 0x1F);
        if ( (*(_DWORD *)(v2 + 4) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v17 = *(_QWORD *)(v2 + 8);
            while ( 1 )
            {
              v18 = *(_QWORD **)(v17 + 8LL * v15);
              if ( ((unsigned __int8)v18 & 1) != 0 )
                break;
              *(_QWORD *)(v17 + 8LL * v15) = *v18;
              v19 = ((((unsigned __int64)v16 & v18[1]) >> 56)
                   + 37
                   * ((unsigned __int8)(((unsigned __int64)v16 & v18[1]) >> 48)
                    + 37
                    * ((unsigned __int8)((unsigned __int16)(((unsigned __int64)v16 & v18[1]) >> 32) >> 8)
                     + 37
                     * ((unsigned __int8)(((unsigned __int64)v16 & v18[1]) >> 32)
                      + 37
                      * ((((unsigned int)v16 & (_DWORD)v18[1]) >> 24)
                       + 37
                       * ((unsigned __int8)(((unsigned int)v16 & (_DWORD)v18[1]) >> 16)
                        + 37
                        * (37 * ((unsigned __int8)(v16 & v18[1]) + 11623883)
                         + (unsigned __int8)((unsigned __int16)(v16 & v18[1]) >> 8)))))))) & (unsigned int)(v11 - 1);
              *v18 = *(_QWORD *)&Heap[8 * v19];
              *(_QWORD *)&Heap[8 * v19] = v18;
            }
            ++v15;
          }
          while ( v15 < *(_DWORD *)(v2 + 4) >> 5 );
        }
        *(_DWORD *)(v2 + 4) &= 0x1Fu;
        v20 = *(void **)(v2 + 8);
        *(_DWORD *)(v2 + 4) |= 32 * v11;
        *(_QWORD *)(v2 + 8) = Heap;
        if ( v20 )
          CempHeapFree(v20);
      }
    }
  }
}
