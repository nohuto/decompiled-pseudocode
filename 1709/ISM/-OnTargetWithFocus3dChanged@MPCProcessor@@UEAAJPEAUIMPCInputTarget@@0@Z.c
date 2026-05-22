/*
 * XREFs of ?OnTargetWithFocus3dChanged@MPCProcessor@@UEAAJPEAUIMPCInputTarget@@0@Z @ 0x180053140
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180049F08 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCProcessor_OnTargetWithFocusChanged_@ISMTracing@@QEAAX_NPEAUIInputTarget@@1@Z @ 0x1800525CC (-MPCProcessor_OnTargetWithFocusChanged_@ISMTracing@@QEAAX_NPEAUIInputTarget@@1@Z.c)
 *     ?MPCProcessor_FocusHandLost_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo@@@Z @ 0x180052714 (-MPCProcessor_FocusHandLost_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo@@@Z.c)
 *     ?MPCProcessor_FocusHandDetected_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo@@@Z @ 0x1800528A4 (-MPCProcessor_FocusHandDetected_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo@@@Z.c)
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@KAEAUInputInfo@@_N@Z @ 0x180067D8C (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCProcessor::OnTargetWithFocus3dChanged(
        MPCProcessor *this,
        struct IMPCInputTarget *a2,
        struct IMPCInputTarget *a3)
{
  _DWORD *v6; // rcx
  ISMTracing *v7; // rcx
  char v8; // bl
  bool v9; // zf
  char v10; // al
  char v11; // al
  __int64 *v12; // rdi
  __int64 *v13; // rbx
  __int128 *v14; // rax
  __int64 v15; // rdx
  __int128 *v16; // rcx
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm1
  struct IMPCInputTarget *v26; // rax
  int v27; // eax
  __int64 v28; // r8
  _DWORD *v29; // rcx
  ISMTracing *v30; // rcx
  __int64 *v31; // rax
  __int64 *i; // rax
  __int64 *v33; // rdi
  __int64 *v34; // rbx
  __int128 *v35; // rax
  __int64 v36; // rdx
  __int128 *v37; // rcx
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm1
  int v47; // eax
  __int64 v48; // r8
  _DWORD *v49; // rcx
  ISMTracing *v50; // rcx
  __int64 *v51; // rax
  __int64 *j; // rax
  int v54; // [rsp+20h] [rbp-E0h]
  _QWORD v55[165]; // [rsp+30h] [rbp-D0h] BYREF
  int v56; // [rsp+55Ch] [rbp+45Ch]
  wil::details::in1diag3 *retaddr; // [rsp+B98h] [rbp+A98h]

  v6 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v6 && *v6 )
  {
    ISMTracing::Instance();
    ISMTracing::MPCProcessor_OnTargetWithFocusChanged_(v7, 1, a2, a3);
  }
  if ( !a2 || (v8 = 1, (*(unsigned int (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)a2 + 56LL))(a2)) )
    v8 = 0;
  if ( !a3
    || (v9 = (*(unsigned int (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)a3 + 56LL))(a3) == 0, v10 = 1, !v9) )
  {
    v10 = 0;
  }
  if ( !v8 || (v9 = v10 == 0, v11 = 1, v9) )
    v11 = 0;
  *((_BYTE *)this + 589) = v11;
  v12 = (__int64 *)*((_QWORD *)this + 71);
  v13 = (__int64 *)*v12;
  while ( v13 != v12 )
  {
    v14 = (__int128 *)(v13 + 5);
    v15 = 22LL;
    v16 = (__int128 *)v55;
    do
    {
      v17 = *v14;
      v18 = v14[1];
      v14 += 8;
      *v16 = v17;
      v19 = *(v14 - 6);
      v16[1] = v18;
      v20 = *(v14 - 5);
      v16[2] = v19;
      v21 = *(v14 - 4);
      v16[3] = v20;
      v22 = *(v14 - 3);
      v16[4] = v21;
      v23 = *(v14 - 2);
      v16[5] = v22;
      v24 = *(v14 - 1);
      v16[6] = v23;
      v16 += 8;
      *(v16 - 1) = v24;
      --v15;
    }
    while ( v15 );
    v25 = v14[1];
    *v16 = *v14;
    v16[1] = v25;
    if ( a2 )
    {
      v26 = (struct IMPCInputTarget *)*((_QWORD *)this + 66);
      if ( v26 && a2 == v26 && v56 == *((_DWORD *)this + 146) )
      {
        *((_BYTE *)this + 588) = 1;
      }
      else
      {
        LOBYTE(v54) = 0;
        v27 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(0LL, 4LL, HIDWORD(v55[0]), v55, v54);
        if ( v27 < 0 )
        {
          wil::details::in1diag3::_FailFast_Hr(
            retaddr,
            (void *)0xF2,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcprocessor.cpp",
            (const char *)(unsigned int)v27);
          __debugbreak();
        }
        LOBYTE(v28) = *((_BYTE *)this + 589);
        (*(void (__fastcall **)(struct IMPCInputTarget *, _QWORD *, __int64))(*(_QWORD *)a2 + 48LL))(a2, v55, v28);
        v29 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
        if ( v29 && *v29 )
        {
          ISMTracing::Instance();
          ISMTracing::MPCProcessor_FocusHandLost_(v30, a2, (struct InputInfo *)v55);
        }
      }
    }
    if ( !*((_BYTE *)v13 + 25) )
    {
      v31 = (__int64 *)v13[2];
      if ( *((_BYTE *)v31 + 25) )
      {
        for ( i = (__int64 *)v13[1]; !*((_BYTE *)i + 25) && v13 == (__int64 *)i[2]; i = (__int64 *)i[1] )
          v13 = i;
        v13 = i;
      }
      else
      {
        do
        {
          v13 = v31;
          v31 = (__int64 *)*v31;
        }
        while ( !*((_BYTE *)v31 + 25) );
      }
    }
  }
  v33 = (__int64 *)*((_QWORD *)this + 71);
  v34 = (__int64 *)*v33;
  while ( v34 != v33 )
  {
    v35 = (__int128 *)(v34 + 5);
    v36 = 22LL;
    v37 = (__int128 *)v55;
    do
    {
      v38 = *v35;
      v39 = v35[1];
      v35 += 8;
      *v37 = v38;
      v40 = *(v35 - 6);
      v37[1] = v39;
      v41 = *(v35 - 5);
      v37[2] = v40;
      v42 = *(v35 - 4);
      v37[3] = v41;
      v43 = *(v35 - 3);
      v37[4] = v42;
      v44 = *(v35 - 2);
      v37[5] = v43;
      v45 = *(v35 - 1);
      v37[6] = v44;
      v37 += 8;
      *(v37 - 1) = v45;
      --v36;
    }
    while ( v36 );
    v46 = v35[1];
    *v37 = *v35;
    v37[1] = v46;
    if ( a3 )
    {
      if ( *((_BYTE *)this + 588) && a3 == *((struct IMPCInputTarget **)this + 66) && v56 == *((_DWORD *)this + 146) )
        *((_BYTE *)this + 588) = 0;
      LOBYTE(v54) = 0;
      v47 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(0LL, 5LL, HIDWORD(v55[0]), v55, v54);
      if ( v47 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0x107,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcprocessor.cpp",
          (const char *)(unsigned int)v47);
        JUMPOUT(0x180053504LL);
      }
      LOBYTE(v48) = *((_BYTE *)this + 589);
      (*(void (__fastcall **)(struct IMPCInputTarget *, _QWORD *, __int64))(*(_QWORD *)a3 + 48LL))(a3, v55, v48);
      v49 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
      if ( v49 && *v49 )
      {
        ISMTracing::Instance();
        ISMTracing::MPCProcessor_FocusHandDetected_(v50, a3, (struct InputInfo *)v55);
      }
    }
    if ( !*((_BYTE *)v34 + 25) )
    {
      v51 = (__int64 *)v34[2];
      if ( *((_BYTE *)v51 + 25) )
      {
        for ( j = (__int64 *)v34[1]; !*((_BYTE *)j + 25) && v34 == (__int64 *)j[2]; j = (__int64 *)j[1] )
          v34 = j;
        v34 = j;
      }
      else
      {
        do
        {
          v34 = v51;
          v51 = (__int64 *)*v51;
        }
        while ( !*((_BYTE *)v51 + 25) );
      }
    }
  }
  return 0LL;
}
