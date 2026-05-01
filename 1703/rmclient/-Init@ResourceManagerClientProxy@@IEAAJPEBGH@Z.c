/*
 * XREFs of ?Init@ResourceManagerClientProxy@@IEAAJPEBGH@Z @ 0x180006840
 * Callers:
 *     ?CreateResourceManagerClientProxyInternal@@YAJPEAPEAUIResourceManager@ExecutionModel@@@Z @ 0x1800066D8 (-CreateResourceManagerClientProxyInternal@@YAJPEAPEAUIResourceManager@ExecutionModel@@@Z.c)
 * Callees:
 *     RmpBindToRmRpcServer @ 0x180004120 (RmpBindToRmRpcServer.c)
 *     ?RmpGetDeviceTier@@YA?AW4Enum@DeviceTier@ExecutionModel@@XZ @ 0x180006934 (-RmpGetDeviceTier@@YA-AW4Enum@DeviceTier@ExecutionModel@@XZ.c)
 *     ?RmpGetDeviceTierNameEx@@YAPEBGW4Enum@DeviceTier@ExecutionModel@@@Z @ 0x180006A20 (-RmpGetDeviceTierNameEx@@YAPEBGW4Enum@DeviceTier@ExecutionModel@@@Z.c)
 *     RmpClientWnfCreateSubscription @ 0x180006A58 (RmpClientWnfCreateSubscription.c)
 *     ?Initialize@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJPEBG@Z @ 0x180006C40 (-Initialize@ResourceSetTypeToInfoConverter@ExecutionModel@@QEAAJPEBG@Z.c)
 *     RmpClientWnfDestroySubscription @ 0x18000E8D8 (RmpClientWnfDestroySubscription.c)
 */

__int64 __fastcall ResourceManagerClientProxy::Init(RPC_BINDING_HANDLE *this, const unsigned __int16 *a2)
{
  char v3; // bp
  unsigned int DeviceTier; // eax
  const unsigned __int16 *DeviceTierName; // rax
  int Pointer; // ebx
  int Subscription; // eax

  v3 = 0;
  DeviceTier = RmpGetDeviceTier(this, a2);
  DeviceTierName = (const unsigned __int16 *)RmpGetDeviceTierNameEx(DeviceTier);
  Pointer = ExecutionModel::ResourceSetTypeToInfoConverter::Initialize(
              (ExecutionModel::ResourceSetTypeToInfoConverter *)(this + 2),
              DeviceTierName);
  if ( Pointer >= 0 )
  {
    Pointer = RmpBindToRmRpcServer(&unk_18000F940, this + 2681);
    if ( Pointer >= 0 )
    {
      Pointer = (unsigned int)NdrClientCall3(
                                (MIDL_STUBLESS_PROXY_INFO *)&stru_18000F910,
                                0,
                                0LL,
                                this[2681],
                                this + 2682,
                                this + 2683).Pointer;
      if ( Pointer >= 0 )
      {
        Subscription = RmpClientWnfCreateSubscription(
                         this + 2683,
                         ResourceManagerClientProxy::LegacyResourceSetCallbackHandlerThunk,
                         this,
                         this + 2684);
        if ( Subscription < 0 )
        {
          Pointer = Subscription | 0x10000000;
        }
        else
        {
          v3 = 1;
          Pointer = 0;
          *((_BYTE *)this + 22000) = 1;
        }
        if ( Pointer >= 0 )
          return (unsigned int)Pointer;
        if ( v3 )
          RmpClientWnfDestroySubscription(this[2684]);
      }
    }
  }
  if ( this[2682] )
    NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_18000F910, 1u, 0LL);
  if ( this[2681] )
  {
    RpcBindingFree(this + 2681);
    this[2681] = 0LL;
  }
  return (unsigned int)Pointer;
}
