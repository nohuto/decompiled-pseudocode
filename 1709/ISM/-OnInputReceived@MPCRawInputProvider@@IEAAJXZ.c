/*
 * XREFs of ?OnInputReceived@MPCRawInputProvider@@IEAAJXZ @ 0x180066E98
 * Callers:
 *     ?InputReceivedStatic@MPCRawInputProvider@@KAJPEAXK0@Z @ 0x180066E30 (-InputReceivedStatic@MPCRawInputProvider@@KAJPEAXK0@Z.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$vector@UInputInfo@@V?$allocator@UInputInfo@@@std@@@std@@QEAA@XZ @ 0x180067378 (--1-$vector@UInputInfo@@V-$allocator@UInputInfo@@@std@@@std@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCRawInputProvider::OnInputReceived(MPCRawInputProvider *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  _QWORD *v3; // rcx
  _OWORD *v4; // rbx
  _OWORD *v5; // rdi
  _OWORD *v6; // rax
  _OWORD *v7; // rcx
  __int64 v8; // rdx
  int v9; // eax
  int v11[4]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v12; // [rsp+38h] [rbp-D0h]
  __int64 v13; // [rsp+40h] [rbp-C8h]
  _BYTE v14[2848]; // [rsp+48h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B90h] [rbp+A88h]

  v13 = -2LL;
  *(_OWORD *)v11 = 0LL;
  v12 = 0LL;
  if ( *((_BYTE *)this + 2681) )
  {
    v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 2712);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 2712));
    v3 = (_QWORD *)((char *)this + 2688);
    if ( v11 == (int *)((char *)this + 2688) )
    {
      v5 = *(_OWORD **)&v11[2];
      v4 = *(_OWORD **)v11;
    }
    else
    {
      v4 = (_OWORD *)*v3;
      *(_QWORD *)v11 = *v3;
      *v3 = 0LL;
      v5 = (_OWORD *)*((_QWORD *)this + 337);
      *(_QWORD *)&v11[2] = v5;
      *((_QWORD *)this + 337) = 0LL;
      v12 = *((_QWORD *)this + 338);
      *((_QWORD *)this + 338) = 0LL;
    }
    if ( v2 )
      LeaveCriticalSection(v2);
    if ( v4 != v5 )
    {
      while ( 1 )
      {
        v6 = v4;
        v7 = v14;
        v8 = 22LL;
        do
        {
          *v7 = *v6;
          v7[1] = v6[1];
          v7[2] = v6[2];
          v7[3] = v6[3];
          v7[4] = v6[4];
          v7[5] = v6[5];
          v7[6] = v6[6];
          v7 += 8;
          *(v7 - 1) = v6[7];
          v6 += 8;
          --v8;
        }
        while ( v8 );
        *v7 = *v6;
        v7[1] = v6[1];
        v9 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2), v14);
        if ( v9 < 0 )
          break;
        v4 += 178;
        if ( v4 == v5 )
          goto LABEL_14;
      }
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x90,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
        (const char *)(unsigned int)v9);
    }
  }
LABEL_14:
  std::vector<InputInfo>::~vector<InputInfo>(v11);
  return 0LL;
}
