/*
 * XREFs of sub_180101254 @ 0x180101254
 * Callers:
 *     RtlCreateTagHeap @ 0x180081820 (RtlCreateTagHeap.c)
 * Callees:
 *     sub_18001F9B0 @ 0x18001F9B0 (sub_18001F9B0.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     sub_1800610C8 @ 0x1800610C8 (sub_1800610C8.c)
 *     RtlCreateTagHeap @ 0x180081820 (RtlCreateTagHeap.c)
 *     sub_180090710 @ 0x180090710 (sub_180090710.c)
 *     sub_1800F22CC @ 0x1800F22CC (sub_1800F22CC.c)
 */

__int64 __fastcall sub_180101254(_DWORD *Src, int a2, __int64 a3, _WORD *a4)
{
  char v8; // si
  unsigned int TagHeap; // r14d
  int v10; // edi

  v8 = 0;
  TagHeap = 0;
  if ( sub_18001F9B0(Src, "RtlCreateTagHeap") )
  {
    v10 = Src[29] | 0x10000000 | a2;
    if ( (v10 & 1) == 0 )
    {
      RtlEnterCriticalSection(*((_QWORD *)Src + 44));
      v8 = 1;
      v10 |= 1u;
    }
    if ( sub_180090710((__int64)Src, 0) )
      TagHeap = RtlCreateTagHeap(Src, v10, a3, a4);
    sub_1800610C8((void **)Src, 1);
  }
  if ( v8 )
    RtlLeaveCriticalSection(*((_QWORD *)Src + 44));
  return TagHeap;
}
