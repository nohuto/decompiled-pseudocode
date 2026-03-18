/*
 * XREFs of MmIsSessionExecutionValid @ 0x14012B698
 * Callers:
 *     RtlpWalkFrameChain @ 0x14012B860 (RtlpWalkFrameChain.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiSessionLookupImage @ 0x14012B754 (MiSessionLookupImage.c)
 *     MmLockLoadedModuleListShared @ 0x14012B7B0 (MmLockLoadedModuleListShared.c)
 */

_BOOL8 __fastcall MmIsSessionExecutionValid(__int64 a1, __int64 a2, __int64 a3)
{
  int SessionId; // esi
  BOOL v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int8 v11; // [rsp+48h] [rbp+20h] BYREF

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
    MmLockLoadedModuleListShared(&v11);
    v6 = MiSessionLookupImage(a3, v7, v8, v9) != 0;
    ExReleaseSpinLockSharedFromDpcLevel(&PsLoadedModuleSpinLock);
    if ( v11 < 0xFu )
      __writecr8(v11);
  }
  return v6;
}
