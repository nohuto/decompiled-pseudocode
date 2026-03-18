/*
 * XREFs of PoFxRegisterPlugin @ 0x14075F4B0
 * Callers:
 *     <none>
 * Callees:
 *     PopFxRegisterPluginEx @ 0x140275E7C (PopFxRegisterPluginEx.c)
 */

__int64 __fastcall PoFxRegisterPlugin(unsigned __int16 *a1, unsigned __int16 *a2)
{
  return PopFxRegisterPluginEx(a1, 0LL, a2);
}
