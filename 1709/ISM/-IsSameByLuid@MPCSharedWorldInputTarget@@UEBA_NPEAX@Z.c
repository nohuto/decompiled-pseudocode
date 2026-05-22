/*
 * XREFs of ?IsSameByLuid@MPCSharedWorldInputTarget@@UEBA_NPEAX@Z @ 0x1800AD1D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall MPCSharedWorldInputTarget::IsSameByLuid(MPCSharedWorldInputTarget *this, void *a2)
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
      (void *)0x165,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcsharedworldinputtarget.cpp",
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
      (void *)0x16E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcsharedworldinputtarget.cpp",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  v4 = (*(__int64 (__fastcall **)(__int64, void *))(*(_QWORD *)v8 + 48LL))(v8, a2);
  v5 = v8;
  if ( v8 )
  {
    v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return v4;
}
