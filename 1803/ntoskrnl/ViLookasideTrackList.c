/*
 * XREFs of ViLookasideTrackList @ 0x14082C334
 * Callers:
 *     VerifierExInitializeNPagedLookasideList @ 0x14082BE80 (VerifierExInitializeNPagedLookasideList.c)
 *     VerifierExInitializePagedLookasideList @ 0x14082BFA0 (VerifierExInitializePagedLookasideList.c)
 * Callees:
 *     ViLookasideAdd @ 0x14082C13C (ViLookasideAdd.c)
 */

void __fastcall ViLookasideTrackList(ULONG_PTR a1, int a2)
{
  PVOID (__stdcall *v2)(POOL_TYPE, SIZE_T, ULONG); // rax
  PVOID (__fastcall *v3)(__int64, SIZE_T, __int64); // rax

  if ( a2 && *(void (__stdcall **)(PVOID))(a1 + 56) == ExFreePool )
  {
    v2 = *(PVOID (__stdcall **)(POOL_TYPE, SIZE_T, ULONG))(a1 + 48);
    if ( v2 == ExAllocatePoolWithTag )
    {
      v3 = VerifierExAllocatePoolWithTag;
LABEL_7:
      *(_QWORD *)(a1 + 48) = v3;
      *(_QWORD *)(a1 + 56) = VerifierExFreePool;
      goto LABEL_8;
    }
    if ( v2 == ExAllocatePoolWithQuotaTag )
    {
      v3 = VerifierExAllocatePoolWithQuotaTag;
      goto LABEL_7;
    }
  }
LABEL_8:
  ViLookasideAdd(a1);
}
