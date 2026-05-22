/*
 * XREFs of ?IsSameAsTarget@MPCExclusiveInputTarget@@UEBA_NAEBUtagMsgRoutingInfo@@PEAX@Z @ 0x180087A30
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall MPCExclusiveInputTarget::IsSameAsTarget(
        MPCExclusiveInputTarget *this,
        const struct tagMsgRoutingInfo *a2,
        void *a3)
{
  __int64 (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rcx
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  char v8; // bl
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v5 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 4);
  if ( !v5 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x11F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcexclusiveinputtarget.cpp",
      (const char *)0x8000FFFFLL);
    goto LABEL_7;
  }
  v12 = 0LL;
  v6 = (**v5)(v5, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, &v12);
  v7 = retaddr;
  if ( v6 < 0 )
  {
LABEL_7:
    wil::details::in1diag3::FailFast_Hr(
      v7,
      (void *)0x128,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcexclusiveinputtarget.cpp",
      (const char *)(unsigned int)v6);
    JUMPOUT(0x180087AEDLL);
  }
  v8 = (*(__int64 (__fastcall **)(__int64, const struct tagMsgRoutingInfo *, void *))(*(_QWORD *)v12 + 24LL))(
         v12,
         a2,
         a3);
  v9 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return v8;
}
