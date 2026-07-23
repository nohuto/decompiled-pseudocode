/*
 * XREFs of RtlSetProtectedPolicy @ 0x1800850D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlProtectHeap @ 0x18000D6A0 (RtlProtectHeap.c)
 *     sub_18001DEA8 @ 0x18001DEA8 (sub_18001DEA8.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_180083738 @ 0x180083738 (sub_180083738.c)
 *     bsearch @ 0x1800986E0 (bsearch.c)
 *     qsort @ 0x180099B50 (qsort.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

NTSTATUS __cdecl RtlSetProtectedPolicy(PGUID PolicyGuid, ULONG_PTR PolicyValue, PULONG_PTR OldPolicyValue)
{
  char v6; // di
  int v7; // ebx
  PVOID v8; // rax
  GUID *v9; // rbx
  unsigned int v10; // ebx
  SIZE_T v11; // r8
  PVOID ProcessHeap; // rcx
  char *Heap; // rdi
  PVOID v14; // rsi
  unsigned __int64 v15; // rcx
  int v17; // ebx
  int v18; // ecx
  PVOID v19; // rcx

  v6 = 0;
  v7 = sub_180083738();
  if ( v7 < 0 )
    return v7;
  RtlAcquireSRWLockExclusive(&stru_18015C290);
  if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] )
  {
    RtlAcquireSRWLockExclusive(&stru_18015AF70);
    v17 = *(_DWORD *)qword_18016B270;
    if ( !*(_DWORD *)qword_18016B270 )
      RtlProtectHeap(qword_18016B260, 0);
    if ( v17 == -1 )
    {
      RtlReleaseSRWLockExclusive(&stru_18015AF70);
      __fastfail(0xEu);
    }
    *(_DWORD *)qword_18016B270 = v17 + 1;
    RtlReleaseSRWLockExclusive(&stru_18015AF70);
  }
  v8 = Base;
  if ( Base )
  {
    v9 = (GUID *)bsearch(
                   PolicyGuid,
                   Base,
                   (unsigned int)NumOfElements,
                   0x18uLL,
                   (_CoreCrtNonSecureSearchSortCompareFunction)sub_18007A010);
    v8 = Base;
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
    goto LABEL_18;
  if ( v8 && (_DWORD)NumOfElements + 1 != dword_18016B2B4 )
  {
    sub_18001DEA8(0);
    Heap = (char *)Base;
LABEL_17:
    v9 = (GUID *)&Heap[24 * (unsigned int)NumOfElements];
    LODWORD(NumOfElements) = NumOfElements + 1;
    *(_QWORD *)&v9->Data1 = 0LL;
    *(_QWORD *)v9->Data4 = 0LL;
    *(_QWORD *)&v9[1].Data1 = 0LL;
    *v9 = *PolicyGuid;
    sub_18001DEA8(1);
    v8 = Base;
    v6 = 1;
LABEL_18:
    v15 = *(_QWORD *)&v9[1].Data1;
    *(_QWORD *)&v9[1].Data1 = PolicyValue;
    if ( OldPolicyValue )
      *OldPolicyValue = v15;
    if ( v6 )
      qsort(v8, (unsigned int)NumOfElements, 0x18uLL, (_CoreCrtNonSecureSearchSortCompareFunction)sub_18007A010);
    v7 = 0;
    goto LABEL_23;
  }
  v10 = 16;
  if ( dword_18016B2B4 )
    v10 = 2 * dword_18016B2B4;
  if ( v10 >= dword_18016B2B4 && v10 < 0xAAAAAAA )
  {
    v11 = 24LL * v10;
    if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] )
    {
      if ( v11 >= 0xFF000 )
        goto LABEL_43;
      ProcessHeap = qword_18016B260;
    }
    else
    {
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
    }
    Heap = (char *)RtlAllocateHeap(ProcessHeap, 0, v11);
    if ( Heap )
    {
      sub_18001DEA8(0);
      v14 = Base;
      if ( Base )
      {
        memmove(Heap, Base, 24LL * (unsigned int)NumOfElements);
        if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] )
          v19 = qword_18016B260;
        else
          v19 = NtCurrentPeb()->ProcessHeap;
        RtlFreeHeap(v19, 0, v14);
      }
      Base = Heap;
      dword_18016B2B4 = v10;
      goto LABEL_17;
    }
  }
LABEL_43:
  v7 = -1073741801;
LABEL_23:
  if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] )
  {
    RtlAcquireSRWLockExclusive(&stru_18015AF70);
    v18 = *(_DWORD *)qword_18016B270;
    if ( !*(_DWORD *)qword_18016B270 )
    {
      RtlReleaseSRWLockExclusive(&stru_18015AF70);
      __fastfail(0xEu);
    }
    *(_DWORD *)qword_18016B270 = v18 - 1;
    if ( v18 == 1 )
      RtlProtectHeap(qword_18016B260, 1u);
    RtlReleaseSRWLockExclusive(&stru_18015AF70);
  }
  RtlReleaseSRWLockExclusive(&stru_18015C290);
  return v7;
}
