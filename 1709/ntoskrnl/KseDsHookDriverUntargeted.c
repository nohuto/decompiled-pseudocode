/*
 * XREFs of KseDsHookDriverUntargeted @ 0x14020F510
 * Callers:
 *     <none>
 * Callees:
 *     KsepDsEventDriverUnload @ 0x14020FD90 (KsepDsEventDriverUnload.c)
 */

__int64 __fastcall KseDsHookDriverUntargeted(__int64 a1)
{
  KsepDsEventDriverUnload(0LL, a1);
  return 0LL;
}
