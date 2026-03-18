/*
 * XREFs of PsGetJobEffectiveFreezeCount @ 0x140238DB4
 * Callers:
 *     AlpcpDispatchConnectionRequest @ 0x1404748C8 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpDispatchNewMessage @ 0x140524DE0 (AlpcpDispatchNewMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetJobEffectiveFreezeCount(__int64 a1)
{
  return *(unsigned int *)(a1 + 856);
}
