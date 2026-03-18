/*
 * XREFs of PlaySoundDisconnect @ 0x1C036B244
 * Callers:
 *     ?CleanupPlaySound@@YAJXZ @ 0x1C00E0860 (-CleanupPlaySound@@YAJXZ.c)
 *     ?Disconnect@CUserPlaySound@@AEAAJXZ @ 0x1C00E0CD4 (-Disconnect@CUserPlaySound@@AEAAJXZ.c)
 *     ?Connect@CUserPlaySound@@AEAAJPEAX@Z @ 0x1C00E0D58 (-Connect@CUserPlaySound@@AEAAJPEAX@Z.c)
 * Callees:
 *     <none>
 */

RPC_STATUS __fastcall PlaySoundDisconnect(RPC_BINDING_HANDLE *Binding)
{
  RPC_STATUS result; // eax

  result = RpcBindingUnbind(*Binding);
  if ( !result )
  {
    result = RpcBindingFree(Binding);
    if ( !result )
      *Binding = 0LL;
  }
  return result;
}
