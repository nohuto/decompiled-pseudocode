/*
 * XREFs of ?GetPosition@HolographicPositioner@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x1800D7FB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800024A8 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18000408C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VCCommonApplicationViewArrangePositionImpl@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E24F0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VCCommonApplicationViewArrangePositionImpl@@U-$I.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VCCommonApplicationViewArrangePositionImpl@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800E25F0 (-Release@-$RuntimeClass@U-$InterfaceList@VCCommonApplicationViewArrangePositionImpl@@U-$Interfac.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HolographicPositioner::GetPosition(
        HolographicPositioner *this,
        HWND a2,
        const struct _GUID *a3,
        void **a4)
{
  char *v7; // rax
  char *v8; // rbx
  int LastError; // edi
  const char *v10; // r9
  int v11; // eax
  char *v12; // rcx
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // eax
  __int64 (__fastcall ***v16)(_QWORD, const struct _GUID *, void **); // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 (__fastcall ***v19)(_QWORD, const struct _GUID *, void **); // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  v19 = 0LL;
  v7 = (char *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( !v7 )
  {
    LastError = -2147024882;
LABEL_14:
    v13 = (unsigned int)LastError;
    v14 = 490LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)v13);
    goto LABEL_19;
  }
  *((_DWORD *)v7 + 6) = 0;
  *((_DWORD *)v7 + 7) = 0;
  *((_DWORD *)v7 + 8) = 0;
  *(_QWORD *)v7 = &CCommonApplicationViewArrangePositionImpl::`vftable';
  SetRectEmpty((LPRECT)(v7 + 8));
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v8 + 40));
  *((_DWORD *)v8 + 17) = 1;
  *(_QWORD *)v8 = &CCommonApplicationViewArrangePositionSnapshot::`vftable'{for `CCommonApplicationViewArrangePositionImpl'};
  *((_QWORD *)v8 + 5) = &CCommonApplicationViewArrangePositionSnapshot::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v8 = &CCommonApplicationViewArrangePositionSnapshot::`vftable'{for `CCommonApplicationViewArrangePositionImpl'};
  *((_QWORD *)v8 + 5) = &CCommonApplicationViewArrangePositionSnapshot::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  if ( GetWindowRect(a2, (LPRECT)(v8 + 8)) )
  {
    if ( IsZoomed(a2) )
      v11 = 3;
    else
      v11 = 2 - IsIconic(a2);
    *((_DWORD *)v8 + 6) = v11;
    LastError = 0;
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x27,
                  (__int64)"internal\\onecoreuapshell\\private\\inc\\applicationviewpositionhwndhelpers.h",
                  v10);
  }
  v12 = v8;
  if ( LastError >= 0 )
  {
    LastError = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CCommonApplicationViewArrangePositionImpl,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
                  v8,
                  &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2,
                  &v19);
    v12 = v8;
  }
  Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CCommonApplicationViewArrangePositionImpl,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v12);
  if ( LastError < 0 )
    goto LABEL_14;
  v15 = (**v19)(v19, a3, a4);
  LastError = v15;
  if ( v15 < 0 )
  {
    v13 = (unsigned int)v15;
    v14 = 491LL;
    goto LABEL_17;
  }
  LastError = 0;
LABEL_19:
  v16 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, const struct _GUID *, void **)))(*v16)[2])(v16);
  }
  return (unsigned int)LastError;
}
