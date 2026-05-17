/*
 * XREFs of RtlpMuiRegGetOrAddString @ 0x1800FCCB0
 * Callers:
 *     RtlpMuiRegGetLanguageSpec @ 0x180006450 (RtlpMuiRegGetLanguageSpec.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180051984 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1800FB8E4 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByName @ 0x1800FC6DC (RtlpMuiRegGetFallbackLanguageInfoByName.c)
 *     _RtlMuiRegAddLIPParent @ 0x1800FDB54 (_RtlMuiRegAddLIPParent.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x1800FE080 (_RtlpMuiRegInitAnyLanguage.c)
 *     _RtlpMuiRegValidateInstalled @ 0x1800FEC08 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlpMuiRegGetOrAddStringToPool @ 0x1800517D0 (RtlpMuiRegGetOrAddStringToPool.c)
 *     RtlpMuiRegGrowStringPool @ 0x1800FCE10 (RtlpMuiRegGrowStringPool.c)
 */

__int64 __fastcall RtlpMuiRegGetOrAddString(__int64 a1, _WORD *a2, char a3, __int16 *a4)
{
  __int16 v4; // bp
  int v9; // edi
  char v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 result; // rax
  unsigned int v15; // [rsp+50h] [rbp+8h] BYREF

  v4 = -1;
  if ( a1 && a2 && *a2 )
  {
    v9 = *(_DWORD *)a1 & 2;
    if ( !a3 || (v10 = 1, !v9) )
      v10 = 0;
    v4 = RtlpMuiRegGetOrAddStringToPool(*(_QWORD *)(a1 + 32), a2, v10, &v15);
    if ( v4 >= 0 )
    {
LABEL_12:
      result = 0LL;
      goto LABEL_14;
    }
    if ( a3 )
    {
      LOBYTE(v12) = v9 == 0;
      v13 = RtlpMuiRegGrowStringPool(*(_QWORD *)(a1 + 32), v11, v15, v12);
      if ( !v13
        || (*(_DWORD *)a1 |= 2u, *(_QWORD *)(a1 + 32) = v13,
                                 v4 = RtlpMuiRegGetOrAddStringToPool(v13, a2, 1, 0LL),
                                 v4 < 0) )
      {
        result = 3221225495LL;
        goto LABEL_14;
      }
      goto LABEL_12;
    }
  }
  result = 3221225485LL;
LABEL_14:
  if ( a4 )
    *a4 = v4;
  return result;
}
