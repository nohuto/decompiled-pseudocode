/*
 * XREFs of RmConnectToResourceManager @ 0x18000BE90
 * Callers:
 *     <none>
 * Callees:
 *     CempRpcBindToServer @ 0x180003DDC (CempRpcBindToServer.c)
 *     RmpClientConnectToResourceManager @ 0x18000C094 (RmpClientConnectToResourceManager.c)
 */

__int64 __fastcall RmConnectToResourceManager(__int64 a1)
{
  int v2; // eax
  int v3; // ebx
  unsigned int v4; // edi
  RPC_BINDING_HANDLE Binding; // [rsp+38h] [rbp+10h] BYREF

  v2 = CempRpcBindToServer(&unk_1800129C0, &Binding);
  v3 = v2 | 0x10000000;
  if ( v2 >= 0 )
    v4 = RmpClientConnectToResourceManager(Binding, a1);
  else
    v4 = -1073741823;
  if ( v3 >= 0 )
    RpcBindingFree(&Binding);
  return v4;
}
