/*
 * XREFs of sub_1800CC1E0 @ 0x1800CC1E0
 * Callers:
 *     sub_18002C068 @ 0x18002C068 (sub_18002C068.c)
 *     sub_180073058 @ 0x180073058 (sub_180073058.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     ZwTraceEvent @ 0x18009B670 (ZwTraceEvent.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

__int64 __fastcall sub_1800CC1E0(__int64 a1, __int64 a2, int a3, unsigned int a4, void *Src)
{
  size_t v6; // rbp
  __int64 result; // rax
  unsigned __int64 v10; // rdi
  __int16 v11; // ax

  v6 = a4;
  result = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015C294 + 1572864, a4 + 54);
  v10 = result;
  if ( result )
  {
    v11 = 5296;
    if ( (unsigned int)(a3 - 5) <= 1 )
      v11 = 5297;
    *(_WORD *)(v10 + 6) = v11;
    *(_DWORD *)(v10 + 48) = a3;
    *(_QWORD *)(v10 + 32) = a1;
    *(_QWORD *)(v10 + 40) = a2;
    memmove((void *)(v10 + 52), Src, v6);
    *(_WORD *)(v10 + 2 * (v6 >> 1) + 52) = 0;
    RtlGetCurrentServiceSessionId();
    ZwTraceEvent();
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v10);
  }
  return result;
}
