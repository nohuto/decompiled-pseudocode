/*
 * XREFs of BmlIsSupportedSourceMode @ 0x1C00C19D0
 * Callers:
 *     BmlDoesSourceModeObeyConstraint @ 0x1C00C18F8 (BmlDoesSourceModeObeyConstraint.c)
 *     BmlGetRecommendedContentSizeForPath @ 0x1C0226134 (BmlGetRecommendedContentSizeForPath.c)
 * Callees:
 *     <none>
 */

char __fastcall BmlIsSupportedSourceMode(__int64 a1, char a2, int a3)
{
  char v3; // bl
  __int64 v6; // rcx
  int v7; // eax
  __int64 v9; // rax

  v3 = 0;
  if ( !a1 )
    return 0;
  v6 = *(unsigned int *)(a1 + 72);
  if ( a3 == 2 )
  {
    if ( (unsigned int)(v6 - 3) > 1 )
      return 0;
LABEL_18:
    if ( (((_DWORD)v6 - 1) & 0xFFFFFFFC) != 0 || (_DWORD)v6 == 2 )
    {
      v9 = WdLogNewEntry5_WdAssertion(v6);
      WdLogEvent5_WdAssertion(v9);
    }
    goto LABEL_5;
  }
  if ( a3 != 1 )
  {
    if ( (((_DWORD)v6 - 1) & 0xFFFFFFFC) != 0 || (_DWORD)v6 == 2 )
      return 0;
    goto LABEL_18;
  }
  if ( (_DWORD)v6 != 1 )
    return 0;
LABEL_5:
  if ( !a2 )
    return 1;
  v7 = *(_DWORD *)(a1 + 96);
  if ( v7 >= 20 && (v7 <= 23 || v7 == 32 || v7 == 41) )
    return 1;
  return v3;
}
