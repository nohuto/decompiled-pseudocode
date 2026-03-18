/*
 * XREFs of KCBNeedsVirtualImage @ 0x1400BCF48
 * Callers:
 *     CmpVEExecuteCreateLogic @ 0x140565A58 (CmpVEExecuteCreateLogic.c)
 *     CmKeyBodyRemapToVirtual @ 0x1406F3FF0 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406F4248 (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     KCBIsVirtualizable @ 0x1400BCF80 (KCBIsVirtualizable.c)
 *     CmpIsSystemEntity @ 0x140565AF0 (CmpIsSystemEntity.c)
 */

bool KCBNeedsVirtualImage()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8

  if ( !(unsigned __int8)KCBIsVirtualizable() )
    return 0;
  LOBYTE(v1) = KeGetCurrentThread()->PreviousMode;
  return (unsigned __int8)CmpIsSystemEntity(v1, v0, v2) == 0;
}
