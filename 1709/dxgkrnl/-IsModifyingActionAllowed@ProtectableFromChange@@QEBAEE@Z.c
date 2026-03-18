/*
 * XREFs of ?IsModifyingActionAllowed@ProtectableFromChange@@QEBAEE@Z @ 0x1C00069A4
 * Callers:
 *     ?_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z @ 0x1C0005814 (-_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00A56CC (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ProtectableFromChange::IsModifyingActionAllowed(
        ProtectableFromChange *this,
        unsigned __int8 a2)
{
  int v4; // eax
  __int64 v6; // rax

  if ( a2 >= *((_BYTE *)this + 20) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v6);
  }
  v4 = *((unsigned __int16 *)this + 11);
  return _bittest(&v4, a2);
}
