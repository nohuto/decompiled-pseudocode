/*
 * XREFs of BmlDoesTargetModeSupportWireFormat @ 0x1C00F8B20
 * Callers:
 *     ?BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDMMVIDPN@@@Z @ 0x1C00D20AC (-BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDM.c)
 *     BmlCompareTargetModesWithConstraint @ 0x1C00D364C (BmlCompareTargetModesWithConstraint.c)
 *     BmlDoesTargetModeObeyConstraint @ 0x1C00D4744 (BmlDoesTargetModeObeyConstraint.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000E5D0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00844BC (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 */

bool __fastcall BmlDoesTargetModeSupportWireFormat(__int64 a1, int a2)
{
  unsigned int v3; // edi
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax

  v3 = *(_DWORD *)(a1 + 128);
  if ( !*(_QWORD *)(a1 + 40) )
  {
    v9 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v9);
  }
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL);
  if ( !*(_QWORD *)(v5 + 40) )
  {
    v10 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v10);
  }
  v7 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v5 + 40) + 64LL) + 48);
  if ( !*(_QWORD *)(v7 + 8) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v11);
  }
  if ( DXGADAPTER::UsingSetTimingsFromVidPn(*(DXGADAPTER **)(*(_QWORD *)(v7 + 8) + 16LL)) )
    return (a2 & v3) >= 0x4000000
        || (((unsigned __int8)(a2 & v3) | (unsigned __int8)((a2 & v3 | ((a2 & v3 | ((a2 & v3) >> 6)) >> 6)) >> 6)) & 0xFC) != 0;
  else
    return (a2 & 0xFC) == 8;
}
