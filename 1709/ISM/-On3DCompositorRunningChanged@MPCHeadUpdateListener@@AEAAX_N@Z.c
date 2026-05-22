/*
 * XREFs of ?On3DCompositorRunningChanged@MPCHeadUpdateListener@@AEAAX_N@Z @ 0x180069990
 * Callers:
 *     ?Initialize@MPCHeadUpdateListener@@AEAAXXZ @ 0x180069334 (-Initialize@MPCHeadUpdateListener@@AEAAXXZ.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x1800078D8 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x180007CD8 (-GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCHeadUpdateListener::On3DCompositorRunningChanged(MPCHeadUpdateListener *this, char a2)
{
  PSRWLOCK v3; // rax
  struct IMPCInputPostProcessor *PostProcessor; // rax
  int v5; // eax
  PSRWLOCK v6; // rax
  struct IMPCInputPostProcessor *v7; // rax
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    MPC3DStateHelper::GetInstance();
    PostProcessor = MPC3DStateHelper::GetPostProcessor(v3);
    v5 = (*(__int64 (__fastcall **)(struct IMPCInputPostProcessor *, BOOL (__fastcall *)(_OWORD *, char, __int64 (__fastcall ***)(_QWORD, GUID *, __int64))))(*(_QWORD *)PostProcessor + 80LL))(
           PostProcessor,
           MPCHeadUpdateListener::OnHeadEventOccurred);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0xA5,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadupdatelistener.cpp",
        (const char *)(unsigned int)v5);
      __debugbreak();
    }
    *((_WORD *)this + 88) = 257;
  }
  else
  {
    MPC3DStateHelper::GetInstance();
    v7 = MPC3DStateHelper::GetPostProcessor(v6);
    v8 = (*(__int64 (__fastcall **)(struct IMPCInputPostProcessor *, _QWORD))(*(_QWORD *)v7 + 80LL))(v7, 0LL);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0xAD,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadupdatelistener.cpp",
        (const char *)(unsigned int)v8);
      JUMPOUT(0x180069A3DLL);
    }
    *((_BYTE *)this + 176) = 0;
    *((_BYTE *)this + 178) = 1;
  }
}
