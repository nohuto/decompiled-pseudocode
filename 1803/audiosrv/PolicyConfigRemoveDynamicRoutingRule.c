/*
 * XREFs of PolicyConfigRemoveDynamicRoutingRule @ 0x1800BFA50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PolicyConfigRemoveDynamicRoutingRule(void *a1, __int64 a2)
{
  return DynamicAudioEndpointManager::RemoveRule(g_DynamicAudioEndpointManager, a1, a2);
}
