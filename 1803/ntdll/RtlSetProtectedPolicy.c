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

__int64 __fastcall RtlSetProtectedPolicy(_OWORD *Key, __int64 a2, _QWORD *a3)
{
  char v6; // di
  unsigned __int64 v7; // rdx
  int v8; // ebx
  unsigned __int64 *v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rdx
  unsigned __int64 *v12; // r8
  __int64 v13; // r9
  void *v14; // rax
  char *v15; // rbx
  unsigned int v16; // ebx
  void *ProcessHeap; // rcx
  char *Heap; // rsi
  void *v19; // rdi
  __int64 v20; // rcx
  int v22; // ebx
  int v23; // ecx
  void *v24; // rcx

  v6 = 0;
  v8 = sub_18007CFD4();
  if ( v8 < 0 )
    return (unsigned int)v8;
  RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D2D0, v7, v9, v10);
  if ( qword_18016F380 && (byte_18016F36C & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015BF98, v11, v12, v13);
    v22 = *(_DWORD *)qword_18016F280;
    if ( !*(_DWORD *)qword_18016F280 )
      RtlProtectHeap((_DWORD *)qword_18016F270, 0);
    if ( v22 == -1 )
    {
      RtlReleaseSRWLockExclusive(&qword_18015BF98);
      __fastfail(0xEu);
    }
    *(_DWORD *)qword_18016F280 = v22 + 1;
    RtlReleaseSRWLockExclusive(&qword_18015BF98);
  }
  v14 = Base;
  if ( Base )
  {
    v15 = (char *)bsearch(
                    Key,
                    Base,
                    (unsigned int)NumOfElements,
                    0x18uLL,
                    (_CoreCrtNonSecureSearchSortCompareFunction)sub_180076DA0);
    v14 = Base;
  }
  else
  {
    v15 = 0LL;
  }
  if ( v15 )
    goto LABEL_18;
  if ( v14 && (_DWORD)NumOfElements + 1 != dword_18016F2C4 )
  {
    sub_1800259B4(0);
    Heap = (char *)Base;
LABEL_17:
    v15 = &Heap[24 * (unsigned int)NumOfElements];
    LODWORD(NumOfElements) = NumOfElements + 1;
    *(_QWORD *)v15 = 0LL;
    *((_QWORD *)v15 + 1) = 0LL;
    *((_QWORD *)v15 + 2) = 0LL;
    *(_OWORD *)v15 = *Key;
    sub_1800259B4(1);
    v14 = Base;
    v6 = 1;
LABEL_18:
    v20 = *((_QWORD *)v15 + 2);
    *((_QWORD *)v15 + 2) = a2;
    if ( a3 )
      *a3 = v20;
    if ( v6 )
      qsort(v14, (unsigned int)NumOfElements, 0x18uLL, (_CoreCrtNonSecureSearchSortCompareFunction)sub_180076DA0);
    v8 = 0;
    goto LABEL_23;
  }
  v16 = 16;
  if ( dword_18016F2C4 )
    v16 = 2 * dword_18016F2C4;
  if ( v16 >= dword_18016F2C4 && v16 < 0xAAAAAAA )
  {
    if ( LdrControlFlowGuardEnforced() )
    {
      if ( 24 * (unsigned __int64)v16 >= 0xFF000 )
        goto LABEL_45;
      ProcessHeap = (void *)qword_18016F270;
    }
    else
    {
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
    }
    Heap = (char *)RtlAllocateHeap((__int64)ProcessHeap, 0, 24LL * v16);
    if ( Heap )
    {
      sub_1800259B4(0);
      v19 = Base;
      if ( Base )
      {
        memmove(Heap, Base, 24LL * (unsigned int)NumOfElements);
        if ( LdrControlFlowGuardEnforced() )
          v24 = (void *)qword_18016F270;
        else
          v24 = NtCurrentPeb()->ProcessHeap;
        RtlFreeHeap((__int64)v24, 0, (unsigned __int64)v19);
      }
      Base = Heap;
      dword_18016F2C4 = v16;
      goto LABEL_17;
    }
  }
LABEL_45:
  v8 = -1073741801;
LABEL_23:
  if ( qword_18016F380 && (byte_18016F36C & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015BF98, v11, v12, v13);
    v23 = *(_DWORD *)qword_18016F280;
    if ( !*(_DWORD *)qword_18016F280 )
    {
      RtlReleaseSRWLockExclusive(&qword_18015BF98);
      __fastfail(0xEu);
    }
    *(_DWORD *)qword_18016F280 = v23 - 1;
    if ( v23 == 1 )
      RtlProtectHeap((_DWORD *)qword_18016F270, 1);
    RtlReleaseSRWLockExclusive(&qword_18015BF98);
  }
  RtlReleaseSRWLockExclusive(&qword_18015D2D0);
  return (unsigned int)v8;
}
