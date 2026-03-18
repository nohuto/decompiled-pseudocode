/*
 * XREFs of ?GetContainer@?$ContainedBy@VDMMVIDPNTOPOLOGY@@@@QEBAPEAVDMMVIDPNTOPOLOGY@@XZ @ 0x1C003553C
 * Callers:
 *     ?PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C01EEA30 (-PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_R.c)
 *     ?PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C01EEB54 (-PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ContainedBy<DMMVIDPNTOPOLOGY>::GetContainer(__int64 a1)
{
  __int64 v2; // rax

  if ( !*(_QWORD *)(a1 + 8) )
  {
    v2 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v2);
  }
  return *(_QWORD *)(a1 + 8);
}
