/*
 * XREFs of ?OnViewShown@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180177940
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??$MakeAndInitialize@VCJumpViewExperienceEventArgs@@UIJumpViewExperienceEventArgs@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@@Details@WRL@Microsoft@@YAJPEAPEAUIJumpViewExperienceEventArgs@Experience@Shell@Internal@Windows@@$$QEAPEAUHSTRING__@@@Z @ 0x180174FA4 (--$MakeAndInitialize@VCJumpViewExperienceEventArgs@@UIJumpViewExperienceEventArgs@Experience@She.c)
 *     ??0?$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x180175578 (--0-$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType.c)
 *     ??1ShowJumpViewActivity@JumpViewProvider@@QEAA@XZ @ 0x180175C28 (--1ShowJumpViewActivity@JumpViewProvider@@QEAA@XZ.c)
 *     ?CancelJumpViewTelemetryTimeout@CJumpViewExperienceManager@@AEAAXXZ @ 0x1801763A4 (-CancelJumpViewTelemetryTimeout@CJumpViewExperienceManager@@AEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180178688 (-Stop@-$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderT.c)
 *     ??$InvokeAll@PEAVCJumpViewExperienceManager@@PEAUIJumpViewExperienceEventArgs@Experience@Shell@Internal@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAVJumpViewExperienceManager@Experience@Shell@Internal@Windows@@PEAVJumpViewExperienceEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCJumpViewExperienceManager@@PEAUIJumpViewExperienceEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x18025BD84 (--$InvokeAll@PEAVCJumpViewExperienceManager@@PEAUIJumpViewExperienceEventArgs@Experience@Shell@I.c)
 */

__int64 __fastcall CJumpViewExperienceManager::OnViewShown(
        CJumpViewExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  CJumpViewExperienceEventArgs *v7; // [rsp+20h] [rbp-168h] BYREF
  HSTRING v8; // [rsp+28h] [rbp-160h] BYREF
  _QWORD v9[40]; // [rsp+30h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  wil::ActivityBase<JumpViewProvider,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<JumpViewProvider,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v9,
    (__int64)this + 432,
    **((_DWORD **)this + 60) == 1);
  v7 = 0LL;
  v9[0] = &JumpViewProvider::ShowJumpViewActivity::`vftable';
  v8 = (HSTRING)*((_QWORD *)this + 33);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<CJumpViewExperienceEventArgs,Windows::Internal::Shell::Experience::IJumpViewExperienceEventArgs,HSTRING__ *>(
         &v7,
         &v8);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v3 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::JumpViewExperienceManager *,Windows::Internal::Shell::Experience::JumpViewExperienceEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CJumpViewExperienceManager *,Windows::Internal::Shell::Experience::IJumpViewExperienceEventArgs *>(
           (char *)this + 8,
           (char *)this - 64,
           v7);
    v4 = v3;
    if ( v3 >= 0 )
    {
      CJumpViewExperienceManager::CancelJumpViewTelemetryTimeout((CJumpViewExperienceManager *)((char *)this - 64));
      wil::ActivityBase<JumpViewProvider,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v9);
      v4 = 0;
      goto LABEL_7;
    }
    v5 = 407LL;
  }
  else
  {
    v5 = 406LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
    (const char *)(unsigned int)v3);
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
  JumpViewProvider::ShowJumpViewActivity::~ShowJumpViewActivity((JumpViewProvider::ShowJumpViewActivity *)v9);
  return v4;
}
