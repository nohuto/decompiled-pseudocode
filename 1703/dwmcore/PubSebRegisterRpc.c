/*
 * XREFs of PubSebRegisterRpc @ 0x1800B0CE4
 * Callers:
 *     ?NotifyPowerManagerContentType@CHwndRenderTarget@@QEAAXXZ @ 0x18006BF08 (-NotifyPowerManagerContentType@CHwndRenderTarget@@QEAAXXZ.c)
 *     ?EnsureWNFHandles@CHwndRenderTarget@@IEAAJXZ @ 0x18006E2D0 (-EnsureWNFHandles@CHwndRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ?Add@?$CSimpleMap@PEAU_SEB_RPC_PUBLISH_DATA@@PEAXV?$CSimpleMapEqualHelper@PEAU_SEB_RPC_PUBLISH_DATA@@PEAX@ATL@@@ATL@@QEAAHAEBQEAU_SEB_RPC_PUBLISH_DATA@@AEBQEAX@Z @ 0x1800B0E14 (-Add@-$CSimpleMap@PEAU_SEB_RPC_PUBLISH_DATA@@PEAXV-$CSimpleMapEqualHelper@PEAU_SEB_RPC_PUBLISH_D.c)
 *     ?PubSebiGetRpcBindingHandle@@YAJPEAPEAX@Z @ 0x1800B0EC8 (-PubSebiGetRpcBindingHandle@@YAJPEAPEAX@Z.c)
 */

__int64 __fastcall PubSebRegisterRpc(__int64 a1, _QWORD *a2)
{
  int RpcBindingHandle; // ebx
  _QWORD *Heap; // rsi
  __int64 v6; // rcx
  int v7; // edi
  __int64 v9; // [rsp+30h] [rbp-28h] BYREF
  _QWORD *v10; // [rsp+38h] [rbp-20h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF
  void *v12; // [rsp+78h] [rbp+20h] BYREF

  v11 = 0LL;
  RpcBindingHandle = PubSebiGetRpcBindingHandle(&v12);
  if ( RpcBindingHandle )
  {
LABEL_13:
    if ( RpcBindingHandle <= 0 )
      return (unsigned int)RpcBindingHandle;
    return (unsigned __int16)RpcBindingHandle | 0x80070000;
  }
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x10uLL);
  if ( !Heap )
  {
    LOWORD(RpcBindingHandle) = 8;
    return (unsigned __int16)RpcBindingHandle | 0x80070000;
  }
  *Heap = 0LL;
  Heap[1] = 0LL;
  RtlInitializeSRWLock(Heap);
  RpcBindingHandle = (unsigned int)NdrClientCall3(
                                     (MIDL_STUBLESS_PROXY_INFO *)&CSystemEventBrokerPublisher_ProxyInfo,
                                     0,
                                     0LL,
                                     v12,
                                     a1,
                                     &v11).Pointer;
  if ( RpcBindingHandle )
    goto LABEL_12;
  v9 = v11;
  v10 = Heap;
  RtlAcquireSRWLockExclusive(&unk_18023E9B8);
  v7 = 0;
  if ( !(unsigned int)ATL::CSimpleMap<_SEB_RPC_PUBLISH_DATA *,void *,ATL::CSimpleMapEqualHelper<_SEB_RPC_PUBLISH_DATA *,void *>>::Add(
                        v6,
                        &v10,
                        &v9) )
    v7 = 1359;
  RtlReleaseSRWLockExclusive(&unk_18023E9B8);
  RpcBindingHandle = v7;
  if ( v7 )
    RpcBindingHandle = (unsigned int)NdrClientCall3(
                                       (MIDL_STUBLESS_PROXY_INFO *)&CSystemEventBrokerPublisher_ProxyInfo,
                                       2u,
                                       0LL,
                                       v12,
                                       &v11).Pointer;
  else
    *a2 = Heap;
  if ( RpcBindingHandle )
  {
LABEL_12:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    goto LABEL_13;
  }
  return (unsigned int)RpcBindingHandle;
}
