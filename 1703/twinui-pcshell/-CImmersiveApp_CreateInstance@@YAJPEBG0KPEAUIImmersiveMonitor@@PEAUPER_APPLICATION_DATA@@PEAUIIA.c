/*
 * XREFs of ?CImmersiveApp_CreateInstance@@YAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@AEBU_GUID@@PEAPEAX@Z @ 0x180059B2C
 * Callers:
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBGKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x180010B58 (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBGKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@@Z @ 0x1800504E8 (-RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DAT.c)
 *     ??0CImmersiveApp@@QEAA@XZ @ 0x1800509B0 (--0CImmersiveApp@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CImmersiveApp_CreateInstance(
        LPCWSTR psz,
        const unsigned __int16 *a2,
        int a3,
        struct IImmersiveMonitor *a4,
        struct PER_APPLICATION_DATA *a5,
        struct IIAMServiceProvider *a6,
        const struct _GUID *a7,
        void **a8)
{
  void **v12; // rsi
  CImmersiveApp *v13; // rax
  int v14; // ebx
  CImmersiveApp *v15; // rdi
  void **v16; // rcx

  v12 = a8;
  *a8 = 0LL;
  a8 = 0LL;
  v13 = (CImmersiveApp *)operator new(0x330uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v13 )
  {
    v14 = -2147024882;
    goto LABEL_10;
  }
  v15 = CImmersiveApp::CImmersiveApp(v13);
  v14 = CImmersiveApp::RuntimeClassInitialize(v15, psz, a2, a3, a4, a5, a6);
  if ( v14 >= 0 )
  {
    v14 = (**(__int64 (__fastcall ***)(CImmersiveApp *, GUID *, void ***))v15)(
            v15,
            &GUID_8b14e88b_5663_4caf_b196_c31479262831,
            &a8);
  }
  else if ( !v15 )
  {
    goto LABEL_8;
  }
  (*(void (__fastcall **)(CImmersiveApp *))(*(_QWORD *)v15 + 16LL))(v15);
LABEL_8:
  if ( v14 >= 0 )
    v14 = (*(__int64 (__fastcall **)(void **, GUID *, void **))*a8)(a8, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, v12);
LABEL_10:
  v16 = a8;
  if ( a8 )
  {
    a8 = 0LL;
    (*((void (__fastcall **)(void **))*v16 + 2))(v16);
  }
  return (unsigned int)v14;
}
