/*
 * XREFs of ?InternalDeliverInput@MPCSharedWorldInputTarget@@AEAAJPEAUInputInfo@@_N@Z @ 0x1800ACB28
 * Callers:
 *     ?DeliverInput@MPCSharedWorldInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1800ACB10 (-DeliverInput@MPCSharedWorldInputTarget@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?DeliverInput@MPCSharedWorldInputTarget@@UEAAJPEAUInputInfo@@_N@Z @ 0x1800ACB20 (-DeliverInput@MPCSharedWorldInputTarget@@UEAAJPEAUInputInfo@@_N@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     McTemplateU0qqqq @ 0x180005A78 (McTemplateU0qqqq.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800367C4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180049F08 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCSharedWorldInputTarget_DeliverInput_@ISMTracing@@QEAAXPEAUIInputTarget@@KPEAUInputInfo@@_N@Z @ 0x1800AC41C (-MPCSharedWorldInputTarget_DeliverInput_@ISMTracing@@QEAAXPEAUIInputTarget@@KPEAUInputInfo@@_N@Z.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCSharedWorldInputTarget::InternalDeliverInput(
        MPCSharedWorldInputTarget *this,
        struct InputInfo *a2,
        bool a3,
        const char *a4)
{
  __int64 v7; // rdx
  struct InputInfo *v8; // rax
  char *v9; // rcx
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm1
  int v18; // eax
  __int64 v19; // rax
  int v20; // eax
  unsigned int v21; // esi
  struct IInputTarget *v23; // rsi
  _DWORD *v24; // rcx
  ISMTracing *v25; // rcx
  int v26; // [rsp+30h] [rbp-B48h] BYREF
  char v27; // [rsp+38h] [rbp-B40h] BYREF
  __int64 v28; // [rsp+2E0h] [rbp-898h]
  wil::details::in1diag3 *retaddr; // [rsp+B78h] [rbp+0h]

  if ( !a2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xBC,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcsharedworldinputtarget.cpp",
      a4);
    JUMPOUT(0x1800ACD1ELL);
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 4) != 0 )
    McTemplateU0qqqq((__int64)this, &MinInput_Log_InputInfo, 9, *(_DWORD *)a2, *((_DWORD *)a2 + 1), *((_DWORD *)a2 + 2));
  if ( !a3 )
  {
    v7 = 22LL;
    v26 = 4;
    v8 = a2;
    v9 = &v27;
    do
    {
      v10 = *((_OWORD *)v8 + 1);
      *(_OWORD *)v9 = *(_OWORD *)v8;
      v11 = *((_OWORD *)v8 + 2);
      *((_OWORD *)v9 + 1) = v10;
      v12 = *((_OWORD *)v8 + 3);
      *((_OWORD *)v9 + 2) = v11;
      v13 = *((_OWORD *)v8 + 4);
      *((_OWORD *)v9 + 3) = v12;
      v14 = *((_OWORD *)v8 + 5);
      *((_OWORD *)v9 + 4) = v13;
      v15 = *((_OWORD *)v8 + 6);
      *((_OWORD *)v9 + 5) = v14;
      v16 = *((_OWORD *)v8 + 7);
      v8 = (struct InputInfo *)((char *)v8 + 128);
      *((_OWORD *)v9 + 6) = v15;
      v9 += 128;
      *((_OWORD *)v9 - 1) = v16;
      --v7;
    }
    while ( v7 );
    v17 = *((_OWORD *)v8 + 1);
    *(_OWORD *)v9 = *(_OWORD *)v8;
    *((_OWORD *)v9 + 1) = v17;
    v28 = 0LL;
    v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, int *, int))(**((_QWORD **)this + 5) + 152LL))(
            *((_QWORD *)this + 5),
            *((_QWORD *)this + 13),
            4LL,
            &v26,
            2856);
    if ( v18 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xD2,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcsharedworldinputtarget.cpp",
        (const char *)(unsigned int)v18);
  }
  if ( !*((_QWORD *)this + 6)
    || *((_BYTE *)a2 + 776)
    || *((_BYTE *)this + 96)
    || (v19 = *((_QWORD *)this + 14)) == 0
    || (*((_QWORD *)a2 + 85) = v19,
        v20 = (*(__int64 (__fastcall **)(_QWORD, struct InputInfo *))(**((_QWORD **)this + 6) + 24LL))(
                *((_QWORD *)this + 6),
                a2),
        v21 = v20,
        v20 >= 0) )
  {
    v23 = (struct IInputTarget *)*((_QWORD *)this + 6);
    v24 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
    if ( v24 )
    {
      if ( *v24 )
      {
        ISMTracing::Instance();
        ISMTracing::MPCSharedWorldInputTarget_DeliverInput_(v25, v23, *((_DWORD *)this + 14), a2, a3);
      }
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xDD,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcsharedworldinputtarget.cpp",
      (const char *)(unsigned int)v20);
    return v21;
  }
}
