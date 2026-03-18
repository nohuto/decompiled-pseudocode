/*
 * XREFs of MiReferenceInPageFile @ 0x140097390
 * Callers:
 *     MiIssueHardFault @ 0x140096E10 (MiIssueHardFault.c)
 *     MiPfExecuteReadList @ 0x14053D754 (MiPfExecuteReadList.c)
 * Callees:
 *     ObFastReferenceObjectLocked @ 0x1400445AC (ObFastReferenceObjectLocked.c)
 *     MiCanPageMove @ 0x14007507C (MiCanPageMove.c)
 *     MiComputeImagePteIndex @ 0x140097E7C (MiComputeImagePteIndex.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1400A6AB0 (ExAcquireSpinLockShared.c)
 *     ObFastReferenceObject @ 0x1400EE6B0 (ObFastReferenceObject.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x14017CDA4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 */

unsigned __int64 __fastcall MiReferenceInPageFile(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbp
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  _QWORD *v9; // rdi
  __int64 v10; // rbx
  char v11; // r10

  v2 = *(_QWORD *)(a1 + 200);
  if ( !v2 )
    return 0LL;
  v6 = ObFastReferenceObject(v2 + 64);
  if ( !v6 )
  {
    v7 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v2 + 72));
    v6 = ObFastReferenceObjectLocked((_QWORD *)(v2 + 64));
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v2 + 72));
    __writecr8(v7);
  }
  if ( (*(_DWORD *)(v2 + 56) & 0x20) != 0 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v2 + 112));
    v8 = *(_QWORD *)(a1 + 248);
    v9 = *(_QWORD **)(v2 + 96);
    if ( !v8 )
      v8 = a1 + 256;
    v10 = 48LL * *(_QWORD *)(v8 + 48) - 0x58000000000LL;
    *(_DWORD *)(a1 + 184) = MiComputeImagePteIndex(v10, a2);
    if ( *v9 )
    {
      *(_BYTE *)(a1 + 190) |= 8u;
      if ( (MiFlags & 0x40000) != 0
        && (!(unsigned int)MiCanPageMove(v10)
         || (*(_DWORD *)(v2 + 92) & 0xC0000) != 0 && (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(v10 + 16) & 2) != 0) )
      {
        *(_BYTE *)(a1 + 190) = v11 & 0xF7;
      }
    }
  }
  else
  {
    *(_QWORD *)(a1 + 200) = 0LL;
  }
  return v6;
}
