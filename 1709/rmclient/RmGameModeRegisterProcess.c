/*
 * XREFs of RmGameModeRegisterProcess @ 0x18000AE70
 * Callers:
 *     <none>
 * Callees:
 *     CempRpcBindToServer @ 0x1800041C0 (CempRpcBindToServer.c)
 */

__int64 __fastcall RmGameModeRegisterProcess(__int64 a1, __int64 a2, int a3)
{
  char v6; // si
  unsigned int Pointer; // ebx
  CLIENT_CALL_RETURN v8; // rax
  int v10; // [rsp+30h] [rbp-48h]
  RPC_BINDING_HANDLE Binding[3]; // [rsp+48h] [rbp-30h] BYREF

  v6 = 0;
  if ( (int)CempRpcBindToServer(&unk_180012180, Binding) >= 0 )
  {
    v6 = 1;
    v10 = a3;
    v8.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180010DF0, 0, 0LL, Binding[0], a1, a2, v10).Pointer;
    Pointer = (unsigned int)v8.Pointer;
    Binding[1] = v8.Pointer;
    if ( SLODWORD(v8.Simple) >= 0 )
      Pointer = 0;
  }
  else
  {
    Pointer = -1073610725;
  }
  if ( v6 )
    RpcBindingFree(Binding);
  return Pointer;
}
