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

__int64 __fastcall RtlDebugCompactHeap(_DWORD *Src, int a2)
{
  char v4; // si
  __int64 v6; // rbx
  int v7; // ebx

  v4 = 0;
  if ( (Src[29] & 0x1000000) != 0 )
    return (unsigned int)((__int64 (__fastcall *)(_DWORD *))qword_180159488)(Src);
  if ( RtlpCheckHeapSignature(Src, "RtlCompactHeap") )
  {
    v7 = Src[29] | 0x10000000 | a2;
    if ( (v7 & 1) == 0 )
    {
      RtlEnterCriticalSection(*((_QWORD *)Src + 44));
      v4 = 1;
      v7 |= 1u;
    }
    RtlpValidateHeap(Src, 0LL);
    v6 = RtlCompactHeap((__int64)Src, v7);
    RtlpValidateHeapHeaders(Src);
  }
  else
  {
    v6 = 0LL;
  }
  if ( v4 )
    RtlLeaveCriticalSection(*((_QWORD *)Src + 44));
  return v6;
}
