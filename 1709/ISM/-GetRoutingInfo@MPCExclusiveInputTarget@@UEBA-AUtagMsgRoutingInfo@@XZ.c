/*
 * XREFs of ?GetRoutingInfo@MPCExclusiveInputTarget@@UEBA?AUtagMsgRoutingInfo@@XZ @ 0x1800ABA30
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCExclusiveInputTarget::GetRoutingInfo(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  if ( !*(_QWORD *)(a1 + 32) )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x13A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcexclusiveinputtarget.cpp",
      (const char *)0x8000FFFFLL);
    __debugbreak();
  }
  v7 = 0LL;
  v3 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 32))(
         *(_QWORD *)(a1 + 32),
         &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631,
         &v7);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x13E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcexclusiveinputtarget.cpp",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 96LL))(v7, a2);
  v4 = v7;
  if ( v7 )
  {
    v7 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return a2;
}
