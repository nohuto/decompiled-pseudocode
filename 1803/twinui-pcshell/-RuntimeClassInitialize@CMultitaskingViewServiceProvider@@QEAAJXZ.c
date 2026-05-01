/*
 * XREFs of ?RuntimeClassInitialize@CMultitaskingViewServiceProvider@@QEAAJXZ @ 0x180267BAC
 * Callers:
 *     ??$MakeAndInitialize@VCMultitaskingViewServiceProvider@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18026689C (--$MakeAndInitialize@VCMultitaskingViewServiceProvider@@UIUnknown@@$$V@Details@WRL@Microsoft@@YA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x18008FFB0 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18010A094 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?CreateInstance@TaskScheduler@shell@@SAJAEBU_GUID@@KKPEAPEAV12@@Z @ 0x1802672AC (-CreateInstance@TaskScheduler@shell@@SAJAEBU_GUID@@KKPEAPEAV12@@Z.c)
 *     ?Initialize@ForegroundStaging@@QEAAJXZ @ 0x1802674D0 (-Initialize@ForegroundStaging@@QEAAJXZ.c)
 *     ?_InitChildServices@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x1802683BC (-_InitChildServices@CMultitaskingViewServiceProvider@@AEAAJXZ.c)
 */

__int64 __fastcall CMultitaskingViewServiceProvider::RuntimeClassInitialize(CMultitaskingViewServiceProvider *this)
{
  int inited; // edi
  __int64 v3; // rdx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  const struct _GUID *v9; // rcx
  __int64 v10; // r8
  int Instance; // eax
  unsigned int v12; // ebx
  __int128 v13; // [rsp+20h] [rbp-79h] BYREF
  __int64 v14; // [rsp+30h] [rbp-69h]
  __int64 v15; // [rsp+38h] [rbp-61h]
  __int128 v16; // [rsp+40h] [rbp-59h]
  __int64 v17; // [rsp+50h] [rbp-49h]
  __int64 v18; // [rsp+58h] [rbp-41h]
  __int128 v19; // [rsp+60h] [rbp-39h]
  __int64 v20; // [rsp+70h] [rbp-29h]
  __int64 v21; // [rsp+78h] [rbp-21h]
  __int128 v22; // [rsp+80h] [rbp-19h]
  __int64 v23; // [rsp+90h] [rbp-9h]
  __int64 v24; // [rsp+98h] [rbp-1h]
  __int128 v25; // [rsp+A0h] [rbp+7h]
  __int64 v26; // [rsp+B0h] [rbp+17h]
  __int64 v27; // [rsp+B8h] [rbp+1Fh]
  __int128 v28; // [rsp+C0h] [rbp+27h]
  __int64 v29; // [rsp+D0h] [rbp+37h]
  __int64 v30; // [rsp+D8h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  inited = CObjectWithThreadUseDetection::InitApartmentId((CMultitaskingViewServiceProvider *)((char *)this + 112));
  if ( inited < 0 )
  {
    v3 = 103LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)(unsigned int)inited);
    return (unsigned int)inited;
  }
  inited = CMultitaskingViewServiceProvider::_InitChildServices((IUnknown *)this);
  if ( inited < 0 )
  {
    v3 = 105LL;
    goto LABEL_3;
  }
  v14 = 0LL;
  v15 = 0LL;
  v17 = *((_QWORD *)this + 23);
  v18 = 0LL;
  v20 = *((_QWORD *)this + 24);
  v21 = 0LL;
  v5 = *((_QWORD *)this + 22);
  v13 = *(_OWORD *)&SID_MultitaskingViewServiceProvider.Revision;
  v23 = v5;
  v24 = 0LL;
  v6 = *((_QWORD *)this + 25);
  v16 = *(_OWORD *)&SID_AllUpView.Revision;
  v26 = v6;
  v27 = 0LL;
  v7 = *((_QWORD *)this + 27);
  v19 = *(_OWORD *)&SID_PPIAllUpView.Revision;
  v29 = v7;
  v30 = 0LL;
  v22 = *(_OWORD *)&SID_MultitaskingViewGestureHandler.Revision;
  v25 = *(_OWORD *)&SID_MultitaskingViewVisibilityService.Revision;
  v28 = *(_OWORD *)&SID_ApplicationViewIconLoaderService.Revision;
  inited = CImmersiveShellComponent::RegisterServiceInformation(
             (CMultitaskingViewServiceProvider *)((char *)this + 24),
             (const struct CImmersiveShellComponent::ISC_SERVICE *)&v13,
             6LL);
  if ( inited < 0 )
  {
    v3 = 119LL;
    goto LABEL_3;
  }
  inited = ForegroundStaging::Initialize((CMultitaskingViewServiceProvider *)((char *)this + 248));
  if ( inited < 0 )
  {
    v3 = 122LL;
    goto LABEL_3;
  }
  Instance = shell::TaskScheduler::CreateInstance(v9, v8, v10, (struct TaskScheduler **)this + 30);
  v12 = Instance;
  if ( Instance < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x80,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)(unsigned int)Instance);
  return v12;
}
