/*
 * XREFs of ?UpdateRegistry@CCrossProcessServerOutputEndpoint@@SAJH@Z @ 0x1400534E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCrossProcessServerOutputEndpoint::UpdateRegistry(
        ATL::CAtlModule *a1,
        __int64 a2,
        __int64 a3,
        struct ATL::_ATL_REGMAP_ENTRY *a4)
{
  return ATL::CAtlModule::UpdateRegistryFromResourceS(a1, 0x6Bu, (int)a1, a4);
}
