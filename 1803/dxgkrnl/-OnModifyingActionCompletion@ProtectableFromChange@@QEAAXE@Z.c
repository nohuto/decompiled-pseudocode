/*
 * XREFs of ?OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z @ 0x1C0004218
 * Callers:
 *     ?_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z @ 0x1C00043FC (-_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?UpdatePathSupportInfo@DMMVIDPNTOPOLOGY@@QEAAJIIPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT@@@Z @ 0x1C00BBB0C (-UpdatePathSupportInfo@DMMVIDPNTOPOLOGY@@QEAAJIIPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00BBE98 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00BC008 (-AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@.c)
 * Callees:
 *     ?DisallowModifyingAction@ProtectableFromChange@@QEAAXE@Z @ 0x1C00BB818 (-DisallowModifyingAction@ProtectableFromChange@@QEAAXE@Z.c)
 */

void __fastcall ProtectableFromChange::OnModifyingActionCompletion(ProtectableFromChange *this, unsigned __int8 a2)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax

  v4 = a2;
  if ( (unsigned __int64)a2 >= *((_QWORD *)this + 10) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v6);
  }
  v5 = *((_QWORD *)this + 11);
  if ( *(_QWORD *)(v5 + 8 * v4) != 255LL )
  {
    if ( v4 >= *((_QWORD *)this + 10) )
    {
      v7 = WdLogNewEntry5_WdAssertion(this);
      WdLogEvent5_WdAssertion(v7);
      v5 = *((_QWORD *)this + 11);
    }
    --*(_QWORD *)(v5 + 8 * v4);
  }
  if ( v4 >= *((_QWORD *)this + 10) )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !*(_QWORD *)(*((_QWORD *)this + 11) + 8 * v4) )
    ProtectableFromChange::DisallowModifyingAction(this, a2);
}
