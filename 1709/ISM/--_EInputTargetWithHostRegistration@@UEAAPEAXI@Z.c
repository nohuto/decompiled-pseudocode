/*
 * XREFs of ??_EInputTargetWithHostRegistration@@UEAAPEAXI@Z @ 0x180081B30
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800367C4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
InputTargetWithHostRegistration *__fastcall InputTargetWithHostRegistration::`vector deleting destructor'(
        InputTargetWithHostRegistration *this,
        char a2)
{
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rcx
  _OWORD v8[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v9; // [rsp+50h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *(_QWORD *)this = &InputTargetWithHostRegistration::`vftable';
  v8[0] = *(_OWORD *)((char *)this + 24);
  v8[1] = *(_OWORD *)((char *)this + 40);
  v9 = *((_QWORD *)this + 7);
  v4 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *))(**((_QWORD **)this + 8) + 40LL))(*((_QWORD *)this + 8), v8);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x25,
      (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputtarget.cpp",
      (const char *)(unsigned int)v4);
  v5 = *((_QWORD *)this + 8);
  if ( v5 )
  {
    *((_QWORD *)this + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  *(_QWORD *)this = &InputTarget::`vftable';
  v6 = *((_QWORD *)this + 1);
  if ( v6 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
