/*
 * XREFs of MmIsSessionExecutionValid @ 0x1400D5564
 * Callers:
 *     RtlpWalkFrameChain @ 0x1400D68B0 (RtlpWalkFrameChain.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     MiSessionLookupImage @ 0x1400D5620 (MiSessionLookupImage.c)
 *     MmLockLoadedModuleListShared @ 0x1400D5670 (MmLockLoadedModuleListShared.c)
 */

__int64 __fastcall MmIsSessionExecutionValid(__int64 a1, __int64 a2, __int64 a3)
{
  int SessionId; // ebp
  unsigned int v6; // edi
  __int64 v7; // rbx
  unsigned __int8 v9; // [rsp+48h] [rbp+20h] BYREF

  SessionId = MmGetSessionIdEx(a2);
  if ( SessionId == -1 )
    return 0LL;
  v6 = 1;
  if ( KeGetCurrentThread()->ApcStateIndex == 1 && SessionId != (unsigned int)MmGetSessionIdEx(*(_QWORD *)(a1 + 544)) )
    return 0LL;
  if ( (*(_DWORD *)(a1 + 116) & 0x800) != 0 || *(_QWORD *)(a1 + 40) != KeGetPcr()->Prcb.RspBase )
    return 0LL;
  if ( a3 )
  {
    MmLockLoadedModuleListShared(&v9);
    v7 = MiSessionLookupImage(a3);
    ExReleaseSpinLockSharedFromDpcLevel(&PsLoadedModuleSpinLock);
    __writecr8(v9);
    return v7 != 0;
  }
  return v6;
}
