/*
 * XREFs of VfAvlEnumerateNodes @ 0x1407BDE78
 * Callers:
 *     ViTargetFreeContiguousMemory @ 0x1407B70C4 (ViTargetFreeContiguousMemory.c)
 *     ViTargetWMIDeregister @ 0x1407B74A8 (ViTargetWMIDeregister.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x1407BD404 (VfSuspectDriversGetVerifierInformation.c)
 * Callees:
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x1400F9B40 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x1400F9B74 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     ViAvlRaiseIrqlSafe @ 0x1400F9BD0 (ViAvlRaiseIrqlSafe.c)
 *     RtlEnumerateGenericTableAvl @ 0x14012ABB0 (RtlEnumerateGenericTableAvl.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

void __fastcall VfAvlEnumerateNodes(__int64 a1, __int64 a2, unsigned int (__fastcall *a3)(PVOID, __int64), __int64 a4)
{
  unsigned int v7; // ebp
  __int64 i; // rbx
  __int64 v9; // rdi
  BOOLEAN j; // dl
  PVOID v11; // rax

  ViAvlRaiseIrqlSafe(a2);
  v7 = dword_140361FF8;
  for ( i = 0LL; (unsigned int)i < v7; i = (unsigned int)(i + 1) )
  {
    v9 = 192 * i;
    ViAvlAcquireTableLockAtDpcLevelSafe(192 * i + qword_140361FF0, a2);
    for ( j = 1; ; j = 0 )
    {
      v11 = RtlEnumerateGenericTableAvl((PRTL_AVL_TABLE)(v9 + qword_140361FF0), j);
      if ( !v11 )
        break;
      if ( !a3(v11, a4) )
        return;
    }
    ViAvlReleaseTableLockFromDpcLevel(v9 + qword_140361FF0, a2);
  }
}
