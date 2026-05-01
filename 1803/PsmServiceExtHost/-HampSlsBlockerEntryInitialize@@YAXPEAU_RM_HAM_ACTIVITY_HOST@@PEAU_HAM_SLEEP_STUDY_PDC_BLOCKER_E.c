/*
 * XREFs of ?HampSlsBlockerEntryInitialize@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z @ 0x180068F20
 * Callers:
 *     ?HampSlsBlockerEntryCreate@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z @ 0x180068D3C (-HampSlsBlockerEntryCreate@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAU_.c)
 * Callees:
 *     ?RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180011D50 (-RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 */

void __fastcall HampSlsBlockerEntryInitialize(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY *a2)
{
  memset_0(a2, 0, 0x58uLL);
  RmpAcquireGlobalLock();
  *((_QWORD *)a2 + 3) = RmHamHostReference(a1);
  RmpReleaseGlobalLock();
  *((_BYTE *)a2 + 32) = 5;
  RtlQueryUnbiasedInterruptTime((char *)a2 + 40);
}
