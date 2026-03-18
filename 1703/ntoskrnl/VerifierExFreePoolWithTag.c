/*
 * XREFs of VerifierExFreePoolWithTag @ 0x1407647C0
 * Callers:
 *     VerifierExFreePool @ 0x140764790 (VerifierExFreePool.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     VfFreePoolNotification @ 0x140775864 (VfFreePoolNotification.c)
 *     VfIrpDatabaseCheckExFreePool @ 0x14077C010 (VfIrpDatabaseCheckExFreePool.c)
 *     ExFreePoolSanityChecks @ 0x1407883B0 (ExFreePoolSanityChecks.c)
 */

void __fastcall VerifierExFreePoolWithTag(ULONG_PTR BugCheckParameter4, ULONG Tag)
{
  VfFreePoolNotification(BugCheckParameter4, 0LL);
  VfIrpDatabaseCheckExFreePool(BugCheckParameter4);
  if ( (MiFlags & 2) != 0 )
  {
    ExFreePoolWithTag((PVOID)BugCheckParameter4, Tag);
  }
  else
  {
    ExFreePoolSanityChecks(BugCheckParameter4);
    ((void (__fastcall *)(ULONG_PTR, _QWORD))pXdvExFreePoolWithTag)(BugCheckParameter4, Tag);
  }
}
