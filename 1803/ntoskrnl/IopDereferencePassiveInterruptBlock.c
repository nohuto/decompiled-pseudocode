/*
 * XREFs of IopDereferencePassiveInterruptBlock @ 0x14023B1D8
 * Callers:
 *     IopPassiveInterruptWorker @ 0x14023B3B0 (IopPassiveInterruptWorker.c)
 *     IopDestroyPassiveInterruptBlock @ 0x140726E58 (IopDestroyPassiveInterruptBlock.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     IopAcquireGlobalPassiveInterruptListLock @ 0x14023B184 (IopAcquireGlobalPassiveInterruptListLock.c)
 *     IopAcquirePassiveInterruptBlockLock @ 0x14023B1B0 (IopAcquirePassiveInterruptBlockLock.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall IopDereferencePassiveInterruptBlock(PVOID **P)
{
  char v2; // di
  PVOID *v3; // rax
  PVOID *v4; // rcx
  unsigned __int8 v5; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int8 v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  IopAcquireGlobalPassiveInterruptListLock(&v6);
  IopAcquirePassiveInterruptBlockLock((__int64)P, &v5);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 48, 0xFFFFFFFF) == 1 )
  {
    v3 = *P;
    if ( (*P)[1] != P || (v4 = P[1], *v4 != P) )
      __fastfail(3u);
    *v4 = v3;
    v2 = 1;
    v3[1] = v4;
  }
  KxReleaseSpinLock((PKSPIN_LOCK)P + 7);
  __writecr8(v5);
  KxReleaseSpinLock(&PassiveInterruptListLock);
  __writecr8(v6);
  if ( v2 )
    ExFreePoolWithTag(P, 0x6269704Bu);
}
