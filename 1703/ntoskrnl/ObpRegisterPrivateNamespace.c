/*
 * XREFs of ObpRegisterPrivateNamespace @ 0x1404696DC
 * Callers:
 *     NtCreatePrivateNamespace @ 0x1404692F4 (NtCreatePrivateNamespace.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14000D920 (PsGetCurrentServerSiloGlobals.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     ObpLookupNamespaceEntry @ 0x140469948 (ObpLookupNamespaceEntry.c)
 */

__int64 __fastcall ObpRegisterPrivateNamespace(__int64 a1)
{
  unsigned int v2; // esi
  char *CurrentServerSiloGlobals; // rbx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v5; // rbp
  char *v6; // rbx
  char *v7; // rax
  char **v8; // rcx

  v2 = -1073741771;
  CurrentServerSiloGlobals = (char *)PsGetCurrentServerSiloGlobals();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (ULONG_PTR)(CurrentServerSiloGlobals + 720);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(CurrentServerSiloGlobals + 720), 0LL);
  v6 = CurrentServerSiloGlobals + 128;
  if ( !ObpLookupNamespaceEntry(v6, a1) )
  {
    v7 = &v6[16 * *(unsigned __int8 *)(a1 + 40)];
    v8 = (char **)*((_QWORD *)v7 + 1);
    if ( *v8 != v7 )
      __fastfail(3u);
    *(_QWORD *)a1 = v7;
    *(_QWORD *)(a1 + 8) = v8;
    *v8 = (char *)a1;
    *((_QWORD *)v7 + 1) = a1;
    ++*((_DWORD *)v6 + 150);
    v2 = 0;
  }
  ExReleasePushLockEx(v5, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v2;
}
