/*
 * XREFs of ?MoveConstruct@PropertyVector@Input@@UEAAPEAVPropertyNode@2@XZ @ 0x180022F10
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800CB4F0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
struct Input::PropertyNode *__fastcall Input::PropertyVector::MoveConstruct(Input::PropertyVector *this)
{
  char *v3; // [rsp+50h] [rbp+8h]

  v3 = (char *)operator new(0x38uLL);
  *(_OWORD *)(v3 + 8) = 0uLL;
  *((_QWORD *)v3 + 3) = 0LL;
  *(_QWORD *)v3 = &Input::PropertyVector::`vftable';
  *((_QWORD *)v3 + 4) = 0LL;
  *((_QWORD *)v3 + 5) = 0LL;
  *((_QWORD *)v3 + 6) = 0LL;
  (*(void (__fastcall **)(char *, Input::PropertyVector *))(*(_QWORD *)v3 + 144LL))(v3, this);
  return (struct Input::PropertyNode *)v3;
}
