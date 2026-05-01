/*
 * XREFs of HampConnectionAllocateState @ 0x180003FE4
 * Callers:
 *     HampConnectionCreate @ 0x180004D74 (HampConnectionCreate.c)
 * Callees:
 *     CempRpcBindToServer @ 0x180003DDC (CempRpcBindToServer.c)
 *     HamIpcChannelAllocateState @ 0x180004BC4 (HamIpcChannelAllocateState.c)
 */

__int64 __fastcall HampConnectionAllocateState(__int64 a1, void *a2)
{
  char v3; // si
  int State; // ebx
  int v5; // ecx
  unsigned int Pointer; // eax
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  RPC_BINDING_HANDLE Binding; // [rsp+A8h] [rbp+20h] BYREF

  v3 = 0;
  State = CempRpcBindToServer(a2, &Binding);
  if ( State < 0 )
    goto LABEL_20;
  v3 = 1;
  v5 = *(_DWORD *)(a1 + 112);
  if ( !v5 )
  {
    Pointer = (unsigned int)NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180010878, 0, 0LL, Binding, a1, a1 + 8).Pointer;
LABEL_4:
    State = Pointer;
    goto LABEL_16;
  }
  v7 = v5 - 1;
  if ( !v7 )
  {
    Pointer = (unsigned int)NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180010B18, 0, 0LL, Binding, a1, a1 + 8).Pointer;
    goto LABEL_4;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    Pointer = (unsigned int)NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800108A8, 0, 0LL, Binding, a1, a1 + 8).Pointer;
    goto LABEL_4;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    Pointer = (unsigned int)NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800109A0, 0, 0LL, Binding, a1).Pointer;
    goto LABEL_4;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    Pointer = (unsigned int)NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180010B48, 0, 0LL, Binding, a1).Pointer;
    goto LABEL_4;
  }
  if ( v10 == 1 )
    State = (unsigned int)NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180010970, 0, 0LL, Binding, a1, a1 + 8).Pointer;
  else
    State = -1073741127;
LABEL_16:
  if ( State >= 0 )
  {
    if ( *(_DWORD *)(a1 + 112) > 2u || (State = HamIpcChannelAllocateState(a1 + 16, a1 + 8), State >= 0) )
      State = 0;
  }
LABEL_20:
  if ( v3 )
    RpcBindingFree(&Binding);
  return (unsigned int)State;
}
