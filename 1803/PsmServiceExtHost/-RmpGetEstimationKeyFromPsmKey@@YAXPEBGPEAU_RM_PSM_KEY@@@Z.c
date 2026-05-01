/*
 * XREFs of ?RmpGetEstimationKeyFromPsmKey@@YAXPEBGPEAU_RM_PSM_KEY@@@Z @ 0x18004E900
 * Callers:
 *     ?UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z @ 0x18001C5F4 (-UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z.c)
 *     ?GetMemoryRequirementEstimateFromRegistry@ResourceManager@ExecutionModel@@QEBAJPEAU_ResourceSetInfo@2@PEBGKPEA_K@Z @ 0x18001E048 (-GetMemoryRequirementEstimateFromRegistry@ResourceManager@ExecutionModel@@QEBAJPEAU_ResourceSetI.c)
 * Callees:
 *     memset_0 @ 0x180041D1C (memset_0.c)
 */

void __fastcall RmpGetEstimationKeyFromPsmKey(wchar_t *Source, wchar_t *Destination)
{
  wchar_t v4; // ax
  int v5; // edi
  __int64 v6; // rdx
  wchar_t *v7; // rcx

  memset_0(Destination, 0, 0x1D0uLL);
  wcsncpy_s(Destination, 0xE8uLL, Source, 0xE8uLL);
  v4 = *Destination;
  v5 = -1;
  LODWORD(v6) = 0;
  if ( *Destination )
  {
    v7 = Destination;
    do
    {
      if ( v4 == 92 )
      {
        *v7 = 47;
      }
      else if ( v4 == 35 )
      {
        v5 = v6;
      }
      v6 = (unsigned int)(v6 + 1);
      v7 = &Destination[v6];
      v4 = *v7;
    }
    while ( *v7 );
  }
  wcsnlen(Source, 0xE8uLL);
  if ( v5 != -1 )
    memset_0(&Destination[v5 + 1], 0, (unsigned int)(2 * (232 - (v5 + 1))));
}
