/*
 * XREFs of ?CFallbackWindow_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18002F2DC
 * Callers:
 *     ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x1800106D8 (-_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ.c)
 * Callees:
 *     ??0CFallbackWindow@@QEAA@XZ @ 0x18002E624 (--0CFallbackWindow@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CFallbackWindow@@QEAAJXZ @ 0x18002E798 (-RuntimeClassInitialize@CFallbackWindow@@QEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CFallbackWindow_CreateInstance(const struct _GUID *a1, void **a2)
{
  CFallbackWindow *v3; // rax
  int v4; // edi
  HWND *v5; // rbx
  __int64 (__fastcall ***v6)(_QWORD, GUID *, void **); // rcx
  __int64 (__fastcall ***v8)(_QWORD, GUID *, void **); // [rsp+50h] [rbp+8h] BYREF
  HWND *v9; // [rsp+58h] [rbp+10h]
  __int64 v10; // [rsp+60h] [rbp+18h]

  *a2 = 0LL;
  v8 = 0LL;
  v3 = (CFallbackWindow *)operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v3 )
  {
    v4 = -2147024882;
    goto LABEL_10;
  }
  v5 = (HWND *)CFallbackWindow::CFallbackWindow(v3);
  v9 = v5;
  v10 = 0LL;
  v4 = CFallbackWindow::RuntimeClassInitialize(v5);
  if ( v4 >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(HWND *, GUID *, _QWORD))*v5)(v5, &GUID_743bc0bd_69f0_4f28_8401_047ae0c0ffee, &v8);
  }
  else if ( !v5 )
  {
    goto LABEL_8;
  }
  (*((void (__fastcall **)(HWND *))*v5 + 2))(v5);
LABEL_8:
  if ( v4 >= 0 )
    v4 = (**v8)(v8, &GUID_743bc0bd_69f0_4f28_8401_047ae0c0ffee, a2);
LABEL_10:
  v6 = v8;
  if ( v8 )
  {
    v8 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, void **)))(*v6)[2])(v6);
  }
  return (unsigned int)v4;
}
