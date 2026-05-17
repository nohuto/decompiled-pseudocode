/*
 * XREFs of RtlpTpWaitFinalizationCallback @ 0x180013120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpTpWaitFinalizationCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  _m_prefetchw((const void *)(a2 + 24));
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(a2 + 24), 2u);
  if ( (result & 1) == 0 )
    return RtlpTpWaitRundown(a2, a2, a3, a4);
  return result;
}
