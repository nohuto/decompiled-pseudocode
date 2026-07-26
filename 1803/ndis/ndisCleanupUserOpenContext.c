/*
 * XREFs of ndisCleanupUserOpenContext @ 0x1C005D7EC
 * Callers:
 *     ndisCloseHandler @ 0x1C005D8C4 (ndisCloseHandler.c)
 *     NdisWdfCleanupUserOpenContext @ 0x1C00622C0 (NdisWdfCleanupUserOpenContext.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     ndisDereferencePackage @ 0x1C00ADAEC (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00ADB10 (ndisReferencePackage.c)
 */

void __fastcall ndisCleanupUserOpenContext(__int64 a1, _BYTE *a2)
{
  KSPIN_LOCK *v2; // rbp
  KIRQL v5; // al
  KIRQL v6; // al
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx

  v2 = (KSPIN_LOCK *)(a1 + 4464);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 4464));
  if ( a2[32] )
    --*(_DWORD *)(a1 + 3776);
  else
    --*(_DWORD *)(a1 + 3692);
  KeReleaseSpinLock(v2, v5);
  ExFreePoolWithTag(a2, 0);
  ndisReferencePackage(&ndisPkgs);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  --*(_DWORD *)(a1 + 1800);
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v6);
  ndisDereferencePackage(&ndisPkgs);
  ndisDereferenceMiniport(a1, 0x55u, v7, v8);
  if ( (*(_DWORD *)(a1 + 124) & 0x2000) != 0 )
  {
    v9 = *(_QWORD *)(a1 + 4008);
    if ( v9 )
      (*(void (__fastcall **)(_QWORD))(v9 + 40))(*(_QWORD *)(v9 + 8));
  }
}
