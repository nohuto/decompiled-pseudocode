/*
 * XREFs of RtlpMuiRegGetLanginfoTypeNSpec @ 0x1800ED52C
 * Callers:
 *     LdrpGetMUILangConfigNode @ 0x1800EB3B0 (LdrpGetMUILangConfigNode.c)
 *     RtlpCompareConfigNodeWithSpec @ 0x1800EC750 (RtlpCompareConfigNodeWithSpec.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpMuiRegGetLanginfoTypeNSpec(__int64 a1, _DWORD *a2, __int16 *a3)
{
  __int64 result; // rax
  __int16 v4; // r9
  __int16 v5; // cx

  result = 0LL;
  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  v4 = *(_WORD *)(a1 + 4);
  if ( (v4 & 0xEBFF) == 0 && v4 != 1024 )
  {
    v5 = *(_WORD *)(a1 + 6);
    if ( v5 > 0 )
    {
      *a2 = 3;
      *a3 = v5;
      return result;
    }
    *a2 = 0;
    *a3 = 0;
    return 3221225485LL;
  }
  *a2 = 1;
  *a3 = v4;
  return result;
}
