/*
 * XREFs of ?Create@MPCSharedWorldInputTarget@@SAJPEAUIInputTarget@@AEBUtagMsgRoutingInfo@@_K2PEAPEAUIMPCInputTarget@@@Z @ 0x1800AC810
 * Callers:
 *     ?CreateMPCTarget@MPCInputRouter@@AEAAJPEAUIInputTarget@@_KPEAPEAUIMPCInputTarget@@@Z @ 0x1800A9D30 (-CreateMPCTarget@MPCInputRouter@@AEAAJPEAUIInputTarget@@_KPEAPEAUIMPCInputTarget@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0MPCSharedWorldInputTarget@@IEAA@PEAUIInputTarget@@AEBUtagMsgRoutingInfo@@_K2@Z @ 0x1800AC5CC (--0MPCSharedWorldInputTarget@@IEAA@PEAUIInputTarget@@AEBUtagMsgRoutingInfo@@_K2@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCSharedWorldInputTarget::Create(
        int (__fastcall ***a1)(struct IInputTarget *, GUID *, __int64 *),
        const struct tagMsgRoutingInfo *a2,
        __int64 a3,
        const char *a4,
        struct IMPCInputTarget **a5)
{
  MPCSharedWorldInputTarget *v9; // rax
  const char *v10; // r9
  MPCSharedWorldInputTarget *v11; // rbx
  _QWORD *v12; // rdi
  __int64 v13; // rcx
  int v14; // eax
  int v15; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( !a5 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x4A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcsharedworldinputtarget.cpp",
      a4);
    __debugbreak();
  }
  v9 = (MPCSharedWorldInputTarget *)malloc(0x80uLL);
  v11 = v9;
  if ( v9 )
    memset(v9, 0, 0x80uLL);
  if ( v11 )
    v11 = MPCSharedWorldInputTarget::MPCSharedWorldInputTarget(v11, a1, a2, a3, (unsigned __int64)a4);
  if ( !v11 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x4E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcsharedworldinputtarget.cpp",
      v10);
    __debugbreak();
  }
  v12 = (_QWORD *)((char *)v11 + 40);
  v13 = *((_QWORD *)v11 + 5);
  if ( v13 )
  {
    *v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = CoreUICreate((char *)v11 + 40);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x39,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcsharedworldinputtarget.cpp",
      (const char *)(unsigned int)v14);
    __debugbreak();
  }
  v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*v12 + 96LL))(
          *v12,
          (__int64)v11 + 56,
          (__int64)v11 + 104);
  if ( v15 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x3A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcsharedworldinputtarget.cpp",
      (const char *)(unsigned int)v15);
    __debugbreak();
  }
  *a5 = v11;
  return 0LL;
}
