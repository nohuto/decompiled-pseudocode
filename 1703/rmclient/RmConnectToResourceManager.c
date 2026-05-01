/*
 * XREFs of RmConnectToResourceManager @ 0x180006440
 * Callers:
 *     <none>
 * Callees:
 *     RmpBindToRmRpcServer @ 0x180004120 (RmpBindToRmRpcServer.c)
 *     RmpClientConnectToResourceManager @ 0x180006488 (RmpClientConnectToResourceManager.c)
 */

__int64 __fastcall RmConnectToResourceManager(__int64 a1)
{
  unsigned int v2; // ebx
  RPC_BINDING_HANDLE Binding; // [rsp+38h] [rbp+10h] BYREF

  if ( (int)RmpBindToRmRpcServer(&unk_18000F800, &Binding) < 0 )
  {
    return (unsigned int)-1073741823;
  }
  else
  {
    v2 = RmpClientConnectToResourceManager(Binding, a1);
    RpcBindingFree(&Binding);
  }
  return v2;
}
