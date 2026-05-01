/*
 * XREFs of ?SubscribeToServices@ViewPresentationMediator@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801F6C00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShellWindowGrouping@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1801F6AE8 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShellWindowGrouping@@@wil@@CAX_NW.c)
 */

__int64 __fastcall ViewPresentationMediator::SubscribeToServices(
        ViewPresentationMediator *this,
        struct IServiceProvider *a2)
{
  _QWORD *v2; // r14
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (_QWORD *)((char *)this + 160);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 20);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, _QWORD *))a2->lpVtbl->QueryService)(
         a2,
         &GUID_45b9a96a_a75e_486a_be8f_12055bb1d55c,
         &GUID_45b9a96a_a75e_486a_be8f_12055bb1d55c,
         v2);
  if ( v5 < 0 )
  {
    v6 = 94LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\viewpresentationmediator\\lib\\viewpresentationmediator.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v2 + 56LL))(
         *v2,
         ((unsigned __int64)this + 80) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 40) >> 64));
  if ( v5 < 0 )
  {
    v6 = 95LL;
    goto LABEL_3;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(*(_QWORD *)*v2 + 112LL))(
         *v2,
         ((unsigned __int64)this + 88) & -(__int64)(this != (ViewPresentationMediator *)40));
  if ( v5 < 0 )
  {
    v6 = 96LL;
    goto LABEL_3;
  }
  wil::Feature<__WilFeatureTraits_Feature_TabShellWindowGrouping>::ReportUsageToService(v9, v8, v10);
  return 0LL;
}
