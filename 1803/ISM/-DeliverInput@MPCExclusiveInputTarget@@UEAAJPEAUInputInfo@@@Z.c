/*
 * XREFs of ?DeliverInput@MPCExclusiveInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1800877D0
 * Callers:
 *     ?DeliverInput@MPCExclusiveInputTarget@@W7EAAJPEAUInputInfo@@@Z @ 0x180088340 (-DeliverInput@MPCExclusiveInputTarget@@W7EAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180044860 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCExclusiveInputTarget_DeliverInput_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo@@@Z @ 0x1800871BC (-MPCExclusiveInputTarget_DeliverInput_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCExclusiveInputTarget::DeliverInput(
        MPCExclusiveInputTarget *this,
        struct InputInfo *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // esi
  struct IInputTarget *v10; // rbx
  _DWORD *v11; // rcx
  ISMTracing *v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xC6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcexclusiveinputtarget.cpp",
      a4);
    __debugbreak();
  }
  if ( !*((_QWORD *)this + 6) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xD7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcexclusiveinputtarget.cpp",
      a4);
    JUMPOUT(0x1800878BCLL);
  }
  v6 = *((_QWORD *)this + 9);
  if ( !v6 )
    v6 = *((_QWORD *)this + 8);
  *((_QWORD *)a2 + 63) = v6;
  *((_QWORD *)a2 + 48) = *((_QWORD *)this + 8);
  *((_DWORD *)a2 + 114) = 1;
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 24LL))(*((_QWORD *)this + 6));
  v8 = v7;
  if ( v7 >= 0 )
  {
    v10 = (struct IInputTarget *)*((_QWORD *)this + 6);
    v11 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
    if ( v11 )
    {
      if ( *v11 )
      {
        ISMTracing::Instance();
        ISMTracing::MPCExclusiveInputTarget_DeliverInput_(v12, v10, a2);
      }
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD2,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcexclusiveinputtarget.cpp",
      (const char *)(unsigned int)v7);
    return v8;
  }
}
