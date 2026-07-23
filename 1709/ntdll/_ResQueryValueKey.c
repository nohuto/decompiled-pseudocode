/*
 * XREFs of _ResQueryValueKey @ 0x18001B4B4
 * Callers:
 *     ResCKeInitRuntimeViewEx @ 0x18001AEC4 (ResCKeInitRuntimeViewEx.c)
 *     ResCGetRegistryLatestIndex @ 0x18010EC60 (ResCGetRegistryLatestIndex.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     NtQueryValueKey @ 0x1800A03A0 (NtQueryValueKey.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 */

__int64 __fastcall ResQueryValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName, _DWORD *a3, void *a4, _DWORD *Length)
{
  _DWORD *v5; // rsi
  int v10; // eax
  _DWORD *Heap; // rax
  _DWORD *v12; // rbx
  NTSTATUS ValueKey; // edi

  v5 = Length;
  if ( Length )
    v10 = *Length;
  else
    v10 = 0;
  LODWORD(Length) = v10 + 12;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned int)(v10 + 12));
  v12 = Heap;
  if ( !Heap )
    return 3221225626LL;
  ValueKey = NtQueryValueKey(KeyHandle, ValueName, KeyValuePartialInformation, Heap, (ULONG)Length, (PULONG)&Length);
  if ( ValueKey != -1073741772 )
  {
    if ( (int)(ValueKey + 0x80000000) < 0 || ValueKey == -2147483643 )
    {
      if ( v5 )
        *v5 = v12[2];
      if ( a3 )
        *a3 = v12[1];
    }
    if ( ValueKey >= 0 )
    {
      if ( a4 )
        memmove(a4, v12 + 3, (unsigned int)v12[2]);
    }
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v12);
  return (unsigned int)ValueKey;
}
