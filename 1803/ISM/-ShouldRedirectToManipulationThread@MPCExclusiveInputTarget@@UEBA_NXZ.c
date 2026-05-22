/*
 * XREFs of ?ShouldRedirectToManipulationThread@MPCExclusiveInputTarget@@UEBA_NXZ @ 0x180087BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall MPCExclusiveInputTarget::ShouldRedirectToManipulationThread(MPCExclusiveInputTarget *this)
{
  __int64 (__fastcall ***v1)(_QWORD, GUID *, __int64 *); // rcx
  int v2; // eax
  wil::details::in1diag3 *v3; // rcx
  char v4; // bl
  __int64 v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v1 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 4);
  if ( !v1 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x148,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcexclusiveinputtarget.cpp",
      (const char *)0x8000FFFFLL);
    goto LABEL_7;
  }
  v8 = 0LL;
  v2 = (**v1)(v1, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, &v8);
  v3 = retaddr;
  if ( v2 < 0 )
  {
LABEL_7:
    wil::details::in1diag3::FailFast_Hr(
      v3,
      (void *)0x151,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcexclusiveinputtarget.cpp",
      (const char *)(unsigned int)v2);
    JUMPOUT(0x180087C49LL);
  }
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 48LL))(v8);
  v5 = v8;
  if ( v8 )
  {
    v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return v4;
}
