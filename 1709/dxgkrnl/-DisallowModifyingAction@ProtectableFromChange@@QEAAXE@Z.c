/*
 * XREFs of ?DisallowModifyingAction@ProtectableFromChange@@QEAAXE@Z @ 0x1C00A62A4
 * Callers:
 *     ?OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z @ 0x1C00069DC (-OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z.c)
 *     ?UpdatePathSupportInfo@DMMVIDPNTOPOLOGY@@QEAAJIIPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT@@@Z @ 0x1C00A3CDC (-UpdatePathSupportInfo@DMMVIDPNTOPOLOGY@@QEAAJIIPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@.c)
 *     ?AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00A4368 (-AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00A45F0 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00A56CC (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 * Callees:
 *     memset @ 0x1C0016A80 (memset.c)
 */

void __fastcall ProtectableFromChange::DisallowModifyingAction(ProtectableFromChange *this, __int64 a2)
{
  unsigned __int8 v2; // si
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax

  v2 = a2;
  if ( (unsigned __int8)a2 >= *((_BYTE *)this + 20) && (_BYTE)a2 != 0xFF )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v6);
  }
  v4 = WdLogNewEntry5_WdTrace(this, a2);
  *(_QWORD *)(v4 + 24) = v2;
  *(_QWORD *)(v4 + 32) = this;
  if ( v2 == 0xFF )
  {
    *((_WORD *)this + 11) = 0;
    memset(*((void **)this + 6), 0, *((_QWORD *)this + 5));
    memset(*((void **)this + 11), 0, 8LL * *((_QWORD *)this + 10));
  }
  else
  {
    v5 = *((unsigned __int16 *)this + 11);
    LODWORD(v5) = v5 & ~(1 << v2);
    *((_WORD *)this + 11) = v5;
    if ( (unsigned __int64)v2 >= *((_QWORD *)this + 5) )
    {
      v7 = WdLogNewEntry5_WdAssertion(v5);
      WdLogEvent5_WdAssertion(v7);
    }
    *(_BYTE *)(*((_QWORD *)this + 6) + v2) &= 0xF0u;
    if ( (unsigned __int64)v2 >= *((_QWORD *)this + 10) )
    {
      v8 = WdLogNewEntry5_WdAssertion(v5);
      WdLogEvent5_WdAssertion(v8);
    }
    *(_QWORD *)(*((_QWORD *)this + 11) + 8LL * v2) = 0LL;
  }
}
