/*
 * XREFs of ?OnTargetWithFocus3dChanged@MPCClickerProcessor@@UEAAJPEAUIMPCInputTarget@@0@Z @ 0x180054C00
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180049F08 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCProcessor_FocusHandLost_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo@@@Z @ 0x180052714 (-MPCProcessor_FocusHandLost_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo@@@Z.c)
 *     ?MPCProcessor_FocusHandDetected_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo@@@Z @ 0x1800528A4 (-MPCProcessor_FocusHandDetected_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo@@@Z.c)
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@KAEAUInputInfo@@_N@Z @ 0x180067D8C (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCClickerProcessor::OnTargetWithFocus3dChanged(
        MPCClickerProcessor *this,
        struct IMPCInputTarget *a2,
        struct IMPCInputTarget *a3)
{
  bool v6; // bp
  bool v7; // al
  bool v8; // bp
  __int64 v9; // rdx
  _OWORD *v10; // rax
  _OWORD *v11; // rcx
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm1
  struct IMPCInputTarget *v20; // rax
  int v21; // eax
  __int64 v22; // r8
  _DWORD *v23; // rcx
  ISMTracing *v24; // rcx
  int v25; // eax
  __int64 v26; // r8
  _DWORD *v27; // rcx
  ISMTracing *v28; // rcx
  int v30; // [rsp+20h] [rbp-B58h]
  _QWORD v31[356]; // [rsp+30h] [rbp-B48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B78h] [rbp+0h]

  v6 = a2 && !(*(unsigned int (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)a2 + 56LL))(a2);
  v7 = a3 && !(*(unsigned int (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)a3 + 56LL))(a3);
  v8 = v6 && v7;
  v9 = 22LL;
  v10 = (_OWORD *)((char *)this + 568);
  v11 = v31;
  do
  {
    v12 = v10[1];
    *v11 = *v10;
    v13 = v10[2];
    v11[1] = v12;
    v14 = v10[3];
    v11[2] = v13;
    v15 = v10[4];
    v11[3] = v14;
    v16 = v10[5];
    v11[4] = v15;
    v17 = v10[6];
    v11[5] = v16;
    v18 = v10[7];
    v10 += 8;
    v11[6] = v17;
    v11 += 8;
    *(v11 - 1) = v18;
    --v9;
  }
  while ( v9 );
  v19 = v10[1];
  *v11 = *v10;
  v11[1] = v19;
  if ( a2 )
  {
    v20 = (struct IMPCInputTarget *)*((_QWORD *)this + 66);
    if ( v20 && a2 == v20 )
    {
      *((_BYTE *)this + 3416) = 1;
    }
    else
    {
      v21 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(5LL, 0LL, HIDWORD(v31[0]), v31, 0);
      if ( v21 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0xC5,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcclickerprocessor.cpp",
          (const char *)(unsigned int)v21);
        __debugbreak();
      }
      LOBYTE(v22) = v8;
      (*(void (__fastcall **)(struct IMPCInputTarget *, _QWORD *, __int64))(*(_QWORD *)a2 + 48LL))(a2, v31, v22);
      v23 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
      if ( v23 && *v23 )
      {
        ISMTracing::Instance();
        ISMTracing::MPCProcessor_FocusHandLost_(v24, a2, (struct InputInfo *)v31);
      }
    }
  }
  if ( a3 )
  {
    if ( *((_BYTE *)this + 3416) && a3 == *((struct IMPCInputTarget **)this + 66) )
      *((_BYTE *)this + 3416) = 0;
    LOBYTE(v30) = 0;
    v25 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(1LL, 0LL, HIDWORD(v31[0]), v31, v30);
    if ( v25 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0xD4,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcclickerprocessor.cpp",
        (const char *)(unsigned int)v25);
      __debugbreak();
    }
    LOBYTE(v26) = v8;
    (*(void (__fastcall **)(struct IMPCInputTarget *, _QWORD *, __int64))(*(_QWORD *)a3 + 48LL))(a3, v31, v26);
    v27 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
    if ( v27 && *v27 )
    {
      ISMTracing::Instance();
      ISMTracing::MPCProcessor_FocusHandDetected_(v28, a3, (struct InputInfo *)v31);
    }
  }
  return 0LL;
}
