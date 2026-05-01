/*
 * XREFs of ?Init@ResourceManagerClientProxy@@IEAAJXZ @ 0x1800067A0
 * Callers:
 *     ?CreateResourceManagerClientProxy@@YAJPEAPEAUIResourceManager@ExecutionModel@@@Z @ 0x180006650 (-CreateResourceManagerClientProxy@@YAJPEAPEAUIResourceManager@ExecutionModel@@@Z.c)
 * Callees:
 *     RmpClientWnfDestroySubscription @ 0x180001748 (RmpClientWnfDestroySubscription.c)
 *     CempRpcBindToServer @ 0x1800041C0 (CempRpcBindToServer.c)
 *     RmpClientWnfCreateSubscription @ 0x180004400 (RmpClientWnfCreateSubscription.c)
 *     ?RmpGetDeviceTier@@YA?AW4Enum@DeviceTier@ExecutionModel@@XZ @ 0x180006898 (-RmpGetDeviceTier@@YA-AW4Enum@DeviceTier@ExecutionModel@@XZ.c)
 *     ?RmpGetDeviceTierNameEx@@YAPEBGW4Enum@DeviceTier@ExecutionModel@@@Z @ 0x180006984 (-RmpGetDeviceTierNameEx@@YAPEBGW4Enum@DeviceTier@ExecutionModel@@@Z.c)
 *     ?Initialize@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJPEBG@Z @ 0x180006D20 (-Initialize@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJPEBG@Z.c)
 */

__int64 __fastcall ResourceManagerClientProxy::Init(RPC_BINDING_HANDLE *this)
{
  char v2; // si
  unsigned int DeviceTier; // eax
  const unsigned __int16 *DeviceTierName; // rax
  int Pointer; // ebx
  int v6; // eax
  int Subscription; // eax

  v2 = 0;
  DeviceTier = RmpGetDeviceTier();
  DeviceTierName = (const unsigned __int16 *)RmpGetDeviceTierNameEx(DeviceTier);
  Pointer = ExecutionModel::ResourceSetTypeToInfoConverter::Initialize(
              (ExecutionModel::ResourceSetTypeToInfoConverter *)(this + 2),
              DeviceTierName);
  if ( Pointer >= 0 )
  {
    v6 = CempRpcBindToServer(&unk_180010C50, this + 2738);
    Pointer = v6 | 0x10000000;
    if ( v6 >= 0 )
    {
      Pointer = (unsigned int)NdrClientCall3(
                                (MIDL_STUBLESS_PROXY_INFO *)&stru_180010C20,
                                0,
                                0LL,
                                this[2738],
                                this + 2739,
                                this + 2740).Pointer;
      if ( Pointer >= 0 )
      {
        Subscription = RmpClientWnfCreateSubscription(
                         this + 2740,
                         (__int64)ResourceManagerClientProxy::LegacyResourceSetCallbackHandlerThunk,
                         (__int64)this,
                         this + 2741);
        if ( Subscription < 0 )
        {
          Pointer = Subscription | 0x10000000;
        }
        else
        {
          v2 = 1;
          Pointer = 0;
          *((_BYTE *)this + 22456) = 1;
        }
        if ( Pointer >= 0 )
          return (unsigned int)Pointer;
        if ( v2 )
          RmpClientWnfDestroySubscription(this[2741]);
      }
    }
  }
  if ( this[2739] )
    NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180010C20, 1u, 0LL);
  if ( this[2738] )
  {
    RpcBindingFree(this + 2738);
    this[2738] = 0LL;
  }
  return (unsigned int)Pointer;
}
