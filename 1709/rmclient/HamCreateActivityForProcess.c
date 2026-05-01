/*
 * XREFs of HamCreateActivityForProcess @ 0x1800014D0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x180008068 (memset_0.c)
 *     HamIpcChannelAddCallback @ 0x18000D844 (HamIpcChannelAddCallback.c)
 */

CLIENT_CALL_RETURN __fastcall HamCreateActivityForProcess(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        _BYTE *a6)
{
  _QWORD *Heap; // rax
  _QWORD *v11; // rdi
  CLIENT_CALL_RETURN result; // rax
  unsigned int Pointer; // [rsp+40h] [rbp-38h]
  _QWORD v14[3]; // [rsp+48h] [rbp-30h] BYREF
  PVOID P; // [rsp+80h] [rbp+8h]

  v14[0] = -1LL;
  P = 0LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x40uLL);
  v11 = Heap;
  if ( Heap )
  {
    memset_0(Heap, 0, 0x40uLL);
    v11[5] = a1 + 2;
    v11[7] = a2;
    v11[6] = -1LL;
    P = v11;
    result.Simple = 0LL;
  }
  else
  {
    result.Simple = 3221225495LL;
    v11 = 0LL;
  }
  Pointer = (unsigned int)result.Pointer;
  if ( SLODWORD(result.Simple) >= 0 )
  {
    result.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800109C0, 3u, 0LL, *a1, a3, a4, v14, a6).Pointer;
    v14[1] = result.Pointer;
    Pointer = (unsigned int)result.Pointer;
    if ( SLODWORD(result.Simple) >= 0 )
    {
      if ( !a6 || *a6 )
      {
        v11[6] = v14[0];
        HamIpcChannelAddCallback(v11);
        v11 = 0LL;
        P = 0LL;
        *a5 = v14[0];
        *a6 = 1;
      }
      else
      {
        *a5 = -1LL;
      }
      result.Simple = 0LL;
      Pointer = 0;
    }
  }
  if ( v11 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
    return (CLIENT_CALL_RETURN)Pointer;
  }
  return result;
}
