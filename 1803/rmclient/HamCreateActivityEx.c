/*
 * XREFs of HamCreateActivityEx @ 0x180005B10
 * Callers:
 *     HamCreateActivity @ 0x180005AE0 (HamCreateActivity.c)
 * Callees:
 *     HampIpcChannelObjectCompareObjectsForTree @ 0x1800060F0 (HampIpcChannelObjectCompareObjectsForTree.c)
 */

CLIENT_CALL_RETURN __fastcall HamCreateActivityEx(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6)
{
  _QWORD *Heap; // rax
  _QWORD *v10; // r15
  CLIENT_CALL_RETURN result; // rax
  __int64 v12; // rbx
  CLIENT_CALL_RETURN v13; // rdx
  CLIENT_CALL_RETURN v14; // r8
  __int64 v15; // r14
  __int64 v16; // r8
  __int64 v17; // rsi
  __int64 v18; // rax
  unsigned __int64 v19; // rbx
  int v20; // edi
  unsigned __int64 v21; // rax
  ULONG v22; // [rsp+30h] [rbp-88h]
  int v23; // [rsp+38h] [rbp-80h]
  int v24; // [rsp+40h] [rbp-78h]
  unsigned int Pointer; // [rsp+70h] [rbp-48h]
  _QWORD v26[3]; // [rsp+78h] [rbp-40h] BYREF
  PVOID P; // [rsp+C0h] [rbp+8h]

  P = 0LL;
  v26[0] = -1LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x40uLL);
  v10 = Heap;
  if ( Heap )
  {
    *Heap = 0LL;
    Heap[1] = 0LL;
    Heap[2] = 0LL;
    Heap[3] = 0LL;
    Heap[4] = 0LL;
    Heap[5] = a1 + 2;
    Heap[7] = a2;
    Heap[6] = -1LL;
    P = Heap;
    result.Simple = 0LL;
  }
  else
  {
    result.Simple = 3221225495LL;
    v10 = 0LL;
  }
  Pointer = (unsigned int)result.Pointer;
  if ( SLODWORD(result.Simple) >= 0 )
  {
    v12 = *(_QWORD *)(a3 + 544);
    v24 = *(_DWORD *)(a3 + 536);
    v23 = *(_DWORD *)(a3 + 532);
    v22 = RtlLengthSid((PSID)(a3 + 464));
    result.Pointer = NdrClientCall3(
                       (MIDL_STUBLESS_PROXY_INFO *)&stru_180010878,
                       2u,
                       0LL,
                       *a1,
                       a3,
                       a3 + 464,
                       v22,
                       v23,
                       v24,
                       v12,
                       a4,
                       a5,
                       v26).Pointer;
    v26[1] = result.Pointer;
    Pointer = (unsigned int)result.Pointer;
    if ( SLODWORD(result.Simple) >= 0 )
    {
      v10[6] = v26[0];
      v15 = v10[5];
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))RtlAcquireSRWLockExclusive)(
        v15 + 8,
        (CLIENT_CALL_RETURN)v13.Simple,
        (CLIENT_CALL_RETURN)v14.Simple);
      *(_DWORD *)(v15 + 16) = GetCurrentThreadId();
      v17 = v10[5] + 24LL;
      v18 = *(_QWORD *)(v10[5] + 32LL);
      v19 = *(_QWORD *)v17;
      if ( (v18 & 1) != 0 && v19 )
        v19 ^= v17;
      v20 = v18 & 1;
      LOBYTE(v16) = 0;
      if ( v19 )
      {
        while ( 1 )
        {
          if ( (int)HampIpcChannelObjectCompareObjectsForTree(v10, v19, v16) < 0 )
          {
            v21 = *(_QWORD *)v19;
            if ( v20 )
            {
              if ( !v21 )
                goto LABEL_21;
              v21 ^= v19;
            }
            if ( !v21 )
            {
LABEL_21:
              LOBYTE(v16) = 0;
              break;
            }
          }
          else
          {
            v21 = *(_QWORD *)(v19 + 8);
            if ( v20 )
            {
              if ( !v21 )
                goto LABEL_15;
              v21 ^= v19;
            }
            if ( !v21 )
            {
LABEL_15:
              LOBYTE(v16) = 1;
              break;
            }
          }
          v19 = v21;
        }
      }
      RtlRbInsertNodeEx(v17, v19, v16, v10);
      *(_DWORD *)(v15 + 16) = 0;
      RtlReleaseSRWLockExclusive(v15 + 8);
      v10 = 0LL;
      P = 0LL;
      *a6 = v26[0];
      result.Simple = 0LL;
      Pointer = 0;
    }
  }
  if ( v10 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
    return (CLIENT_CALL_RETURN)Pointer;
  }
  return result;
}
