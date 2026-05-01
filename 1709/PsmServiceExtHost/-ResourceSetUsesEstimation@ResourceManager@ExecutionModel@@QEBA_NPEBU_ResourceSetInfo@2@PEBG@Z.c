/*
 * XREFs of ?ResourceSetUsesEstimation@ResourceManager@ExecutionModel@@QEBA_NPEBU_ResourceSetInfo@2@PEBG@Z @ 0x18000F8C0
 * Callers:
 *     ?GetMemoryRequirementEstimateFromRegistry@ResourceManager@ExecutionModel@@QEBAJPEAU_ResourceSetInfo@2@PEBGKPEA_K@Z @ 0x18000F7C8 (-GetMemoryRequirementEstimateFromRegistry@ResourceManager@ExecutionModel@@QEBAJPEAU_ResourceSetI.c)
 * Callees:
 *     ?HasMemoryUsageHistory@ResourceSetType@ExecutionModel@@SA_NW4Enum@12@@Z @ 0x180032028 (-HasMemoryUsageHistory@ResourceSetType@ExecutionModel@@SA_NW4Enum@12@@Z.c)
 */

bool __fastcall ExecutionModel::ResourceManager::ResourceSetUsesEstimation(
        ExecutionModel::ResourceManager *this,
        const struct ExecutionModel::_ResourceSetInfo *a2,
        const unsigned __int16 *a3)
{
  const wchar_t *v4; // r9

  return a3
      && *a3
      && (*((_DWORD *)a2 + 95) & 0x40000) != 0
      && *((_QWORD *)a2 + 15)
      && (unsigned __int8)ExecutionModel::ResourceSetType::HasMemoryUsageHistory(*(unsigned int *)a2)
      && wcsnlen(v4, 0xE7uLL) != 231;
}
