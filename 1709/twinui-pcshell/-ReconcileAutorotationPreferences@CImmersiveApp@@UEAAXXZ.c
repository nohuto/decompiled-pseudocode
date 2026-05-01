/*
 * XREFs of ?ReconcileAutorotationPreferences@CImmersiveApp@@UEAAXXZ @ 0x180055230
 * Callers:
 *     <none>
 * Callees:
 *     ?IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z @ 0x180052660 (-IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CImmersiveApp::ReconcileAutorotationPreferences(CImmersiveApp *this)
{
  char *v2; // rbx
  void *v3; // rcx
  void *v4; // rcx
  bool v5; // bl
  struct IUnknown *v6; // rcx
  void *v7; // rcx
  void *v8; // [rsp+58h] [rbp+28h] BYREF
  struct IUnknown *v9; // [rsp+60h] [rbp+30h] BYREF

  v2 = (char *)this - 56;
  v8 = 0LL;
  (*(void (__fastcall **)(char *, GUID *, void **))(*((_QWORD *)this - 7) + 32LL))(
    (char *)this - 56,
    &GUID_00000000_0000_0000_c000_000000000046,
    &v8);
  v3 = v8;
  if ( v8 )
  {
    v8 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v3 + 16LL))(v3);
    if ( (*((_DWORD *)this + 106) & 2) != 0 )
    {
      v8 = 0LL;
      v9 = 0LL;
      (*(void (__fastcall **)(char *, GUID *, struct IUnknown **))(*(_QWORD *)v2 + 32LL))(
        v2,
        &GUID_00000000_0000_0000_c000_000000000046,
        &v9);
      v4 = v8;
      if ( v8 )
      {
        v8 = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v4 + 16LL))(v4);
      }
      v5 = (int)IAMPrivate_QueryObject(
                  v9,
                  &GUID_f6bba08c_f8c6_470b_937a_5b2687c0ffee,
                  &GUID_f6bba08c_f8c6_470b_937a_5b2687c0ffee,
                  &v8) >= 0;
      v6 = v9;
      if ( v9 )
      {
        v9 = 0LL;
        ((void (__fastcall *)(struct IUnknown *))v6->lpVtbl->Release)(v6);
      }
      if ( v5 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v8 + 32LL))(v8);
      v7 = v8;
      if ( v8 )
      {
        v8 = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v7 + 16LL))(v7);
      }
    }
  }
}
