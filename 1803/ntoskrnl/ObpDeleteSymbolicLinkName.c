/*
 * XREFs of ObpDeleteSymbolicLinkName @ 0x1405514F0
 * Callers:
 *     ObpDeleteNameCheck @ 0x140519A30 (ObpDeleteNameCheck.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x140551300 (ObpMarkDirectoryObjectsTemporary.c)
 *     ObCloseHandleTableEntry @ 0x1405A4E20 (ObCloseHandleTableEntry.c)
 *     ObShutdownSystem @ 0x14075870C (ObShutdownSystem.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1400A5690 (PsGetCurrentServerSiloGlobals.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
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
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  int v12; // eax
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
      v11 = (unsigned int)(v2 - 1);
      v12 = ~(1 << (v2 - 1));
      *(_DWORD *)(v5 + 28) &= v12;
      *(_BYTE *)(v11 + v5 + 32) = 0;
      if ( v5 == *(_QWORD *)v8 )
        v8[2] &= v12;
      else
        --v8[v11 + 3];
      ExReleasePushLockEx((ULONG_PTR)(v8 + 30), 0LL, v9, v10);
      result = (_UNKNOWN **)KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
    *(_DWORD *)(a1 + 24) = 0;
  }
  return result;
}
