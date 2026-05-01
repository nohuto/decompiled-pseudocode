/*
 * XREFs of ?RmpActivityHostAllocateModuleState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18003B63C
 * Callers:
 *     ?RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180039EFC (-RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     CempHeapFree @ 0x180033D80 (CempHeapFree.c)
 *     ?RmpObjectTableAllocateState@@YAJPEAU_RM_OBJECT_TABLE@@@Z @ 0x18003B9D8 (-RmpObjectTableAllocateState@@YAJPEAU_RM_OBJECT_TABLE@@@Z.c)
 */

__int64 __fastcall RmpActivityHostAllocateModuleState(struct _RM_SERVICE_GLOBALS *a1)
{
  __int64 result; // rax
  char v3; // r14
  unsigned __int64 v4; // rax
  __int64 v5; // rbx
  char *Heap; // r8
  unsigned __int64 v7; // rcx
  unsigned int v8; // r9d
  __int64 v9; // r10
  void *v10; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // rbx
  char *v13; // r8
  unsigned __int64 v14; // rcx
  unsigned int v15; // r9d
  __int64 v16; // r15
  void *v17; // rcx
  char v18; // cl
  __int64 v19; // r13
  _QWORD *v20; // r11
  unsigned __int64 v21; // rcx
  __int64 v22; // r14
  _QWORD *v23; // r10
  unsigned __int64 v24; // rcx

  result = RmpObjectTableAllocateState((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 16));
  if ( (int)result >= 0 )
  {
    v3 = -1;
    if ( *((_DWORD *)a1 + 494) >= (unsigned int)(2 * (*((_DWORD *)a1 + 495) >> 5)) )
    {
      v4 = 2 * ((unsigned __int64)*((unsigned int *)a1 + 495) >> 5);
      if ( v4 <= 0xFFFFFFFF )
      {
        v5 = (unsigned int)v4;
        if ( (unsigned int)v4 < 4 )
          v5 = 4LL;
        Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * (unsigned int)v5);
        if ( Heap )
        {
          if ( (((_DWORD)v5 - 1) & (unsigned int)v5) != 0 )
          {
            v18 = -1;
            do
            {
              ++v18;
              LODWORD(v5) = (unsigned int)v5 >> 1;
            }
            while ( (_DWORD)v5 );
            v5 = (unsigned int)(1 << v18);
          }
          if ( (unsigned int)v5 > 0x4000000 )
            v5 = 0x4000000LL;
          v7 = (unsigned int)v5;
          if ( Heap > &Heap[8 * v5] )
            v7 = 0LL;
          if ( v7 )
            memset64(Heap, ((unsigned __int64)a1 + 1976) | 1, v7);
          v8 = 0;
          v9 = -1LL << (*((_BYTE *)a1 + 1980) & 0x1F);
          if ( (*((_DWORD *)a1 + 495) & 0xFFFFFFE0) != 0 )
          {
            do
            {
              v19 = *((_QWORD *)a1 + 248);
              while ( 1 )
              {
                v20 = *(_QWORD **)(v19 + 8LL * v8);
                if ( ((unsigned __int8)v20 & 1) != 0 )
                  break;
                *(_QWORD *)(v19 + 8LL * v8) = *v20;
                v21 = ((((unsigned __int64)v9 & v20[1]) >> 56)
                     + 37
                     * ((unsigned __int8)(((unsigned __int64)v9 & v20[1]) >> 48)
                      + 37
                      * ((unsigned __int8)((unsigned __int16)(((unsigned __int64)v9 & v20[1]) >> 32) >> 8)
                       + 37
                       * ((unsigned __int8)(((unsigned __int64)v9 & v20[1]) >> 32)
                        + 37
                        * ((((unsigned int)v9 & (_DWORD)v20[1]) >> 24)
                         + 37
                         * ((unsigned __int8)(((unsigned int)v9 & (_DWORD)v20[1]) >> 16)
                          + 37
                          * ((unsigned __int8)((unsigned __int16)(v9 & v20[1]) >> 8)
                           + 37 * ((unsigned __int8)(v9 & v20[1]) + 11623883)))))))) & (unsigned int)(v5 - 1);
                *v20 = *(_QWORD *)&Heap[8 * v21];
                *(_QWORD *)&Heap[8 * v21] = v20;
              }
              ++v8;
            }
            while ( v8 < *((_DWORD *)a1 + 495) >> 5 );
          }
          *((_DWORD *)a1 + 495) &= 0x1Fu;
          v10 = (void *)*((_QWORD *)a1 + 248);
          *((_DWORD *)a1 + 495) |= 32 * v5;
          *((_QWORD *)a1 + 248) = Heap;
          if ( v10 )
            CempHeapFree(v10);
        }
        else if ( *((_DWORD *)a1 + 495) < 0x20u )
        {
          return 3221225495LL;
        }
      }
    }
    if ( *((_DWORD *)a1 + 498) < (unsigned int)(2 * (*((_DWORD *)a1 + 499) >> 5)) )
      goto LABEL_32;
    v11 = 2 * ((unsigned __int64)*((unsigned int *)a1 + 499) >> 5);
    if ( v11 > 0xFFFFFFFF )
      goto LABEL_32;
    v12 = (unsigned int)v11;
    if ( (unsigned int)v11 < 4 )
      v12 = 4LL;
    v13 = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * (unsigned int)v12);
    if ( v13 )
    {
      if ( (((_DWORD)v12 - 1) & (unsigned int)v12) != 0 )
      {
        do
        {
          ++v3;
          LODWORD(v12) = (unsigned int)v12 >> 1;
        }
        while ( (_DWORD)v12 );
        v12 = (unsigned int)(1 << v3);
      }
      if ( (unsigned int)v12 > 0x4000000 )
        v12 = 0x4000000LL;
      v14 = (unsigned int)v12;
      if ( v13 > &v13[8 * v12] )
        v14 = 0LL;
      if ( v14 )
        memset64(v13, ((unsigned __int64)a1 + 1992) | 1, v14);
      v15 = 0;
      v16 = -1LL << (*((_BYTE *)a1 + 1996) & 0x1F);
      if ( (*((_DWORD *)a1 + 499) & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v22 = *((_QWORD *)a1 + 250);
          while ( 1 )
          {
            v23 = *(_QWORD **)(v22 + 8LL * v15);
            if ( ((unsigned __int8)v23 & 1) != 0 )
              break;
            *(_QWORD *)(v22 + 8LL * v15) = *v23;
            v24 = ((((unsigned __int64)v16 & v23[1]) >> 56)
                 + 37
                 * ((unsigned __int8)(((unsigned __int64)v16 & v23[1]) >> 48)
                  + 37
                  * ((unsigned __int8)((unsigned __int16)(((unsigned __int64)v16 & v23[1]) >> 32) >> 8)
                   + 37
                   * ((unsigned __int8)(((unsigned __int64)v16 & v23[1]) >> 32)
                    + 37
                    * ((((unsigned int)v16 & (_DWORD)v23[1]) >> 24)
                     + 37
                     * ((unsigned __int8)(((unsigned int)v16 & (_DWORD)v23[1]) >> 16)
                      + 37
                      * ((unsigned __int8)((unsigned __int16)(v16 & v23[1]) >> 8)
                       + 37 * ((unsigned __int8)(v16 & v23[1]) + 11623883)))))))) & (unsigned int)(v12 - 1);
            *v23 = *(_QWORD *)&v13[8 * v24];
            *(_QWORD *)&v13[8 * v24] = v23;
          }
          ++v15;
        }
        while ( v15 < *((_DWORD *)a1 + 499) >> 5 );
      }
      *((_DWORD *)a1 + 499) &= 0x1Fu;
      v17 = (void *)*((_QWORD *)a1 + 250);
      *((_DWORD *)a1 + 499) |= 32 * v12;
      *((_QWORD *)a1 + 250) = v13;
      if ( v17 )
        CempHeapFree(v17);
      goto LABEL_32;
    }
    if ( *((_DWORD *)a1 + 499) >= 0x20u )
    {
LABEL_32:
      result = TpAllocPool((char *)a1 + 2008, 0LL);
      if ( (int)result >= 0 )
      {
        *((_DWORD *)a1 + 504) = 3;
        *((_QWORD *)a1 + 253) = 0LL;
        *((_QWORD *)a1 + 254) = 0LL;
        *((_QWORD *)a1 + 255) = 0LL;
        *((_QWORD *)a1 + 256) = 0LL;
        *((_QWORD *)a1 + 257) = 0LL;
        *((_QWORD *)a1 + 258) = 0LL;
        *((_DWORD *)a1 + 518) = 0;
        *((_DWORD *)a1 + 519) = 1;
        *((_DWORD *)a1 + 520) = 72;
        *((_QWORD *)a1 + 253) = *((_QWORD *)a1 + 251);
        return 0LL;
      }
      return result;
    }
    return 3221225495LL;
  }
  return result;
}
