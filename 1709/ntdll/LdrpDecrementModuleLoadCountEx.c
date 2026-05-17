/*
 * XREFs of LdrpDecrementModuleLoadCountEx @ 0x180010E84
 * Callers:
 *     LdrUnloadDll @ 0x180010DE0 (LdrUnloadDll.c)
 *     LdrpCorInitialize @ 0x180015DA0 (LdrpCorInitialize.c)
 *     LdrpLoadDllInternal @ 0x18002DFFC (LdrpLoadDllInternal.c)
 *     LdrpFastpthReloadedDll @ 0x18002E270 (LdrpFastpthReloadedDll.c)
 * Callees:
 *     LdrpUnloadNode @ 0x180010B14 (LdrpUnloadNode.c)
 *     LdrpDecrementNodeLoadCountLockHeld @ 0x180010F0C (LdrpDecrementNodeLoadCountLockHeld.c)
 *     LdrpReleaseLoaderLock @ 0x18002086C (LdrpReleaseLoaderLock.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     LdrpAcquireLoaderLock @ 0x18004B184 (LdrpAcquireLoaderLock.c)
 */

__int64 __fastcall LdrpDecrementModuleLoadCountEx(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  unsigned int v5; // edi
  __int64 v7; // rcx
  int v8; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 && *(_DWORD *)(*(_QWORD *)(a1 + 152) + 24LL) == 1 )
    return 3221226029LL;
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v4 = *(_QWORD *)(a1 + 152);
  v5 = LdrpDecrementNodeLoadCountLockHeld(v4, a2, &v8);
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  if ( v8 )
  {
    LdrpAcquireLoaderLock();
    LdrpUnloadNode(v4);
    LdrpReleaseLoaderLock(v7, 8LL);
  }
  return v5;
}
