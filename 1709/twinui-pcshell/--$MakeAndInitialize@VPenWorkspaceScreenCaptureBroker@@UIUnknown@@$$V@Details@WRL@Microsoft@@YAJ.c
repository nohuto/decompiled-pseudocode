/*
 * XREFs of ??$MakeAndInitialize@VPenWorkspaceScreenCaptureBroker@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800E7570
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VPenWorkspaceScreenCaptureBroker@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1800E74E0 (-CreateInstance@-$SimpleClassFactory@VPenWorkspaceScreenCaptureBroker@@$0A@@WRL@Microsoft@@UEAAJ.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsCurrentProcessStronglyNamed@CallerIdentity@@YAJPEA_N@Z @ 0x1801C1D1C (-IsCurrentProcessStronglyNamed@CallerIdentity@@YAJPEA_N@Z.c)
 *     ?IsProcessAppContainer@CallerIdentity@@YAJPEAXPEA_N@Z @ 0x1801C1DA8 (-IsProcessAppContainer@CallerIdentity@@YAJPEAXPEA_N@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<PenWorkspaceScreenCaptureBroker,IUnknown,>(_QWORD *a1)
{
  Microsoft::WRL::FtmBase *v2; // rax
  Microsoft::WRL::FtmBase *v3; // rbx
  int v4; // edi
  bool *v5; // rdx
  int IsCurrentProcessStronglyNamed; // eax
  __int64 v7; // rdx
  HANDLE CurrentProcess; // rax
  bool *v9; // r8
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v12; // [rsp+50h] [rbp+8h] BYREF
  char v13; // [rsp+58h] [rbp+10h] BYREF
  Microsoft::WRL::FtmBase *v14; // [rsp+60h] [rbp+18h]
  Microsoft::WRL::FtmBase *v15; // [rsp+68h] [rbp+20h]

  *a1 = 0LL;
  v2 = (Microsoft::WRL::FtmBase *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  v14 = v2;
  if ( !v2 )
    return (unsigned int)-2147024882;
  Microsoft::WRL::FtmBase::FtmBase(v2);
  *((_DWORD *)v3 + 13) = 1;
  *(_QWORD *)v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IPenWorkspaceScreenCaptureBroker>::`vftable'{for `Microsoft::WRL::FtmBase'};
  *((_QWORD *)v3 + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IPenWorkspaceScreenCaptureBroker>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IPenWorkspaceScreenCaptureBroker>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v3 = &PenWorkspaceScreenCaptureBroker::`vftable'{for `Microsoft::WRL::FtmBase'};
  *((_QWORD *)v3 + 5) = &PenWorkspaceScreenCaptureBroker::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IPenWorkspaceScreenCaptureBroker>'};
  *((_QWORD *)v3 + 7) = 0LL;
  *((_QWORD *)v3 + 8) = 0LL;
  v15 = v3;
  v14 = 0LL;
  v12 = 0;
  IsCurrentProcessStronglyNamed = CallerIdentity::IsCurrentProcessStronglyNamed((CallerIdentity *)&v12, v5);
  v4 = IsCurrentProcessStronglyNamed;
  if ( IsCurrentProcessStronglyNamed < 0 )
  {
    v7 = 21LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\screenshotbroker.cpp",
      (const char *)(unsigned int)IsCurrentProcessStronglyNamed);
    goto LABEL_14;
  }
  if ( !v12 )
    goto LABEL_13;
  v13 = 0;
  CurrentProcess = GetCurrentProcess();
  IsCurrentProcessStronglyNamed = CallerIdentity::IsProcessAppContainer(CurrentProcess, &v13, v9);
  v4 = IsCurrentProcessStronglyNamed;
  if ( IsCurrentProcessStronglyNamed < 0 )
  {
    v7 = 25LL;
    goto LABEL_7;
  }
  if ( !v13 )
  {
LABEL_13:
    v4 = 0;
LABEL_14:
    if ( v4 >= 0 )
      v4 = (**(__int64 (__fastcall ***)(Microsoft::WRL::FtmBase *, GUID *, _QWORD *))v3)(
             v3,
             &GUID_00000000_0000_0000_c000_000000000046,
             a1);
    goto LABEL_16;
  }
  v4 = -2147024891;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1C,
    (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\screenshotbroker.cpp",
    (const char *)0x80070005LL);
LABEL_16:
  if ( v3 )
    (*(void (__fastcall **)(Microsoft::WRL::FtmBase *))(*(_QWORD *)v3 + 16LL))(v3);
  return (unsigned int)v4;
}
