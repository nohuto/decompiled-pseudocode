/*
 * XREFs of ?RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180023A6C
 * Callers:
 *     ?RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180021BD0 (-RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     CempHeapFreeForHashTable @ 0x18001FEE0 (CempHeapFreeForHashTable.c)
 *     ?RmpObjectTableAllocateState@@YAJPEAU_RM_OBJECT_TABLE@@@Z @ 0x180023BA4 (-RmpObjectTableAllocateState@@YAJPEAU_RM_OBJECT_TABLE@@@Z.c)
 *     ?RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180023CB4 (-RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 */

__int64 __fastcall RmpCpuSetManagerAllocateState(struct _RM_SERVICE_GLOBALS *a1)
{
  char *v1; // rbp
  __int64 result; // rax
  char v3; // di
  unsigned __int64 v4; // rax
  __int64 v5; // rbx
  struct _PEB *v6; // rcx
  char *Heap; // r8
  unsigned __int64 v8; // rcx
  unsigned int v9; // edi
  __int64 v10; // r9
  void *v11; // rcx
  __int64 v12; // r14
  _QWORD *v13; // r10
  __int64 v14; // rdx
  __int64 v15; // [rsp+40h] [rbp+8h]

  v1 = (char *)a1 + 680;
  result = RmpObjectTableAllocateState((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 704));
  if ( (int)result >= 0 )
  {
    result = RmpObjectTableAllocateState((struct _RM_OBJECT_TABLE *)(v1 + 48));
    if ( (int)result >= 0 )
    {
      if ( *((_DWORD *)v1 + 18) >= (unsigned int)(2 * (*((_DWORD *)v1 + 19) >> 5)) )
      {
        v3 = -1;
        v4 = 2 * ((unsigned __int64)*((unsigned int *)v1 + 19) >> 5);
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
              memset64(Heap, (unsigned __int64)(v1 + 72) | 1, v8);
            v9 = 0;
            v10 = -1LL << (v1[76] & 0x1F);
            if ( (*((_DWORD *)v1 + 19) & 0xFFFFFFE0) != 0 )
            {
              do
              {
                v12 = *((_QWORD *)v1 + 10);
                while ( 1 )
                {
                  v13 = *(_QWORD **)(v12 + 8LL * v9);
                  if ( ((unsigned __int8)v13 & 1) != 0 )
                    break;
                  *(_QWORD *)(v12 + 8LL * v9) = *v13;
                  v15 = v10 & v13[1];
                  v14 = (37
                       * (BYTE6(v15)
                        + 37
                        * (BYTE5(v15)
                         + 37
                         * (BYTE4(v15)
                          + 37
                          * (BYTE3(v15) + 37 * (BYTE2(v15) + 37 * (BYTE1(v15) + 37 * ((unsigned __int8)v15 + 11623883)))))))
                       + HIBYTE(v15)) & (unsigned int)(v5 - 1);
                  *v13 = *(_QWORD *)&Heap[8 * v14];
                  *(_QWORD *)&Heap[8 * v14] = v13;
                }
                ++v9;
              }
              while ( v9 < *((_DWORD *)v1 + 19) >> 5 );
            }
            *((_DWORD *)v1 + 19) &= 0x1Fu;
            v11 = (void *)*((_QWORD *)v1 + 10);
            *((_DWORD *)v1 + 19) |= 32 * v5;
            *((_QWORD *)v1 + 10) = Heap;
            if ( v11 )
              CempHeapFreeForHashTable(v11);
          }
          else if ( *((_DWORD *)v1 + 19) < 0x20u )
          {
            return 3221225495LL;
          }
        }
      }
      result = RmpCpuSetManagerResetValidMask((struct _RM_CPU_SET_MANAGER *)v1);
      if ( (int)result >= 0 )
        return 0LL;
    }
  }
  return result;
}
