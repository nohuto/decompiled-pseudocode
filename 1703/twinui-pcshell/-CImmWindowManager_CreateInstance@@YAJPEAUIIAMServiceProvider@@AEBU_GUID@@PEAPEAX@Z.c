/*
 * XREFs of ?CImmWindowManager_CreateInstance@@YAJPEAUIIAMServiceProvider@@AEBU_GUID@@PEAPEAX@Z @ 0x18002F608
 * Callers:
 *     ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x180010198 (-_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ.c)
 * Callees:
 *     ??0CImmersiveWindowManager@@QEAA@XZ @ 0x18002E1F8 (--0CImmersiveWindowManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CImmersiveWindowManager@@QEAAJPEAUIIAMServiceProvider@@@Z @ 0x18002E370 (-RuntimeClassInitialize@CImmersiveWindowManager@@QEAAJPEAUIIAMServiceProvider@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CImmWindowManager_CreateInstance(struct IIAMServiceProvider *a1, const struct _GUID *a2, void **a3)
{
  CImmersiveWindowManager *v5; // rax
  int v6; // edi
  CImmersiveWindowManager *v7; // rbx
  __int64 (__fastcall ***v8)(_QWORD, GUID *, void **); // rcx
  __int64 (__fastcall ***v10)(_QWORD, GUID *, void **); // [rsp+58h] [rbp+10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h]

  *a3 = 0LL;
  v10 = 0LL;
  v5 = (CImmersiveWindowManager *)operator new(0xD8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v5 )
  {
    v6 = -2147024882;
    goto LABEL_10;
  }
  v7 = CImmersiveWindowManager::CImmersiveWindowManager(v5);
  v11 = 0LL;
  v6 = CImmersiveWindowManager::RuntimeClassInitialize(v7, a1);
  if ( v6 >= 0 )
  {
    v6 = (**(__int64 (__fastcall ***)(CImmersiveWindowManager *, GUID *, _QWORD))v7)(
           v7,
           &GUID_611aa8fe_b694_4129_86af_2c2553fff785,
           &v10);
  }
  else if ( !v7 )
  {
    goto LABEL_8;
  }
  (*(void (__fastcall **)(CImmersiveWindowManager *))(*(_QWORD *)v7 + 16LL))(v7);
LABEL_8:
  if ( v6 >= 0 )
    v6 = (**v10)(v10, &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee, a3);
LABEL_10:
  v8 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, void **)))(*v8)[2])(v8);
  }
  return (unsigned int)v6;
}
