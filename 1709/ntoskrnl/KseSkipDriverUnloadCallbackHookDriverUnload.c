/*
 * XREFs of KseSkipDriverUnloadCallbackHookDriverUnload @ 0x140210610
 * Callers:
 *     <none>
 * Callees:
 *     KsepSkipDriverUnloadEventDriverUnload @ 0x14021076C (KsepSkipDriverUnloadEventDriverUnload.c)
 */

__int64 __fastcall KseSkipDriverUnloadCallbackHookDriverUnload(__int64 a1)
{
  return KsepSkipDriverUnloadEventDriverUnload(a1, *(_QWORD *)(a1 + 24));
}
