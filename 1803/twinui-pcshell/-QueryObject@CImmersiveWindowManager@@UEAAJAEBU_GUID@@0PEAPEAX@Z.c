/*
 * XREFs of ?QueryObject@CImmersiveWindowManager@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180070990
 * Callers:
 *     ?ReconcileAutorotationPreferences@CImmersiveApp@@UEAAXXZ @ 0x18004BED0 (-ReconcileAutorotationPreferences@CImmersiveApp@@UEAAXXZ.c)
 *     ?IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z @ 0x180071448 (-IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z.c)
 * Callees:
 *     ?PrivateQueryService@CApplicationManager@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x18003BE40 (-PrivateQueryService@CApplicationManager@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveWindowManager::QueryObject(
        CImmersiveWindowManager *this,
        struct _GUID *a2,
        struct _GUID *a3,
        void **a4)
{
  __int64 result; // rax
  CApplicationManager *v5; // rcx
  __int64 (__fastcall *v6)(CApplicationManager *, struct _GUID *, struct _GUID *, void **); // rax

  *a4 = 0LL;
  result = 2147500034LL;
  v5 = (CApplicationManager *)*((_QWORD *)this + 11);
  if ( v5 )
  {
    v6 = *(__int64 (__fastcall **)(CApplicationManager *, struct _GUID *, struct _GUID *, void **))(*(_QWORD *)v5 + 24LL);
    if ( v6 == CApplicationManager::PrivateQueryService )
      return CApplicationManager::PrivateQueryService(v5, a2, a3, a4);
    else
      return ((__int64 (__fastcall *)(CApplicationManager *, struct _GUID *, struct _GUID *))v6)(v5, a2, a3);
  }
  return result;
}
