/*
 * XREFs of ??A?$Vector@TModifyingActionConstraints@ProtectableFromChange@@@@QEAAAEATModifyingActionConstraints@ProtectableFromChange@@_K@Z @ 0x1C0020F40
 * Callers:
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00E0178 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?AllowModifyingAction@ProtectableFromChange@@QEAAXE_KE@Z @ 0x1C016D098 (-AllowModifyingAction@ProtectableFromChange@@QEAAXE_KE@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall Vector<ProtectableFromChange::ModifyingActionConstraints>::operator[](
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax

  if ( a2 >= *(_QWORD *)(a1 + 16) )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v6);
  }
  return a2 + *(_QWORD *)(a1 + 24);
}
