/*
 * XREFs of ??$MakeAndInitializeOnSharedSTAThread@VCLaunchActivatedEventArgs@@UIActivatedEventArgs@Activation@ApplicationModel@Windows@@AEAPEAUHSTRING__@@AEAPEAU6@@ComTaskPool@Internal@Windows@@SAJPEAPEAUIActivatedEventArgs@Activation@ApplicationModel@2@AEAPEAUHSTRING__@@1@Z @ 0x1801CE43C
 * Callers:
 *     ?_ActivateApplicationForLaunchHelperWithWindowFactory@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTIVATEOPTIONSINTERNAL@@PEAUHMONITOR__@@PEAUICoreWindowFactory@Core@UI@Windows@@PEAK@Z @ 0x1801CDE24 (-_ActivateApplicationForLaunchHelperWithWindowFactory@@YAJPEAUIApplicationActivationManagerPriv@.c)
 * Callees:
 *     ??1?$ComPtr@UIShellExperienceDispatcher@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180005860 (--1-$ComPtr@UIShellExperienceDispatcher@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@.c)
 *     ??0CMarshaledInterface@@QEAA@XZ @ 0x1800059B0 (--0CMarshaledInterface@@QEAA@XZ.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800239B0 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180023B7C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180048C98 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::MakeAndInitializeOnSharedSTAThread<CLaunchActivatedEventArgs,Windows::ApplicationModel::Activation::IActivatedEventArgs,HSTRING__ * &,HSTRING__ * &>(
        void **a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v4; // esi
  IUnknown *v5; // rdi
  IUnknown *v6; // rax
  IUnknown *v7; // rbx
  int *v8; // xmm1_8
  int v9; // ebx
  _QWORD v11[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v12; // [rsp+40h] [rbp-20h]
  int *v13; // [rsp+50h] [rbp-10h]
  int v14; // [rsp+90h] [rbp+30h] BYREF
  APTTYPE pAptType; // [rsp+98h] [rbp+38h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v17; // [rsp+A8h] [rbp+48h] BYREF

  *a1 = 0LL;
  v11[0] = a2;
  v11[1] = a3;
  if ( CoGetApartmentType(&pAptType, &pAptQualifier) < 0 || pAptType && pAptType != APTTYPE_MAINSTA )
    v4 = 33;
  else
    v4 = 65;
  v14 = 0;
  CMarshaledInterface::CMarshaledInterface((CMarshaledInterface *)&v17);
  v5 = 0LL;
  *(_QWORD *)&v12 = v11;
  *((_QWORD *)&v12 + 1) = &v17;
  v13 = &v14;
  v6 = (IUnknown *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v6);
    v5 = v7;
    v8 = v13;
    *(_OWORD *)&v7[2].lpVtbl = v12;
    v7->lpVtbl = (struct IUnknownVtbl *)off_180213468;
    v7[4].lpVtbl = (struct IUnknownVtbl *)v8;
  }
  v9 = Windows::Internal::ComTaskPool::RunTask(1, v4, 0, 0, v5, 0LL);
  if ( v5 )
    ((void (__fastcall *)(IUnknown *))v5->lpVtbl->Release)(v5);
  if ( v9 >= 0 )
  {
    v9 = v14;
    if ( v14 >= 0 )
      v9 = AgileGitPtr::CopyLocal((AgileGitPtr *)&v17, &GUID_cf651713_cd08_4fd8_b697_a281b6544e2e, a1);
  }
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::IShellExperienceDispatcher>::~ComPtr<Windows::Internal::Shell::Experience::IShellExperienceDispatcher>(&v17);
  return (unsigned int)v9;
}
