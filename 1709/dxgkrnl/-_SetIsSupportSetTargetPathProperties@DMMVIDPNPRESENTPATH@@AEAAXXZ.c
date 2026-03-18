/*
 * XREFs of ?_SetIsSupportSetTargetPathProperties@DMMVIDPNPRESENTPATH@@AEAAXXZ @ 0x1C00A6130
 * Callers:
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@QEBV0@@Z @ 0x1C0005D9C (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@QEBV0@@Z.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0005FA4 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@G@Z @ 0x1C00063D0 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PA.c)
 * Callees:
 *     <none>
 */

void __fastcall DMMVIDPNPRESENTPATH::_SetIsSupportSetTargetPathProperties(DMMVIDPNPRESENTPATH *this)
{
  __int64 v2; // rbx
  __int64 v3; // rbx
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax

  v2 = *(_QWORD *)(*((_QWORD *)this + 12) + 96LL);
  if ( !*(_QWORD *)(v2 + 40) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v6);
  }
  v3 = *(_QWORD *)(*(_QWORD *)(v2 + 40) + 88LL);
  if ( !*(_QWORD *)(v3 + 8) )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v7);
  }
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v4 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v4 + 144)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5);
    WdLogEvent5_WdAssertion(v8);
  }
  *((_BYTE *)this + 110) = *(_BYTE *)(v4 + 2271);
}
