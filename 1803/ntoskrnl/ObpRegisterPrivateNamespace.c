/*
 * XREFs of ObpRegisterPrivateNamespace @ 0x14054031C
 * Callers:
 *     NtCreatePrivateNamespace @ 0x1405400D0 (NtCreatePrivateNamespace.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1400A5690 (PsGetCurrentServerSiloGlobals.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     ObpLookupNamespaceEntry @ 0x1405403D8 (ObpLookupNamespaceEntry.c)
 */

__int64 __fastcall ObpRegisterPrivateNamespace(__int64 a1)
{
  unsigned int v2; // esi
  char *CurrentServerSiloGlobals; // rbx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v5; // rbp
  char *v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  char *v9; // rax
  char **v10; // rcx

  v2 = -1073741771;
  CurrentServerSiloGlobals = (char *)PsGetCurrentServerSiloGlobals();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (ULONG_PTR)(CurrentServerSiloGlobals + 720);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(CurrentServerSiloGlobals + 720), 0LL);
  v6 = CurrentServerSiloGlobals + 128;
  if ( !ObpLookupNamespaceEntry(v6, a1) )
  {
    v9 = &v6[16 * *(unsigned __int8 *)(a1 + 40)];
    v10 = (char **)*((_QWORD *)v9 + 1);
    if ( *v10 != v9 )
      __fastfail(3u);
    *(_QWORD *)a1 = v9;
    *(_QWORD *)(a1 + 8) = v10;
    *v10 = (char *)a1;
    *((_QWORD *)v9 + 1) = a1;
    ++*((_DWORD *)v6 + 150);
    v2 = 0;
  }
  ExReleasePushLockEx(v5, 0LL, v7, v8);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v2;
}
