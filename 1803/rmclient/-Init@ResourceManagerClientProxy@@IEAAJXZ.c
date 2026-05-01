/*
 * XREFs of ?Init@ResourceManagerClientProxy@@IEAAJXZ @ 0x18000EA28
 * Callers:
 *     ?CreateResourceManagerClientProxyInternal@@YAJPEAPEAUIResourceManager@ExecutionModel@@@Z @ 0x18000E594 (-CreateResourceManagerClientProxyInternal@@YAJPEAPEAUIResourceManager@ExecutionModel@@@Z.c)
 * Callees:
 *     CempRpcBindToServer @ 0x180003DDC (CempRpcBindToServer.c)
 *     RmpClientWnfCreateSubscription @ 0x180004BEC (RmpClientWnfCreateSubscription.c)
 *     RmpClientWnfDestroySubscription @ 0x18000D930 (RmpClientWnfDestroySubscription.c)
 */

__int64 __fastcall ResourceManagerClientProxy::Init(ResourceManagerClientProxy *this)
{
  RPC_BINDING_HANDLE *v1; // rdi
  char v3; // bp
  int v4; // eax
  int Pointer; // ebx
  int Subscription; // eax

  v1 = (RPC_BINDING_HANDLE *)((char *)this + 16);
  v3 = 0;
  v4 = CempRpcBindToServer(&unk_1800147A0, (_QWORD *)this + 2);
  Pointer = v4 | 0x10000000;
  if ( v4 >= 0 )
  {
    Pointer = (unsigned int)NdrClientCall3(
                              (MIDL_STUBLESS_PROXY_INFO *)&stru_180010BD8,
                              0,
                              0LL,
                              *v1,
                              (char *)this + 24,
                              (char *)this + 32).Pointer;
    if ( Pointer >= 0 )
    {
      Subscription = RmpClientWnfCreateSubscription(
                       (_QWORD *)this + 4,
                       (__int64)ResourceManagerClientProxy::LegacyResourceSetCallbackHandlerThunk,
                       (__int64)this,
                       (_QWORD *)this + 5);
      if ( Subscription >= 0 )
      {
        v3 = 1;
        Pointer = 0;
        *((_BYTE *)this + 568) = 1;
      }
      else
      {
        Pointer = Subscription | 0x10000000;
      }
      if ( Pointer >= 0 )
        return (unsigned int)Pointer;
      if ( v3 )
        RmpClientWnfDestroySubscription(*((_DWORD **)this + 5));
    }
  }
  if ( *((_QWORD *)this + 3) )
    NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180010BD8, 1u, 0LL);
  if ( *v1 )
  {
    RpcBindingFree(v1);
    *v1 = 0LL;
  }
  return (unsigned int)Pointer;
}
