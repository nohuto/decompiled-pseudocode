/*
 * XREFs of ?RmpObjectTableEnumerationEnd@@YAXPEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x180039D9C
 * Callers:
 *     ?RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180023CB4 (-RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpObjectTableEnumerationEnd(struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *a1)
{
  RtlReleaseSRWLockShared(*(_QWORD *)a1 + 16LL);
}
