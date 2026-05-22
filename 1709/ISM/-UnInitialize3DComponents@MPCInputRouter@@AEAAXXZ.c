/*
 * XREFs of ?UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x1800A9C5C
 * Callers:
 *     ?On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z @ 0x1800AA300 (-On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x1800078D8 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x180007CD8 (-GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ.c)
 *     ?Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCInputTarget@@@Z @ 0x1800AA68C (-Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCInputTarget@@@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCInputRouter::UnInitialize3DComponents(MPCInputRouter *this)
{
  PSRWLOCK v2; // rax
  struct IMPCInputPostProcessor *PostProcessor; // rax
  int v4; // eax
  __int128 v5; // xmm1
  __int64 v6; // xmm0_8
  __int64 v7; // rcx
  _OWORD v8[3]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( *((_BYTE *)this + 812) )
  {
    MPC3DStateHelper::GetInstance();
    PostProcessor = MPC3DStateHelper::GetPostProcessor(v2);
    v4 = (*(__int64 (__fastcall **)(struct IMPCInputPostProcessor *, _QWORD))(*(_QWORD *)PostProcessor + 88LL))(
           PostProcessor,
           0LL);
    if ( v4 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x283,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v4);
      JUMPOUT(0x1800A9D2CLL);
    }
    memset(v8, 0, 0x28uLL);
    v5 = v8[1];
    *((_OWORD *)this + 48) = v8[0];
    v6 = *(_QWORD *)&v8[2];
    *((_OWORD *)this + 49) = v5;
    *((_QWORD *)this + 100) = v6;
    v7 = *((_QWORD *)this + 94);
    if ( v7 )
    {
      *((_QWORD *)this + 94) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    MPCInputRouter::Set3DFocusTarget(this, 0LL);
    *((_BYTE *)this + 812) = 0;
    *((_DWORD *)this + 208) = 0;
    *((_BYTE *)this + 828) = 0;
  }
}
