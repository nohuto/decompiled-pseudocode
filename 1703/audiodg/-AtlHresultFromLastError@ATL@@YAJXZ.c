/*
 * XREFs of ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x14004A260
 * Callers:
 *     ?InitializeEvents@AudioDeviceBroker@Internal@Devices@Media@Windows@@AEAAJXZ @ 0x14004CA48 (-InitializeEvents@AudioDeviceBroker@Internal@Devices@Media@Windows@@AEAAJXZ.c)
 *     ?RegisterFromResource@CRegObject@ATL@@IEAAJPEBG00H@Z @ 0x1400529B0 (-RegisterFromResource@CRegObject@ATL@@IEAAJPEBG00H@Z.c)
 *     ?UpdateRegistryFromResourceS@CAtlModule@ATL@@QEAAJIHPEAU_ATL_REGMAP_ENTRY@2@@Z @ 0x1400534F0 (-UpdateRegistryFromResourceS@CAtlModule@ATL@@QEAAJIHPEAU_ATL_REGMAP_ENTRY@2@@Z.c)
 * Callees:
 *     <none>
 */

signed int ATL::AtlHresultFromLastError(void)
{
  signed int result; // eax

  result = GetLastError();
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
