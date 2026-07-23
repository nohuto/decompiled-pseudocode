/*
 * XREFs of sub_1800D6884 @ 0x1800D6884
 * Callers:
 *     sub_180038818 @ 0x180038818 (sub_180038818.c)
 *     sub_1800788A8 @ 0x1800788A8 (sub_1800788A8.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     ZwTraceEvent @ 0x1800A5EB0 (ZwTraceEvent.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

int __fastcall sub_1800D6884(__int64 a1, __int64 a2, int a3, unsigned int a4, void *Src)
{
  size_t v6; // rbp
  unsigned int v9; // esi
  _DWORD *Heap; // rax
  _DWORD *v11; // rdi
  __int16 v12; // ax
  __int64 v13; // rcx

  v6 = a4;
  v9 = a4 + 54;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, dword_18015B268 + 1572864, a4 + 54);
  v11 = Heap;
  if ( Heap )
  {
    v12 = 5296;
    if ( (unsigned int)(a3 - 5) <= 1 )
      v12 = 5297;
    v11[12] = a3;
    *((_WORD *)v11 + 3) = v12;
    *((_QWORD *)v11 + 4) = a1;
    *((_QWORD *)v11 + 5) = a2;
    memmove(v11 + 13, Src, v6);
    *((_WORD *)v11 + (v6 >> 1) + 26) = 0;
    if ( RtlGetCurrentServiceSessionId() )
      v13 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
    else
      v13 = 2147353476LL;
    ZwTraceEvent((HANDLE)*(unsigned __int8 *)v13, 0x403u, v9 - 32, v11);
    LODWORD(Heap) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
  }
  return (int)Heap;
}
