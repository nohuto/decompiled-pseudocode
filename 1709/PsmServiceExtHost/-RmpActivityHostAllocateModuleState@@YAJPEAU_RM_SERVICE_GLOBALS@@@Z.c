/*
 * XREFs of ?RmpActivityHostAllocateModuleState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18002376C
 * Callers:
 *     ?RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180021BD0 (-RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     CempHeapFreeForHashTable @ 0x18001FEE0 (CempHeapFreeForHashTable.c)
 *     ?RmpObjectTableAllocateState@@YAJPEAU_RM_OBJECT_TABLE@@@Z @ 0x180023BA4 (-RmpObjectTableAllocateState@@YAJPEAU_RM_OBJECT_TABLE@@@Z.c)
 */

__int64 __fastcall RmpActivityHostAllocateModuleState(struct _RM_SERVICE_GLOBALS *a1)
{
  __int64 result; // rax
  char v3; // r15
  unsigned __int64 v4; // rax
  __int64 v5; // rsi
  char *Heap; // r8
  unsigned __int64 v7; // rcx
  unsigned int v8; // edi
  __int64 v9; // r10
  void *v10; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // rsi
  char *v13; // r8
  unsigned __int64 v14; // rcx
  unsigned int v15; // edi
  __int64 v16; // r13
  void *v17; // rcx
  char v18; // cl
  __int64 v19; // r12
  _QWORD *v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r11
  _QWORD *v23; // r9
  __int64 v24; // rdx
  __int64 v25; // [rsp+60h] [rbp+40h]
  __int64 v26; // [rsp+68h] [rbp+48h]

  result = RmpObjectTableAllocateState((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 16));
  if ( (int)result < 0 )
    return result;
  v3 = -1;
  if ( *((_DWORD *)a1 + 388) >= (unsigned int)(2 * (*((_DWORD *)a1 + 389) >> 5)) )
  {
    v4 = 2 * ((unsigned __int64)*((unsigned int *)a1 + 389) >> 5);
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
          memset64(Heap, ((unsigned __int64)a1 + 1552) | 1, v7);
        v8 = 0;
        v9 = -1LL << (*((_BYTE *)a1 + 1556) & 0x1F);
        if ( (*((_DWORD *)a1 + 389) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v19 = *((_QWORD *)a1 + 195);
            while ( 1 )
            {
              v20 = *(_QWORD **)(v19 + 8LL * v8);
              if ( ((unsigned __int8)v20 & 1) != 0 )
                break;
              *(_QWORD *)(v19 + 8LL * v8) = *v20;
              v25 = v9 & v20[1];
              v21 = (37
                   * (BYTE6(v25)
                    + 37
                    * (BYTE5(v25)
                     + 37
                     * (BYTE4(v25)
                      + 37
                      * (BYTE3(v25) + 37 * (BYTE2(v25) + 37 * (BYTE1(v25) + 37 * ((unsigned __int8)v25 + 11623883)))))))
                   + HIBYTE(v25)) & (unsigned int)(v5 - 1);
              *v20 = *(_QWORD *)&Heap[8 * v21];
              *(_QWORD *)&Heap[8 * v21] = v20;
            }
            ++v8;
          }
          while ( v8 < *((_DWORD *)a1 + 389) >> 5 );
        }
        *((_DWORD *)a1 + 389) &= 0x1Fu;
        v10 = (void *)*((_QWORD *)a1 + 195);
        *((_DWORD *)a1 + 389) |= 32 * v5;
        *((_QWORD *)a1 + 195) = Heap;
        if ( v10 )
          CempHeapFreeForHashTable(v10);
      }
      else if ( *((_DWORD *)a1 + 389) < 0x20u )
      {
        return 3221225495LL;
      }
    }
  }
  if ( *((_DWORD *)a1 + 392) >= (unsigned int)(2 * (*((_DWORD *)a1 + 393) >> 5)) )
  {
    v11 = 2 * ((unsigned __int64)*((unsigned int *)a1 + 393) >> 5);
    if ( v11 <= 0xFFFFFFFF )
    {
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
          memset64(v13, ((unsigned __int64)a1 + 1568) | 1, v14);
        v15 = 0;
        v16 = -1LL << (*((_BYTE *)a1 + 1572) & 0x1F);
        if ( (*((_DWORD *)a1 + 393) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v22 = *((_QWORD *)a1 + 197);
            while ( 1 )
            {
              v23 = *(_QWORD **)(v22 + 8LL * v15);
              if ( ((unsigned __int8)v23 & 1) != 0 )
                break;
              *(_QWORD *)(v22 + 8LL * v15) = *v23;
              v26 = v16 & v23[1];
              v24 = (37
                   * (BYTE6(v26)
                    + 37
                    * (BYTE5(v26)
                     + 37
                     * (BYTE4(v26)
                      + 37
                      * (BYTE3(v26) + 37 * (BYTE2(v26) + 37 * (BYTE1(v26) + 37 * ((unsigned __int8)v26 + 11623883)))))))
                   + HIBYTE(v26)) & (unsigned int)(v12 - 1);
              *v23 = *(_QWORD *)&v13[8 * v24];
              *(_QWORD *)&v13[8 * v24] = v23;
            }
            ++v15;
          }
          while ( v15 < *((_DWORD *)a1 + 393) >> 5 );
        }
        *((_DWORD *)a1 + 393) &= 0x1Fu;
        v17 = (void *)*((_QWORD *)a1 + 197);
        *((_DWORD *)a1 + 393) |= 32 * v12;
        *((_QWORD *)a1 + 197) = v13;
        if ( v17 )
          CempHeapFreeForHashTable(v17);
        goto LABEL_32;
      }
      if ( *((_DWORD *)a1 + 393) < 0x20u )
        return 3221225495LL;
    }
  }
