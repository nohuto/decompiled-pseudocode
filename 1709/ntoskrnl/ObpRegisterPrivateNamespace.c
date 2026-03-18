/*
 * XREFs of ObpRegisterPrivateNamespace @ 0x140548F80
 * Callers:
 *     NtCreatePrivateNamespace @ 0x140548D34 (NtCreatePrivateNamespace.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400D2E30 (PsGetCurrentServerSiloGlobals.c)
 *     ObpLookupNamespaceEntry @ 0x140489A3C (ObpLookupNamespaceEntry.c)
 */

__int64 __fastcall ObpRegisterPrivateNamespace(__int64 a1)
{
  unsigned int v2; // esi
  void *CurrentServerSiloGlobals; // rbx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 *v8; // rcx

  v2 = -1073741771;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (ULONG_PTR)CurrentServerSiloGlobals + 720;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)CurrentServerSiloGlobals + 720, 0LL);
  v6 = (__int64)CurrentServerSiloGlobals + 128;
  if ( !ObpLookupNamespaceEntry(v6, a1) )
  {
    v7 = v6 + 16LL * *(unsigned __int8 *)(a1 + 40);
    v8 = *(__int64 **)(v7 + 8);
    if ( *v8 != v7 )
      __fastfail(3u);
    *(_QWORD *)a1 = v7;
    *(_QWORD *)(a1 + 8) = v8;
    *v8 = a1;
    *(_QWORD *)(v7 + 8) = a1;
    ++*(_DWORD *)(v6 + 600);
    v2 = 0;
  }
  ExReleasePushLockEx(v5, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v2;
}
