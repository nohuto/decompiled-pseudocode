/*
 * XREFs of ?s_CreateInstance@CTaskWindow@@SAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4TASK_WINDOW_TYPE@@PEAUIImmersiveApplicationInternal@@PEBUtagRECT@@PEBUAPPLICATION_VIEW_DATA@@AEBU_GUID@@PEAPEAX@Z @ 0x180064ED4
 * Callers:
 *     ?HandleCreation@CCharmsWindowManager@@UEAAXPEAUHWND__@@@Z @ 0x18003C740 (-HandleCreation@CCharmsWindowManager@@UEAAXPEAUHWND__@@@Z.c)
 *     ?AddFirstView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x18005A208 (-AddFirstView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 * Callees:
 *     ??0CTaskWindow@@QEAA@XZ @ 0x180064BBC (--0CTaskWindow@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CTaskWindow@@QEAAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4TASK_WINDOW_TYPE@@PEAUIImmersiveApplicationInternal@@PEBUtagRECT@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x18006501C (-RuntimeClassInitialize@CTaskWindow@@QEAAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CTaskWindow::s_CreateInstance(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _QWORD *a8)
{
  _QWORD *v12; // rsi
  CTaskWindow *v13; // rax
  int v14; // ebx
  CTaskWindow *v15; // rdi
  _QWORD *v16; // rcx

  v12 = a8;
  *a8 = 0LL;
  a8 = 0LL;
  v13 = (CTaskWindow *)operator new(0x98uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v13 )
  {
    v14 = -2147024882;
    goto LABEL_10;
  }
  v15 = CTaskWindow::CTaskWindow(v13);
  v14 = CTaskWindow::RuntimeClassInitialize(v15, a1, a2, a3, a4, a5, a6);
  if ( v14 >= 0 )
  {
    v14 = (**(__int64 (__fastcall ***)(CTaskWindow *, GUID *, _QWORD **))v15)(
            v15,
            &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee,
            &a8);
  }
  else if ( !v15 )
  {
    goto LABEL_8;
  }
  (*(void (__fastcall **)(CTaskWindow *))(*(_QWORD *)v15 + 16LL))(v15);
LABEL_8:
  if ( v14 >= 0 )
    v14 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD *))*a8)(
            a8,
            &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee,
            v12);
LABEL_10:
  v16 = a8;
  if ( a8 )
  {
    a8 = 0LL;
    (*(void (__fastcall **)(_QWORD *))(*v16 + 16LL))(v16);
  }
  return (unsigned int)v14;
}
