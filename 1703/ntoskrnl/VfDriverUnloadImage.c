/*
 * XREFs of VfDriverUnloadImage @ 0x1407621FC
 * Callers:
 *     MiUnloadSystemImage @ 0x1404B29B4 (MiUnloadSystemImage.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x14003CBA4 (VfIsVerifierEnabled.c)
 *     VfTargetDriversRemove @ 0x14014885C (VfTargetDriversRemove.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     VfRemLockDeleteMemoryRange @ 0x140772AA8 (VfRemLockDeleteMemoryRange.c)
 *     ViThunkRemoveImportEntry @ 0x14077489C (ViThunkRemoveImportEntry.c)
 *     VfDeadlockDeleteMemoryRange @ 0x14077927C (VfDeadlockDeleteMemoryRange.c)
 *     VfSuspectDriversUnloadCallback @ 0x14077BB48 (VfSuspectDriversUnloadCallback.c)
 */

void __fastcall VfDriverUnloadImage(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  __int64 v4; // rdi
  PVOID *v5; // rdi
  PVOID *v6; // rdx
  PVOID **v7; // rax
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
        v7 = (PVOID **)v5[1];
        if ( *((PVOID **)*v5 + 1) != v5 || *v7 != v5 )
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
