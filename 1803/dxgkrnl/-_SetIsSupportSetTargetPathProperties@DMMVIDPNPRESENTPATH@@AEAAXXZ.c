/*
 * XREFs of ?_SetIsSupportSetTargetPathProperties@DMMVIDPNPRESENTPATH@@AEAAXXZ @ 0x1C00BF198
 * Callers:
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@QEBV0@@Z @ 0x1C0006150 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@QEBV0@@Z.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@G@Z @ 0x1C0006508 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PA.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0045590 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void __fastcall DMMVIDPNPRESENTPATH::_SetIsSupportSetTargetPathProperties(DMMVIDPNPRESENTPATH *this)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  DXGADAPTER *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  v2 = *(_QWORD *)(*((_QWORD *)this + 12) + 96LL);
  v3 = *(_QWORD *)(v2 + 40);
  if ( !v3 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v8);
    v3 = *(_QWORD *)(v2 + 40);
  }
  v4 = *(_QWORD *)(v3 + 88);
  v5 = *(_QWORD *)(v4 + 8);
  if ( !v5 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v9);
    v5 = *(_QWORD *)(v4 + 8);
  }
  v6 = *(DXGADAPTER **)(v5 + 16);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v6) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v10);
  }
  *((_BYTE *)this + 110) = *((_BYTE *)v6 + 2416);
}
