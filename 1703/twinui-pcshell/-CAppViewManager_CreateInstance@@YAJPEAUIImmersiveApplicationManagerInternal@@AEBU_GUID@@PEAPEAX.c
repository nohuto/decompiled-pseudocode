/*
 * XREFs of ?CAppViewManager_CreateInstance@@YAJPEAUIImmersiveApplicationManagerInternal@@AEBU_GUID@@PEAPEAX@Z @ 0x180043538
 * Callers:
 *     ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x180010198 (-_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ.c)
 * Callees:
 *     ??0CAppViewManager@@QEAA@XZ @ 0x18003CA0C (--0CAppViewManager@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAppViewManager_CreateInstance(
        struct IImmersiveApplicationManagerInternal *a1,
        const struct _GUID *a2,
        void **a3)
{
  CAppViewManager *v5; // rax
  unsigned int v6; // ebx
  CAppViewManager *v7; // rbx
  __int64 v8; // rcx
  CAppViewManager *v10; // [rsp+38h] [rbp+10h]

  *a3 = 0LL;
  v10 = 0LL;
  v5 = (CAppViewManager *)operator new(0xB8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    v7 = CAppViewManager::CAppViewManager(v5);
    if ( *((struct IImmersiveApplicationManagerInternal **)v7 + 14) != a1 )
    {
      if ( a1 )
        (*(void (__fastcall **)(struct IImmersiveApplicationManagerInternal *))(*(_QWORD *)a1 + 8LL))(a1);
      v8 = *((_QWORD *)v7 + 14);
      *((_QWORD *)v7 + 14) = a1;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    if ( v7 )
      (*(void (__fastcall **)(CAppViewManager *))(*(_QWORD *)v7 + 8LL))(v7);
    v10 = v7;
    if ( v7 )
      (*(void (__fastcall **)(CAppViewManager *))(*(_QWORD *)v7 + 16LL))(v7);
    v6 = (**(__int64 (__fastcall ***)(CAppViewManager *, GUID *, void **))v7)(
           v7,
           &GUID_f89b0985_7620_4f91_ad6d_a2ab45c0ffee,
           a3);
  }
  else
  {
    v6 = -2147024882;
  }
  if ( v10 )
    (*(void (__fastcall **)(CAppViewManager *))(*(_QWORD *)v10 + 16LL))(v10);
  return v6;
}
