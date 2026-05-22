/*
 * XREFs of ?IsSameAsTarget@MPCExclusiveInputTarget@@UEBA_NAEBUtagMsgRoutingInfo@@@Z @ 0x1800878D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall MPCExclusiveInputTarget::IsSameAsTarget(
        MPCExclusiveInputTarget *this,
        const struct tagMsgRoutingInfo *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rcx
  int v4; // eax
  wil::details::in1diag3 *v5; // rcx
  char v6; // bl
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v3 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 4);
  if ( !v3 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xFF,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcexclusiveinputtarget.cpp",
      (const char *)0x8000FFFFLL);
LABEL_7:
    wil::details::in1diag3::FailFast_Hr(
      v5,
      (void *)0x103,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcexclusiveinputtarget.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  v10 = 0LL;
  v4 = (**v3)(v3, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, &v10);
  v5 = retaddr;
  if ( v4 < 0 )
    goto LABEL_7;
  v6 = (*(__int64 (__fastcall **)(__int64, const struct tagMsgRoutingInfo *))(*(_QWORD *)v10 + 32LL))(v10, a2);
  v7 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v6;
}
