/*
 * XREFs of RtlpAtomMapAtomToHandleEntry @ 0x1404D4CAC
 * Callers:
 *     RtlLookupAtomInAtomTable @ 0x1404D2BA0 (RtlLookupAtomInAtomTable.c)
 *     RtlpHashStringToAtom @ 0x1404D2DE0 (RtlpHashStringToAtom.c)
 *     RtlQueryAtomInAtomTable @ 0x1404D4E00 (RtlQueryAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x14057CB90 (RtlDeleteAtomFromAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x1405850E0 (RtlPinAtomInAtomTable.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExfUnblockPushLock @ 0x14017D4F0 (ExfUnblockPushLock.c)
 *     ExMapHandleToPointer @ 0x1404D4D40 (ExMapHandleToPointer.c)
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
