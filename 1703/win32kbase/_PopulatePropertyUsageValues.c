/*
 * XREFs of _PopulatePropertyUsageValues @ 0x1C0105898
 * Callers:
 *     RIMGetPointerDeviceProperties @ 0x1C01063E0 (RIMGetPointerDeviceProperties.c)
 * Callees:
 *     rimHidP_GetSpecificValueCaps @ 0x1C000B1BC (rimHidP_GetSpecificValueCaps.c)
 */

__int64 __fastcall PopulatePropertyUsageValues(
        __int64 a1,
        unsigned int *a2,
        unsigned int a3,
        unsigned __int16 a4,
        unsigned __int16 a5,
        struct _HIDP_VALUE_CAPS *a6,
        unsigned int a7,
        __int64 a8,
        struct _HIDP_PREPARSED_DATA *a9)
{
  unsigned __int16 v9; // r15
  unsigned int v10; // ebx
  unsigned int v14; // esi
  struct _HIDP_VALUE_CAPS *v15; // r14
  unsigned __int16 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // eax

  v9 = a5;
  v10 = 0;
  if ( !a5 || !a7 )
    return 0LL;
  v14 = *a2;
  v15 = a6;
  if ( rimHidP_GetSpecificValueCaps(HidP_Input, 0, a4, 0, a6, &a5, a9) >= 0 )
  {
    v16 = 0;
    if ( v14 < a7 )
    {
      v17 = a8;
      while ( 1 )
      {
        if ( v16 >= v9 )
          goto LABEL_22;
        if ( *(_BYTE *)(a1 + 1400) == v15[v16].ReportID && v14 < a3 )
          break;
LABEL_21:
        ++v16;
        if ( v14 >= a7 )
          goto LABEL_22;
      }
      v18 = 28LL * v14;
      *(_WORD *)(v18 + v17 + 24) = v15[v16].UsagePage;
      *(_WORD *)(v18 + v17 + 26) = v15[v16].Range.UsageMin;
      *(_DWORD *)(v18 + v17) = v15[v16].LogicalMin;
      *(_DWORD *)(v18 + v17 + 4) = v15[v16].LogicalMax;
      if ( v15[v16].UsagePage == 1 )
      {
        if ( v15[v16].Range.UsageMin == 48 && *(_DWORD *)(a1 + 24) != 6 )
        {
          *(_DWORD *)(v18 + v17 + 8) = 0;
          if ( ((*(_DWORD *)(a1 + 740) - 1) & 0xFFFFFFFD) != 0 )
          {
LABEL_13:
            v19 = *(_DWORD *)(a1 + 152);
LABEL_14:
            *(_DWORD *)(v18 + v17 + 12) = v19;
            *(_DWORD *)(v18 + v17 + 16) = 17;
            *(_DWORD *)(v18 + v17 + 20) = 13;
LABEL_20:
            ++v14;
            goto LABEL_21;
          }
LABEL_18:
          v19 = *(_DWORD *)(a1 + 148);
          goto LABEL_14;
        }
        if ( v15[v16].Range.UsageMin == 49 && *(_DWORD *)(a1 + 24) != 6 )
        {
          *(_DWORD *)(v18 + v17 + 8) = 0;
          if ( ((*(_DWORD *)(a1 + 740) - 1) & 0xFFFFFFFD) == 0 )
            goto LABEL_13;
          goto LABEL_18;
        }
      }
      *(_DWORD *)(v18 + v17 + 8) = v15[v16].PhysicalMin;
      *(_DWORD *)(v18 + v17 + 12) = v15[v16].PhysicalMax;
      *(_DWORD *)(v18 + v17 + 16) = v15[v16].Units;
      *(_DWORD *)(v18 + v17 + 20) = v15[v16].UnitsExp;
      goto LABEL_20;
    }
LABEL_22:
    *a2 = v14;
    return 1;
  }
  return v10;
}
