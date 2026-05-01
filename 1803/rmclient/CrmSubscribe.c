/*
 * XREFs of CrmSubscribe @ 0x18000D500
 * Callers:
 *     <none>
 * Callees:
 *     CempRpcBindToServer @ 0x180003DDC (CempRpcBindToServer.c)
 *     __security_check_cookie @ 0x180006FE0 (__security_check_cookie.c)
 *     memset_0 @ 0x180007B70 (memset_0.c)
 *     CrmUnsubscribe @ 0x18000D6C0 (CrmUnsubscribe.c)
 */

__int64 __fastcall CrmSubscribe(_QWORD *a1, int a2, __int64 a3, __int64 a4)
{
  _QWORD *v8; // rdi
  int v9; // esi
  int Pointer; // ebx
  _QWORD *Heap; // rax
  CLIENT_CALL_RETURN v12; // rax
  RPC_BINDING_HANDLE Binding[4]; // [rsp+48h] [rbp-70h] BYREF
  __int64 v15; // [rsp+68h] [rbp-50h] BYREF

  Binding[2] = a1;
  v8 = 0LL;
  v9 = 0;
  v15 = 0LL;
  Pointer = CempRpcBindToServer(&unk_180013570, Binding);
  if ( Pointer >= 0 )
  {
    v9 = 1;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x20uLL);
    v8 = Heap;
    Binding[1] = Heap;
    if ( Heap )
    {
      memset_0(Heap, 0, 0x20uLL);
      v12.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180010AE8, 0, 0LL, Binding[0], v8, a2, &v15).Pointer;
      Pointer = (int)v12.Pointer;
      Binding[3] = v12.Pointer;
      if ( SLODWORD(v12.Simple) >= 0 )
      {
        v8[2] = a3;
        v8[3] = a4;
        *a1 = v8;
        Pointer = RtlSubscribeWnfStateChangeNotification(
                    v8 + 1,
                    v15,
                    0LL,
                    CrmClientWNFCallback,
                    v8,
                    0LL,
                    0,
                    0,
                    v12.Pointer);
        if ( Pointer >= 0 )
        {
          v8 = 0LL;
          Pointer = 0;
        }
      }
    }
    else
    {
      Pointer = -1073741801;
    }
  }
  if ( v8 )
    CrmUnsubscribe(v8);
  if ( v9 )
    RpcBindingFree(Binding);
  return (unsigned int)Pointer;
}
