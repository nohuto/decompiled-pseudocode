/*
 * XREFs of PsGetJobEffectiveFreezeCount @ 0x14024DED4
 * Callers:
 *     AlpcpDispatchConnectionRequest @ 0x140467354 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpDispatchNewMessage @ 0x1404A0B50 (AlpcpDispatchNewMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetJobEffectiveFreezeCount(__int64 a1)
{
  return *(unsigned int *)(a1 + 856);
}
