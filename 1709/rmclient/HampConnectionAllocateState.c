/*
 * XREFs of HampConnectionAllocateState @ 0x180004060
 * Callers:
 *     HampConnectionCreate @ 0x180003FA0 (HampConnectionCreate.c)
 * Callees:
 *     CempRpcBindToServer @ 0x1800041C0 (CempRpcBindToServer.c)
 *     RmpClientWnfCreateSubscription @ 0x180004400 (RmpClientWnfCreateSubscription.c)
 */

__int64 __fastcall HampConnectionAllocateState(__int64 a1, void *a2)
{
  char v3; // si
  int Pointer; // ebx
  int v5; // ecx
  unsigned int v6; // eax
  int v7; // ecx
  int Subscription; // eax
  RPC_BINDING_HANDLE Binding; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0;
  Pointer = CempRpcBindToServer(a2);
  if ( Pointer < 0 )
    goto LABEL_16;
  v3 = 1;
  v5 = *(_DWORD *)(a1 + 112);
  if ( v5 )
  {
    v7 = v5 - 1;
    if ( v7 )
    {
      if ( v7 == 1 )
        Pointer = (unsigned int)NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180010AE0, 0, 0LL, Binding, a1, a1 + 8).Pointer;
      else
        Pointer = -1073741127;
      goto LABEL_10;
    }
    v6 = (unsigned int)NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180010A50, 0, 0LL, Binding, a1, a1 + 8).Pointer;
  }
  else
  {
    v6 = (unsigned int)NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800109C0, 0, 0LL, Binding, a1, a1 + 8).Pointer;
  }
  Pointer = v6;
LABEL_10:
  if ( Pointer >= 0 )
  {
    if ( *(_DWORD *)(a1 + 112) > 1u )
      goto LABEL_15;
    Subscription = RmpClientWnfCreateSubscription(a1 + 8, HampIpcChannelWnfCallback, a1 + 16, a1 + 16);
    if ( Subscription >= 0 )
      Subscription = 0;
    Pointer = Subscription;
    if ( Subscription >= 0 )
LABEL_15:
      Pointer = 0;
  }
LABEL_16:
  if ( v3 )
    RpcBindingFree(&Binding);
  return (unsigned int)Pointer;
}
