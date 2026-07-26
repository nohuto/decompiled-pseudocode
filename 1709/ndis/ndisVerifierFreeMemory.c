/*
 * XREFs of ndisVerifierFreeMemory @ 0x1C0066270
 * Callers:
 *     <none>
 * Callees:
 *     NdisFreeMemory @ 0x1C001C6A0 (NdisFreeMemory.c)
 */

void __fastcall ndisVerifierFreeMemory(char *VirtualAddress, UINT Length, UINT MemoryFlags)
{
  UINT v4; // edi
  char *v5; // rbx
  KIRQL v6; // al
  __int64 v7; // r8
  char **v8; // rdx

  v4 = Length;
  v5 = VirtualAddress;
  if ( (ndisFlags & 0x400) != 0 )
  {
    v4 = Length + 40;
    v5 = VirtualAddress - 40;
    if ( (ndisFlags & 0x800) == 0 )
    {
      v6 = KeAcquireSpinLockRaiseToDpc(&ndisTrackMemLock);
      v7 = *(_QWORD *)v5;
      if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 || (v8 = (char **)*((_QWORD *)v5 + 1), *v8 != v5) )
        __fastfail(3u);
      *v8 = (char *)v7;
      *(_QWORD *)(v7 + 8) = v8;
      KeReleaseSpinLock(&ndisTrackMemLock, v6);
    }
  }
  NdisFreeMemory(v5, v4, MemoryFlags);
}
