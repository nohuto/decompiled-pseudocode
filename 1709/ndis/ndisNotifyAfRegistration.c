/*
 * XREFs of ndisNotifyAfRegistration @ 0x1C010C0E0
 * Callers:
 *     ndisMFinishQueuedPendingOpen @ 0x1C010D450 (ndisMFinishQueuedPendingOpen.c)
 * Callees:
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0005910 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     ndisDereferenceAfNotification @ 0x1C00521CC (ndisDereferenceAfNotification.c)
 *     ndisDereferencePackage @ 0x1C00B837C (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00B83A0 (ndisReferencePackage.c)
 */

void __fastcall ndisNotifyAfRegistration(_QWORD *P)
{
  __int64 v1; // rsi
  _QWORD *v2; // rbx
  __int64 v3; // rdi
  _QWORD *v4; // rbp

  v1 = P[5];
  v2 = P;
  if ( (unsigned __int8)byte_1C009875A >= 4u )
    WPP_SF_q(0xEu, &WPP_a122a54394bd3dbe970a397dccec41bf_Traceguids, v1);
  ndisReferencePackage((__int64)&ndisPkgs);
  do
  {
    v3 = v2[6];
    v4 = (_QWORD *)*v2;
    if ( (*(_DWORD *)(v3 + 224) & 0x18000) == 0 )
      (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)(v3 + 24) + 200LL))(*(_QWORD *)(v3 + 32), v2 + 7);
    ExFreePoolWithTag(v2, 0);
    ndisDereferenceAfNotification(v3);
    ndisMDereferenceOpenUnlocked(v3);
    v2 = v4;
  }
  while ( v4 );
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)byte_1C009875A >= 4u )
    WPP_SF_q(0xFu, &WPP_a122a54394bd3dbe970a397dccec41bf_Traceguids, v1);
}
