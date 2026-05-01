/*
 * XREFs of ?CImmersiveApplicationWindow_CreateInstance@@YAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x1800675E8
 * Callers:
 *     ?GetDestinationInformation@CImmersiveApp@@UEAAJPEAPEAUIImmersiveApplicationWindow@@PEAUtagRECT@@@Z @ 0x180053F50 (-GetDestinationInformation@CImmersiveApp@@UEAAJPEAPEAUIImmersiveApplicationWindow@@PEAUtagRECT@@.c)
 *     ?GetWindowsInternal@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@PEAPEAX@Z @ 0x180055D00 (-GetWindowsInternal@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@P.c)
 *     CImmersiveApp::CImmersiveWindowCollection::ForEach__lambda_5bb90e6a151c33247b74534399ffbb84___ @ 0x18005DA40 (CImmersiveApp--CImmersiveWindowCollection--ForEach__lambda_5bb90e6a151c33247b74534399ffbb84___.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApplicationWindow_CreateInstance(HWND a1, const struct _GUID *a2, void **a3)
{
  Microsoft::WRL::FtmBase *v3; // rdi
  Microsoft::WRL::FtmBase *v6; // rax
  Microsoft::WRL::FtmBase *v7; // rbx
  unsigned int v8; // ebx

  *a3 = 0LL;
  v3 = 0LL;
  v6 = (Microsoft::WRL::FtmBase *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    Microsoft::WRL::FtmBase::FtmBase(v6);
    *((_DWORD *)v7 + 13) = 1;
    *(_QWORD *)v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IImmersiveApplicationWindow>::`vftable'{for `Microsoft::WRL::FtmBase'};
    *((_QWORD *)v7 + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IImmersiveApplicationWindow>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveApplicationWindow>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_QWORD *)v7 + 7) = a1;
    *(_QWORD *)v7 = &CImmersiveApplicationWindow::`vftable'{for `Microsoft::WRL::FtmBase'};
    v3 = v7;
    *((_QWORD *)v7 + 5) = &CImmersiveApplicationWindow::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveApplicationWindow>'};
  }
  v8 = v3 == 0LL ? 0x8007000E : 0;
  if ( v3 )
  {
    v8 = (**(__int64 (__fastcall ***)(Microsoft::WRL::FtmBase *, GUID *, void **))v3)(
           v3,
           &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
           a3);
    (*(void (__fastcall **)(Microsoft::WRL::FtmBase *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return v8;
}
