/*
 * XREFs of ?SubscribeToServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1802C03B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180093198 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopPositioner::SubscribeToServices(CDesktopPositioner *this, struct IServiceProvider *a2)
{
  char *v2; // rbx
  int v5; // ebx
  __int64 v6; // rdx
  _QWORD *v8; // r14
  __int64 v9; // rcx
  __int64 v10; // r8
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (char *)this + 136;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 17);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &SID_IImmersiveMonitorService,
         &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
         v2);
  if ( v5 < 0 )
  {
    v6 = 73LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 18);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &IID_IApplicationPositionPersistence,
         &GUID_f876b69a_7b8e_4f46_864c_a0b0ea3e49c2,
         (char *)this + 144);
  if ( v5 < 0 )
  {
    v6 = 74LL;
    goto LABEL_3;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 19);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
         &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
         (char *)this + 152);
  if ( v5 < 0 )
  {
    v6 = 75LL;
    goto LABEL_3;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 20);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &GUID_55fa44d3_fe5d_40c3_bc17_14db2012770a,
         &GUID_55fa44d3_fe5d_40c3_bc17_14db2012770a,
         (char *)this + 160);
  if ( v5 < 0 )
  {
    v6 = 76LL;
    goto LABEL_3;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 21);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &GUID_2c08adf0_a386_4b35_9250_0fe183476fcc,
         &GUID_2c08adf0_a386_4b35_9250_0fe183476fcc,
         (char *)this + 168);
  if ( v5 < 0 )
  {
    v6 = 77LL;
    goto LABEL_3;
  }
  v8 = (_QWORD *)((char *)this + 176);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 22);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
         &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
         (char *)this + 176);
  if ( v5 < 0 )
  {
    v6 = 78LL;
    goto LABEL_3;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 23);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
         &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
         (char *)this + 184);
  if ( v5 < 0 )
  {
    v6 = 79LL;
    goto LABEL_3;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 25);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &GUID_b424c6f2_89a8_4bf1_8946_41454468d78c,
         &GUID_b424c6f2_89a8_4bf1_8946_41454468d78c,
         (char *)this + 200);
  if ( v5 < 0 )
  {
    v6 = 80LL;
    goto LABEL_3;
  }
  wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService(v9, 0, v10);
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 21) + 88LL))(
         *((_QWORD *)this + 21),
         ((unsigned __int64)this + 96) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 40) >> 64),
         (char *)this + 232);
  if ( v5 < 0 )
  {
    v6 = 87LL;
    goto LABEL_3;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(*(_QWORD *)*v8 + 72LL))(
         *v8,
         ((unsigned __int64)this + 104) & -(__int64)(this != (CDesktopPositioner *)40),
         (char *)this + 236);
  if ( v5 < 0 )
  {
    v6 = 88LL;
    goto LABEL_3;
  }
  (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v8 + 24LL))(*v8, (char *)this + 128);
  return 0LL;
}
