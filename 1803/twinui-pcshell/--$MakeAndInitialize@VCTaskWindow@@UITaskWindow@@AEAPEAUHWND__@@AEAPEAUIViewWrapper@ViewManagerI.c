/*
 * XREFs of ??$MakeAndInitialize@VCTaskWindow@@UITaskWindow@@AEAPEAUHWND__@@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@AEAW4TASK_WINDOW_TYPE@@AEAPEAUIImmersiveApplicationInternal@@AEAPEBUtagRECT@@AEAPEBUAPPLICATION_VIEW_DATA@@@Details@WRL@Microsoft@@YAJPEAPEAUITaskWindow@@AEAPEAUHWND__@@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@AEAW4TASK_WINDOW_TYPE@@AEAPEAUIImmersiveApplicationInternal@@AEAPEBUtagRECT@@AEAPEBUAPPLICATION_VIEW_DATA@@@Z @ 0x18013419C
 * Callers:
 *     ?s_CreateInstance@CTaskWindow@@SAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4TASK_WINDOW_TYPE@@PEAUIImmersiveApplicationInternal@@PEBUtagRECT@@PEBUAPPLICATION_VIEW_DATA@@AEBU_GUID@@PEAPEAX@Z @ 0x180134EDC (-s_CreateInstance@CTaskWindow@@SAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal.c)
 * Callees:
 *     ?RuntimeClassInitialize@CTaskWindow@@QEAAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4TASK_WINDOW_TYPE@@PEAUIImmersiveApplicationInternal@@PEBUtagRECT@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x180047EFC (-RuntimeClassInitialize@CTaskWindow@@QEAAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0CTaskWindow@@QEAA@XZ @ 0x1800F2A84 (--0CTaskWindow@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@QEAAXPEAVSizeConversionViewInfo@@@Z @ 0x1800F7954 (-Attach@-$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@QEAAXPEAVSizeConversionViewInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CTaskWindow,ITaskWindow,HWND__ * &,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper * &,enum TASK_WINDOW_TYPE &,IImmersiveApplicationInternal * &,tagRECT const * &,APPLICATION_VIEW_DATA const * &>(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3,
        int *a4,
        __int64 *a5,
        __int64 *a6,
        __int64 *a7)
{
  CTaskWindow *v11; // rax
  int v12; // edi
  CTaskWindow *v13; // rax
  int v14; // r9d
  __int64 v15; // rbx
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v11 = (CTaskWindow *)operator new(0x98uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v11 )
  {
    v13 = CTaskWindow::CTaskWindow(v11);
    v17 = 0LL;
    Microsoft::WRL::ComPtr<SizeConversionViewInfo>::Attach(&v17, (__int64)v13);
    v14 = *a4;
    v15 = v17;
    v12 = CTaskWindow::RuntimeClassInitialize(v17, *a2, *a3, v14, *a5, *a6, *a7);
    if ( v12 >= 0 )
      v12 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v15)(
              v15,
              &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee,
              a1);
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v12;
}
