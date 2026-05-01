/*
 * XREFs of ?RmpObjectTableAllocateState@@YAJPEAU_RM_OBJECT_TABLE@@@Z @ 0x18003B9D8
 * Callers:
 *     ?RmpActivityHostAllocateModuleState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18003B63C (-RmpActivityHostAllocateModuleState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18003B8A4 (-RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     CempHeapFree @ 0x180033D80 (CempHeapFree.c)
 */

__int64 __fastcall RmpObjectTableAllocateState(unsigned __int64 a1)
{
  char v2; // bp
  char v3; // di
  unsigned __int64 v4; // rax
  __int64 v5; // rbx
  struct _PEB *v6; // rcx
  char *Heap; // r8
  unsigned __int64 v8; // rcx
  unsigned int v9; // r9d
  __int64 v10; // r10
  void *v11; // rcx
  __int64 v13; // r15
  _QWORD *v14; // r11
  unsigned __int64 v15; // rcx

  v2 = 1;
  if ( *(_DWORD *)a1 >= (unsigned int)(2 * (*(_DWORD *)(a1 + 4) >> 5)) )
  {
    v3 = -1;
    v4 = 2 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5);
    if ( v4 <= 0xFFFFFFFF )
    {
      v5 = (unsigned int)v4;
      v6 = NtCurrentPeb();
      if ( (unsigned int)v4 < 4 )
        v5 = 4LL;
      Heap = (char *)RtlAllocateHeap(v6->ProcessHeap, 0, 8LL * (unsigned int)v5);
      if ( Heap )
      {
        if ( (((_DWORD)v5 - 1) & (unsigned int)v5) != 0 )
        {
          do
          {
            ++v3;
            LODWORD(v5) = (unsigned int)v5 >> 1;
          }
          while ( (_DWORD)v5 );
          v5 = (unsigned int)(1 << v3);
        }
        if ( (unsigned int)v5 > 0x4000000 )
          v5 = 0x4000000LL;
        v8 = (unsigned int)v5;
        if ( Heap > &Heap[8 * v5] )
          v8 = 0LL;
        if ( v8 )
          memset64(Heap, a1 | 1, v8);
        v9 = 0;
        v10 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
        if ( (*(_DWORD *)(a1 + 4) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v13 = *(_QWORD *)(a1 + 8);
            while ( 1 )
            {
              v14 = *(_QWORD **)(v13 + 8LL * v9);
              if ( ((unsigned __int8)v14 & 1) != 0 )
                break;
              *(_QWORD *)(v13 + 8LL * v9) = *v14;
              v15 = ((((unsigned __int64)v10 & v14[1]) >> 56)
                   + 37
                   * ((unsigned __int8)(((unsigned __int64)v10 & v14[1]) >> 48)
                    + 37
                    * ((unsigned __int8)((unsigned __int16)(((unsigned __int64)v10 & v14[1]) >> 32) >> 8)
                     + 37
                     * ((unsigned __int8)(((unsigned __int64)v10 & v14[1]) >> 32)
                      + 37
                      * ((((unsigned int)v10 & (_DWORD)v14[1]) >> 24)
                       + 37
                       * ((unsigned __int8)(((unsigned int)v10 & (_DWORD)v14[1]) >> 16)
                        + 37
                        * ((unsigned __int8)((unsigned __int16)(v10 & v14[1]) >> 8)
                         + 37 * ((unsigned __int8)(v10 & v14[1]) + 11623883)))))))) & (unsigned int)(v5 - 1);
              *v14 = *(_QWORD *)&Heap[8 * v15];
              *(_QWORD *)&Heap[8 * v15] = v14;
            }
            ++v9;
          }
          while ( v9 < *(_DWORD *)(a1 + 4) >> 5 );
        }
        *(_DWORD *)(a1 + 4) &= 0x1Fu;
        v11 = *(void **)(a1 + 8);
        *(_DWORD *)(a1 + 4) |= 32 * v5;
        *(_QWORD *)(a1 + 8) = Heap;
        if ( v11 )
          CempHeapFree(v11);
      }
      else if ( *(_DWORD *)(a1 + 4) < 0x20u )
      {
        v2 = 0;
      }
    }
  }
  return v2 == 0 ? 0xC0000017 : 0;
}
