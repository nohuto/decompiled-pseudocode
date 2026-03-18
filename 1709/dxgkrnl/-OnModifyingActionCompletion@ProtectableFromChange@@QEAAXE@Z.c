/*
 * XREFs of ?OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z @ 0x1C00069DC
 * Callers:
 *     ?_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z @ 0x1C0005814 (-_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z.c)
 * Callees:
 *     ??A?$Vector@_K@@QEAAAEA_K_K@Z @ 0x1C000E660 (--A-$Vector@_K@@QEAAAEA_K_K@Z.c)
 *     ?DisallowModifyingAction@ProtectableFromChange@@QEAAXE@Z @ 0x1C00A62A4 (-DisallowModifyingAction@ProtectableFromChange@@QEAAXE@Z.c)
 */

void __fastcall ProtectableFromChange::OnModifyingActionCompletion(ProtectableFromChange *this, unsigned __int8 a2)
{
  char *v3; // rdi
  __int64 v5; // rbx
  _QWORD *v6; // rax

  v3 = (char *)this + 64;
  v5 = a2;
  if ( *(_QWORD *)Vector<unsigned __int64>::operator[]((char *)this + 64, a2) != 255LL )
  {
    v6 = (_QWORD *)Vector<unsigned __int64>::operator[](v3, (unsigned int)v5);
    --*v6;
  }
  if ( !*(_QWORD *)Vector<unsigned __int64>::operator[](v3, v5) )
    ProtectableFromChange::DisallowModifyingAction(this, a2);
}
