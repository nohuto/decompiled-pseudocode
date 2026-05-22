/*
 * XREFs of ?MoveConstruct@?$PropertyVectorModifiedAdapter@V?$ModifiedNotifier@VPropertyVector@Input@@@Input@@@Input@@UEAAPEAVPropertyNode@2@XZ @ 0x180023D90
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800CB4F0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
char *__fastcall Input::PropertyVectorModifiedAdapter<Input::ModifiedNotifier<Input::PropertyVector>>::MoveConstruct(
        __int64 a1)
{
  char *v3; // [rsp+50h] [rbp+8h]

  v3 = (char *)operator new(0x40uLL);
  *(_OWORD *)(v3 + 8) = 0uLL;
  *((_QWORD *)v3 + 3) = 0LL;
  *(_QWORD *)v3 = &Input::PropertyVector::`vftable';
  *((_QWORD *)v3 + 4) = 0LL;
  *((_QWORD *)v3 + 5) = 0LL;
  *((_QWORD *)v3 + 6) = 0LL;
  (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v3 + 144LL))(v3, a1);
  *(_QWORD *)v3 = &Input::ModifiedNotifier<Input::PropertyVector>::`vftable';
  *((_QWORD *)v3 + 7) = *(_QWORD *)(a1 + 56);
  *(_QWORD *)v3 = &Input::PropertyVectorModifiedAdapter<Input::ModifiedNotifier<Input::PropertyVector>>::`vftable';
  return v3;
}
