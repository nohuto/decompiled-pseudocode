/*
 * XREFs of ?On3DCompositorRunningChanged@MPCHeadUpdateListener@@AEAAX_N@Z @ 0x180060EF0
 * Callers:
 *     ?Initialize@MPCHeadUpdateListener@@AEAAXXZ @ 0x180060794 (-Initialize@MPCHeadUpdateListener@@AEAAXXZ.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x18000766C (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x180007E1C (-GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCHeadUpdateListener::On3DCompositorRunningChanged(MPCHeadUpdateListener *this, char a2)
{
  PSRWLOCK v4; // rax
  struct IMPCInputPostProcessor *PostProcessor; // rcx
  __int64 (__fastcall *v6)(struct IMPCInputPostProcessor *, BOOL (__fastcall *)(_OWORD *, char, __int64 (__fastcall ***)(_QWORD, GUID *, __int64))); // rax
  int v7; // eax
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  MPC3DStateHelper::GetInstance();
  PostProcessor = MPC3DStateHelper::GetPostProcessor(v4);
  v6 = *(__int64 (__fastcall **)(struct IMPCInputPostProcessor *, BOOL (__fastcall *)(_OWORD *, char, __int64 (__fastcall ***)(_QWORD, GUID *, __int64))))(*(_QWORD *)PostProcessor + 88LL);
  if ( a2 )
  {
    v7 = v6(PostProcessor, MPCHeadUpdateListener::OnHeadEventOccurred);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xA5,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadupdatelistener.cpp",
        (const char *)(unsigned int)v7);
      __debugbreak();
    }
    *((_WORD *)this + 88) = 257;
  }
  else
  {
    v8 = v6(PostProcessor, 0LL);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xAD,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadupdatelistener.cpp",
        (const char *)(unsigned int)v8);
      JUMPOUT(0x180060F8ELL);
    }
    *((_BYTE *)this + 176) = 0;
    *((_BYTE *)this + 178) = 1;
  }
}
