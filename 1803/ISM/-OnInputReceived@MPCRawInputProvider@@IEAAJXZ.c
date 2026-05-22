/*
 * XREFs of ?OnInputReceived@MPCRawInputProvider@@IEAAJXZ @ 0x18005E138
 * Callers:
 *     ?InputReceivedStatic@MPCRawInputProvider@@KAJPEAXK0@Z @ 0x18005E0D0 (-InputReceivedStatic@MPCRawInputProvider@@KAJPEAXK0@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$vector@ULegacyInputInfo@@V?$allocator@ULegacyInputInfo@@@std@@@std@@QEAA@XZ @ 0x18005E8F0 (--1-$vector@ULegacyInputInfo@@V-$allocator@ULegacyInputInfo@@@std@@@std@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCRawInputProvider::OnInputReceived(MPCRawInputProvider *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  _QWORD *v3; // rdx
  _OWORD *v4; // rbx
  _OWORD *v5; // rdi
  _OWORD *v6; // rax
  _OWORD *v7; // rcx
  __int64 v8; // rdx
  int v9; // eax
  int v11[4]; // [rsp+20h] [rbp-708h] BYREF
  __int64 v12; // [rsp+30h] [rbp-6F8h]
  __int64 v13; // [rsp+38h] [rbp-6F0h]
  _BYTE v14[1744]; // [rsp+40h] [rbp-6E8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+728h] [rbp+0h]

  v13 = -2LL;
  *(_OWORD *)v11 = 0LL;
  v12 = 0LL;
  if ( *((_BYTE *)this + 2025) )
  {
    v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 2056);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 2056));
    v3 = (_QWORD *)((char *)this + 2032);
    v4 = 0LL;
    v5 = 0LL;
    if ( v11 != (int *)((char *)this + 2032) )
    {
      v4 = (_OWORD *)*v3;
      *(_QWORD *)v11 = *v3;
      *v3 = 0LL;
      v5 = (_OWORD *)*((_QWORD *)this + 255);
      *(_QWORD *)&v11[2] = v5;
      *((_QWORD *)this + 255) = 0LL;
      v12 = *((_QWORD *)this + 256);
      *((_QWORD *)this + 256) = 0LL;
    }
    if ( v2 )
      LeaveCriticalSection(v2);
    for ( ; v4 != v5; v4 = (_OWORD *)((char *)v4 + 1736) )
    {
      v6 = v4;
      v7 = v14;
      v8 = 13LL;
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
      v7[2] = v6[2];
      v7[3] = v6[3];
      *((_QWORD *)v7 + 8) = *((_QWORD *)v6 + 8);
      v9 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2), v14);
      if ( v9 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x97,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
          (const char *)(unsigned int)v9);
        JUMPOUT(0x18005E2E9LL);
      }
    }
  }
  std::vector<LegacyInputInfo>::~vector<LegacyInputInfo>(v11);
  return 0LL;
}
