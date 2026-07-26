/*
 * XREFs of ?ndisValidateTrailingElementSpace@@YAEKPEBU_NDIS_OBJECT_HEADER@@KKK@Z @ 0x1C0075658
 * Callers:
 *     ?ndisValidateGFPExactMatchProfileBuffer@@YAEKPEBU_NDIS_GFP_EXACT_MATCH_PROFILE@@@Z @ 0x1C00751C8 (-ndisValidateGFPExactMatchProfileBuffer@@YAEKPEBU_NDIS_GFP_EXACT_MATCH_PROFILE@@@Z.c)
 *     ?ndisValidateGFPWildcardMatchProfileBuffer@@YAEKPEBU_NDIS_GFP_WILDCARD_MATCH_PROFILE@@@Z @ 0x1C0075328 (-ndisValidateGFPWildcardMatchProfileBuffer@@YAEKPEBU_NDIS_GFP_WILDCARD_MATCH_PROFILE@@@Z.c)
 *     ?ndisValidatePDCapsBuffer@@YAEKPEBU_NDIS_PD_CAPABILITIES@@@Z @ 0x1C00753E4 (-ndisValidatePDCapsBuffer@@YAEKPEBU_NDIS_PD_CAPABILITIES@@@Z.c)
 *     ?ndisValidatePDConfigBuffer@@YAEKPEBU_NDIS_PD_CONFIG@@@Z @ 0x1C00755C4 (-ndisValidatePDConfigBuffer@@YAEKPEBU_NDIS_PD_CONFIG@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisValidateTrailingElementSpace(
        unsigned int a1,
        const struct _NDIS_OBJECT_HEADER *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned __int64 v5; // rax
  unsigned int v6; // eax
  bool result; // al

  result = 0;
  if ( (a5 & 0xFFFFFFF8) == (unsigned __int64)a5 && (a3 & 0xFFFFFFF8) == (unsigned __int64)a3 )
  {
    v5 = a5 * (unsigned __int64)a4;
    if ( v5 <= 0xFFFFFFFF )
    {
      v6 = a3 + v5;
      if ( v6 >= a3 && v6 <= a1 && (a3 >= ((a2->Size + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) || !v6) )
        return 1;
    }
  }
  return result;
}
