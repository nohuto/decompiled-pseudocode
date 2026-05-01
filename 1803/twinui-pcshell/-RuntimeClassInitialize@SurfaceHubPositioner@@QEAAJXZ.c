/*
 * XREFs of ?RuntimeClassInitialize@SurfaceHubPositioner@@QEAAJXZ @ 0x1802BCC54
 * Callers:
 *     ??$MakeAndInitialize@VSurfaceHubPositioner@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1802BBD74 (--$MakeAndInitialize@VSurfaceHubPositioner@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnk.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x18008E774 (-IsPPIEdition@@YA_NXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18010A094 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?IsPPIFullFrameUI@@YA_NXZ @ 0x18012A188 (-IsPPIFullFrameUI@@YA_NXZ.c)
 */

__int64 __fastcall SurfaceHubPositioner::RuntimeClassInitialize(SurfaceHubPositioner *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v5[4]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+30h] [rbp-28h]
  __int64 v7; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( IsPPIEdition() && !IsPPIFullFrameUI() )
    *((_BYTE *)this + 552) = 1;
  v6 = 0LL;
  *(GUID *)v5 = GUID_fcc61b04_e266_4663_ae5d_88381aee8ab2;
  v7 = 0LL;
  v2 = CImmersiveShellComponent::RegisterServiceInformation(
         (SurfaceHubPositioner *)((char *)this + 40),
         (const struct CImmersiveShellComponent::ISC_SERVICE *)v5,
         1LL);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x71,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
