/*
 * XREFs of VfAvlEnumerateNodes @ 0x14082B250
 * Callers:
 *     ViTargetFreeContiguousMemory @ 0x140822230 (ViTargetFreeContiguousMemory.c)
 *     ViTargetWMIDeregister @ 0x140822618 (ViTargetWMIDeregister.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x14082A7B0 (VfSuspectDriversGetVerifierInformation.c)
 * Callees:
 *     RtlEnumerateGenericTableAvl @ 0x1400CBBE0 (RtlEnumerateGenericTableAvl.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x1401615F4 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x140161628 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     ViAvlRaiseIrqlSafe @ 0x140161680 (ViAvlRaiseIrqlSafe.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

void __fastcall VfAvlEnumerateNodes(__int64 a1, __int64 a2, unsigned int (__fastcall *a3)(PVOID, __int64), __int64 a4)
{
  unsigned int v7; // ebp
  __int64 i; // rbx
  __int64 v9; // rdi
  BOOLEAN j; // dl
  PVOID v11; // rax

  ViAvlRaiseIrqlSafe(a2);
  v7 = dword_1403A5638;
  for ( i = 0LL; (unsigned int)i < v7; i = (unsigned int)(i + 1) )
  {
    v9 = 192 * i;
    ViAvlAcquireTableLockAtDpcLevelSafe(192 * i + qword_1403A5630, a2);
    for ( j = 1; ; j = 0 )
    {
      v11 = RtlEnumerateGenericTableAvl((PRTL_AVL_TABLE)(v9 + qword_1403A5630), j);
      if ( !v11 )
        break;
      if ( !a3(v11, a4) )
        return;
    }
    ViAvlReleaseTableLockFromDpcLevel(v9 + qword_1403A5630, a2);
  }
}
