/*
 * XREFs of RmpClientRegisterActivityHostCallbacks @ 0x180005600
 * Callers:
 *     RmRegisterActivityHostCallbacks @ 0x1800055F0 (RmRegisterActivityHostCallbacks.c)
 * Callees:
 *     MIDL_user_allocate @ 0x1800066B0 (MIDL_user_allocate.c)
 *     RmpFreeHeapForHashTable @ 0x180007240 (RmpFreeHeapForHashTable.c)
 *     RmpClientSubscriptionRemoveCallback @ 0x18000BF40 (RmpClientSubscriptionRemoveCallback.c)
 */

CLIENT_CALL_RETURN __fastcall RmpClientRegisterActivityHostCallbacks(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  _QWORD *Heap; // rbx
  CLIENT_CALL_RETURN result; // rax
  __int64 v11; // rdi
  CLIENT_CALL_RETURN v12; // rdx
  CLIENT_CALL_RETURN v13; // r8
  unsigned __int8 *v14; // rax
  __int64 v15; // r8
  _QWORD *v16; // rcx
  unsigned __int64 v17; // rbx
  char v18; // di
  _QWORD **v19; // r8
  char *v20; // r10
  unsigned __int64 v21; // rcx
  __int64 v22; // r13
  __int64 v23; // r9
  _QWORD *v24; // rdi
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // [rsp+20h] [rbp-58h]
  unsigned int Pointer; // [rsp+30h] [rbp-48h]
  __int64 v29; // [rsp+38h] [rbp-40h]
  PVOID P; // [rsp+40h] [rbp-38h]
  __int64 v31; // [rsp+88h] [rbp+10h]

  Heap = 0LL;
  P = 0LL;
  if ( a2 == -1 )
  {
    result.Simple = 3221225713LL;
  }
  else
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x48uLL);
    if ( Heap )
    {
      result.Simple = 0LL;
      *Heap = 0LL;
      Heap[1] = 0LL;
      Heap[2] = 0LL;
      Heap[3] = 0LL;
      Heap[5] = 0LL;
      *((_DWORD *)Heap + 10) = 1;
      Heap[4] = -1LL;
      Heap[6] = a3;
      Heap[7] = a4;
      Heap[8] = a2;
      P = Heap;
    }
    else
    {
      result.Simple = 3221225495LL;
      Heap = 0LL;
    }
    if ( SLODWORD(result.Simple) >= 0 )
      result.Simple = 0LL;
  }
  Pointer = (unsigned int)result.Pointer;
  if ( SLODWORD(result.Simple) >= 0 )
  {
    v27 = a2;
    v11 = 2LL;
    result.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_18000F860, 2u, 0LL, *(_QWORD *)(a1 + 16), v27, a5).Pointer;
    Pointer = (unsigned int)result.Pointer;
    if ( SLODWORD(result.Simple) >= 0 )
    {
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))RtlAcquireSRWLockExclusive)(
        a1 + 32,
        (CLIENT_CALL_RETURN)v12.Simple,
        (CLIENT_CALL_RETURN)v13.Simple);
      *(_DWORD *)(a1 + 40) = GetCurrentThreadId();
      v14 = (unsigned __int8 *)(Heap + 4);
      Heap[4] = *a5;
      v15 = 314159LL;
      do
      {
        v15 = v14[7]
            + 37
            * (v14[6]
             + 37 * (v14[5] + 37 * (v14[4] + 37 * (v14[3] + 37 * (v14[2] + 37 * (v14[1] + 37 * (*v14 + 37 * v15)))))));
        v14 += 8;
        --v11;
      }
      while ( v11 );
      Heap[1] = v15;
      v31 = v15 & (-1LL << (*(_DWORD *)(a1 + 52) & 0x1F));
      v16 = (_QWORD *)(*(_QWORD *)(a1 + 56)
                     + 8LL
                     * ((37
                       * (BYTE6(v31)
                        + 37
                        * (BYTE5(v31)
                         + 37
                         * (BYTE4(v31)
                          + 37
                          * (BYTE3(v31) + 37 * (BYTE2(v31) + 37 * (BYTE1(v31) + 37 * ((unsigned __int8)v31 + 11623883)))))))
                       + HIBYTE(v31)) & (unsigned int)((*(_DWORD *)(a1 + 52) >> 5) - 1)));
      *Heap = *v16;
      *v16 = Heap;
      if ( ++*(_DWORD *)(a1 + 48) >= (unsigned int)(2 * (*(_DWORD *)(a1 + 52) >> 5)) )
      {
        v17 = 2 * ((unsigned __int64)*(unsigned int *)(a1 + 52) >> 5);
        v18 = -1;
        if ( v17 <= 0xFFFFFFFF )
        {
          if ( (unsigned int)v17 < 4 )
            LODWORD(v17) = 4;
          v20 = (char *)MIDL_user_allocate(8LL * (unsigned int)v17);
          if ( v20 )
          {
            if ( (((_DWORD)v17 - 1) & (unsigned int)v17) != 0 )
            {
              do
              {
                ++v18;
                LODWORD(v17) = (unsigned int)v17 >> 1;
              }
              while ( (_DWORD)v17 );
              LODWORD(v17) = 1 << v18;
            }
            if ( (unsigned int)v17 > 0x4000000 )
              LODWORD(v17) = 0x4000000;
            v21 = (8 * (unsigned __int64)(unsigned int)v17 + 7) >> 3;
            if ( v20 > &v20[8 * (unsigned int)v17] )
              v21 = 0LL;
            if ( v21 )
              memset64(v20, (a1 + 48) | 1, v21);
            v22 = -1LL << (*(_BYTE *)(a1 + 52) & 0x1F);
            v23 = 0LL;
            if ( (*(_DWORD *)(a1 + 52) & 0xFFFFFFE0) != 0 )
            {
              do
              {
                v19 = (_QWORD **)(*(_QWORD *)(a1 + 56) + 8LL * (unsigned int)v23);
                while ( 1 )
                {
                  v24 = *v19;
                  if ( ((unsigned __int8)*v19 & 1) != 0 )
                    break;
                  *v19 = (_QWORD *)*v24;
                  v29 = v22 & v24[1];
                  v25 = (37
                       * (BYTE6(v29)
                        + 37
                        * (BYTE5(v29)
                         + 37
                         * (BYTE4(v29)
                          + 37
                          * (BYTE3(v29) + 37 * (BYTE2(v29) + 37 * (BYTE1(v29) + 37 * ((unsigned __int8)v29 + 11623883)))))))
                       + HIBYTE(v29)) & (unsigned int)(v17 - 1);
                  *v24 = *(_QWORD *)&v20[8 * v25];
                  *(_QWORD *)&v20[8 * v25] = v24;
                }
                v23 = (unsigned int)(v23 + 1);
              }
              while ( (unsigned int)v23 < *(_DWORD *)(a1 + 52) >> 5 );
            }
            v26 = *(_QWORD *)(a1 + 56);
            *(_QWORD *)(a1 + 56) = v20;
            *(_DWORD *)(a1 + 52) &= 0x1Fu;
            *(_DWORD *)(a1 + 52) |= 32 * v17;
            if ( v26 )
              RmpFreeHeapForHashTable(v26, 0LL, v19, v23);
          }
        }
      }
      *(_DWORD *)(a1 + 40) = 0;
      RtlReleaseSRWLockExclusive(a1 + 32);
      Heap = 0LL;
      P = 0LL;
      result.Simple = 0LL;
      Pointer = 0;
    }
  }
  if ( Heap )
  {
    if ( Heap[4] != -1LL )
      RmpClientSubscriptionRemoveCallback(0LL, Heap);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
    return (CLIENT_CALL_RETURN)Pointer;
  }
  return result;
}
