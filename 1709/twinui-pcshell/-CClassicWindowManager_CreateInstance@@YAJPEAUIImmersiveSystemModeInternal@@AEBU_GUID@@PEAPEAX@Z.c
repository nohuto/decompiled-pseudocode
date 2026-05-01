/*
 * XREFs of ?CClassicWindowManager_CreateInstance@@YAJPEAUIImmersiveSystemModeInternal@@AEBU_GUID@@PEAPEAX@Z @ 0x180039090
 * Callers:
 *     ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x1800106D8 (-_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ.c)
 * Callees:
 *     ?RuntimeClassInitialize@CClassicWindowManager@@QEAAJPEAUIImmersiveSystemModeInternal@@@Z @ 0x180035C48 (-RuntimeClassInitialize@CClassicWindowManager@@QEAAJPEAUIImmersiveSystemModeInternal@@@Z.c)
 *     ??0CClassicWindowManager@@QEAA@XZ @ 0x180035DA8 (--0CClassicWindowManager@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CClassicWindowManager_CreateInstance(
        struct IImmersiveSystemModeInternal *a1,
        const struct _GUID *a2,
        void **a3)
{
  CClassicWindowManager *v5; // rax
  int v6; // ebx
  CClassicWindowManager *v7; // rdi
  __int64 (__fastcall ***v8)(_QWORD, GUID *, void **); // rcx
  __int64 (__fastcall ***v10)(_QWORD, GUID *, void **); // [rsp+58h] [rbp+10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h]

  *a3 = 0LL;
  v10 = 0LL;
  v5 = (CClassicWindowManager *)operator new(0x128uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v5 )
  {
    v6 = -2147024882;
    goto LABEL_10;
  }
  v7 = CClassicWindowManager::CClassicWindowManager(v5);
  v11 = 0LL;
  v6 = CClassicWindowManager::RuntimeClassInitialize(v7, a1);
  if ( v6 >= 0 )
  {
    v6 = (**(__int64 (__fastcall ***)(CClassicWindowManager *, GUID *, _QWORD))v7)(
           v7,
           &GUID_226276c7_ca53_498c_b0be_ad1ea9c0ffee,
           &v10);
  }
  else if ( !v7 )
  {
    goto LABEL_8;
  }
  (*(void (__fastcall **)(CClassicWindowManager *))(*(_QWORD *)v7 + 16LL))(v7);
LABEL_8:
  if ( v6 >= 0 )
    v6 = (**v10)(v10, &GUID_226276c7_ca53_498c_b0be_ad1ea9c0ffee, a3);
LABEL_10:
  v8 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, void **)))(*v8)[2])(v8);
  }
  return (unsigned int)v6;
}
