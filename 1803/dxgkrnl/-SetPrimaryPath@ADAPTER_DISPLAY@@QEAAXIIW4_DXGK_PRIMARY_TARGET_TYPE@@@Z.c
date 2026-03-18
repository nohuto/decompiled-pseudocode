/*
 * XREFs of ?SetPrimaryPath@ADAPTER_DISPLAY@@QEAAXIIW4_DXGK_PRIMARY_TARGET_TYPE@@@Z @ 0x1C01577F8
 * Callers:
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C021128C (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkSetPostDeviceCandidateTarget @ 0x1C003A2DC (DxgkSetPostDeviceCandidateTarget.c)
 */

void __fastcall ADAPTER_DISPLAY::SetPrimaryPath(__int64 a1, int a2, int a3, int a4)
{
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v9 + 24) = 7163LL;
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = *(_QWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 120) = a2;
  *(_DWORD *)(a1 + 124) = a3;
  *(_DWORD *)(a1 + 128) = a4;
  if ( (*(_BYTE *)(v10 + 300) & 1) != 0 && a3 != -1 )
    DxgkSetPostDeviceCandidateTarget(a3);
}
