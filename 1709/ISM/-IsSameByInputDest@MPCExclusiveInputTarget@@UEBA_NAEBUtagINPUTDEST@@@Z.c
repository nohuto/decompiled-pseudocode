/*
 * XREFs of ?IsSameByInputDest@MPCExclusiveInputTarget@@UEBA_NAEBUtagINPUTDEST@@@Z @ 0x1800AB8C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall MPCExclusiveInputTarget::IsSameByInputDest(
        MPCExclusiveInputTarget *this,
        const struct tagINPUTDEST *a2)
{
  int v3; // eax
  char v4; // bl
  __int64 v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  if ( !*((_QWORD *)this + 4) )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x11D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcexclusiveinputtarget.cpp",
      (const char *)0x8000FFFFLL);
    __debugbreak();
  }
  v8 = 0LL;
  v3 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 4))(
         *((_QWORD *)this + 4),
         &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631,
         &v8);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x121,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcexclusiveinputtarget.cpp",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  v4 = (*(__int64 (__fastcall **)(__int64, const struct tagINPUTDEST *))(*(_QWORD *)v8 + 56LL))(v8, a2);
  v5 = v8;
  if ( v8 )
  {
    v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return v4;
}
