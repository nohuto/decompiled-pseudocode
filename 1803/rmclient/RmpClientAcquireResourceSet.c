/*
 * XREFs of RmpClientAcquireResourceSet @ 0x180005E60
 * Callers:
 *     RmAcquireResourceSetEx @ 0x180005AD0 (RmAcquireResourceSetEx.c)
 * Callees:
 *     HampIpcChannelObjectCompareObjectsForTree @ 0x1800060F0 (HampIpcChannelObjectCompareObjectsForTree.c)
 *     memset_0 @ 0x180007B70 (memset_0.c)
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
  int v10; // edi
  _QWORD *Heap; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  _QWORD *v14; // r15
  int v15; // eax
  int Pointer; // ebx
  __int64 v17; // rbx
  int v18; // edi
  int v19; // esi
  void *v20; // r14
  CLIENT_CALL_RETURN v21; // r8
  __int64 v22; // r14
  __int64 v23; // rax
  unsigned __int64 v24; // rdi
  int v25; // esi
  unsigned __int64 v26; // rax
  ULONG v28; // [rsp+40h] [rbp-88h]
  int v29; // [rsp+48h] [rbp-80h]
  int v30; // [rsp+50h] [rbp-78h]
  unsigned int v31; // [rsp+70h] [rbp-58h]
  PVOID P; // [rsp+78h] [rbp-50h]

  v9 = a1 + 24;
  P = 0LL;
  v10 = 0;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x58uLL);
  v14 = Heap;
  if ( Heap )
  {
    memset_0(Heap, 0, 0x58uLL);
    v14[5] = v9;
    v14[6] = -1LL;
    *((_DWORD *)v14 + 14) = 0;
    v14[9] = a5;
    v14[10] = a6;
    v14[8] = -1LL;
    P = v14;
    v15 = 0;
  }
  else
  {
    v15 = -1073741801;
    v14 = 0LL;
  }
  Pointer = 0;
  if ( v15 < 0 )
    Pointer = v15;
  v31 = Pointer;
  if ( Pointer >= 0 )
  {
    RtlAcquireSRWLockExclusive(v9 + 8, v12, v13);
    *(_DWORD *)(v9 + 16) = GetCurrentThreadId();
    v17 = *(_QWORD *)(a4 + 544);
    v18 = *(_DWORD *)(a4 + 536);
    v19 = *(_DWORD *)(a4 + 532);
    v20 = (void *)(a4 + 464);
    v30 = v18;
    v29 = v19;
    v28 = RtlLengthSid(v20);
    Pointer = (unsigned int)NdrClientCall3(
                              (MIDL_STUBLESS_PROXY_INFO *)&stru_1800108D8,
                              4u,
                              0LL,
                              *(_QWORD *)(a1 + 16),
                              a2,
                              a3,
                              a4,
                              v20,
                              v28,
                              v29,
                              v30,
                              v17,
                              a8).Pointer;
    v31 = Pointer;
    if ( Pointer >= 0 )
    {
      v14[6] = *a8;
      v22 = v14[5] + 24LL;
      v23 = *(_QWORD *)(v14[5] + 32LL);
      v24 = *(_QWORD *)v22;
      if ( (v23 & 1) != 0 && v24 )
        v24 ^= v22;
      v25 = v23 & 1;
      LOBYTE(v21.Pointer) = 0;
      if ( v24 )
      {
        while ( 1 )
        {
          if ( (int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HampIpcChannelObjectCompareObjectsForTree)(
                      v14,
                      v24,
                      (CLIENT_CALL_RETURN)v21.Simple) < 0 )
          {
            v26 = *(_QWORD *)v24;
            if ( v25 )
            {
              if ( !v26 )
                goto LABEL_23;
              v26 ^= v24;
            }
            if ( !v26 )
            {
LABEL_23:
              LOBYTE(v21.Pointer) = 0;
              break;
            }
          }
          else
          {
            v26 = *(_QWORD *)(v24 + 8);
            if ( v25 )
            {
              if ( !v26 )
                goto LABEL_17;
              v26 ^= v24;
            }
            if ( !v26 )
            {
LABEL_17:
              LOBYTE(v21.Pointer) = 1;
              break;
            }
          }
          v24 = v26;
        }
      }
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))RtlRbInsertNodeEx)(
        v22,
        v24,
        (CLIENT_CALL_RETURN)v21.Simple,
        v14);
      v14 = 0LL;
      P = 0LL;
    }
    v10 = 1;
  }
  if ( v10 )
  {
    *(_DWORD *)(v9 + 16) = 0;
    RtlReleaseSRWLockExclusive(v9 + 8);
  }
  if ( v14 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
    return v31;
  }
  return (unsigned int)Pointer;
}
