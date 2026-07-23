/*
 * XREFs of RtlDebugCreateTagHeap @ 0x180103874
 * Callers:
 *     RtlCreateTagHeap @ 0x180003370 (RtlCreateTagHeap.c)
 * Callees:
 *     RtlCreateTagHeap @ 0x180003370 (RtlCreateTagHeap.c)
 *     RtlNtStatusToDosError @ 0x18001AD60 (RtlNtStatusToDosError.c)
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x18004A1AC (RtlpCheckHeapSignature.c)
 *     RtlpHeapExceptionFilter @ 0x1800F2DA8 (RtlpHeapExceptionFilter.c)
 *     RtlpValidateHeap @ 0x180104C28 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x180105204 (RtlpValidateHeapHeaders.c)
 */

__int64 __fastcall RtlDebugCreateTagHeap(__int64 a1, int a2, WCHAR *a3, WCHAR *a4)
{
  char v8; // si
  ULONG TagHeap; // r14d
  ULONG v10; // edi

  v8 = 0;
  TagHeap = 0;
  if ( RtlpCheckHeapSignature((_DWORD *)a1, "RtlCreateTagHeap") )
  {
    v10 = *(_DWORD *)(a1 + 116) | 0x10000000 | a2;
    if ( (v10 & 1) == 0 )
    {
      RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
      v8 = 1;
      v10 |= 1u;
    }
    if ( (unsigned __int8)RtlpValidateHeap(a1) )
      TagHeap = RtlCreateTagHeap((PVOID)a1, v10, a3, a4);
    RtlpValidateHeapHeaders((void *)a1);
  }
  if ( v8 )
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
  return TagHeap;
}
