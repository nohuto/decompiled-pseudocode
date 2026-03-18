/*
 * XREFs of BmlCompareSourceModesWithConstraint @ 0x1C00D4FC8
 * Callers:
 *     BmlCompareSourceModes @ 0x1C00D4E3C (BmlCompareSourceModes.c)
 * Callees:
 *     BmlDoesSourceModeObeyConstraint @ 0x1C00D5078 (BmlDoesSourceModeObeyConstraint.c)
 *     BmlCompareRegionsWithPivot @ 0x1C00F5AE8 (BmlCompareRegionsWithPivot.c)
 */

__int64 __fastcall BmlCompareSourceModesWithConstraint(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  struct _D3DKMDT_2DREGION *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 result; // rax
  UINT cy; // edx
  int v13; // r8d
  __int64 v14; // rax
  __int64 v15; // rax

  v8 = *(struct _D3DKMDT_2DREGION **)(104LL * a2 + a1 + 16);
  if ( !(unsigned __int8)BmlDoesSourceModeObeyConstraint(a1, a2, a3) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v14);
  }
  if ( !(unsigned __int8)BmlDoesSourceModeObeyConstraint(a1, a2, a4) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v15);
  }
  if ( (v8->cx & 0x100LL) == 0 )
    return 0LL;
  cy = v8[14].cy;
  v13 = *(_DWORD *)(a3 + 96);
  if ( (v13 == cy) == (*(_DWORD *)(a4 + 96) == cy) )
    return BmlCompareRegionsWithPivot(
             (struct _D3DKMDT_2DREGION *)(a3 + 76),
             (struct _D3DKMDT_2DREGION *)(a4 + 76),
             v8 + 12);
  result = 0xFFFFFFFFLL;
  if ( v13 == cy )
    return 1LL;
  return result;
}
