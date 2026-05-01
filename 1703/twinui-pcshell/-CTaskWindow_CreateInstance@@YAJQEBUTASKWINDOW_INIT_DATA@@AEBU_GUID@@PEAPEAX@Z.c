/*
 * XREFs of ?CTaskWindow_CreateInstance@@YAJQEBUTASKWINDOW_INIT_DATA@@AEBU_GUID@@PEAPEAX@Z @ 0x180064B40
 * Callers:
 *     ?HandleWindowBecameUnowned@CImmersiveApp@@UEAAJPEAUHWND__@@@Z @ 0x180054AE0 (-HandleWindowBecameUnowned@CImmersiveApp@@UEAAJPEAUHWND__@@@Z.c)
 *     ?AddConsecutiveView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4WindowAdditionReason@@PEAUITaskWindow@@@Z @ 0x180057DD4 (-AddConsecutiveView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerI.c)
 * Callees:
 *     ??0CTaskWindow@@QEAA@XZ @ 0x180062F1C (--0CTaskWindow@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CTaskWindow@@QEAAJQEBUTASKWINDOW_INIT_DATA@@@Z @ 0x1800634B0 (-RuntimeClassInitialize@CTaskWindow@@QEAAJQEBUTASKWINDOW_INIT_DATA@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CTaskWindow_CreateInstance(const struct TASKWINDOW_INIT_DATA *a1, const struct _GUID *a2, void **a3)
{
  CTaskWindow *v5; // rax
  int v6; // ebx
  CTaskWindow *v7; // rdi
  __int64 (__fastcall ***v8)(_QWORD, GUID *, void **); // rcx
  __int64 (__fastcall ***v10)(_QWORD, GUID *, void **); // [rsp+58h] [rbp+10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h]

  *a3 = 0LL;
  v10 = 0LL;
  v5 = (CTaskWindow *)operator new(0x98uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v5 )
  {
    v6 = -2147024882;
    goto LABEL_10;
  }
  v7 = CTaskWindow::CTaskWindow(v5);
  v11 = 0LL;
  v6 = CTaskWindow::RuntimeClassInitialize(v7, a1);
  if ( v6 >= 0 )
  {
    v6 = (**(__int64 (__fastcall ***)(CTaskWindow *, GUID *, _QWORD))v7)(
           v7,
           &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee,
           &v10);
  }
  else if ( !v7 )
  {
    goto LABEL_8;
  }
  (*(void (__fastcall **)(CTaskWindow *))(*(_QWORD *)v7 + 16LL))(v7);
LABEL_8:
  if ( v6 >= 0 )
    v6 = (**v10)(v10, &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee, a3);
LABEL_10:
  v8 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, void **)))(*v8)[2])(v8);
  }
  return (unsigned int)v6;
}
