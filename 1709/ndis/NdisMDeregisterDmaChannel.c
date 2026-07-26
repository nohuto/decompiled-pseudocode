/*
 * XREFs of NdisMDeregisterDmaChannel @ 0x1C010CB60
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceDmaAdapter @ 0x1C0001F54 (ndisDereferenceDmaAdapter.c)
 *     WPP_SF_ @ 0x1C0024644 (WPP_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     ndisDereferencePackage @ 0x1C00B837C (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00B83A0 (ndisReferencePackage.c)
 */

void __stdcall NdisMDeregisterDmaChannel(NDIS_HANDLE MiniportDmaHandle)
{
  __int64 v1; // rdi
  KIRQL v3; // si

  v1 = *((_QWORD *)MiniportDmaHandle + 5);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_(0x27u, &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids);
  ndisReferencePackage((__int64)&ndisPkgs);
  v3 = KfRaiseIrql(2u);
  (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)MiniportDmaHandle + 4) + 8LL) + 48LL))();
  if ( v3 != 2 )
    KeLowerIrql(v3);
  ndisDereferenceDmaAdapter(*(PVOID *)(v1 + 504));
  ndisDereferencePackage((__int64)&ndisPkgs);
  ExFreePoolWithTag(MiniportDmaHandle, 0);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_(0x28u, &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids);
}
