/*
 * XREFs of VerifierExFreePoolWithTag @ 0x140813630
 * Callers:
 *     VerifierExFreePool @ 0x1408135E0 (VerifierExFreePool.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     VfFreePoolNotification @ 0x140824840 (VfFreePoolNotification.c)
 *     VfIrpDatabaseCheckExFreePool @ 0x14082B304 (VfIrpDatabaseCheckExFreePool.c)
 *     ExFreePoolSanityChecks @ 0x140837DBC (ExFreePoolSanityChecks.c)
 */

void __fastcall VerifierExFreePoolWithTag(void *a1, ULONG Tag)
{
  VfFreePoolNotification(a1, 0LL);
  VfIrpDatabaseCheckExFreePool((ULONG_PTR)a1);
  if ( (MiFlags & 2) != 0 )
  {
    ExFreePoolWithTag(a1, Tag);
  }
  else
  {
    if ( (MmVerifierData & 1) != 0 )
      ExFreePoolSanityChecks((ULONG_PTR)a1);
    ((void (__fastcall *)(void *, _QWORD))pXdvExFreePoolWithTag)(a1, Tag);
  }
}
