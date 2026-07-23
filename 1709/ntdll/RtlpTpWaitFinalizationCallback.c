/*
 * XREFs of RtlpTpWaitFinalizationCallback @ 0x180013120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LOGICAL __fastcall RtlpTpWaitFinalizationCallback(__int64 a1, __int64 a2)
{
  LOGICAL result; // eax

  _m_prefetchw((const void *)(a2 + 24));
  result = _InterlockedOr((volatile signed __int32 *)(a2 + 24), 2u);
  if ( (result & 1) == 0 )
    return RtlpTpWaitRundown(a2);
  return result;
}
