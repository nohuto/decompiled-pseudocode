/*
 * XREFs of ?Initialize@MPCExclusiveInputTarget@@IEAAJXZ @ 0x180087408
 * Callers:
 *     ?CreateMPCTarget@MPCInputRouter@@AEAAJPEAUIInputTarget@@_KPEAPEAUIMPCInputTarget@@@Z @ 0x180085C34 (-CreateMPCTarget@MPCInputRouter@@AEAAJPEAUIInputTarget@@_KPEAPEAUIMPCInputTarget@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180044E10 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCExclusiveInputTarget::Initialize(MPCExclusiveInputTarget *this)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rax
  __int128 v5; // xmm2
  __int128 v6; // xmm1
  __int64 v7; // xmm4_8
  unsigned int ImplicitCompositionInputSink; // eax
  unsigned int v9; // ebx
  __int64 v10; // rcx
  _QWORD v12[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v13; // [rsp+38h] [rbp-D0h]
  _QWORD v14[3]; // [rsp+78h] [rbp-90h] BYREF
  __int128 v15; // [rsp+90h] [rbp-78h]
  __int128 v16; // [rsp+A0h] [rbp-68h]
  __int64 v17; // [rsp+B0h] [rbp-58h]
  __int128 v18; // [rsp+B8h] [rbp-50h]
  __int128 v19; // [rsp+C8h] [rbp-40h]
  __int128 v20; // [rsp+D8h] [rbp-30h]
  __int64 v21; // [rsp+E8h] [rbp-20h]
  __int128 v22; // [rsp+F0h] [rbp-18h]
  __int128 v23; // [rsp+100h] [rbp-8h]
  __int128 v24; // [rsp+110h] [rbp+8h]
  __int64 v25; // [rsp+120h] [rbp+18h]
  __int128 v26; // [rsp+128h] [rbp+20h]
  __int128 v27; // [rsp+138h] [rbp+30h]
  __int128 v28; // [rsp+148h] [rbp+40h]
  __int64 v29; // [rsp+158h] [rbp+50h]
  _BYTE v30[40]; // [rsp+168h] [rbp+60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A0h] [rbp+98h]

  v12[1] = -2LL;
  v12[0] = 0LL;
  if ( !*((_DWORD *)this + 14)
    || (***((int (__fastcall ****)(_QWORD, GUID *, _QWORD *))this + 6))(
         *((_QWORD *)this + 6),
         &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631,
         v12) < 0 )
  {
    goto LABEL_8;
  }
  v2 = *((_QWORD *)this + 5);
  if ( v2 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = CoreUICreate((char *)this + 40);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x41,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcexclusiveinputtarget.cpp",
      (const char *)(unsigned int)v3);
    JUMPOUT(0x1800875D6LL);
  }
  LODWORD(v14[0]) = 232;
  HIDWORD(v14[0]) = *((_DWORD *)this + 14);
  *((_QWORD *)&v13 + 1) = *((_QWORD *)this + 8);
  v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)v12[0] + 72LL))(v12[0], v30);
  v5 = *(_OWORD *)v4;
  v6 = *(_OWORD *)(v4 + 16);
  v7 = *(_QWORD *)(v4 + 32);
  LODWORD(v13) = 3 - (((1LL << gdwDeviceFamily) & 0x224A) != 0);
  v18 = v13;
  v19 = v5;
  v20 = v6;
  v21 = v7;
  v26 = v13;
  v27 = v5;
  v28 = v6;
  v29 = v7;
  v22 = v13;
  v23 = v5;
  v24 = v6;
  v25 = v7;
  *(_OWORD *)&v14[1] = v13;
  v15 = v5;
  v16 = v6;
  v17 = v7;
  ImplicitCompositionInputSink = NtCreateImplicitCompositionInputSink(v14, (char *)this + 80);
  if ( ImplicitCompositionInputSink )
    v9 = wil::details::in1diag3::Return_Win32(
           retaddr,
           (void *)0x5A,
           (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcexclusiveinputtarget.cpp",
           (const char *)ImplicitCompositionInputSink);
  else
LABEL_8:
    v9 = 0;
  v10 = v12[0];
  if ( v12[0] )
  {
    v12[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return v9;
}
