/*
 * XREFs of RtlpAtomMapAtomToHandleEntry @ 0x1404FA8D4
 * Callers:
 *     RtlDeleteAtomFromAtomTable @ 0x140431280 (RtlDeleteAtomFromAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x14044D7C0 (RtlPinAtomInAtomTable.c)
 *     RtlQueryAtomInAtomTable @ 0x1404F9A20 (RtlQueryAtomInAtomTable.c)
 *     RtlLookupAtomInAtomTable @ 0x1404FA540 (RtlLookupAtomInAtomTable.c)
 *     RtlpHashStringToAtom @ 0x1404FA780 (RtlpHashStringToAtom.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     ExfUnblockPushLock @ 0x14017DAD0 (ExfUnblockPushLock.c)
 *     ExMapHandleToPointer @ 0x1404FA960 (ExMapHandleToPointer.c)
 */

unsigned __int64 __fastcall RtlpAtomMapAtomToHandleEntry(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rbx
  signed __int32 v8[10]; // [rsp+0h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = (volatile signed __int64 *)ExMapHandleToPointer(*(_QWORD *)(a1 + 16), (unsigned int)(4 * a2));
  if ( v4 )
  {
    v5 = *(_QWORD *)(a1 + 16);
    v6 = (*(__int64 *)v4 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
    _InterlockedExchangeAdd64(v4, 1uLL);
    _InterlockedOr(v8, 0);
    if ( *(_QWORD *)(v5 + 48) )
      ExfUnblockPushLock((volatile __int64 *)(v5 + 48), 0LL);
  }
  else
  {
    v6 = 0LL;
  }
  KeLeaveCriticalRegion();
  return v6;
}
