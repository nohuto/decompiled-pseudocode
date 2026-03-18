/*
 * XREFs of LockInputThreadDesktop @ 0x1C008FA70
 * Callers:
 *     <none>
 * Callees:
 *     LockObjectAssignment @ 0x1C0043540 (LockObjectAssignment.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 */

void *__fastcall LockInputThreadDesktop(void *a1)
{
  __int64 v1; // rbx
  void *v3; // rdi
  void **v4; // rcx

  v1 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
  v3 = 0LL;
  RIMLockExclusive(*(__int64 *)&WPP_MAIN_CB.AlignmentRequirement);
  if ( *(_DWORD *)(v1 + 16) )
  {
    v4 = (void **)(*(_QWORD *)(v1 + 24) + 408LL);
    v3 = *v4;
    LockObjectAssignment(v4, a1);
  }
  *(_QWORD *)(v1 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
  return v3;
}
