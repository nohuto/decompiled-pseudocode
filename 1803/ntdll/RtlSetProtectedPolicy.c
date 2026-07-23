/*
 * XREFs of RtlSetProtectedPolicy @ 0x18007F700
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x180023A90 (LdrControlFlowGuardEnforced.c)
 *     sub_1800259B4 @ 0x1800259B4 (sub_1800259B4.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     RtlProtectHeap @ 0x18002A2B0 (RtlProtectHeap.c)
 *     sub_18007CFD4 @ 0x18007CFD4 (sub_18007CFD4.c)
 *     bsearch @ 0x18008DB40 (bsearch.c)
 *     qsort @ 0x18008EFB0 (qsort.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

NTSTATUS __cdecl RtlSetProtectedPolicy(PGUID PolicyGuid, ULONG_PTR PolicyValue, PULONG_PTR OldPolicyValue)
{
  char v6; // di
  int v7; // ebx
  PVOID v8; // rax
  GUID *v9; // rbx
  unsigned int v10; // ebx
  int v11; // eax
  PVOID ProcessHeap; // rcx
  char *Heap; // rsi
  PVOID v14; // rdi
  unsigned __int64 v15; // rcx
  int v17; // ebx
  int v18; // ecx
  int v19; // eax
  PVOID v20; // rcx

  v6 = 0;
  v7 = sub_18007CFD4();
  if ( v7 < 0 )
    return v7;
  RtlAcquireSRWLockExclusive(&stru_18015D2D0);
  if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] && (LdrSystemDllInitBlock.Flags & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive(&stru_18015BF98);
    v17 = *(_DWORD *)qword_18016F280;
    if ( !*(_DWORD *)qword_18016F280 )
      RtlProtectHeap(qword_18016F270, 0);
    if ( v17 == -1 )
    {
      RtlReleaseSRWLockExclusive(&stru_18015BF98);
      __fastfail(0xEu);
    }
    *(_DWORD *)qword_18016F280 = v17 + 1;
    RtlReleaseSRWLockExclusive(&stru_18015BF98);
  }
  v8 = Base;
  if ( Base )
  {
    v9 = (GUID *)bsearch(
                   PolicyGuid,
                   Base,
                   (unsigned int)NumOfElements,
                   0x18uLL,
                   (_CoreCrtNonSecureSearchSortCompareFunction)sub_180076DA0);
    v8 = Base;
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
    goto LABEL_18;
  if ( v8 && (_DWORD)NumOfElements + 1 != dword_18016F2C4 )
  {
    sub_1800259B4(0);
    Heap = (char *)Base;
LABEL_17:
    v9 = (GUID *)&Heap[24 * (unsigned int)NumOfElements];
    LODWORD(NumOfElements) = NumOfElements + 1;
    *(_QWORD *)&v9->Data1 = 0LL;
    *(_QWORD *)v9->Data4 = 0LL;
    *(_QWORD *)&v9[1].Data1 = 0LL;
    *v9 = *PolicyGuid;
    sub_1800259B4(1);
    v8 = Base;
    v6 = 1;
LABEL_18:
    v15 = *(_QWORD *)&v9[1].Data1;
    *(_QWORD *)&v9[1].Data1 = PolicyValue;
    if ( OldPolicyValue )
      *OldPolicyValue = v15;
    if ( v6 )
      qsort(v8, (unsigned int)NumOfElements, 0x18uLL, (_CoreCrtNonSecureSearchSortCompareFunction)sub_180076DA0);
    v7 = 0;
    goto LABEL_23;
  }
  v10 = 16;
  if ( dword_18016F2C4 )
    v10 = 2 * dword_18016F2C4;
  if ( v10 >= dword_18016F2C4 && v10 < 0xAAAAAAA )
  {
    LOBYTE(v11) = LdrControlFlowGuardEnforced();
    if ( v11 )
    {
      if ( 24 * (unsigned __int64)v10 >= 0xFF000 )
        goto LABEL_45;
      ProcessHeap = qword_18016F270;
    }
    else
    {
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
    }
    Heap = (char *)RtlAllocateHeap(ProcessHeap, 0, 24LL * v10);
    if ( Heap )
    {
      sub_1800259B4(0);
      v14 = Base;
      if ( Base )
      {
        memmove(Heap, Base, 24LL * (unsigned int)NumOfElements);
        LOBYTE(v19) = LdrControlFlowGuardEnforced();
        if ( v19 )
          v20 = qword_18016F270;
        else
          v20 = NtCurrentPeb()->ProcessHeap;
        RtlFreeHeap(v20, 0, v14);
      }
      Base = Heap;
      dword_18016F2C4 = v10;
      goto LABEL_17;
    }
  }
LABEL_45:
  v7 = -1073741801;
LABEL_23:
  if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] && (LdrSystemDllInitBlock.Flags & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive(&stru_18015BF98);
    v18 = *(_DWORD *)qword_18016F280;
    if ( !*(_DWORD *)qword_18016F280 )
    {
      RtlReleaseSRWLockExclusive(&stru_18015BF98);
      __fastfail(0xEu);
    }
    *(_DWORD *)qword_18016F280 = v18 - 1;
    if ( v18 == 1 )
      RtlProtectHeap(qword_18016F270, 1u);
    RtlReleaseSRWLockExclusive(&stru_18015BF98);
  }
  RtlReleaseSRWLockExclusive(&stru_18015D2D0);
  return v7;
}
