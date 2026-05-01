/*
 * XREFs of ?RelaunchWithDelay@AccessibilityExperienceManager@@AEAAJXZ @ 0x180259514
 * Callers:
 *     ?SubscribeToServices@AccessibilityExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180259D60 (-SubscribeToServices@AccessibilityExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?_OnViewEvent@AccessibilityExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18025AD60 (-_OnViewEvent@AccessibilityExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Int.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Details@WRL@Microsoft@@YAJPEAPEAVCMarshalStream@CMarshaledInterface@@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Z @ 0x180070F64 (--$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4M.c)
 *     ?InternalRelease@?$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18007120C (-InternalRelease@-$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_90df9b04abdace81241a7a17f06e4af1___ @ 0x1802575AC (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_90df9b04abdace81241a7a17f06e4af1___.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AccessibilityExperienceManager::RelaunchWithDelay(AccessibilityExperienceManager *this)
{
  int v1; // eax
  wil::details::in1diag3 *v2; // rcx
  unsigned __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  __int64 v11; // [rsp+40h] [rbp+10h] BYREF
  __int64 v12; // [rsp+48h] [rbp+18h] BYREF
  IUnknown *v13; // [rsp+50h] [rbp+20h] BYREF

  v12 = 0LL;
  LODWORD(v11) = 1;
  v13 = (IUnknown *)(((unsigned __int64)this + 136) & -(__int64)(this != 0LL));
  Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(&v12);
  Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(&v12);
  v1 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
         &v12,
         &GUID_326a2a2b_1237_4b24_8d66_3a12716d64fa,
         &v13,
         (int *)&v11);
  v2 = retaddr;
  if ( v1 < 0 )
  {
    v3 = (unsigned int)v1;
    v4 = 563LL;
LABEL_5:
    wil::details::in1diag3::_Log_Hr(
      v2,
      v4,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)v3);
    goto LABEL_6;
  }
  v11 = v12;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v11);
  v8 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_90df9b04abdace81241a7a17f06e4af1___(v6, v5, v7, &v11);
  Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(&v11);
  v2 = retaddr;
  if ( v8 < 0 )
  {
    v3 = (unsigned int)v8;
    v4 = 583LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(&v12);
  return 0LL;
}
