/*
 * XREFs of PsGetJobEffectiveFreezeCount @ 0x140284284
 * Callers:
 *     AlpcpDispatchNewMessage @ 0x1404CCD20 (AlpcpDispatchNewMessage.c)
 *     AlpcpDispatchConnectionRequest @ 0x1404DDDF4 (AlpcpDispatchConnectionRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetJobEffectiveFreezeCount(__int64 a1)
{
  return *(unsigned int *)(a1 + 856);
}
