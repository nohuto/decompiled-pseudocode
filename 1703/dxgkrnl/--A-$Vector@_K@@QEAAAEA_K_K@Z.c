/*
 * XREFs of ??A?$Vector@_K@@QEAAAEA_K_K@Z @ 0x1C000244C
 * Callers:
 *     ?OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z @ 0x1C000A92C (-OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00E1044 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?AllowModifyingAction@ProtectableFromChange@@QEAAXE_KE@Z @ 0x1C016D098 (-AllowModifyingAction@ProtectableFromChange@@QEAAXE_KE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Vector<unsigned __int64>::operator[](__int64 a1, unsigned __int64 a2)
{
  __int64 v5; // rax

  if ( a2 >= *(_QWORD *)(a1 + 16) )
  {
    v5 = WdLogNewEntry5_WdAssertion();
    WdLogEvent5_WdAssertion(v5);
  }
  return *(_QWORD *)(a1 + 24) + 8 * a2;
}
