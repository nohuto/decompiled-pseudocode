/*
 * XREFs of VfDriverUnloadImage @ 0x1407A209C
 * Callers:
 *     MiUnloadSystemImage @ 0x140515B1C (MiUnloadSystemImage.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x1400F8F48 (VfIsVerifierEnabled.c)
 *     VfTargetDriversRemove @ 0x1400F8F58 (VfTargetDriversRemove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     VfRemLockDeleteMemoryRange @ 0x1407B4868 (VfRemLockDeleteMemoryRange.c)
 *     ViThunkRemoveImportEntry @ 0x1407B6658 (ViThunkRemoveImportEntry.c)
 *     VfDeadlockDeleteMemoryRange @ 0x1407BB198 (VfDeadlockDeleteMemoryRange.c)
 *     VfSuspectDriversUnloadCallback @ 0x1407BDA54 (VfSuspectDriversUnloadCallback.c)
 */

void __fastcall VfDriverUnloadImage(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  __int64 v4; // rdi
  PVOID *v5; // rdi
  PVOID *v6; // rax
  PVOID **v7; // rdx
  PVOID *v8; // rcx

  if ( (unsigned int)VfIsVerifierEnabled() )
  {
    v3 = *(_DWORD *)(v2 + 64);
    v4 = *(_QWORD *)(v2 + 48);
    VfDeadlockDeleteMemoryRange(v4, v3);
    VfRemLockDeleteMemoryRange(v4, v3);
  }
  if ( ViActiveVerifierThunks )
  {
    ViThunkRemoveImportEntry(&ViVerifierDriverAddedThunkListHead, a1);
    v5 = (PVOID *)ViVerifierDriverAddedSpecialThunkListHead;
    while ( v5 != &ViVerifierDriverAddedSpecialThunkListHead )
    {
      ViThunkRemoveImportEntry(v5 + 3, a1);
      if ( v5[3] == v5 + 3 )
      {
        v6 = (PVOID *)*v5;
        if ( *((PVOID **)*v5 + 1) != v5 || (v7 = (PVOID **)v5[1], *v7 != v5) )
          __fastfail(3u);
        *v7 = v6;
        v8 = v5;
        v6[1] = v7;
        v5 = (PVOID *)*v5;
        ExFreePoolWithTag(v8, 0);
        --ViVerifierSpecialThunkTables;
      }
      else
      {
        v5 = (PVOID *)*v5;
      }
    }
  }
  VfTargetDriversRemove(a1);
  if ( (*(_DWORD *)(a1 + 104) & 0x2000000) != 0 )
    VfSuspectDriversUnloadCallback(a1);
}
