/*
 * XREFs of VerifierExFreePoolWithTag @ 0x1407A64E0
 * Callers:
 *     VerifierExFreePool @ 0x1407A6490 (VerifierExFreePool.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     VfFreePoolNotification @ 0x1407B7624 (VfFreePoolNotification.c)
 *     VfIrpDatabaseCheckExFreePool @ 0x1407BDF2C (VfIrpDatabaseCheckExFreePool.c)
 *     ExFreePoolSanityChecks @ 0x1407CA844 (ExFreePoolSanityChecks.c)
 */

void __fastcall VerifierExFreePoolWithTag(ULONG_PTR BugCheckParameter4, ULONG Tag, __int64 a3, __int64 a4)
{
  VfFreePoolNotification(BugCheckParameter4, 0LL, a3, a4);
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
