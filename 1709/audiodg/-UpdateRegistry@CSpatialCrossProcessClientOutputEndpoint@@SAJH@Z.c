/*
 * XREFs of ?UpdateRegistry@CSpatialCrossProcessClientOutputEndpoint@@SAJH@Z @ 0x14005BCA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSpatialCrossProcessClientOutputEndpoint::UpdateRegistry(
        ATL::CAtlModule *a1,
        __int64 a2,
        __int64 a3,
        struct ATL::_ATL_REGMAP_ENTRY *a4)
{
  return ATL::CAtlModule::UpdateRegistryFromResourceS(a1, 0x7Cu, (int)a1, a4);
}
