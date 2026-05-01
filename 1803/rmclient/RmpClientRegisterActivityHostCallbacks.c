/*
 * XREFs of RmpClientRegisterActivityHostCallbacks @ 0x180004920
 * Callers:
 *     RmRegisterActivityHostCallbacks @ 0x180004910 (RmRegisterActivityHostCallbacks.c)
 * Callees:
 *     HamIpcChannelAddCallback @ 0x180005D80 (HamIpcChannelAddCallback.c)
 *     memset_0 @ 0x180007B70 (memset_0.c)
 */

CLIENT_CALL_RETURN __fastcall RmpClientRegisterActivityHostCallbacks(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  _QWORD *v9; // rbx
  __int64 v10; // r12
  _QWORD *Heap; // rax
  CLIENT_CALL_RETURN result; // rax
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
  if ( SLODWORD(result.Simple) >= 0 )
  {
    result.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800108D8, 2u, 0LL, *(_QWORD *)(a1 + 16), a2, a5).Pointer;
    Pointer = (unsigned int)result.Pointer;
    if ( SLODWORD(result.Simple) >= 0 )
    {
      v9[6] = *a5;
      HamIpcChannelAddCallback(v9);
      v9 = 0LL;
      P = 0LL;
      result.Simple = 0LL;
      Pointer = 0;
    }
  }
  if ( v9 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
    return (CLIENT_CALL_RETURN)Pointer;
  }
  return result;
}
