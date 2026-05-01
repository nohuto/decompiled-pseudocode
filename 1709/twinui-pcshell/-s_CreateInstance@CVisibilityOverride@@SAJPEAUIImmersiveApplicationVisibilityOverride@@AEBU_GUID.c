/*
 * XREFs of ?s_CreateInstance@CVisibilityOverride@@SAJPEAUIImmersiveApplicationVisibilityOverride@@AEBU_GUID@@PEAPEAX@Z @ 0x18002D178
 * Callers:
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18000A960 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??0CVisibilityOverride@@QEAA@XZ @ 0x18002CFFC (--0CVisibilityOverride@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CVisibilityOverride@@QEAAJPEAUIImmersiveApplicationVisibilityOverride@@@Z @ 0x18002D260 (-RuntimeClassInitialize@CVisibilityOverride@@QEAAJPEAUIImmersiveApplicationVisibilityOverride@@@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisibilityOverride::s_CreateInstance(
        struct IImmersiveApplicationVisibilityOverride *a1,
        const struct _GUID *a2,
        void **a3)
{
  CVisibilityOverride *v5; // rax
  int v6; // ebx
  CVisibilityOverride *v7; // rdi
  __int64 (__fastcall ***v8)(_QWORD, GUID *, void **); // rcx
  __int64 (__fastcall ***v10)(_QWORD, GUID *, void **); // [rsp+38h] [rbp+10h] BYREF

  *a3 = 0LL;
  v10 = 0LL;
  v5 = (CVisibilityOverride *)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    v7 = CVisibilityOverride::CVisibilityOverride(v5);
    v6 = CVisibilityOverride::RuntimeClassInitialize(v7, a1);
    if ( v6 >= 0 )
    {
      v6 = (**(__int64 (__fastcall ***)(CVisibilityOverride *, GUID *, _QWORD))v7)(
             v7,
             &GUID_328dedb7_8f68_4e6c_a210_a6c2c37504e8,
             &v10);
      (*(void (__fastcall **)(CVisibilityOverride *))(*(_QWORD *)v7 + 16LL))(v7);
    }
    else if ( v7 )
    {
      (*(void (__fastcall **)(CVisibilityOverride *))(*(_QWORD *)v7 + 16LL))(v7);
    }
    if ( v6 >= 0 )
      v6 = (**v10)(v10, &GUID_328dedb7_8f68_4e6c_a210_a6c2c37504e8, a3);
  }
  else
  {
    v6 = -2147024882;
  }
  v8 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, void **)))(*v8)[2])(v8);
  }
  return (unsigned int)v6;
}
