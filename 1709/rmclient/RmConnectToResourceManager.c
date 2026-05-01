/*
 * XREFs of RmConnectToResourceManager @ 0x180006450
 * Callers:
 *     <none>
 * Callees:
 *     CempRpcBindToServer @ 0x1800041C0 (CempRpcBindToServer.c)
 *     RmpClientConnectToResourceManager @ 0x18000649C (RmpClientConnectToResourceManager.c)
 */

__int64 __fastcall RmConnectToResourceManager(__int64 a1)
{
  unsigned int v2; // ebx
  RPC_BINDING_HANDLE Binding; // [rsp+38h] [rbp+10h] BYREF

  if ( (int)CempRpcBindToServer(&unk_180010B10, &Binding) < 0 )
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
