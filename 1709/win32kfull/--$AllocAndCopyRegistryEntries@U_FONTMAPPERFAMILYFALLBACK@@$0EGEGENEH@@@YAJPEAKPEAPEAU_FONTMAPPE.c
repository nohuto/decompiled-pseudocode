/*
 * XREFs of ??$AllocAndCopyRegistryEntries@U_FONTMAPPERFAMILYFALLBACK@@$0EGEGENEH@@@YAJPEAKPEAPEAU_FONTMAPPERFAMILYFALLBACK@@0PEBU0@@Z @ 0x1C0279908
 * Callers:
 *     QueryRegistryFontMapperFamilyFallbackListRoutine @ 0x1C03843C0 (QueryRegistryFontMapperFamilyFallbackListRoutine.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     PREALLOCMEM2 @ 0x1C0120C64 (PREALLOCMEM2.c)
 */

__int64 __fastcall AllocAndCopyRegistryEntries<_FONTMAPPERFAMILYFALLBACK,1179012423>(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        _OWORD *a4)
{
  unsigned int v6; // edi
  void *v7; // rax
  char *v8; // rax
  unsigned __int64 v9; // rcx

  if ( gcfmffTable < *a3 )
    goto LABEL_7;
  v6 = gcfmffTable + 32;
  if ( gpfmffTable )
    v7 = PREALLOCMEM2(gpfmffTable, gcfmffTable << 7, v6 << 7, 0x46464D47u);
  else
    v7 = PALLOCMEM2(v6 << 7, 1179012423LL, 1);
  if ( v7 )
  {
    gpfmffTable = v7;
    *a3 = v6;
LABEL_7:
    v8 = (char *)gpfmffTable;
    v9 = (unsigned __int64)gcfmffTable << 7;
    *(_OWORD *)((char *)gpfmffTable + v9) = *a4;
    *(_OWORD *)&v8[v9 + 16] = a4[1];
    *(_OWORD *)&v8[v9 + 32] = a4[2];
    *(_OWORD *)&v8[v9 + 48] = a4[3];
    *(_OWORD *)&v8[v9 + 64] = a4[4];
    *(_OWORD *)&v8[v9 + 80] = a4[5];
    *(_OWORD *)&v8[v9 + 96] = a4[6];
    *(_OWORD *)&v8[v9 + 112] = a4[7];
    ++gcfmffTable;
    return 0LL;
  }
  return 3221225495LL;
}
