/*
 * XREFs of ObpDeleteSymbolicLinkName @ 0x14045D4F8
 * Callers:
 *     ObpMarkDirectoryObjectsTemporary @ 0x14044E76C (ObpMarkDirectoryObjectsTemporary.c)
 *     ObpDeleteNameCheck @ 0x1404F5F80 (ObpDeleteNameCheck.c)
 *     ObCloseHandleTableEntry @ 0x140530A90 (ObCloseHandleTableEntry.c)
 *     ObShutdownSystem @ 0x1406C0774 (ObShutdownSystem.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14000D920 (PsGetCurrentServerSiloGlobals.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 */

_UNKNOWN **__fastcall ObpDeleteSymbolicLinkName(__int64 a1)
{
  _UNKNOWN **result; // rax
  int v2; // esi
  __int64 v4; // rdx
  __int64 v5; // rbp
  _DWORD *CurrentServerSiloGlobals; // rax
  struct _KTHREAD *CurrentThread; // rcx
  _DWORD *v8; // rbx
  __int64 v9; // rcx
  int v10; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v2 = *(_DWORD *)(a1 + 24);
  if ( v2 )
  {
    v4 = a1 - 48 - ObpInfoMaskToOffset[*(_BYTE *)(a1 - 48 + 26) & 3];
    result = *(_UNKNOWN ***)v4;
    v5 = *(_QWORD *)(*(_QWORD *)v4 + 304LL);
    if ( v5 )
    {
      CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
      CurrentThread = KeGetCurrentThread();
      v8 = CurrentServerSiloGlobals;
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(CurrentServerSiloGlobals + 30), 0LL);
      v9 = (unsigned int)(v2 - 1);
      v10 = ~(1 << (v2 - 1));
      *(_DWORD *)(v5 + 28) &= v10;
      *(_BYTE *)(v9 + v5 + 32) = 0;
      if ( v5 == *(_QWORD *)v8 )
        v8[2] &= v10;
      else
        --v8[v9 + 3];
      ExReleasePushLockEx((ULONG_PTR)(v8 + 30), 0LL);
      result = (_UNKNOWN **)KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
    *(_DWORD *)(a1 + 24) = 0;
  }
  return result;
}
