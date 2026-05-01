/*
 * XREFs of ??$MakeAndInitialize@VCCommonApplicationViewArrangePositionSnapshot@@UIApplicationViewArrangePosition@@AEAPEAUHWND__@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewArrangePosition@@@WRL@Microsoft@@@012@AEAPEAUHWND__@@@Z @ 0x180102D80
 * Callers:
 *     ?GetPosition@HolographicPositioner@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x1800FB3F0 (-GetPosition@HolographicPositioner@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180004240 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewArrangePositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180107360 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180107360.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewArrangePositionSnapshot,IApplicationViewArrangePosition,HWND__ * &>(
        __int64 *a1,
        HWND *a2)
{
  __int64 v4; // rcx
  struct tagRECT *v5; // rax
  struct tagRECT *v6; // rbx
  int LastError; // esi
  HWND v8; // rsi
  const char *v9; // r9
  int v10; // eax
  void (*v11)(void); // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = *a1;
  if ( v4 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *a1 = 0LL;
  v5 = (struct tagRECT *)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( !v5 )
    return (unsigned int)-2147024882;
  v5[2].left = 0;
  v5[2].top = 0;
  v5[2].right = 0;
  *(_QWORD *)&v5->left = &CCommonApplicationViewArrangePositionImpl::`vftable';
  SetRectEmpty(v5 + 1);
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)&v6[3]);
  v6[5].bottom = 1;
  *(_QWORD *)&v6->left = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CCommonApplicationViewArrangePositionImpl,Microsoft::WRL::FtmBase>::`vftable'{for `CCommonApplicationViewArrangePositionImpl'};
  *(_QWORD *)&v6[3].left = &CCommonApplicationViewArrangePositionSnapshot::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)&v6->left = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CCommonApplicationViewArrangePositionImpl,Microsoft::WRL::FtmBase>::`vftable'{for `CCommonApplicationViewArrangePositionImpl'};
  *(_QWORD *)&v6[3].left = &CCommonApplicationViewArrangePositionSnapshot::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
  v8 = *a2;
  if ( GetWindowRect(*a2, v6 + 1) )
  {
    if ( IsZoomed(v8) )
      v10 = 3;
    else
      v10 = 2 - IsIconic(v8);
    v6[2].left = v10;
    LastError = 0;
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x27,
                  (__int64)"internal\\onecoreuapshell\\private\\inc\\applicationviewpositionhwndhelpers.h",
                  v9);
  }
  if ( LastError >= 0 )
  {
    LastError = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewArrangePositionImpl,Microsoft::WRL::FtmBase>::QueryInterface(
                  v6,
                  &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2,
                  a1);
    if ( _InterlockedExchangeAdd(&v6[5].bottom, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(struct tagRECT *, __int64))(*(_QWORD *)&v6->left + 56LL))(v6, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
      {
        v11 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
        goto LABEL_20;
      }
    }
  }
  else if ( _InterlockedExchangeAdd(&v6[5].bottom, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(struct tagRECT *, __int64))(*(_QWORD *)&v6->left + 56LL))(v6, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
    {
      v11 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
LABEL_20:
      v11();
    }
  }
  return (unsigned int)LastError;
}
