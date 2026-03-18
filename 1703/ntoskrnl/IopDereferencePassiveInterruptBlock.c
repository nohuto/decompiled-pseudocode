/*
 * XREFs of IopDereferencePassiveInterruptBlock @ 0x1401F86F0
 * Callers:
 *     IopPassiveInterruptWorker @ 0x1401F88D0 (IopPassiveInterruptWorker.c)
 *     IopDestroyPassiveInterruptBlock @ 0x1406953AC (IopDestroyPassiveInterruptBlock.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1400498E0 (KxAcquireSpinLock.c)
 *     IopAcquireGlobalPassiveInterruptListLock @ 0x1401F86CC (IopAcquireGlobalPassiveInterruptListLock.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall IopDereferencePassiveInterruptBlock(PVOID P)
{
  char v2; // di
  unsigned __int8 CurrentIrql; // bp
  KSPIN_LOCK v4; // rcx
  PVOID *v5; // rax
  unsigned __int8 v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  IopAcquireGlobalPassiveInterruptListLock(&v6);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  KxAcquireSpinLock((PKSPIN_LOCK)P + 7);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 48, 0xFFFFFFFF) == 1 )
  {
    v4 = *(_QWORD *)P;
    v5 = (PVOID *)*((_QWORD *)P + 1);
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P || *v5 != P )
      __fastfail(3u);
    *v5 = (PVOID)v4;
    v2 = 1;
    *(_QWORD *)(v4 + 8) = v5;
  }
  KxReleaseSpinLock((PKSPIN_LOCK)P + 7);
  __writecr8(CurrentIrql);
  KxReleaseSpinLock(&PassiveInterruptListLock);
  __writecr8(v6);
  if ( v2 )
    ExFreePoolWithTag(P, 0x6269704Bu);
}
