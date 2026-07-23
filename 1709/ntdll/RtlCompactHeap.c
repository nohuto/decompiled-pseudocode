/*
 * XREFs of RtlCompactHeap @ 0x180090370
 * Callers:
 *     RtlDebugCompactHeap @ 0x18010343C (RtlDebugCompactHeap.c)
 * Callees:
 *     RtlpHpHeapCompact @ 0x180012BF8 (RtlpHpHeapCompact.c)
 *     RtlNtStatusToDosError @ 0x18001AD60 (RtlNtStatusToDosError.c)
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 *     RtlpCoalesceHeap @ 0x180090494 (RtlpCoalesceHeap.c)
 *     RtlpHeapExceptionFilter @ 0x1800F2DA8 (RtlpHeapExceptionFilter.c)
 *     RtlDebugCompactHeap @ 0x18010343C (RtlDebugCompactHeap.c)
 */

SIZE_T __cdecl RtlCompactHeap(PVOID HeapHandle, ULONG Flags)
{
  ULONG v3; // edx
  SIZE_T v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  struct _TEB *v7; // rbx
  char v9; // [rsp+20h] [rbp-18h]
  SIZE_T v10; // [rsp+28h] [rbp-10h]

  v9 = 0;
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    RtlpHpHeapCompact((__int64)HeapHandle, Flags & 1);
    return 16LL;
  }
  else
  {
    v3 = *((_DWORD *)HeapHandle + 29) | Flags;
    if ( (v3 & 0x61000000) == 0 || (v3 & 0x10000000) != 0 )
    {
      v4 = 0LL;
      v10 = 0LL;
      if ( (v3 & 1) == 0 )
      {
        RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
        v9 = 1;
      }
      v5 = RtlpCoalesceHeap((int)HeapHandle);
      if ( v5 )
      {
        v4 = 16LL * *(unsigned __int16 *)(v5 + 8);
        v10 = v4;
        if ( *((_DWORD *)HeapHandle + 31) )
        {
          *(_BYTE *)(v5 + 11) = *(_BYTE *)(v5 + 8) ^ *(_BYTE *)(v5 + 9) ^ *(_BYTE *)(v5 + 10);
          *(_DWORD *)(v5 + 8) ^= *((_DWORD *)HeapHandle + 34);
        }
      }
      if ( *((PVOID *)HeapHandle + 30) != (char *)HeapHandle + 240 )
      {
        v6 = *((_QWORD *)HeapHandle + 31);
        if ( *(_QWORD *)(v6 + 40) > v4 )
          v4 = *(_QWORD *)(v6 + 40);
        v10 = v4;
      }
      if ( !v4 )
      {
        NtCurrentTeb()->LastStatusValue = 0;
        v7 = NtCurrentTeb();
        v7->LastErrorValue = RtlNtStatusToDosError(0);
        v4 = v10;
      }
      if ( v9 )
        RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
      return v4;
    }
    else
    {
      return RtlDebugCompactHeap((int)HeapHandle);
    }
  }
}
