/*
 * XREFs of ?GetRoutingInfo@MPCExclusiveInputTarget@@UEBA?AUtagMsgRoutingInfo@@XZ @ 0x180087980
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCExclusiveInputTarget::GetRoutingInfo(__int64 a1, __int64 a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rcx
  int v4; // eax
  wil::details::in1diag3 *v5; // rcx
  __int64 v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 32);
  if ( !v3 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x10E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcexclusiveinputtarget.cpp",
      (const char *)0x8000FFFFLL);
LABEL_7:
    wil::details::in1diag3::FailFast_Hr(
      v5,
      (void *)0x112,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcexclusiveinputtarget.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  v9 = 0LL;
  v4 = (**v3)(v3, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, &v9);
  v5 = retaddr;
  if ( v4 < 0 )
    goto LABEL_7;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 72LL))(v9, a2);
  v6 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return a2;
}
