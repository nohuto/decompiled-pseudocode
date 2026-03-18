/*
 * XREFs of ObpRemoveNamespaceFromTable @ 0x14057A7C8
 * Callers:
 *     NtDeletePrivateNamespace @ 0x14048BC24 (NtDeletePrivateNamespace.c)
 *     ObpCloseDirectoryObject @ 0x140519DA0 (ObpCloseDirectoryObject.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1400A5690 (PsGetCurrentServerSiloGlobals.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 */

__int64 __fastcall ObpRemoveNamespaceFromTable(volatile signed __int32 *Object)
{
  unsigned int v2; // edi
  _DWORD *CurrentServerSiloGlobals; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx

  v2 = -1072103391;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(CurrentServerSiloGlobals + 180), 0LL);
  _InterlockedOr(Object + 84, 2u);
  v7 = (_QWORD *)*((_QWORD *)Object + 40);
  if ( v7 )
  {
    *((_QWORD *)Object + 40) = 0LL;
    v7[2] = 0LL;
    v8 = *v7;
    if ( *(_QWORD **)(*v7 + 8LL) != v7 || (v9 = (_QWORD *)v7[1], (_QWORD *)*v9 != v7) )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    --CurrentServerSiloGlobals[182];
    ObfDereferenceObject((PVOID)Object);
    v2 = 0;
  }
  ExReleasePushLockEx((ULONG_PTR)(CurrentServerSiloGlobals + 180), 0LL, v5, v6);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v2;
}