LABEL_32:
  *((_QWORD *)a1 + 200) = 0LL;
  *((_DWORD *)a1 + 398) = 3;
  *((_QWORD *)a1 + 201) = 0LL;
  *((_QWORD *)a1 + 202) = 0LL;
  *((_QWORD *)a1 + 203) = 0LL;
  *((_DWORD *)a1 + 414) = 72;
  *((_QWORD *)a1 + 204) = 0LL;
  *((_QWORD *)a1 + 205) = 0LL;
  *((_DWORD *)a1 + 412) = 0;
  *((_DWORD *)a1 + 413) = 1;
  result = TpAllocCleanupGroup((char *)a1 + 1584);
  if ( (int)result >= 0 )
  {
    *((_QWORD *)a1 + 201) = *((_QWORD *)a1 + 198);
    *((_QWORD *)a1 + 202) = 0LL;
    result = TpAllocPool((char *)a1 + 1664, 0LL);
    if ( (int)result >= 0 )
    {
      result = TpAllocCleanupGroup((char *)a1 + 1672);
      if ( (int)result >= 0 )
      {
        *((_DWORD *)a1 + 420) = 3;
        *((_QWORD *)a1 + 211) = 0LL;
        *((_QWORD *)a1 + 212) = 0LL;
        *((_QWORD *)a1 + 213) = 0LL;
        *((_QWORD *)a1 + 214) = 0LL;
        *((_QWORD *)a1 + 215) = 0LL;
        *((_QWORD *)a1 + 216) = 0LL;
        *((_DWORD *)a1 + 434) = 0;
        *((_DWORD *)a1 + 435) = 1;
        *((_DWORD *)a1 + 436) = 72;
        *((_QWORD *)a1 + 211) = *((_QWORD *)a1 + 208);
        *((_QWORD *)a1 + 212) = *((_QWORD *)a1 + 209);
        result = 0LL;
        *((_QWORD *)a1 + 213) = 0LL;
      }
    }
  }
  return result;
}
