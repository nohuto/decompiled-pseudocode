/*
 * XREFs of ?OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z @ 0x1C000A92C
 * Callers:
 *     ?_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z @ 0x1C000A734 (-_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z.c)
 * Callees:
 *     ??A?$Vector@_K@@QEAAAEA_K_K@Z @ 0x1C000244C (--A-$Vector@_K@@QEAAAEA_K_K@Z.c)
 *     ?DisallowModifyingAction@ProtectableFromChange@@QEAAXE@Z @ 0x1C00E1680 (-DisallowModifyingAction@ProtectableFromChange@@QEAAXE@Z.c)
 */

void __fastcall ProtectableFromChange::OnModifyingActionCompletion(ProtectableFromChange *this, unsigned __int8 a2)
{
  char *v3; // rdi
  unsigned __int64 v5; // rbx
  _QWORD *v6; // rax

  v3 = (char *)this + 64;
  v5 = a2;
  if ( *(_QWORD *)Vector<unsigned __int64>::operator[]((__int64)this + 64, a2) != 255LL )
  {
    v6 = (_QWORD *)Vector<unsigned __int64>::operator[]((__int64)v3, (unsigned int)v5);
    --*v6;
  }
  if ( !*(_QWORD *)Vector<unsigned __int64>::operator[]((__int64)v3, v5) )
    ProtectableFromChange::DisallowModifyingAction(this, a2);
}
