/*
 * XREFs of RtlDebugCompactHeap @ 0x18010343C
 * Callers:
 *     RtlCompactHeap @ 0x180090370 (RtlCompactHeap.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x18001AD60 (RtlNtStatusToDosError.c)
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x18004A1AC (RtlpCheckHeapSignature.c)
 *     RtlCompactHeap @ 0x180090370 (RtlCompactHeap.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     RtlpHeapExceptionFilter @ 0x1800F2DA8 (RtlpHeapExceptionFilter.c)
 *     RtlpValidateHeap @ 0x180104C28 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x180105204 (RtlpValidateHeapHeaders.c)
 */

SIZE_T __fastcall RtlDebugCompactHeap(__int64 a1, int a2)
{
  char v4; // si
  SIZE_T v6; // rbx
  ULONG v7; // ebx

  v4 = 0;
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    return (unsigned int)((__int64 (__fastcall *)(__int64))qword_180159488)(a1);
  if ( RtlpCheckHeapSignature((_DWORD *)a1, "RtlCompactHeap") )
  {
    v7 = *(_DWORD *)(a1 + 116) | 0x10000000 | a2;
    if ( (v7 & 1) == 0 )
    {
      RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
      v4 = 1;
      v7 |= 1u;
    }
    RtlpValidateHeap(a1);
    v6 = RtlCompactHeap((PVOID)a1, v7);
    RtlpValidateHeapHeaders((void *)a1);
  }
  else
  {
    v6 = 0LL;
  }
  if ( v4 )
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
  return v6;
}
