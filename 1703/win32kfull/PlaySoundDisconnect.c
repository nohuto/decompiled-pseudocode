/*
 * XREFs of PlaySoundDisconnect @ 0x1C03702AC
 * Callers:
 *     ?CleanupPlaySound@@YAJXZ @ 0x1C00DA030 (-CleanupPlaySound@@YAJXZ.c)
 *     ?Disconnect@CUserPlaySound@@AEAAJXZ @ 0x1C00DA4B4 (-Disconnect@CUserPlaySound@@AEAAJXZ.c)
 *     ?Connect@CUserPlaySound@@AEAAJPEAX@Z @ 0x1C00DA538 (-Connect@CUserPlaySound@@AEAAJPEAX@Z.c)
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
