/*
 * XREFs of ?SetPrimaryPath@ADAPTER_DISPLAY@@QEAAXIIW4_DXGK_PRIMARY_TARGET_TYPE@@@Z @ 0x1C00E6A80
 * Callers:
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C00E3FA4 (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 * Callees:
 *     DxgkSetPostDeviceCandidateTarget @ 0x1C0003768 (DxgkSetPostDeviceCandidateTarget.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void __fastcall ADAPTER_DISPLAY::SetPrimaryPath(__int64 a1, int a2, int a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rax

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    *(_QWORD *)(v13 + 24) = 6500LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v12 = *(_QWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 120) = a2;
  *(_DWORD *)(a1 + 124) = a3;
  *(_DWORD *)(a1 + 128) = a4;
  if ( (*(_BYTE *)(v12 + 300) & 1) != 0 && a3 != -1 )
    DxgkSetPostDeviceCandidateTarget(a3);
}
