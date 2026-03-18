/*
 * XREFs of KiInitDynamicProcessorIpi @ 0x140206DD0
 * Callers:
 *     <none>
 * Callees:
 *     KiRestoreXSaveSupport @ 0x14042E878 (KiRestoreXSaveSupport.c)
 */

__int64 __fastcall KiInitDynamicProcessorIpi(__int64 a1, __int64 a2)
{
  return KiRestoreXSaveSupport(a1, a2);
}
