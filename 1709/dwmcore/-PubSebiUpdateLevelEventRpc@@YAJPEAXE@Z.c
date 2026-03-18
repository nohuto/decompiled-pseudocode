/*
 * XREFs of ?PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z @ 0x1801CCB28
 * Callers:
 *     ?NotifyPowerManagerContentType@CHwndRenderTarget@@QEAAXXZ @ 0x180017508 (-NotifyPowerManagerContentType@CHwndRenderTarget@@QEAAXXZ.c)
 *     ?SignalSEB@CHwndRenderTarget@@AEAAX_NI0@Z @ 0x180119EAC (-SignalSEB@CHwndRenderTarget@@AEAAX_NI0@Z.c)
 *     ?ReleaseWNFHandles@CHwndRenderTarget@@IEAAXXZ @ 0x1801362FC (-ReleaseWNFHandles@CHwndRenderTarget@@IEAAXXZ.c)
 * Callees:
 *     ?Find@ContextTable@@QEAAPEAXPEAU_SEB_RPC_PUBLISH_DATA@@@Z @ 0x1801CCA04 (-Find@ContextTable@@QEAAPEAXPEAU_SEB_RPC_PUBLISH_DATA@@@Z.c)
 *     ?PubSebiGetRpcBindingHandle@@YAJPEAPEAX@Z @ 0x1801CCAA0 (-PubSebiGetRpcBindingHandle@@YAJPEAPEAX@Z.c)
 */

__int64 __fastcall PubSebiUpdateLevelEventRpc(struct _SEB_RPC_PUBLISH_DATA *a1, unsigned __int8 a2)
{
  int RpcBindingHandle; // ebx
  ContextTable *v5; // rcx
  __int64 v6; // rbx
  void *v8; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 )
  {
    LOWORD(RpcBindingHandle) = 87;
    return (unsigned __int16)RpcBindingHandle | 0x80070000;
  }
  RpcBindingHandle = PubSebiGetRpcBindingHandle(&v8);
  if ( !RpcBindingHandle )
  {
    v6 = ContextTable::Find(v5, a1);
    if ( !v6 )
    {
      LOWORD(RpcBindingHandle) = 6;
      return (unsigned __int16)RpcBindingHandle | 0x80070000;
    }
    RtlAcquireSRWLockExclusive(a1);
    *((_DWORD *)a1 + 2) = GetCurrentThreadId();
    if ( a2 )
    {
      if ( *((_DWORD *)a1 + 3) )
        goto LABEL_15;
    }
    else
    {
      if ( !*((_DWORD *)a1 + 3) )
      {
        RpcBindingHandle = 50;
LABEL_17:
        RtlReleaseSRWLockExclusive(a1);
        *((_DWORD *)a1 + 2) = 0;
        goto LABEL_18;
      }
      if ( *((_DWORD *)a1 + 3) != 1 )
        goto LABEL_14;
    }
    RpcBindingHandle = (unsigned int)NdrClientCall3(
                                       (MIDL_STUBLESS_PROXY_INFO *)&CSystemEventBrokerPublisher_ProxyInfo,
                                       1u,
                                       0LL,
                                       v8,
                                       a2,
                                       v6).Pointer;
    if ( RpcBindingHandle )
      goto LABEL_17;
    if ( !a2 )
    {
LABEL_14:
      --*((_DWORD *)a1 + 3);
LABEL_16:
      RpcBindingHandle = 0;
      goto LABEL_17;
    }
LABEL_15:
    ++*((_DWORD *)a1 + 3);
    goto LABEL_16;
  }
LABEL_18:
  if ( RpcBindingHandle > 0 )
    return (unsigned __int16)RpcBindingHandle | 0x80070000;
  return (unsigned int)RpcBindingHandle;
}
