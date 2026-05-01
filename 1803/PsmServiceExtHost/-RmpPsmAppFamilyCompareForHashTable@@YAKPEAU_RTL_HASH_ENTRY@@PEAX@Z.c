/*
 * XREFs of ?RmpPsmAppFamilyCompareForHashTable@@YAKPEAU_RTL_HASH_ENTRY@@PEAX@Z @ 0x18000BCB4
 * Callers:
 *     ?RmpPsmAppFamilyTableFind@@YAPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x18000CF70 (-RmpPsmAppFamilyTableFind@@YAPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FA.c)
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z @ 0x18001CEA0 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z.c)
 *     ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001D710 (-ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     memcmp_0 @ 0x180041D10 (memcmp_0.c)
 */

__int64 __fastcall RmpPsmAppFamilyCompareForHashTable(const wchar_t *a1, const wchar_t *a2)
{
  char *v3; // rsi
  unsigned int v4; // ebx

  v3 = (char *)(a1 + 8);
  v4 = 0;
  if ( !_wcsicmp(a2, a1 + 8) )
    LOBYTE(v4) = memcmp_0(a2 + 232, v3 + 464, 0x48uLL) == 0;
  return v4;
}
