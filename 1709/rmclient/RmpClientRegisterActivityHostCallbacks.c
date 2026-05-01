/*
 * XREFs of RmpClientRegisterActivityHostCallbacks @ 0x180005B80
 * Callers:
 *     RmRegisterActivityHostCallbacks @ 0x180005B60 (RmRegisterActivityHostCallbacks.c)
 * Callees:
 *     memset_0 @ 0x180008068 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180008290 (_guard_dispatch_icall_nop.c)
 */

CLIENT_CALL_RETURN __fastcall RmpClientRegisterActivityHostCallbacks(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  _QWORD *v9; // rdi
  __int64 v10; // r12
  _QWORD *Heap; // rax
  CLIENT_CALL_RETURN result; // rax
  __int64 v13; // r15
  __int64 v14; // r14
  int v15; // esi
  unsigned __int64 v16; // rbx
  __int64 v17; // r8
  __int64 (__fastcall *v18)(__int64, __int64); // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  int v21; // eax
  unsigned __int64 v22; // rax
  unsigned int Pointer; // [rsp+30h] [rbp-38h]
  PVOID P; // [rsp+70h] [rbp+8h]

  v9 = 0LL;
  P = 0LL;
  v10 = a1 + 24;
  if ( a2 == -1 )
  {
    result.Simple = 3221225713LL;
  }
  else
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x58uLL);
    v9 = Heap;
    if ( Heap )
    {
      memset_0(Heap, 0, 0x58uLL);
      v9[5] = v10;
      v9[6] = -1LL;
      *((_DWORD *)v9 + 14) = 1;
      v9[9] = a3;
      v9[10] = a4;
      v9[8] = a2;
      P = v9;
      result.Simple = 0LL;
    }
    else
    {
      result.Simple = 3221225495LL;
      v9 = 0LL;
    }
    if ( SLODWORD(result.Simple) >= 0 )
      result.Simple = 0LL;
  }
  Pointer = (unsigned int)result.Pointer;
  if ( SLODWORD(result.Simple) < 0 )
    goto LABEL_18;
  result.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180010B70, 2u, 0LL, *(_QWORD *)(a1 + 16), a2, a5).Pointer;
  Pointer = (unsigned int)result.Pointer;
  if ( SLODWORD(result.Simple) < 0 )
    goto LABEL_18;
  v9[6] = *a5;
  v13 = v9[5];
  RtlAcquireSRWLockExclusive(v13 + 8);
  *(_DWORD *)(v13 + 16) = GetCurrentThreadId();
  v14 = v9[5];
  v15 = *(_BYTE *)(v14 + 32) & 1;
  v16 = *(_QWORD *)(v14 + 24);
  LOBYTE(v17) = 0;
  if ( !v16 )
    goto LABEL_17;
  while ( 1 )
  {
    v18 = *(__int64 (__fastcall **)(__int64, __int64))(v9[5] + 64LL);
    if ( v18 == RmpClientCallbackCompareToCallback )
    {
      v19 = *(_QWORD *)(v16 + 48);
      v20 = v9[6];
      if ( v20 < v19 )
        v21 = -1;
      else
        v21 = v20 > v19;
    }
    else
    {
      v21 = ((__int64 (__fastcall *)(_QWORD *, unsigned __int64, __int64))v18)(v9, v16, v17);
    }
    if ( v21 >= 0 )
    {
      v22 = *(_QWORD *)(v16 + 8);
      if ( v15 )
      {
        if ( !v22 )
        {
LABEL_16:
          LOBYTE(v17) = 1;
          goto LABEL_17;
        }
        v22 ^= v16;
      }
      if ( !v22 )
        goto LABEL_16;
      goto LABEL_15;
    }
    v22 = *(_QWORD *)v16;
    if ( v15 )
    {
      if ( !v22 )
        break;
      v22 ^= v16;
    }
    if ( !v22 )
      break;
LABEL_15:
    v16 = v22;
  }
  LOBYTE(v17) = 0;
LABEL_17:
  RtlRbInsertNodeEx(v14 + 24, v16, v17, v9);
  *(_DWORD *)(v13 + 16) = 0;
  RtlReleaseSRWLockExclusive(v13 + 8);
  v9 = 0LL;
  P = 0LL;
  result.Simple = 0LL;
  Pointer = 0;
LABEL_18:
  if ( v9 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
    return (CLIENT_CALL_RETURN)Pointer;
  }
  return result;
}
