/*
 * XREFs of PolicyConfigAddDynamicRoutingRule @ 0x1800BF680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PolicyConfigAddDynamicRoutingRule(
        DynamicAudioEndpointManager *a1,
        struct _DynamicRoutingRule *a2,
        __int64 *a3)
{
  return DynamicAudioEndpointManager::AddRule(a1, a1, a2, a3);
}
