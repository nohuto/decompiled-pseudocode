/*
 * XREFs of RmpClientAcquireResourceSet @ 0x180005A30
 * Callers:
 *     RmAcquireResourceSetEx @ 0x180005A20 (RmAcquireResourceSetEx.c)
 * Callees:
 *     MIDL_user_allocate @ 0x1800066B0 (MIDL_user_allocate.c)
 *     RmpFreeHeapForHashTable @ 0x180007240 (RmpFreeHeapForHashTable.c)
 *     RmpClientSubscriptionRemoveCallback @ 0x18000BF40 (RmpClientSubscriptionRemoveCallback.c)
 */

__int64 __fastcall RmpClientAcquireResourceSet(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        _QWORD *a8)
{
  __int64 v9; // r13
  int v10; // esi
  _QWORD *Heap; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  _QWORD *v14; // r15
  int Pointer; // ebx
  __int64 v16; // rdi
  int v17; // ebx
  int v18; // esi
  void *v19; // r14
  unsigned __int8 *v20; // rax
  __int64 v21; // rdi
  __int64 v22; // r8
  _QWORD *v23; // rcx
  unsigned __int64 v25; // r15
  char v26; // di
  _QWORD **v27; // r8
  __int64 v28; // r9
  char *v29; // r11
  unsigned __int64 v30; // rcx
  __int64 v31; // r14
  unsigned int v32; // r10d
  _QWORD *v33; // rdi
  __int64 v34; // rcx
  __int64 v35; // rcx
  ULONG v36; // [rsp+40h] [rbp-98h]
  unsigned int v37; // [rsp+70h] [rbp-68h]
  __int64 v38; // [rsp+78h] [rbp-60h]
  __int64 v39; // [rsp+80h] [rbp-58h]
  PVOID P; // [rsp+88h] [rbp-50h]

  v9 = a1 + 24;
  P = 0LL;
  v10 = 0;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x48uLL);
  v14 = Heap;
  if ( Heap )
  {
    *Heap = 0LL;
    Heap[1] = 0LL;
    Heap[2] = 0LL;
    Heap[3] = 0LL;
    Heap[5] = 0LL;
    *((_DWORD *)Heap + 10) = 0;
    Heap[4] = -1LL;
    Heap[6] = a5;
    Heap[7] = a6;
    Heap[8] = -1LL;
    P = Heap;
    Pointer = 0;
  }
  else
  {
    Pointer = -1073741801;
    v14 = 0LL;
  }
  if ( Pointer >= 0 )
    Pointer = 0;
  v37 = Pointer;
  if ( Pointer >= 0 )
  {
    RtlAcquireSRWLockExclusive(v9 + 8, v12, v13);
    *(_DWORD *)(v9 + 16) = GetCurrentThreadId();
    v16 = *(_QWORD *)(a4 + 544);
    v17 = *(_DWORD *)(a4 + 536);
    v18 = *(_DWORD *)(a4 + 532);
    v19 = (void *)(a4 + 464);
    v36 = RtlLengthSid(v19);
    Pointer = (unsigned int)NdrClientCall3(
                              (MIDL_STUBLESS_PROXY_INFO *)&stru_18000F860,
                              4u,
                              0LL,
                              *(_QWORD *)(a1 + 16),
                              a2,
                              a3,
                              a4,
                              v19,
                              v36,
                              v18,
                              v17,
                              v16,
                              a8).Pointer;
    v37 = Pointer;
    v10 = 1;
    if ( Pointer >= 0 )
    {
      v20 = (unsigned __int8 *)(v14 + 4);
      v14[4] = *a8;
      v21 = 2LL;
      v22 = 314159LL;
      do
      {
        v22 = v20[7]
            + 37
            * (v20[6]
             + 37 * (v20[5] + 37 * (v20[4] + 37 * (v20[3] + 37 * (v20[2] + 37 * (v20[1] + 37 * (*v20 + 37 * v22)))))));
        v20 += 8;
        --v21;
      }
      while ( v21 );
      v14[1] = v22;
      v38 = v22 & (-1LL << (*(_DWORD *)(v9 + 28) & 0x1F));
      v23 = (_QWORD *)(*(_QWORD *)(v9 + 32)
                     + 8LL
                     * ((37
                       * (BYTE6(v38)
                        + 37
                        * (BYTE5(v38)
                         + 37
                         * (BYTE4(v38)
                          + 37
                          * (BYTE3(v38) + 37 * (BYTE2(v38) + 37 * (BYTE1(v38) + 37 * ((unsigned __int8)v38 + 11623883)))))))
                       + HIBYTE(v38)) & (unsigned int)((*(_DWORD *)(v9 + 28) >> 5) - 1)));
      *v14 = *v23;
      *v23 = v14;
      if ( ++*(_DWORD *)(v9 + 24) >= (unsigned int)(2 * (*(_DWORD *)(v9 + 28) >> 5)) )
      {
        v25 = 2 * ((unsigned __int64)*(unsigned int *)(v9 + 28) >> 5);
        v26 = -1;
        if ( v25 <= 0xFFFFFFFF )
        {
          if ( (unsigned int)v25 < 4 )
            LODWORD(v25) = 4;
          v29 = (char *)MIDL_user_allocate(8LL * (unsigned int)v25);
          if ( v29 )
          {
            if ( (((_DWORD)v25 - 1) & (unsigned int)v25) != 0 )
            {
              do
              {
                ++v26;
                LODWORD(v25) = (unsigned int)v25 >> 1;
              }
              while ( (_DWORD)v25 );
              LODWORD(v25) = 1 << v26;
            }
            if ( (unsigned int)v25 > 0x4000000 )
              LODWORD(v25) = 0x4000000;
            v30 = (8 * (unsigned __int64)(unsigned int)v25 + 7) >> 3;
            if ( v29 > &v29[8 * (unsigned int)v25] )
              v30 = 0LL;
            if ( v30 )
              memset64(v29, (v9 + 24) | 1, v30);
            v31 = -1LL << (*(_BYTE *)(v9 + 28) & 0x1F);
            v32 = 0;
            if ( (*(_DWORD *)(v9 + 28) & 0xFFFFFFE0) != 0 )
            {
              do
              {
                v27 = (_QWORD **)(*(_QWORD *)(v9 + 32) + 8LL * v32);
                while ( 1 )
                {
                  v33 = *v27;
                  if ( ((unsigned __int8)*v27 & 1) != 0 )
                    break;
                  *v27 = (_QWORD *)*v33;
                  v39 = v31 & v33[1];
                  v34 = (37
                       * (BYTE6(v39)
                        + 37
                        * (BYTE5(v39)
                         + 37
                         * (BYTE4(v39)
                          + 37
                          * (BYTE3(v39) + 37 * (BYTE2(v39) + 37 * (BYTE1(v39) + 37 * ((unsigned __int8)v39 + 11623883)))))))
                       + HIBYTE(v39)) & (unsigned int)(v25 - 1);
                  *v33 = *(_QWORD *)&v29[8 * v34];
                  *(_QWORD *)&v29[8 * v34] = v33;
                }
                ++v32;
              }
              while ( v32 < *(_DWORD *)(v9 + 28) >> 5 );
            }
            v35 = *(_QWORD *)(v9 + 32);
            *(_QWORD *)(v9 + 32) = v29;
            *(_DWORD *)(v9 + 28) &= 0x1Fu;
            *(_DWORD *)(v9 + 28) |= 32 * v25;
            if ( v35 )
              RmpFreeHeapForHashTable(v35, 0LL, v27, v28);
          }
        }
      }
      v14 = 0LL;
      P = 0LL;
    }
  }
  if ( v10 )
  {
    *(_DWORD *)(v9 + 16) = 0;
    RtlReleaseSRWLockExclusive(v9 + 8);
  }
  if ( v14 )
  {
    if ( v14[4] != -1LL )
      RmpClientSubscriptionRemoveCallback(0LL, v14);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
    return v37;
  }
  return (unsigned int)Pointer;
}
