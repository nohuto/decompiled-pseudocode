/*
 * XREFs of BmlCompareTargetModes @ 0x1C00C1DE4
 * Callers:
 *     BmlGetNextBestTargetMode @ 0x1C00C1BE0 (BmlGetNextBestTargetMode.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00044A4 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     BmlCompareTargetModesWithConstraint @ 0x1C00C1F34 (BmlCompareTargetModesWithConstraint.c)
 *     BmlCompareTargetModesWithMonitor @ 0x1C00C2084 (BmlCompareTargetModesWithMonitor.c)
 *     BmlCompareRegionsWithPivot @ 0x1C00C29C8 (BmlCompareRegionsWithPivot.c)
 *     BmlCompareMonitorRegions @ 0x1C0225D08 (BmlCompareMonitorRegions.c)
 *     BmlCompareWireFormat @ 0x1C0225E54 (BmlCompareWireFormat.c)
 */

__int64 __fastcall BmlCompareTargetModes(__int64 a1, __int64 a2, unsigned __int16 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v10; // r15
  __int64 v11; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // rbp
  __int64 v13; // rcx
  __int64 result; // rax
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax

  if ( !a1 )
  {
    v16 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v16);
  }
  if ( !a2 )
  {
    v17 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v17);
  }
  if ( a4 == a5 )
  {
    v18 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v18);
  }
  if ( !a4 )
    return 0xFFFFFFFFLL;
  if ( !a5 )
    return 1LL;
  v10 = 104LL * a3;
  Path = DMMVIDPNTOPOLOGY::FindPath(
           (DMMVIDPNTOPOLOGY *)(a2 + 96),
           *(_DWORD *)(*(_QWORD *)(v10 + a1 + 16) + 24LL),
           *(_DWORD *)(*(_QWORD *)(v10 + a1 + 16) + 28LL));
  if ( !Path )
  {
    v19 = WdLogNewEntry5_WdAssertion(v11);
    WdLogEvent5_WdAssertion(v19);
  }
  v13 = *((_QWORD *)Path + 12);
  if ( !v13 )
  {
    v20 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v20);
    v13 = *((_QWORD *)Path + 12);
  }
  if ( !*(_QWORD *)(v13 + 96) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v13);
    WdLogEvent5_WdAssertion(v21);
  }
  result = BmlCompareTargetModesWithConstraint(a1, a3, a4, a5);
  if ( !(_DWORD)result )
  {
    LOBYTE(v15) = a6;
    result = BmlCompareTargetModesWithMonitor(a4, a5, v15, *(_QWORD *)(*((_QWORD *)Path + 12) + 96LL));
    if ( !(_DWORD)result )
    {
      result = BmlCompareRegionsWithPivot(
                 (struct _D3DKMDT_2DREGION *)(a4 + 84),
                 (struct _D3DKMDT_2DREGION *)(a5 + 84),
                 (struct _D3DKMDT_2DREGION *)(v10 + a1 + 52));
      if ( !(_DWORD)result )
      {
        result = BmlCompareMonitorRegions(a4, a5);
        if ( !(_DWORD)result )
          return BmlCompareWireFormat(a4, a5);
      }
    }
  }
  return result;
}
