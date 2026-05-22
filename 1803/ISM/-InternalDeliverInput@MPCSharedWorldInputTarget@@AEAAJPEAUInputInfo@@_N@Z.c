/*
 * XREFs of ?InternalDeliverInput@MPCSharedWorldInputTarget@@AEAAJPEAUInputInfo@@_N@Z @ 0x180088A88
 * Callers:
 *     ?DeliverInput@MPCSharedWorldInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x180088A70 (-DeliverInput@MPCSharedWorldInputTarget@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?DeliverInput@MPCSharedWorldInputTarget@@UEAAJPEAUInputInfo@@_N@Z @ 0x180088A80 (-DeliverInput@MPCSharedWorldInputTarget@@UEAAJPEAUInputInfo@@_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180017A2C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180044860 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ??0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUInputInfo@@@Z @ 0x1800623CC (--0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUInputInfo@@@Z.c)
 *     ?MPCSharedWorldInputTarget_DeliverInput_@ISMTracing@@QEAAXPEAUIInputTarget@@KPEAUInputInfo@@_N@Z @ 0x18008837C (-MPCSharedWorldInputTarget_DeliverInput_@ISMTracing@@QEAAXPEAUIInputTarget@@KPEAUInputInfo@@_N@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCSharedWorldInputTarget::InternalDeliverInput(
        MPCSharedWorldInputTarget *this,
        struct InputInfo *a2,
        bool a3,
        const char *a4)
{
  int v7; // eax
  struct IInputTarget *v8; // rbx
  __int64 v9; // rcx
  int v10; // ebx
  __int64 result; // rax
  _DWORD *v12; // rcx
  ISMTracing *v13; // rcx
  int v14; // [rsp+38h] [rbp-20h] BYREF
  void *Block; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( !a2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xBB,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcsharedworldinputtarget.cpp",
      a4);
    JUMPOUT(0x180088BF9LL);
  }
  if ( !a3 )
  {
    InputEventPayloadBuffer::InputEventPayloadBuffer((__int64)&v14, 4, (int *)a2, a4);
    *((_QWORD *)Block + 64) = 0LL;
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, void *, int))(**((_QWORD **)this + 5) + 152LL))(
           *((_QWORD *)this + 5),
           *((_QWORD *)this + 13),
           4LL,
           Block,
           v14);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xCC,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcsharedworldinputtarget.cpp",
        (const char *)(unsigned int)v7);
    if ( Block )
      operator delete(Block);
  }
  v8 = (struct IInputTarget *)*((_QWORD *)this + 6);
  if ( v8 )
  {
    if ( !*((_BYTE *)a2 + 600) && !*((_BYTE *)this + 96) )
    {
      v9 = *((_QWORD *)this + 14);
      if ( v9 )
      {
        *((_QWORD *)a2 + 63) = v9;
        v10 = (*(__int64 (__fastcall **)(_QWORD, struct InputInfo *))(**((_QWORD **)this + 6) + 24LL))(
                *((_QWORD *)this + 6),
                a2);
        result = 2147549443LL;
        if ( v10 == -2147417853 )
          return result;
        if ( v10 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xDF,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcsharedworldinputtarget.cpp",
            (const char *)(unsigned int)v10);
          return (unsigned int)v10;
        }
        v8 = (struct IInputTarget *)*((_QWORD *)this + 6);
      }
    }
  }
  v12 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v12 )
  {
    if ( *v12 )
    {
      ISMTracing::Instance();
      ISMTracing::MPCSharedWorldInputTarget_DeliverInput_(v13, v8, *((_DWORD *)this + 14), a2, a3);
    }
  }
  return 0LL;
}
