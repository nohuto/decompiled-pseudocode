/*
 * XREFs of RmpClientAcquireResourceSet @ 0x180005D70
 * Callers:
 *     RmAcquireResourceSetEx @ 0x180005B70 (RmAcquireResourceSetEx.c)
 * Callees:
 *     memset_0 @ 0x180008068 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180008290 (_guard_dispatch_icall_nop.c)
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
  __int64 v10; // rdi
  _QWORD *Heap; // rax
  _QWORD *v12; // r15
  int Pointer; // ebx
  __int64 v14; // rbx
  CLIENT_CALL_RETURN v15; // r8
  int v16; // r13d
  __int64 v17; // r12
  int v18; // esi
  unsigned __int64 v19; // rdi
  __int64 (__fastcall *v20)(__int64, __int64); // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx
  int v23; // eax
  unsigned __int64 v24; // rax
  ULONG v26; // [rsp+40h] [rbp-88h]
  int v27; // [rsp+48h] [rbp-80h]
  int v28; // [rsp+50h] [rbp-78h]
  unsigned int v29; // [rsp+70h] [rbp-58h]
  PVOID P; // [rsp+78h] [rbp-50h]
  __int64 v31; // [rsp+80h] [rbp-48h]

  v10 = a1 + 24;
  v31 = a1 + 24;
  P = 0LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x58uLL);
  v12 = Heap;
  if ( Heap )
  {
    memset_0(Heap, 0, 0x58uLL);
    v12[5] = v10;
    v12[6] = -1LL;
    *((_DWORD *)v12 + 14) = 0;
    v12[9] = a5;
    v12[10] = a6;
    v12[8] = -1LL;
    P = v12;
    Pointer = 0;
  }
  else
  {
    Pointer = -1073741801;
    v12 = 0LL;
  }
  if ( Pointer >= 0 )
    Pointer = 0;
  v29 = Pointer;
  if ( Pointer < 0 )
  {
    v16 = 0;
    goto LABEL_21;
  }
  RtlAcquireSRWLockExclusive(v10 + 8);
  *(_DWORD *)(v10 + 16) = GetCurrentThreadId();
  v14 = *(_QWORD *)(a4 + 544);
  v28 = *(_DWORD *)(a4 + 536);
  v27 = *(_DWORD *)(a4 + 532);
  v26 = RtlLengthSid((PSID)(a4 + 464));
  Pointer = (unsigned int)NdrClientCall3(
                            (MIDL_STUBLESS_PROXY_INFO *)&stru_180010B70,
                            4u,
                            0LL,
                            *(_QWORD *)(a1 + 16),
                            a2,
                            a3,
                            a4,
                            a4 + 464,
                            v26,
                            v27,
                            v28,
                            v14,
                            a8).Pointer;
  v29 = Pointer;
  v16 = 1;
  if ( Pointer < 0 )
    goto LABEL_20;
  v12[6] = *a8;
  v17 = v12[5];
  v18 = *(_BYTE *)(v17 + 32) & 1;
  v19 = *(_QWORD *)(v17 + 24);
  LOBYTE(v15.Pointer) = 0;
  if ( !v19 )
    goto LABEL_19;
  while ( 1 )
  {
    v20 = *(__int64 (__fastcall **)(__int64, __int64))(v12[5] + 64LL);
    if ( v20 == RmpClientCallbackCompareToCallback )
    {
      v21 = *(_QWORD *)(v19 + 48);
      v22 = v12[6];
      if ( v22 < v21 )
        v23 = -1;
      else
        v23 = v22 > v21;
    }
    else
    {
      v23 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v20)(v12, v19, (CLIENT_CALL_RETURN)v15.Simple);
    }
    if ( v23 >= 0 )
    {
      v24 = *(_QWORD *)(v19 + 8);
      if ( v18 )
      {
        if ( !v24 )
        {
LABEL_18:
          LOBYTE(v15.Pointer) = 1;
          goto LABEL_19;
        }
        v24 ^= v19;
      }
      if ( !v24 )
        goto LABEL_18;
      goto LABEL_14;
    }
    v24 = *(_QWORD *)v19;
    if ( v18 )
      break;
LABEL_16:
    if ( !v24 )
      goto LABEL_27;
LABEL_14:
    v19 = v24;
  }
  if ( v24 )
  {
    v24 ^= v19;
    goto LABEL_16;
  }
LABEL_27:
  LOBYTE(v15.Pointer) = 0;
LABEL_19:
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))RtlRbInsertNodeEx)(
    v17 + 24,
    v19,
    (CLIENT_CALL_RETURN)v15.Simple,
    v12);
  v12 = 0LL;
  P = 0LL;
LABEL_20:
  v10 = v31;
LABEL_21:
  if ( v16 )
  {
    *(_DWORD *)(v10 + 16) = 0;
    RtlReleaseSRWLockExclusive(v10 + 8);
  }
  if ( v12 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
    return v29;
  }
  return (unsigned int)Pointer;
}
