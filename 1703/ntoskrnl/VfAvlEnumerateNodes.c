/*
 * XREFs of VfAvlEnumerateNodes @ 0x14077BF5C
 * Callers:
 *     ViTargetFreeContiguousMemory @ 0x140775304 (ViTargetFreeContiguousMemory.c)
 *     ViTargetWMIDeregister @ 0x1407756DC (ViTargetWMIDeregister.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x14077B4F8 (VfSuspectDriversGetVerifierInformation.c)
 * Callees:
 *     RtlEnumerateGenericTableAvl @ 0x14004C720 (RtlEnumerateGenericTableAvl.c)
 *     ViAvlRaiseIrqlSafe @ 0x14006E5A0 (ViAvlRaiseIrqlSafe.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x14006E5C4 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x14006E6B8 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

void __fastcall VfAvlEnumerateNodes(__int64 a1, __int64 a2, unsigned int (__fastcall *a3)(PVOID, __int64), __int64 a4)
{
  unsigned int v7; // ebp
  __int64 i; // rbx
  __int64 v9; // rdi
  BOOLEAN j; // dl
  PVOID v11; // rax

  ViAvlRaiseIrqlSafe(a2);
  v7 = dword_140348578;
  for ( i = 0LL; (unsigned int)i < v7; i = (unsigned int)(i + 1) )
  {
    v9 = 192 * i;
    ViAvlAcquireTableLockAtDpcLevelSafe(192 * i + qword_140348570, a2);
    for ( j = 1; ; j = 0 )
    {
      v11 = RtlEnumerateGenericTableAvl((PRTL_AVL_TABLE)(v9 + qword_140348570), j);
      if ( !v11 )
        break;
      if ( !a3(v11, a4) )
        return;
    }
    ViAvlReleaseTableLockFromDpcLevel(v9 + qword_140348570, a2);
  }
}
